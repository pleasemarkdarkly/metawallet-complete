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
    /// The main object used to execute stored procedures.  This class should contain all
    /// the stored procedures that need to be executed.  It also can contain
    /// definitions for how to spit out form elements, but it isn't too useful.
    /// 
    /// TODO : Work on how to make the form element stuff more usefull.
    /// </summary>
    public class MySqlProcAdapter
    {
        /// <summary>
        /// Timeout for stored procedures in seconds.
        /// </summary>
        public int CommandTimeout = 300;

        /// <summary>
        /// Stored procedures used for CRUD services
        /// </summary>
        [XmlElement("Procedure")]
        public MySqlProc[] Procedures;

        [XmlIgnore]
        private static NamedObjectCollection m_collProcedures = new NamedObjectCollection();

        private bool LazyCaching = false;

        /// <summary>
        /// Serializer used to serialize SqlProcAdapters.
        /// </summary>
        public static XmlSerializer Serializer = new XmlSerializer(typeof(MySqlProcAdapter));

        public MySqlProcAdapter()
        {
        }

        public MySqlProcAdapter(int commandTimeout)
        {
            LazyCaching = true;
            CommandTimeout = commandTimeout;
        }

        /// <summary>
        /// Used Deserialize a MySqlProcAdapter from an XmlFile
        /// </summary>
        /// <param name="sFile">The full path to the file to deserialize from</param>
        /// <returns>Returns a new instance of a MySqlProcAdapter</returns>
        public static MySqlProcAdapter Deserialize(string sFile)
        {
            MySqlProcAdapter p = null;
            StreamReader sr = new StreamReader(sFile);
            try
            {
                p = (MySqlProcAdapter)Serializer.Deserialize(sr);
            }
            catch (Exception e)
            {
                sr.Close();
                throw (e);
            }
            sr.Close();
            return p;
        }

        public static MySqlProcAdapter Deserialize(XmlNodeReader io)
        {
            MySqlProcAdapter p = (MySqlProcAdapter)Serializer.Deserialize(io);
            return p;
        }

        /// <summary>
        /// A name for the logical object.
        /// </summary>
        [XmlAttribute]
        public string Name;

        /// <summary>
        /// MySqlConnection to use if non are passed in.  The calls to execute proc
        /// can contain Connection parameters or not.  If it they are not included
        /// then this member should be a valid MySqlConnection object.
        /// </summary>
        [XmlIgnore()]
        public MySqlConnection Connection;

        /// <summary>
        /// Transaction to use if no transactions are passed in.
        /// </summary>
        [XmlIgnore()]
        public MySqlTransaction Transaction;



        /// <summary>
        /// Used internally to through exceptions if no connection is available to fuse.
        /// </summary>
        protected MySqlConnection ConnectionInt
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

        #region MySqlCommand Executes that return DataTable
		/// <summary>
		/// This version creats input values to the stored procedure from the class passed 
		/// in through valueObject and the collection obj.  You must set the Connection,
		/// and Transaction object before using this functon
		/// </summary>
		/// <param name="sName">SP name to execute</param>
		/// <param name="valueObject">Class to use for parameter values</param>
		/// <param name="obj">Collection to use for parameter values</param>
		/// <returns>Result of the execution</returns>
		public DataTable ExecuteProc(MySqlProc proc, IBaseDataAccessObject valueObject, NamedObjectCollection obj)
		{
			MySqlCommand cmd = null;
			object[] values = proc.ValueArrayFromObject(valueObject, obj);
			DataTable dt = ExecuteProc(Connection, proc, out cmd, values);
			CopyOutputParametersToCollection(cmd, obj);

			if (valueObject != null)
				valueObject.ClearDirtyState();

			return dt;
		}

        /// <summary>
        /// This version is used if the stored procedure has already been found.
        /// </summary>
        /// <param name="proc">MySqlProc object to execute.</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        public DataTable ExecuteProc(MySqlProc proc, params object[] values)
        {
            MySqlCommand cmd = null;
            return ExecuteProc(ConnectionInt, proc, out cmd, values);
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
        protected DataTable ExecuteProc(MySqlConnection con, MySqlProc proc, out MySqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            MySqlDataAdapter da = new MySqlDataAdapter(cmd);

            System.Diagnostics.Debug.Write(String.Format("{0} ", DateTime.Now));
            System.Diagnostics.Debug.WriteLine(cmd.CommandText);

            DataTable dt = new DataTable();

            MySqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

            e.Param1 = dt;
            da.Fill(dt);

            HandleAfterSPEvent(cmd, proc, e);

            return dt;
        }
        #endregion

        #region MySqlCommand Executes that return void
		/// <summary>
		/// This version creats input values to the stored procedure from the class passed 
		/// in through valueObject and the collection obj.  You must set the Connection,
		/// and Transaction object before using this functon
		/// </summary>
		/// <param name="sName">SP name to execute</param>
		/// <param name="valueObject">Class to use for parameter values</param>
		/// <param name="obj">Collection to use for parameter values</param>
		/// <returns>Result of the execution</returns>
		public int ExecuteProcNQ(MySqlProc proc, IBaseDataAccessObject valueObject, NamedObjectCollection obj)
		{
			MySqlCommand cmd = null;
			object[] values = proc.ValueArrayFromObject(valueObject, obj);
			int nq = ExecuteProcNQ(Connection, proc, out cmd, values);
			CopyOutputParametersToCollection(cmd, obj);

			if (valueObject != null)
			{
				valueObject.ClearDirtyState();
			}

			return nq;
		}

        /// <summary>
        /// This version is used if the stored procedure has already been found.
        /// </summary>
        /// <param name="proc">MySqlProc object to execute.</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>Result of the execution</returns>
        public int ExecuteProcNQ(MySqlProc proc, params object[] values)
        {
            MySqlCommand cmd = null;
            return ExecuteProcNQ(ConnectionInt, proc, out cmd, values);
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
        protected int ExecuteProcNQ(MySqlConnection con, MySqlProc proc, out MySqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            MySqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

            try
            {
                return cmd.ExecuteNonQuery();
            }
            catch (MySqlException ee)
            {
                // want our hear music app to handle the sql exception
                throw ee;
            }
            catch (Exception ee)
            {
                MySqlExceptionHandler seh = new MySqlExceptionHandler(ee, cmd);
            }
            finally
            {
                HandleAfterSPEvent(cmd, proc, e);
            }

            return -1;
        }
        #endregion


        #region Execute functions returning scalar
        private object GetScalarFromDataReader(MySqlDataReader dr)
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

        public object ExecuteProcScalar(MySqlConnection con, MySqlProc proc, params object[] values)
        {
            MySqlCommand cmd = null;
            return GetScalarFromDataReader(ExecuteProcDR(con, proc, out cmd, values));
        }
        #endregion

        #region Execute functions returning MySqlDataReader

        /// <summary>
        /// Execute a stored procedure and return a MySqlDataReader.  The Command
        /// object will bet set on this function.
        /// </summary>
        /// <param name="con">Connection to use</param>
        /// <param name="proc">Store procedure definition</param>
        /// <param name="values">values for stored procedure execution</param>
        /// <returns>MySqlDataReader</returns>
        public MySqlDataReader ExecuteProcDR(MySqlConnection con, MySqlProc proc, out MySqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            MySqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

            try
            {
                return cmd.ExecuteReader();
            }
            catch (Exception ee)
            {
                MySqlExceptionHandler seh = new MySqlExceptionHandler(ee, cmd);
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
			MySqlProc proc = new MySqlProc(sName);
            MySqlCommand cmd = null;
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
		public DataSet ExecuteProcDS(MySqlProc proc, object valueObject, NamedObjectCollection obj)
		{
			MySqlCommand cmd = null;
			object[] values = proc.ValueArrayFromObject(valueObject, obj);
			DataSet ds = ExecuteProcDS(Connection, proc, out cmd, values);
			CopyOutputParametersToCollection(cmd, obj);
			return ds;
		}
        /// <summary>
        /// DataSet This version is used if the stored procedure has already been found.
        /// </summary>
        /// <param name="proc">MySqlProc object to execute.</param>
        /// <param name="values">Parameter values.  The values must be ordered the same as
        /// the parameters.  Also parameters with Direction output, or return must not
        /// be included in the array.</param>
        /// <returns>DataSet</returns>
        public DataSet ExecuteProcDS(MySqlProc proc, object[] values)
        {
            MySqlCommand cmd = null;
            return ExecuteProcDS(ConnectionInt, proc, out cmd, values);
        }

        private void CopyOutputParametersToCollection(MySqlCommand cmd, NamedObjectCollection obj)
        {
            foreach (MySqlParameter param in cmd.Parameters)
                if (param.Direction != ParameterDirection.Input)
                {
                    if (param.Value != null && param.Value != DBNull.Value)
                    {
                        if (param.ParameterName.StartsWith("__") == true)
                            obj[param.ParameterName.Substring(2)] = param.Value;
                        else
                            obj[param.ParameterName] = param.Value;
                    }
                }
        }

        private MySqlCommand InitializeCommand(MySqlConnection con, MySqlProc proc, object[] values)
        {
            MySqlCommand cmd = proc.CreateCommand(con, values, Transaction);
            cmd.CommandTimeout = CommandTimeout;
            return cmd;
        }

        private MySqlProcEventArg HandleBeforeSPEvent(MySqlCommand cmd, MySqlProc proc)
        {
            MySqlProcEventArg e = new MySqlProcEventArg();
            e.Command = cmd;
            e.SP = proc;
            if (BeforeSPEvent != null)
                BeforeSPEvent(this, e);
            e.Command = null;
            return e;
        }

        private void HandleAfterSPEvent(MySqlCommand cmd, MySqlProc proc, MySqlProcEventArg e)
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
        public delegate void BeforeSPCallHandler(object o, MySqlProcEventArg e);

        /// <summary>
        /// Delegate function for after a stored procedure has been called
        /// </summary>
        public delegate void AfterSPCallHandler(object o, MySqlProcEventArg e);

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
        /// <param name="con">MySqlConnection object</param>
        /// <param name="proc">Declaration of stored procedure</param>
        /// <param name="values">Values to use for stored procedure</param>
        /// <returns>DataSet object</returns>
        protected DataSet ExecuteProcDS(MySqlConnection con, MySqlProc proc, out MySqlCommand cmd, params object[] values)
        {
            cmd = InitializeCommand(con, proc, values);

            MySqlDataAdapter da = new MySqlDataAdapter(cmd);
            DataSet ds = new DataSet(proc.Name);

            MySqlProcEventArg e = HandleBeforeSPEvent(cmd, proc);

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
