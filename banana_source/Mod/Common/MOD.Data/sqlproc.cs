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
    /// Defination for a Stored procedure.
    /// </summary>
    public class SqlProc
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
        public ProcedureParam[] Parameters;

        public SqlProc() { }

        public SqlProc(SqlConnection conn, string name, SqlTransaction transaction)
        {
            Name = name;
            SqlCommand cmd = new SqlCommand("sp_sproc_columns", conn, transaction);
            cmd.CommandText = "sp_sproc_columns";
            cmd.CommandType = CommandType.StoredProcedure;
            cmd.Parameters.AddWithValue("@procedure_name", name);
            cmd.Transaction = transaction;

            SqlDataReader dr = cmd.ExecuteReader();
            ArrayList procParams = new ArrayList();
            while (dr.Read())
                procParams.Add(new ProcedureParam(dr));
            dr.Close();
            Parameters = (ProcedureParam[])procParams.ToArray(typeof(ProcedureParam));
        }

        public bool IsValid { get { return Parameters != null && Parameters.Length > 0; } }

        /// <summary>
        /// Create a new SqlCommand object, setting the values for the
        /// SqlParameter objects using dr as the input values.
        /// </summary>
        /// <param name="con">SqlConnection object to use for the command</param>
        /// <param name="dr">DataRow to use for input values</param>
        /// <param name="trans">Transaction that should be used to create the command</param>
        /// <returns>A new instance of a SqlCommand object</returns>
        public SqlCommand CreateCommand(SqlConnection con, DataRow dr, SqlTransaction trans)
        {

            object[] oo = null;
            if (Parameters != null)
            {
                oo = new object[Parameters.Length];
                for (int i = 0; i < Parameters.Length; i++)
                {
                    oo[i] = dr[Parameters[i].Column];
                }
            }
            return CreateCommand(con, oo, trans);
        }

        /// <summary>
        /// Create a new SqlCommand object, setting the values for the
        /// SqlParameter objects using the values array.
        /// </summary>
        /// <param name="con">Connection to use</param>
        /// <param name="values">input values for the stored procedure</param>
        /// <param name="trans">Transaction that should be used to create the command</param>
        /// <returns>A new instance of a SqlCommand object</returns>
        public SqlCommand CreateCommand(SqlConnection con, object[] values, SqlTransaction trans)
        {

            SqlCommand cmd = new SqlCommand("dbo." + Name, con, trans);
            cmd.CommandType = CommandType.StoredProcedure;
            if (Parameters != null)
            {
                int ival = 0;
                for (int i = 0; i < Parameters.Length; i++)
                {
                    ProcedureParam param = Parameters[i];
                    if (param.ColumnType == 5)
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
        /// <returns>An Array that can be passed to SqlProcAdapter.ExecuteProc</returns>
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
            object[] vals = new object[Parameters.Length];

            int ival = -1;
            for (int i = 0; i < Parameters.Length; i++)
            {
                ProcedureParam par = Parameters[i];

                // Skip @RETURN_VALUE and parameters with only output direction.
                if (par.ColumnType == 5)
                {
                    continue;
                }
                ival++;

                // Name of the parameter
                // BUG : What if the name does not start with @?
                string sname = par.Name;
                sname = sname.Substring(1, sname.Length - 1);
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
                        case SqlDbType.NChar:
                        case SqlDbType.NVarChar:
                        case SqlDbType.Char:
                        case SqlDbType.Text:
                        case SqlDbType.VarChar:
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
