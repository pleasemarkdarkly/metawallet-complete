using System;
using System.Data;
using System.Data.SqlClient;
using System.Xml.Serialization;
using System.Xml;
using System.Text;
using System.IO;
using System.Text.RegularExpressions;
using System.Collections.Specialized;
using System.Collections;
using System.Reflection;

namespace MOD.Data
{
    /// <summary>
    /// Apply this attribute to fields and properties of a class to automate the process
    /// of setting the values of the fields and properties from DataRows or Form elements.
    /// 
    /// First create the class. Apply the attribute to all fields and properties that 
    /// will need to be set from a DataRow or form.  If setting the field is optional then
    /// you should set Optional=true.
    /// 
    /// If this property is applied to a child object which is not a string or integer or
    /// other easily convertable type, then the Member attribute should set to tell which 
    /// member of the child object should be set.
    /// </summary>
    [AttributeUsage(AttributeTargets.Field | AttributeTargets.Property | AttributeTargets.Class, AllowMultiple = true)]
    public class DataTransformAttribute : Attribute
    {
        /// <summary>
        /// Index into the datarow.
        /// </summary>
        public int Pos = -1;

        /// <summary>
        /// Column name to retrieve data from
        /// </summary>
        public string Name;

        /// <summary>
        /// Use only if the field/property is an object instead of a base type.
        /// </summary>
        public string Member;
        /// <summary>
        /// Set to true if the field does not have to be set.
        /// </summary>
        public bool Optional;

        /// <summary>
        /// If this is non null then the function is called.  The function
        /// must be declared 'public object MyFunction(object o);'
        /// </summary>
        public string Filter;

        /// <summary>
        /// If this value is set to false then fields can not be truncated.
        /// </summary>
        public bool Truncate = true;


        /// <summary>
        /// Convert the value from one thing to another.  Val can be
        /// from either a DataRow or a Form element.  The function
        /// throws an exception if it does not know how to
        /// convert the type.
        /// </summary>
        /// <param name="t">Type to convert to</param>
        /// <param name="val">Value to convert</param>
        /// <returns>Converted value.</returns>
        public static object ConvertValue(Type t, object val)
        {
            if (val == null)
            {
                return val;
            }
            else if (t.IsEnum)
            {
                object oret = Enum.Parse(t, val.ToString(), true);
                if (oret != null)
                {
                    return oret;
                }
                long i = Convert.ToInt64(val);
                return Enum.ToObject(t, i);
            }
			else if (t.FullName.Contains("System.Guid") && !(val is Guid))
			{
				string s = val.ToString();
				if (s.Contains("-") == false && s.Length == 32)
				{
					string stt = s.Substring(0, 8) + "-" + s.Substring(8, 4) + "-" + s.Substring(12, 4) + "-" + s.Substring(16, 4) + "-" + s.Substring(20, 12);
					s = stt;
					stt = null;
				}
				System.ComponentModel.GuidConverter guidC = new System.ComponentModel.GuidConverter();
				val = (Guid)guidC.ConvertFromString(s);
				guidC = null;
				s = null;
			}
			else if (t.FullName.Contains("System.Boolean") == true)
			{
				if (val.ToString() == "0")
				{
					val = false;
				}
				else if (val.ToString() == "1")
				{
					val = true;
				}
			}

            if (t.IsGenericType && t.GetGenericTypeDefinition() == typeof(Nullable<>))
            {
                // Can omit this check since val == null was checked at the top of the function
                /*
                if (val == null)
                {
                    return null;
                }
                */
                return Convert.ChangeType(val, new System.ComponentModel.NullableConverter(t).UnderlyingType);
            }

            // Can omit this check since val == null was checked at the top of the function
            /*
            switch (t.ToString())
            {
                case "System.Guid":
                    if (val == null)
                    {
                        return Guid.Empty;
                    }
                    return Convert.ChangeType(val, t);
                default:
                    return Convert.ChangeType(val, t);
            }
            */
            return Convert.ChangeType(val, t);
        }

        /// <summary>
        /// Given a field name and a list of fields to filter this function returns true if the specified
        /// field should be used or not.
        /// </summary>
        /// <param name="fieldName">Name of the field to check</param>
        /// <param name="collFieldsToFilter">List of fields that are to be used</param>
        /// <returns>True if the field should be used, false otherwise</returns>
        private static bool ShouldUseField(string fieldName, NamedObjectCollection collFieldsToFilter)
        {
            // Uncomment this to only use the fields specified.
            //            return ( collFieldsToFilter != null && collFieldsToFilter[fieldName] != null && (bool)collFieldsToFilter[fieldName] );
            // Uncomment this to filter out the fields specified.
			//return (collFieldsToFilter == null || collFieldsToFilter[fieldName] == null || !(bool)collFieldsToFilter[fieldName]);
            // Modified the following to call the NamedObjectCollection's accessor only once.
			return (collFieldsToFilter == null || !(bool)(collFieldsToFilter[fieldName] ?? false));
        }

        /// <summary>
        /// Transform a column from a DataRow to a field.
        /// </summary>
        /// <param name="info">MemberInfo</param>
        /// <param name="row">DataRow to retrieve data from</param>
        /// <param name="o">The object whose field will be set</param>
        /// <param name="bStrict">If true then throw an exception if Optional=false and item can not be found in the colleciton</param>
        public void SetField(MemberInfo info, DataRow row, object o, bool bStrict)
        {
            object orowVal;

            if (Name != null)
            {
                // Normally we would throw an exception if the DataRow does
                // not contain the requested item.  but if the user set 
                // Optional to true then we just ignore the value and go on.
                if ((Optional || !bStrict) && !row.Table.Columns.Contains(Name))
                {
                    return;
                }
                orowVal = row[Name];
            }
            else if (Pos != -1)
            {
                // This is a row Position.
                orowVal = row[Pos];
            }
            else
            {
                // If the Name was not set then we will use the members name
                // to find which DataRow to use.
                string infoName = info.Name.ToLower();
                if (infoName.StartsWith("_") == true)
                {
                    infoName = infoName.Substring(1);
                }
                if (!row.Table.Columns.Contains(infoName))
                {
                    if (Optional || !bStrict)
                    {
                        return;
                    }
                    else
                    {
                        throw (new Exception("The Datatable does not contain column " + infoName));
                    }
                }
                orowVal = row[infoName];
            }

            // Is the DataRowValue is null then everything is null.
            if (orowVal == DBNull.Value)
            {
                orowVal = null;
            }

            // Call the function that actually sets the objects field.
            SetField(info, orowVal, o);
        }

        /// <summary>
        /// Determines if a SqlDataReader has a column .
        /// </summary>
        /// <param name="dr">SqlDataReader</param>
        /// <param name="name">Name of column to retrieve</param>
        /// <returns>true if it has the name</returns>
        private bool HasColumn(SqlDataReader dr, string name)
        {
            for (int i = 0; i < dr.FieldCount; i++)
            {
                if (dr.GetName(i) == name)
                {
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// Transform a column from a DataRow to a field.
        /// </summary>
        /// <param name="info">MemberInfo</param>
        /// <param name="row">DataReader to retrieve data from</param>
        /// <param name="o">The object whose field will be set</param>
        /// <param name="bStrict">If true then throw an exception if Optional=false and item can not be found in the colleciton</param>
        public void SetField(MemberInfo info, SqlDataReader dr, object o, bool bStrict)
        {
            object orowVal;

            if (Name != null)
            {
                // Normally we would throw an exception if the DataRow does
                // not contain the requested item.  but if the user set 
                // Optional to true then we just ignore the value and go on.
                if ((Optional || !bStrict) && !HasColumn(dr, Name))
                {
                    return;
                }
                orowVal = dr[Name];
            }
            else if (Pos != -1)
            {
                // This is a row Position.
                orowVal = dr[Pos];
            }
            else
            {
                // If the Name was not set then we will use the members name
                // to find which DataRow to use.
                if ((Optional || !bStrict) && !HasColumn(dr, info.Name))
                {
                    return;
                }
                orowVal = dr[info.Name];
            }

            // Is the DataRowValue is null then everything is null.
            if (orowVal == DBNull.Value)
            {
                orowVal = null;
            }

            // Call the function that actually sets the objects field.
            SetField(info, orowVal, o);
        }


        /// <summary>
        /// This version will set the member described by MemberInfo of
        /// object o to the value of orowVal.
        /// </summary>
        /// <param name="info">Information of member to set</param>
        /// <param name="orowVal">Value we are setting</param>
        /// <param name="o">Object whose member is being set.</param>
        /// 

        public void SetField(MemberInfo info, object orowVal, object o)
        {
            SetField(info, orowVal, o, true);
        }

        public void SetField(MemberInfo info, object orowVal, object o, bool bStrict)
        {
            try
            {
                Type t = null;
                object oself = null;

                // If the class declares a filter and the Filter attribute was
                // set, then we will invoke the method.
                if (Filter != null)
                {
                    t = o.GetType();
                    MethodInfo mi = t.GetMethod(Filter);
                    orowVal = mi.Invoke(o, new object[1] { orowVal });
                }

                // First get the actual value from the object.
                // Since the member can be an object we need to see if
                // we are setting a base type or an object.  We will
                // also need this information for the type.
                switch (info.MemberType)
                {
                    case MemberTypes.Field:
                        // Field type
                        t = ((FieldInfo)info).FieldType;
                        oself = ((FieldInfo)info).GetValue(o);
                        break;
                    case MemberTypes.Property:
                        // Property type.
                        t = ((PropertyInfo)info).PropertyType;
                        oself = ((PropertyInfo)info).GetValue(o, null);
                        break;
                }


                // If Member is non null then the type we are setting is an object.
                if (Member != null)
                {
                    switch (1)
                    {
                        case 1:
                            // Get the child objects field
                            FieldInfo fi = t.GetField(Member);
                            if (fi != null)
                            {
                                fi.SetValue(oself, ConvertValue(fi.FieldType, orowVal));
                                break;
                            }

                            // Could be a property instead.
                            PropertyInfo pi = t.GetProperty(Member);
                            if (pi != null)
                            {
                                pi.SetValue(oself, ConvertValue(pi.PropertyType, orowVal), null);
                                break;
                            }

                            // Well if nothing was set then we have an error.
                            throw (new Exception(string.Format("Unable to find member {0} in class of type {1}", Member, o.GetType().ToString())));
                    }
                }
                else
                {
                    // We are setting a base type.
                    switch (info.MemberType)
                    {
                        case MemberTypes.Property:
                            if (((PropertyInfo)info).CanWrite == true)
                            {
                                ((PropertyInfo)info).SetValue(o, ConvertValue(t, orowVal), null);
                            }
                            break;
                        case MemberTypes.Field:
                            ((FieldInfo)info).SetValue(o, ConvertValue(t, orowVal));
                            break;
                    }
                }
            }
            catch (Exception e)
            {
                // TODO : Do we really need this exception?
                throw (new Exception("Error " + info.Name + " " + e.Message));
            }
        }



        /// <summary>
        /// Enumerate through all public members of object o.  If the DataTransform
        /// attribute has been applied to a member then try to set the value for the member
        /// from the values contained in the DataRow.  The DataTransform attribute
        /// tells us which column to use for each field.  Either by ordinal positions,
        /// the Name, or if left blank then the members name.
        /// </summary>
        /// <param name="row">DataRow to use for values</param>
        /// <param name="o">Object to set</param>
        /// <param name="bStrict">If true then throw an error if an item does not exist in row</param>
        public static object Transform(DataRow row, IBaseDataAccessObject o, bool bStrict, NamedObjectCollection collFieldsToFilter)
        {
            Type t = o.GetType();

            // Enumerate through all the object fields
            FieldInfo[] fields = t.GetFields(BindingFlags.GetField | BindingFlags.NonPublic | BindingFlags.Public | BindingFlags.Instance);
            object[] attrs;

            for (int i = 0; i < fields.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = fields[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs.Length > 0)
                {
                    if (ShouldUseField(fields[i].Name, collFieldsToFilter))
                    {
                        for (int b = 0; b < attrs.Length; b++)
                        {
                            ((DataTransformAttribute)attrs[b]).SetField(fields[i], row, o, bStrict);
                        }
                    }
                }
            }

            // Enumerate through all the properties of the object.
            PropertyInfo[] props = t.GetProperties();
            for (int i = 0; i < props.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = props[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null)
                {
                    if (ShouldUseField(props[i].Name, collFieldsToFilter))
                    {
                        for (int b = 0; b < attrs.Length; b++)
                        {
                            ((DataTransformAttribute)attrs[b]).SetField(props[i], row, o, bStrict);
                        }
                    }
                }
            }

            o.ClearDirtyState();

            return o;
        }

        public static object CopyTo(object to, object from)
        {
            return CopyTo(to, from, null, true);
        }

        public static object CopyTo(object to, object from, bool bStrict)
        {
            return CopyTo(to, from, null, bStrict);
        }

        public static object CopyTo(object to, object from, NamedObjectCollection collFieldToPopulate)
        {
            return CopyTo(to, from, collFieldToPopulate, true);
        }

        public static object CopyTo(object to, object from, NamedObjectCollection collFieldsToFilter, bool bStrict)
        {
            Type tt = to.GetType();
            Type ft = from.GetType();

            // Enumerate through all the properties of the object.
            PropertyInfo[] props = ft.GetProperties();
            for (int i = 0; i < props.Length; i++)
            {
                // Look for the datatransform attribute.
                object[] attrs = props[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null)
                {
                    if (ShouldUseField(props[i].Name, collFieldsToFilter))
                    {
                        for (int b = 0; b < attrs.Length; b++)
                        {
                            try
                            {
                                ((DataTransformAttribute)attrs[b]).SetField(props[i], props[i].GetValue(from, null), to);
                            }
                            catch (Exception ex)
                            {
                                if (bStrict)
                                    throw ex;
                            }
                        }
                    }
                }
            }

            return true;

        }

        public static NamedObjectCollection CopyFrom(NameValueCollection nvc)
        {
            NamedObjectCollection noc = new NamedObjectCollection();
            foreach (string key in nvc.Keys)
                noc[key] = nvc[key];
            return noc;
        }
        /// <summary>
        /// Enumerate through all public members of object o.  If the DataTransform
        /// attribute has been applied to a member then try to set the value for the member
        /// from the values contained in the DataReader.  The DataTransform attribute
        /// tells us which column to use for each field.  Either by ordinal positions,
        /// the Name, or if left blank then the members name.
        /// </summary>
        /// <param name="dr">DataReader from the database</param>
        /// <param name="o">Object to set</param>
        /// <param name="bStrict">If true then throw an error if an item does not exist in row</param>
        public static object Transform(SqlDataReader dr, IBaseDataAccessObject o, bool bStrict, NamedObjectCollection collFieldsToFilter)
        {
            Type t = o.GetType();

            // Enumerate through all the object fields
            FieldInfo[] fields = t.GetFields();
            object[] attrs;

            for (int i = 0; i < fields.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = fields[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null)
                {
                    if (ShouldUseField(fields[i].Name, collFieldsToFilter))
                    {
                        for (int b = 0; b < attrs.Length; b++)
                        {
                            ((DataTransformAttribute)attrs[b]).SetField(fields[i], dr, o, bStrict);
                        }
                    }
                }
            }

            // Enumerate through all the properties of the object.
            PropertyInfo[] props = t.GetProperties();
            for (int i = 0; i < props.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = props[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null)
                {
                    if (ShouldUseField(props[i].Name, collFieldsToFilter))
                    {
                        for (int b = 0; b < attrs.Length; b++)
                        {
                            ((DataTransformAttribute)attrs[b]).SetField(props[i], dr, o, bStrict);
                        }
                    }
                }
            }

            o.ClearDirtyState();

            return o;
        }

        /// <summary>
        /// Enumerate through all public members of object o.  If the DataTransform
        /// attribute has been applied to a member then try to set the value for the member
        /// from the values contained in the DataReader.  The DataTransform attribute
        /// tells us which column to use for each field.  Either by ordinal positions,
        /// the Name, or if left blank then the members name.
        /// </summary>
        /// <param name="dr">DataReader from the database</param>
        /// <param name="o">Object to set</param>
        /// <param name="bStrict">If true then throw an error if an item does not exist in row</param>
        public static object Transform2(SqlDataReader dr, object o, bool bStrict, NamedObjectCollection collFieldsToFilter)
        {
            Type t = o.GetType();

            // Enumerate through all the object fields
            FieldInfo[] fields = t.GetFields();
            object[] attrs;

            for (int i = 0; i < fields.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = fields[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null)
                {
                    if (ShouldUseField(fields[i].Name, collFieldsToFilter))
                    {
                    }
                    else
                    {
                        for (int b = 0; b < attrs.Length; b++)
                        {
                            ((DataTransformAttribute)attrs[b]).SetField(fields[i], dr, o, bStrict);
                        }
                    }
                }
            }

            // Enumerate through all the properties of the object.
            PropertyInfo[] props = t.GetProperties();
            for (int i = 0; i < props.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = props[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null)
                {
                    if (ShouldUseField(props[i].Name, collFieldsToFilter))
                    {
                    }
                    else
                    {
                        for (int b = 0; b < attrs.Length; b++)
                        {
                            ((DataTransformAttribute)attrs[b]).SetField(props[i], dr, o, bStrict);
                        }
                    }
                }
            }

            return o;
        }

        public static object Transform(SqlDataReader dr, IBaseDataAccessObject o, bool bStrict)
        {
            return Transform(dr, o, bStrict, null);
        }

        public static object Transform(DataRow row, IBaseDataAccessObject o, bool bStrict)
        {
            return Transform(row, o, bStrict, null);
        }

        /// <summary>
        /// Enumerate through all public members of object o.  If the DataTransform
        /// attribute has been applied to a member then try to set the value for the member
        /// from the values contained in the DataReader.  The DataTransform attribute
        /// tells us which column to use for each field.  Either by ordinal positions,
        /// the Name, or if left blank then the members name.
        /// </summary>
        /// <param name="dr">DataReader from the database</param>
        /// <param name="o">Object to set</param>
        public static object Transform(SqlDataReader dr, IBaseDataAccessObject o)
        {
            return Transform(dr, o, true);
        }
        /// <summary>
        /// Enumerate through all public members of object o.  If the DataTransform
        /// attribute has been applied to a member then try to set the value for the member
        /// from the values contained in the DataRow.  The DataTransform attribute
        /// tells us which column to use for each field.  Either by ordinal positions,
        /// the Name, or if left blank then the members name
        /// </summary>
        /// <param name="row">DataRow to use for values</param>
        /// <param name="o">Object to set</param>
        public static object Transform(DataRow row, IBaseDataAccessObject o)
        {
            return Transform(row, o, true);
        }

        public static NamedObjectCollection GetTransformFields(object o, bool bDefault)
        {
            Type t = o.GetType();
            NamedObjectCollection noc = new NamedObjectCollection();

            // Enumerate through all the object fields
            FieldInfo[] fields = t.GetFields();
            object[] attrs;

            for (int i = 0; i < fields.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = fields[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null && attrs.Length == 1)
                {
                    noc[fields[i].Name] = bDefault;
                }
            }

            // Enumerate through all the properties of the object.
            PropertyInfo[] props = t.GetProperties();
            for (int i = 0; i < props.Length; i++)
            {
                // Look for the datatransform attribute.
                attrs = props[i].GetCustomAttributes(typeof(DataTransformAttribute), true);
                if (attrs != null && attrs.Length == 1)
                {
                    noc[props[i].Name] = bDefault;
                }
            }

            return noc;
        }
    }
}
