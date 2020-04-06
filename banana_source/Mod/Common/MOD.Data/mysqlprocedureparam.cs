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

namespace MOD.Data
{
    /// <summary>
    /// Procedure Parameter Information
    /// </summary>
    public class MySqlProcedureParam
    {
        /// <summary>
        /// Default constructor, is included so there is one.
        /// </summary>
        public MySqlProcedureParam()
        {
            IsNullable = false;
        }

        /// <summary>
        /// Contructor which is used to start with initiali values
        /// for name, value, and Column declarations
        /// </summary>
        /// <param name="n">Name</param>
        /// <param name="v">ValueType (int, string, date)</param>
        /// <param name="c">Column</param>
		public MySqlProcedureParam(string n, MySqlDbType v, string c)
        {
			Name = "__" + n;
			ValueType = v;
			Column = "__" + c;
			IsNullable = false;
		}
		/// <summary>
		/// Contructor which is used to start with initiali values
		/// for name, value, and Column declarations
		/// </summary>
		/// <param name="n">Name</param>
		/// <param name="v">ValueType (int, string, date)</param>
		/// <param name="c">Column</param>
		/// <param name="isNullable">IsNullable</param>
		public MySqlProcedureParam(string n, MySqlDbType v, string c, bool isNullable)
			: this(n, v, c)
		{
			IsNullable = isNullable;
		}
		/// <summary>
		/// Contructor which is used to start with initiali values
		/// for name, value, and Column declarations
		/// </summary>
		/// <param name="n">Name</param>
		/// <param name="v">ValueType (int, string, date)</param>
		/// <param name="c">Column</param>
		/// <param name="isNullable">IsNullable</param>
		public MySqlProcedureParam(string n, MySqlDbType v, string c, bool isNullable, ParameterDirection direction)
			: this(n, v, c, isNullable)
		{
			Direction = direction;
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
		public MySqlDbType ValueType;
        /// <summary>
        /// The Column name from a datarow to set the value part of the MySqlParameter
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
        public ParameterDirection Direction = ParameterDirection.Input;

        /// <summary>
        /// Property length.  Must check varchar values to make sure they aren't too big.
        /// </summary>
        [XmlAttribute]
        public int Length;

        [XmlAttribute]
        public bool IsNullable;

        /// <summary>
        /// Returns a new instance of a MySqlParameter object using the 
        /// MySqlParameter(string name, object val) constructor
        /// </summary>
        /// <param name="val">MySqlParameter Value</param>
		/// <returns>A new instance of a MySqlParameter object</returns>
		public MySqlParameter CreateParam(object val)
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
				else if (val is Guid)
				{
					val = val.ToString().Replace("{","").Replace("}","");
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
                MySqlParameter pt = new MySqlParameter(Name, val);
                pt.MySqlDbType = ValueType;
                pt.Direction = Direction;
                switch (pt.MySqlDbType)
                {
                    case MySqlDbType.Bit:
                        pt.DbType = DbType.Boolean;
                        break;
                    case MySqlDbType.VarChar:
                        pt.Size = val.ToString().Length;
                        break;
                    default:
                        break;
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
