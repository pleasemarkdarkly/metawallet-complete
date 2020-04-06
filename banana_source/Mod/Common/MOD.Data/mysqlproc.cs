using System;
using System.Data;
using MySql.Data;
using MySql.Data.MySqlClient;
using System.Xml.Serialization;
using System.Xml;
using System.Text;
using System.IO;
using System.Text.RegularExpressions;
using System.Collections.Specialized;
using System.Collections;
using System.Reflection;
using System.Collections.Generic;


namespace MOD.Data
{
    /// <summary>
    /// Defination for a Stored procedure.
    /// </summary>
    public class MySqlProc
    {
        /// <summary>
        /// Name of the stored procedure
        /// </summary>
        [XmlAttribute]
        public string Name;
        /// <summary>

        /// <summary>
        /// The Parameter definations for the stored procedure.
        /// </summary>
        [XmlElement("Parameter")]
		public List<MySqlProcedureParam> Parameters;

        public MySqlProc() { }

		public MySqlProc(string name)
		{
			Name = name;
		}
		public MySqlProc(MySqlConnection conn, string name, MySqlTransaction transaction)
        {
            Name = name;
        }
		public void AddParameter(MySqlProcedureParam param)
		{
			if (Parameters == null)
			{
				Parameters = new List<MySqlProcedureParam>();
			}
			Parameters.Add(param);
		}

		public void AddDataOptionParameters(bool isInactiveProc, bool isDataInactiveProc, bool isSortProc, bool isSearchProc)
		{
			if (isInactiveProc == true)
			{
				AddParameter(new MySqlProcedureParam("IncludeInactive", MySql.Data.MySqlClient.MySqlDbType.Bit, "IncludeInactive", true));
			}
			if (isDataInactiveProc == true)
			{
				AddParameter(new MySqlProcedureParam("IncludeDateInactive", MySql.Data.MySqlClient.MySqlDbType.Bit, "IncludeDateInactive", true));
			}
			if (isSortProc == true || isSearchProc == true)
			{
				AddParameter(new MySqlProcedureParam("SortColumn", MySql.Data.MySqlClient.MySqlDbType.VarChar, "SortColumn", true));
				AddParameter(new MySqlProcedureParam("SortDirection", MySql.Data.MySqlClient.MySqlDbType.VarChar, "SortDirection", true));
			}
			if (isSearchProc == true)
			{
				AddParameter(new MySqlProcedureParam("StartIndex", MySql.Data.MySqlClient.MySqlDbType.Int32, "StartIndex", true));
				AddParameter(new MySqlProcedureParam("PageSize", MySql.Data.MySqlClient.MySqlDbType.Int32, "PageSize", true));
				AddParameter(new MySqlProcedureParam("MaximumListSize", MySql.Data.MySqlClient.MySqlDbType.Int32, "MaximumListSize", true));
				MySqlProcedureParam maxListParam = new MySqlProcedureParam("MaximumListSizeExceeded", MySql.Data.MySqlClient.MySqlDbType.Bit, "MaximumListSizeExceeded", true);
				maxListParam.Direction = ParameterDirection.Output;
				AddParameter(maxListParam);
				MySqlProcedureParam totalParam = new MySqlProcedureParam("TotalRecords", MySql.Data.MySqlClient.MySqlDbType.Int32, "TotalRecords", true);
				totalParam.Direction = ParameterDirection.Output;
				AddParameter(totalParam);
			}
		}

		public bool IsValid { get { return Parameters != null && Parameters.Count > 0; } }

        /// <summary>
        /// Create a new MySqlCommand object, setting the values for the
        /// MySqlParameter objects using dr as the input values.
        /// </summary>
        /// <param name="con">MySqlConnection object to use for the command</param>
        /// <param name="dr">DataRow to use for input values</param>
        /// <param name="trans">Transaction that should be used to create the command</param>
        /// <returns>A new instance of a MySqlCommand object</returns>
        public MySqlCommand CreateCommand(MySqlConnection con, DataRow dr, MySqlTransaction trans)
        {

            object[] oo = null;
            if (Parameters != null)
            {
                oo = new object[Parameters.Count];
				for (int i = 0; i < Parameters.Count; i++)
                {
                    oo[i] = dr[Parameters[i].Column];
                }
            }
            return CreateCommand(con, oo, trans);
        }

        /// <summary>
        /// Create a new MySqlCommand object, setting the values for the
        /// MySqlParameter objects using the values array.
        /// </summary>
        /// <param name="con">Connection to use</param>
        /// <param name="values">input values for the stored procedure</param>
        /// <param name="trans">Transaction that should be used to create the command</param>
        /// <returns>A new instance of a MySqlCommand object</returns>
        public MySqlCommand CreateCommand(MySqlConnection con, object[] values, MySqlTransaction trans)
        {

            MySqlCommand cmd = new MySqlCommand(Name, con, trans);
            cmd.CommandType = CommandType.StoredProcedure;
            if (Parameters != null)
            {
                int ival = 0;
				for (int i = 0; i < Parameters.Count; i++)
                {
                    MySqlProcedureParam param = Parameters[i];
					if (param.Direction == ParameterDirection.Output || param.Direction == ParameterDirection.ReturnValue)
                    {
                        cmd.Parameters.Add(param.CreateParam(null));
                    }
                    else
                    {
                        cmd.Parameters.Add(param.CreateParam(values[ival]));
                        ival++;
                    }
                }
            }
            return cmd;
        }

        /// <summary>
        /// Creates an object array collection that is used as the input values for
        /// a stored procedure call.  The function goes through the parameter list and
        /// creates an object array from the members of the NamedObjectCollection and class
        /// passed in.  If a parameter is not found in either an exception will be 
        /// thrown
        /// </summary>
        /// <param name="o">Class members to search for parameter values</param>
        /// <param name="col">If col is not null and contains values for a parameter
        /// then it is used first</param>
        /// <returns>An Array that can be passed to MySqlProcAdapter.ExecuteProc</returns>
        public object[] ValueArrayFromObject(object o, NamedObjectCollection col)
        {
            // no parameters then return zero results.
            if (Parameters == null)
            {
                return new object[0];
            }

            // Get the object type.
            Type t = null;
            if (o != null)
            {
                t = o.GetType();
            }

            // Always create the parameter list based on procedure length.
			object[] vals = new object[Parameters.Count];

            int ival = -1;
			for (int i = 0; i < Parameters.Count; i++)
            {
                MySqlProcedureParam par = Parameters[i];

                // Skip @RETURN_VALUE and parameters with only output direction.
				if (par.Direction == ParameterDirection.Output || par.Direction == ParameterDirection.ReturnValue)
                {
                    continue;
                }
                ival++;

                // Name of the parameter
                // BUG : What if the name does not start with __?
                string sname = par.Name;
                sname = sname.Substring(2, sname.Length - 2);
                bool bfound = false;
                do
                {
                    if (col != null)
                    {
                        // First look in the collection for the value for the parameter.
                        // If we find one then move on to the next parameter
                        vals[ival] = col[sname];
                        if (vals[ival] != null)
                        {
                            bfound = true;
                            break;
                        }
                    }

                    if (t != null)
                    {
                        // First look for a field in the class with the
                        // parameter name.
                        FieldInfo fi = t.GetField(sname);
                        if (fi != null && fi.IsPublic)
                        {
                            vals[ival] = fi.GetValue(o);
                            bfound = true;
                            break;
                        }

                        // Is there a property that has the name then?
                        PropertyInfo pi = t.GetProperty(sname);
                        if (pi != null)
                        {
                            vals[ival] = pi.GetValue(o, null);
                            bfound = true;
                        }
                    }
                    // added this funky business to remove unreachable code warning
                    int j = 1;
                    if (j == 1)
                    {
                        break;
                    }
                } while (true);

                if (!bfound)
                {
                    vals[ival] = null;
                    if (!par.IsNullable)
                        throw (new Exception("Unable to find value for " + sname + " for stored procedure " + Name));
                }

                if (vals[ival] != null)
                {
                    switch (par.ValueType)
                    {
						case MySqlDbType.LongBlob:
						case MySqlDbType.LongText:
						case MySqlDbType.MediumBlob:
						case MySqlDbType.MediumText:
						case MySqlDbType.String:
						case MySqlDbType.Text:
						case MySqlDbType.TinyBlob:
						case MySqlDbType.TinyText:
						case MySqlDbType.VarChar:
						case MySqlDbType.VarString:
							if (par.Length > 0 && par.Length < vals[ival].ToString().Length)
                            {
                                if (t != null)
                                {
                                    MemberInfo[] m = t.GetMember(sname);
                                    if (m.Length > 0)
                                    {
                                        DataTransformAttribute[] dta = (DataTransformAttribute[])m[0].GetCustomAttributes(typeof(DataTransformAttribute), true);
                                        if (dta.Length > 0)
                                        {
                                            if (dta[0].Truncate)
                                            {
                                                string s = vals[ival].ToString();
                                                s = s.Substring(0, par.Length);
                                                break;
                                            }
                                        }

                                    }
                                }
                                throw (new Exception(string.Format("String length {0} is too long maximum string length {1}", vals[ival].ToString().Length, par.Length)));
                            }
                            break;
                    }
                }
            }

            return vals;
        }

    }
}
