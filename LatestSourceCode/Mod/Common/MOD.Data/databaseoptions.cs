using System;
using System.Xml;
using System.Xml.Serialization;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;

namespace MOD.Data
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to hold basic database access properties.</summary>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	[Serializable()]
	public class DatabaseOptions
	{
		#region "Declarations"

		// for ConnectionString property
		private string _connectionString = "";

		// for CommandTimeout property
		private int _commandTimeout = 0;

		// for entities to be used for caching (set by each application)
		public NamedObjectCollection CachedEntities = new NamedObjectCollection();

		#endregion "Declarations"

		#region "Public Properties"


		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the database connection string.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute("")]
		[XmlElementAttribute()]
		public virtual string ConnectionString
		{
			get
			{
				return _connectionString;
			}
			set
			{
				_connectionString = value;
			}
		}
      
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the database command timeout.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(120)]
		[XmlElementAttribute()]
		public virtual int CommandTimeout
		{
			get
			{
				return _commandTimeout;
			}
			set
			{
				_commandTimeout = value;
			}
		}

		#endregion "Public Properties"

		#region "Public Methods"

		/// <summary>
		/// 
		/// </summary>
		/// <param name="type"></param>
		/// <returns>True if type is listed in XML file, false otherwise.</returns>
		public bool IsCacheable(Type type)
		{
			return CachedEntities[type.FullName] != null;
		}
		#endregion "Public Methods"

		#region "Miscellaneous"
		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		// ------------------------------------------------------------------------------
		public DatabaseOptions()
		{
			//
			// constructor logic
			//
		}

        public DatabaseOptions(string connectionString)
        {
            _connectionString = connectionString;
        }
		#endregion "Miscellaneous"

    }
}
