using System;
using System.Xml;
using System.Xml.Serialization;
using System.ComponentModel;
using System.Configuration;
using MOD.Data;
using System.Data;
using System.Data.SqlClient;
using System.Threading;

namespace MOD.Data
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to hold basic database access properties.</summary>
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	[Serializable()]
	public class SqlManager
	{
		protected static object s_lock = new object();

		#region "Declarations"

		// for internal debug level (based on application or override debug level)
		protected int _debugLevel = 0;

		// for internal database options (do not overwrite)
		protected DatabaseOptions _dbOptions = null;

		// for internal adapter
		protected SqlProcAdapter _adapter = null;
		
		#endregion "Declarations"

		#region "Public Methods"
		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		// ------------------------------------------------------------------------------
		public SqlManager()
		{
			//
			// constructor logic
			//
		}

		// ------------------------------------------------------------------------------
		/// <summary>This method gets the SQL Proc Adapter.</summary>
		// ------------------------------------------------------------------------------
		public SqlProcAdapter GetAdapter(int debugLevel, DatabaseOptions dbOptions)
		{
			// Validate parameters
			if (dbOptions == null)
                throw( new Exception("DatabaseOptions must be specified"));

			if (dbOptions.ConnectionString == null || dbOptions.ConnectionString == string.Empty)
				throw( new Exception("dbOptions.ConnectionString must be set"));


			_adapter = null;

			_dbOptions = dbOptions;
			_debugLevel = debugLevel;
			
			lock (s_lock)
			{
				_adapter = new SqlProcAdapter(dbOptions.CommandTimeout);
			}

			_adapter.Connection = new SqlConnection(dbOptions.ConnectionString);
			_adapter.Connection.Open();
			
			return _adapter;
		}

		
		// ------------------------------------------------------------------------------
		/// <summary>This method clears the SQL Proc Adapter.</summary>
		// ------------------------------------------------------------------------------
		public void ClearAdapter()
		{
			try	{ _adapter.Connection.Close(); }	catch {}
			try	{ _adapter.Connection.Dispose(); }	catch {}
			_adapter = null;
		}
		#endregion "Public Methods"

	}
}
