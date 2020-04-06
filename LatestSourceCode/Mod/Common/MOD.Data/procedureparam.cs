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
    /// Procedure Parameter Information
    /// </summary>
    public class ProcedureParam
    {
        /// <summary>
        /// Default constructor, is included so there is one.
        /// </summary>
        public ProcedureParam()
        {
            IsNullable = false;
        }

        public ProcedureParam(SqlDataReader dr)
        {
            OrdinalPos = Convert.ToInt32(dr["ORDINAL_POSITION"]);
            Name = dr["COLUMN_NAME"].ToString();
            ColumnType = Convert.ToInt32(dr["COLUMN_TYPE"]);
            IsNullable = Convert.ToInt16(dr["NULLABLE"]) == 1;

            if ((string)dr["TYPE_NAME"] == "sysname")
                ValueType = SqlDbType.NVarChar;
            else
                ValueType = (SqlDbType)Enum.Parse(typeof(SqlDbType), dr["TYPE_NAME"].ToString(), true);

            Length = Convert.ToInt32(dr["LENGTH"]);
        }

        /// <summary>
        /// Contructor which is used to start with initiali values
        /// for name, value, and Column declarations
        /// </summary>
        /// <param name="n">Name</param>
        /// <param name="v">ValueType (int, string, date)</param>
        /// <param name="c">Column</param>
        public ProcedureParam(string n, SqlDbType v, string c)
        {
            Name = n;
            ValueType = v;
            Column = c;
            IsNullable = false;
        }
        /// <summary>
        /// Name of the SP parameter
        /// </summary>
        [XmlAttribute]
        public string Name;

        /// <summary>
        /// The value type, (int, string, datetime)
        /// </summary>
        [XmlAttribute]
        public SqlDbType ValueType;
        /// <summary>
        /// The Column name from a datarow to set the value part of the SqlParameter
        /// </summary>
        [XmlAttribute]
        public string Column;
        /// <summary>
        /// Unknown
        /// </summary>
        [XmlAttribute]
        public string Function;

        /// <summary>
        /// Position the parameter is expected by SQL
        /// </summary>
        [XmlAttribute]
        public int OrdinalPos;

        /// <summary>
        /// SQL direction type, such as Return type, In Out.
        /// </summary>
        [XmlAttribute]
        public int ColumnType;

        /// <summary>
        /// Property length.  Must check varchar values to make sure they aren't too big.
        /// </summary>
        [XmlAttribute]
        public int Length;

        [XmlAttribute]
        public bool IsNullable;

        /// <summary>
        /// Returns a new instance of a SqlParameter object using the 
        /// SqlParameter(string name, object val) constructor
        /// </summary>
        /// <param name="val">SqlParameter Value</param>
        /// <returns>A new instance of a SqlParameter object</returns>
        public SqlParameter CreateParam(object val)
        {
            try
            {
                if (val == null)
                {
                    val = DBNull.Value;
                }
                else if (val is Guid && (Guid)val == Guid.Empty)
                {
                    val = DBNull.Value;
                }
                else if (val is DateTime && (DateTime)val == DateTime.MinValue)
                {
                    val = DBNull.Value;
                }

                /*
                object o = DBNull.Value;
                if( val != DBNull.Value && val != null)
                {
                    Type t = Type.GetType(ValueType);
                    o = Convert.ChangeType(val, t);
                    switch( ValueType )
                    {
                        case "string":
                            o = Convert.ToString(val);
                            break;
                        case "int":
                            o = Convert.ToInt32(val);
                            break;
                        case "date":
                            o = Convert.ToDateTime(val);
                            break;
                        case "double":
                            o = Convert.ToSingle(val);
                            break;
                        case "guid":
                            // TODO the guid is not handled yet
                            if( val.GetType() == typeof(Guid))
                            {
                                o = (Guid)val;
                            } 
                            else if( val.GetType() == typeof(string))
                            {
                                o = new Guid((string)val);
                            } 
                            else if( val.GetType() == typeof(byte[]))
                            {
                                o = new Guid((byte[])val);
                            } 
                            else
                            {
                                throw( new Exception("Unable to convert to guid type."));
                            }
                            break;
                        default:
                            throw( new Exception("Unable to convert datatype for parameter '" + Name + "'"));
                    }
                }
                */
                SqlParameter pt = new SqlParameter(Name, val);
                pt.SqlDbType = ValueType;
                switch (ColumnType)
                {
                    case 2:
                        pt.Direction = ParameterDirection.InputOutput;
                        break;
                    case 5:
                        pt.Direction = ParameterDirection.ReturnValue;
                        break;
                }

                if (pt.SqlDbType == SqlDbType.VarChar)
                {
                    pt.Size = Length;
                }
                else if (pt.SqlDbType == SqlDbType.NVarChar)
                {
                    pt.Size = Length / 2;
                }

                return pt;
            }
            catch (Exception e)
            {
                throw (new Exception("Error converting " + val.GetType().ToString() + ":" + val.ToString() + " for " + Name + " " + e.Message));
            }
        }
    }
}
