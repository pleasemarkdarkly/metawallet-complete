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
    /// The main object used to execute stored procedures.  This class should contain all
    /// the stored procedures that need to be executed.  It also can contain
    /// definitions for how to spit out form elements, but it isn't too useful.
    /// 
    /// TODO : Work on how to make the form element stuff more usefull.
    /// </summary>
    public class SqlProcAdapter
    {
        /// <summary>
        /// Timeout for stored procedures in seconds.
        /// </summary>
        public int CommandTimeout = 300;

        /// <summary>
        /// Stored procedures used for CRUD services
        /// </summary>
        [XmlElement("Procedure")]
        public SqlProc[] Procedures;

        [XmlIgnore]
        private static NamedObjectCollection m_collProcedures = new NamedObjectCollection();

        private bool LazyCaching = false;

        /// <summary>
        /// Serializer used to serialize SqlProcAdapters.
        /// </summary>
        public static XmlSerializer Serializer = new XmlSerializer(typeof(SqlProcAdapter));

        public SqlProcAdapter()
        {
        }

        public SqlProcAdapter(int commandTimeout)
        {
            LazyCaching = true;
            CommandTimeout = commandTimeout;
        }

        /// <summary>
        /// Used Deserialize a SqlProcAdapter from an XmlFile
        /// </summary>
        /// <param name="sFile">The full path to the file to deserialize from</param>
        /// <returns>Returns a new instance of a SqlProcAdapter</returns>
        public static SqlProcAdapter Deserialize(string sFile)
        {
            SqlProcAdapter p = null;
            StreamReader sr = new StreamReader(sFile);
            try
            {
                p = (SqlProcAdapter)Serializer.Deserialize(sr);
            }
            catch (Exception e)
            {
                sr.Close();
                throw (e);
            }
            sr.Close();
            return p;
        }

        public static SqlProcAdapter Deserialize(XmlNodeReader io)
        {
            SqlProcAdapter p = (SqlProcAdapter)Serializer.Deserialize(io);
            return p;
        }

        /// <summary>
        /// Creates a XML string of procedure definitions from the given
        /// database connection.
        /// </summary>
        /// <param name="connectionString">Connection string to use</param>
        /// <param name="sprocs">Stored procedures to define</param>
        /// <returns>XML String</returns>
        public static string CreateDefinition(string connectionString, string sprocs)
        {
            SqlProcAdapter procs = new SqlProcAdapter();
            SqlConnection con = new SqlConnection(connectionString);
            con.Open();

            int icnt;
            SqlCommand cmd = new SqlCommand("sp_sproc_columns", con);
            cmd.CommandType = CommandType.StoredProcedure;
            cmd.Parameters.AddWithValue("@procedure_name", sprocs);

            SqlDataReader dr = cmd.ExecuteReader();

            string spName = "";
            ArrayList procarray = new ArrayList();

            SqlProc proc = null;
            while (dr.Read())
            {
                if (spName != dr["PROCEDURE_NAME"].ToString())
                {
                    proc = new SqlProc();
                    spName = dr["PROCEDURE_NAME"].ToString();
                    procarray.Add(proc);
                    proc.Name = spName.Split(';')[0];
                }

                ProcedureParam par = new ProcedureParam(dr);

                icnt = 1;
                if (proc.Parameters != null)
                {
                    icnt += proc.Parameters.Length;
                }
                ProcedureParam[] parray = new ProcedureParam[icnt];
                if (proc.Parameters != null)
                {
                    proc.Parameters.CopyTo(parray, 0);
                }
                parray[icnt - 1] = par;
                proc.Parameters = parray;
            }
            con.Close();
            dr.Close();

            procs.Procedures = new SqlProc[procarray.Count];
            procarray.CopyTo(procs.Procedures, 0);

            StringWriter swr = new StringWriter();
            SqlProcAdapter.Serializer.Serialize(swr, procs);

            return swr.ToString();
        }


        /// <summary>
        /// A name for the logical object.
        /// </summary>
        [XmlAttribute]
        public string Name;

        /// <summary>
        /// SqlConnection to use if non are passed in.  The calls to execute proc
        /// can contain Connection parameters or not.  If it they are not included
        /// then this member should be a valid SqlConnection object.
        /// </summary>
        [XmlIgnore()]
        public SqlConnection Connection;

        /// <summary>
        /// Transaction to use if no transactions are passed in.
        /// </summary>
        [XmlIgnore()]
        public SqlTransaction Transaction;



        /// <summary>
        /// Used internally to through exceptions if no connection is available to fuse.
        /// </summary>
        protected SqlConnection ConnectionInt
        {
            get
            {
                if (Connection == null)
                {
                    throw (new Exception("Connection property must be set before this method is called"));
                }
                return Connection;
            }
        }


        /// <summary>
        /// Searchs through the Stored procedure list and looks for the first one
        /// with the given name.  
        /// </summary>
        /// <param name="name">SP to look for.  Case sensitive</param>
        /// <returns>SqlProc object where the name is equal to name</returns>
        public SqlProc GetProcedure(string name)
        {
            if (LazyCaching)
            {
                string key = Connection.ConnectionString + "|" + name;

                if (m_collProcedures.HasKey(key))
                {
                    return (SqlProc)m_collProcedures[key];
                }
                else
                {
                    SqlProc proc = new SqlProc(Connection, name, Transaction);
                    
                    if (proc.IsValid)
                    {
                        lock (m_collProcedures)
                        {
                            m_collProcedures[key] = proc;
                        }

                        return proc;
                    }
                    else
                        throw (new Exception("Unable to find procedure declaration '" + name + "'"));
                }
            }
            else // use array loaded from XML file
            {
                SqlProc proc = null;

                for (int i = 0; i < Procedures.Length; i++)
                {
                    proc = Procedures[i];
                    if (proc.Name == name)
                    {
                        break;
                    }
                }

                // Always through an exception if it isn't found.
                if (proc.Name != name)
                {
                    throw (new Exception("Unable to find procedure declaration '" + name + "'"));
                }
                return proc;
            }
        }

        #region SqlCommand Executes that return DataTable
        /// <summary>
        /// This version creats input values to the stored procedure from the class passed 
        /// in through valueObject and the collection obj.  You must set the Connection,
        /// and Transaction object before using this functon
        /// </summary>
        /// <param name="sName">SP name to execute</param>
        /// <param name="valueObject">Class to use for parameter values</param>
        /// <param name="obj">Collection to use for parameter values</param>
        /// <returns>Result of the execution</returns>
        public DataTable ExecuteProc(string sName, IBaseDataAccessObject valueObject, NamedObjectCollection obj)
        {
            SqlProc proc = GetProcedure(sName);
            SqlCommand cmd = null;
            object[] values = proc.ValueArrayFromObject(valueObject, obj);
            DataTable dt = ExecuteProc(Connection, proc, out cmd, values);
            CopyOutputParametersToCollection(cmd, obj);

            if (valueObject != null)
                valueObject.ClearDirtyState();

            return dt;
        }

        public DataTable ExecuteProc(string sName)
        {
            return ExecuteProc(GetProcedure(sName), new object[] { });
        }

        /// <summary>
        /// If the Connection field of this class has been filled out then you can
        /// use this version so that no connection is needed.
        /// </summary>
        /// <param name="sName">SP name to execute</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        public DataTable ExecuteProc(string sName, params object[] values)
        {
            return ExecuteProc(ConnectionInt, sName, values);
        }

        /// <summary>
        /// This version is used if the stored procedure has already been found.
        /// </summary>
        /// <param name="proc">SqlProc object to execute.</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        public DataTable ExecuteProc(SqlProc proc, params object[] values)
        {
            SqlCommand cmd = null;
            return ExecuteProc(ConnectionInt, proc, out cmd, values);
        }

        /// <summary>
        /// Execute a specific procedure declared in the procedures array.
        /// The values will be used as the values to pass to the stored procedure.
        /// </summary>
        /// <param name="con">SqlConnection to use to execute procedure</param>
        /// <param name="sName">Matches the Name property declared for a SqlProc object</param>
        /// <param name="values">Values to use for the stored procedure, these must be ordered as they appear in the stored procedure declaration</param>
        /// <returns>Returns the Datatable of the result set returned.</returns>
        public DataTable ExecuteProc(SqlConnection con, string sName, params object[] values)
        {
            if (!LazyCaching && Procedures == null)
            {
                throw (new Exception("No Procedures declared for this object"));
            }

            if (sName == null)
            {
                throw (new Exception("Must pass in procedure to execute"));
            }

            SqlProc proc = GetProcedure(sName);
            SqlCommand cmd = null;
            return ExecuteProc(con, proc, out cmd, values);
        }

        /// <summary>
        /// This is the function that is called by all other ExecuteProc members.
        /// 
        /// This function will set the LastCommand property.
        /// </summary>
        /// <param name="con">Connection to use for the stored procedure</param>
        /// <param name="proc">Procedure to execute</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        protected DataTable ExecuteProc(SqlConnection con, SqlProc proc, out SqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            SqlDataAdapter da = new SqlDataAdapter(cmd);

            System.Diagnostics.Debug.Write(String.Format("{0} ", DateTime.Now));
            System.Diagnostics.Debug.WriteLine(cmd.CommandText);

            DataTable dt = new DataTable();

            SqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

            e.Param1 = dt;
            da.Fill(dt);

            HandleAfterSPEvent(cmd, proc, e);

            return dt;
        }
        #endregion

        #region SqlCommand Executes that return void
        /// <summary>
        /// This version creats input values to the stored procedure from the class passed 
        /// in through valueObject and the collection obj.  You must set the Connection,
        /// and Transaction object before using this functon
        /// </summary>
        /// <param name="sName">SP name to execute</param>
        /// <param name="valueObject">Class to use for parameter values</param>
        /// <param name="obj">Collection to use for parameter values</param>
        /// <returns>Result of the execution</returns>
        public int ExecuteProcNQ(string sName, IBaseDataAccessObject valueObject, NamedObjectCollection obj)
        {
            SqlProc proc = GetProcedure(sName);
            SqlCommand cmd = null;
            object[] values = proc.ValueArrayFromObject(valueObject, obj);
            int nq = ExecuteProcNQ(Connection, proc, out cmd, values);
            CopyOutputParametersToCollection(cmd, obj);

            if (valueObject != null)
            {
                valueObject.ClearDirtyState();
            }

            return nq;
        }

        public int ExecuteProcNQ(string sName)
        {
            return ExecuteProcNQ(GetProcedure(sName), new object[] { });
        }

        /// <summary>
        /// If the Connection field of this class has been filled out then you can
        /// use this version so that no connection is needed.
        /// </summary>
        /// <param name="sName">SP name to execute</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        public int ExecuteProcNQ(string sName, params object[] values)
        {
            return ExecuteProcNQ(ConnectionInt, sName, values);
        }

        /// <summary>
        /// This version is used if the stored procedure has already been found.
        /// </summary>
        /// <param name="proc">SqlProc object to execute.</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        public int ExecuteProcNQ(SqlProc proc, params object[] values)
        {
            SqlCommand cmd = null;
            return ExecuteProcNQ(ConnectionInt, proc, out cmd, values);
        }

        /// <summary>
        /// Execute a specific procedure declared in the procedures array.
        /// The values will be used as the values to pass to the stored procedure.
        /// </summary>
        /// <param name="con">SqlConnection to use to execute procedure</param>
        /// <param name="sName">Matches the Name property declared for a SqlProc object</param>
        /// <param name="values">Values to use for the stored procedure, these must be ordered as they appear in the stored procedure declaration</param>
        /// <returns>Returns the Datatable of the result set returned.</returns>
        public int ExecuteProcNQ(SqlConnection con, string sName, params object[] values)
        {
            if (!LazyCaching && Procedures == null)
            {
                throw (new Exception("No Procedures declared for this object"));
            }

            if (sName == null)
            {
                throw (new Exception("Must pass in procedure to execute"));
            }

            SqlProc proc = GetProcedure(sName);
            SqlCommand cmd = null;
            return ExecuteProcNQ(con, proc, out cmd, values);
        }

        /// <summary>
        /// This is the function that is called by all other ExecuteProc members.
        /// 
        /// This function will set the LastCommand property.
        /// </summary>
        /// <param name="con">Connection to use for the stored procedure</param>
        /// <param name="proc">Procedure to execute</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        protected int ExecuteProcNQ(SqlConnection con, SqlProc proc, out SqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            SqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

            try
            {
                return cmd.ExecuteNonQuery();
            }
            catch (SqlException ee)
            {
                // want our hear music app to handle the sql exception
                throw ee;
            }
            catch (Exception ee)
            {
                SqlExceptionHandler seh = new SqlExceptionHandler(ee, cmd);
            }
            finally
            {
                HandleAfterSPEvent(cmd, proc, e);
            }

            return -1;
        }
        #endregion


        #region Execute functions returning scalar
        private object GetScalarFromDataReader(SqlDataReader dr)
        {
            try
            {
                return dr.Read() ? dr[0] : null;
            }
            catch (Exception)
            {
                return null;
            }
            finally
            {
                if (dr != null)
                    dr.Close();
            }
        }

        public object ExecuteProcScalar(string sname, object o, NamedObjectCollection col)
        {
            return GetScalarFromDataReader(ExecuteProcDR(sname, o, col));
        }

        public object ExecuteProcScalar(string sname)
        {
            return GetScalarFromDataReader(ExecuteProcDR(sname));
        }

        public object ExecuteProcScalar(SqlConnection con, string sname, params object[] values)
        {
            return GetScalarFromDataReader(ExecuteProcDR(con, sname, values));
        }

        public object ExecuteProcScalar(SqlConnection con, SqlProc proc, params object[] values)
        {
            SqlCommand cmd = null;
            return GetScalarFromDataReader(ExecuteProcDR(con, proc, out cmd, values));
        }
        #endregion

        #region Execute functions returning SqlDataReader
        /// <summary>
        /// Execute a stored procedure and return a DataReader instead of a DataTable or DataSet
        /// This version requires the Connection property to be set.
        /// </summary>
        /// <param name="sname">Stored procedure name</param>
        /// <param name="o">Object to create params from</param>
        /// <param name="col">Collection of optional parameters</param>
        /// <returns>SqlDataReader</returns>
        public SqlDataReader ExecuteProcDR(string sname, object o, NamedObjectCollection col)
        {
            SqlProc proc = GetProcedure(sname);
            object[] values = proc.ValueArrayFromObject(o, col);
            SqlCommand cmd = null;
            SqlDataReader dr = ExecuteProcDR(Connection, proc, out cmd, values);

            CopyOutputParametersToCollection(cmd, col);
            return dr;
        }


        public SqlDataReader ExecuteProcDR(string sname)
        {
            SqlProc proc = GetProcedure(sname);
            SqlCommand cmd = null;
            return ExecuteProcDR(Connection, proc, out cmd);
        }

        /// <summary>
        /// Execute a stored procedure and return a SqlDataReader
        /// </summary>
        /// <param name="con">Connection to use</param>
        /// <param name="sname">Stored procedure name</param>
        /// <param name="values">values for stored procedure</param>
        /// <returns>SqlDataReader</returns>
        public SqlDataReader ExecuteProcDR(SqlConnection con, string sname, params object[] values)
        {
            SqlProc proc = GetProcedure(sname);
            SqlCommand cmd = null;
            return ExecuteProcDR(con, proc, out cmd, values);
        }

        /// <summary>
        /// Execute a stored procedure and return a SqlDataReader.  The Command
        /// object will bet set on this function.
        /// </summary>
        /// <param name="con">Connection to use</param>
        /// <param name="proc">Store procedure definition</param>
        /// <param name="values">values for stored procedure execution</param>
        /// <returns>SqlDataReader</returns>
        public SqlDataReader ExecuteProcDR(SqlConnection con, SqlProc proc, out SqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            SqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

            try
            {
                return cmd.ExecuteReader();
            }
            catch (Exception ee)
            {
                SqlExceptionHandler seh = new SqlExceptionHandler(ee, cmd);
            }
            finally
            {
                HandleAfterSPEvent(cmd, proc, e);
            }

            return null;
        }
        #endregion
        # region DataSet Return execution functions
        /// <summary>
        /// DataSet If the Connection field of this class has been filled out then you can
        /// use this version so that no connection is needed.
        /// </summary>
        /// <param name="sName">SP name to execute</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>DataSet returned</returns>
        public DataSet ExecuteProcDS(string sName, object[] values)
        {
            SqlProc proc = GetProcedure(sName);
            SqlCommand cmd = null;
            return ExecuteProcDS(ConnectionInt, proc, out cmd, values);
        }

        /// <summary>
        /// DataSet version. This version creates input values to the stored procedure from the class passed 
        /// in through valueObject and the collection obj.  You must set the Connection,
        /// and Transaction object before using this functon
        /// </summary>
        /// <param name="sName">SP name to execute</param>
        /// <param name="valueObject">Class to use for parameter values</param>
        /// <param name="obj">Collection to use for parameter values</param>
        /// <returns>A DataSet object</returns>
        public DataSet ExecuteProcDS(string sName, object valueObject, NamedObjectCollection obj)
        {
            SqlProc proc = GetProcedure(sName);
            SqlCommand cmd = null;
            object[] values = proc.ValueArrayFromObject(valueObject, obj);
            DataSet ds = ExecuteProcDS(Connection, proc, out cmd, values);
            CopyOutputParametersToCollection(cmd, obj);
            return ds;
        }

        /// <summary>
        /// DataSet This version is used if the stored procedure has already been found.
        /// </summary>
        /// <param name="proc">SqlProc object to execute.</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>DataSet</returns>
        public DataSet ExecuteProcDS(SqlProc proc, object[] values)
        {
            SqlCommand cmd = null;
            return ExecuteProcDS(ConnectionInt, proc, out cmd, values);
        }

        private void CopyOutputParametersToCollection(SqlCommand cmd, NamedObjectCollection obj)
        {
            foreach (SqlParameter param in cmd.Parameters)
                if (param.Direction != ParameterDirection.Input)
                {
                    if (param.Value != null && param.Value != DBNull.Value)
                    {
                        if (param.ParameterName[0] == '@')
                            obj[param.ParameterName.Substring(1)] = param.Value;
                        else
                            obj[param.ParameterName] = param.Value;
                    }
                }
        }

        private SqlCommand InitializeCommand(SqlConnection con, SqlProc proc, object[] values)
        {
            SqlCommand cmd = proc.CreateCommand(con, values, Transaction);
            cmd.CommandTimeout = CommandTimeout;
            return cmd;
        }

        private SqlProcEventArg HandleBeforeSPEvent(SqlCommand cmd, SqlProc proc)
        {
            SqlProcEventArg e = new SqlProcEventArg();
            e.Command = cmd;
            e.SP = proc;
            if (BeforeSPEvent != null)
                BeforeSPEvent(this, e);
            e.Command = null;
            return e;
        }

        private void HandleAfterSPEvent(SqlCommand cmd, SqlProc proc, SqlProcEventArg e)
        {
            e.SP = proc;
            e.Command = cmd;
            if (AfterSPEvent != null)
                AfterSPEvent(this, e);
            e.Command = null;
        }

        /// <summary>
        /// Delegate function before a stored procedure has been called.
        /// </summary>
        public delegate void BeforeSPCallHandler(object o, SqlProcEventArg e);

        /// <summary>
        /// Delegate function for after a stored procedure has been called
        /// </summary>
        public delegate void AfterSPCallHandler(object o, SqlProcEventArg e);

        /// <summary>
        /// Before stored procedure call event.
        /// </summary>
        public event BeforeSPCallHandler BeforeSPEvent;

        /// <summary>
        /// After stored procedure call event.
        /// </summary>
        public event AfterSPCallHandler AfterSPEvent;

        /// <summary>
        /// Execute a stored procedure and return a Dataset.
        /// </summary>
        /// <param name="con">SqlConnection object</param>
        /// <param name="proc">Declaration of stored procedure</param>
        /// <param name="values">Values to use for stored procedure</param>
        /// <returns>DataSet object</returns>
        protected DataSet ExecuteProcDS(SqlConnection con, SqlProc proc, out SqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            SqlDataAdapter da = new SqlDataAdapter(cmd);
            DataSet ds = new DataSet(proc.Name);

            SqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

            da.Fill(ds);

            e.Param1 = ds;

            HandleAfterSPEvent(cmd, proc, e);

            for (int i = 0; i < ds.Tables.Count; i++)
            {
                ds.Tables[i].TableName = proc.Name + i;
            }
            return ds;
        }
        #endregion

    }
}
