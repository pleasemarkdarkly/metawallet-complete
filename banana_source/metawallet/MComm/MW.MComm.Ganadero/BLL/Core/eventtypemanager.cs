

/*<copyright>
Meta Wallet, Inc (c) 2006 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/
using System;
using System.ComponentModel;
using MW.MComm.Ganadero.BLL.Core;
using MOD.Data;
using MW.MComm.Ganadero.BLL.Config;
using BLL = MW.MComm.Ganadero.BLL;
using DAL = MW.MComm.Ganadero.DAL;
using Utility = MW.MComm.Ganadero.Utility;
using Microsoft.Practices.EnterpriseLibrary.ExceptionHandling;

namespace MW.MComm.Ganadero.BLL.Core
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to manage EventType related information.</summary>
	///
	/// File History:
	/// <created>10/20/2006 (Dave Clemmer)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public partial class EventTypeManager
	{

		#region Constructors
		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		// ------------------------------------------------------------------------------
		public EventTypeManager()
		{
			//
			// constructor logic
			//
		}

		#endregion Constructors

		#region Methods

		// ------------------------------------------------------------------------------
		/// <summary>This method loads the EventType from its primary key parameters.</summary>
		// ------------------------------------------------------------------------------
		public static BLL.Core.EventType Load(int eventTypeCode)
		{
			BLL.Core.EventType businessObject = new BLL.Core.EventType(eventTypeCode);
			string key = BLL.Core.EventType.GetCacheKey(typeof(BLL.Core.EventType), "PrimaryKey", businessObject.PrimaryKey);
			businessObject = (BLL.Core.EventType)Utility.CacheManager.Cache[key];
			if (businessObject == null)
			{
				businessObject = BLL.Core.EventTypeManager.GetOneEventType(eventTypeCode);
				Utility.CacheManager.Cache.Add(key, businessObject);
			}
			return businessObject;
		}


		// ------------------------------------------------------------------
		/// <summary>This method inserts EventType data.</summary>
		///
		/// <param name="item">The EventType to be added.</param>
		/// <param name="performCascadeOperation">Peform the upserts of the child entities of the item, if any exist</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static void AddOneEventType(BLL.Core.EventType item, bool performCascadeOperation )
		{
			try
			{
				// perform main method tasks
				// perform enum check
				if (Enum.IsDefined(typeof(EventTypeCode), item.EventTypeCode) == true)
				{
					throw new Utility.CustomAppException(BLL.Core.ErrorNumber.EnumerationAddException, BLL.Core.ErrorManager.GetErrorMessageFromErrorNumber(BLL.Core.ErrorNumber.EnumerationAddException), null);
				}

				item.CreatedByUserID = ConfigurationInterface.CurrentUserID;
				item.LastModifiedByUserID = ConfigurationInterface.CurrentUserID;
				DAL.Core.EventType itemDAL = new DAL.Core.EventType();
				ReflectionHelper.Copy(item, itemDAL, true);
				DAL.Core.EventType.AddOneEventType(itemDAL, performCascadeOperation, ConfigurationInterface.DBOptions, ConfigurationInterface.DebugLevel);
				ReflectionHelper.Copy(itemDAL, item, true);
				item.IsLoaded = true;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.AddOneEventType");
			}
		}



		// ------------------------------------------------------------------
		/// <summary>This method inserts EventType data.</summary>
		///
		/// <param name="item">The EventType to be added.</param>
		/// <param name="performCascadeOperation">Peform the upserts of the child entities of the item, if any exist</param>
		/// <param name="dbOptions">Database connection information</param>
		/// <param name="debugLevel">Debug level on error</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static void AddOneEventType(BLL.Core.EventType item, bool performCascadeOperation , MOD.Data.DatabaseOptions dbOptions, int debugLevel, Guid currentUserID)
		{
			try
			{
				// perform main method tasks
				// perform enum check
				if (Enum.IsDefined(typeof(EventTypeCode), item.EventTypeCode) == true)
				{
					throw new Utility.CustomAppException(BLL.Core.ErrorNumber.EnumerationAddException, BLL.Core.ErrorManager.GetErrorMessageFromErrorNumber(BLL.Core.ErrorNumber.EnumerationAddException), null);
				}

				item.CreatedByUserID = currentUserID;
				item.LastModifiedByUserID = currentUserID;
				DAL.Core.EventType itemDAL = new DAL.Core.EventType();
				ReflectionHelper.Copy(item, itemDAL, true);
				DAL.Core.EventType.AddOneEventType(itemDAL, performCascadeOperation, dbOptions, debugLevel);
				ReflectionHelper.Copy(itemDAL, item, true);
				item.IsLoaded = true;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.AddOneEventType");
			}
		}

		// ------------------------------------------------------------------
		/// <summary>This method deletes EventType data.</summary>
		///
		/// <param name="item">The EventType to be deleted.</param>
		/// <param name="performCascadeOperation">Peform the upserts of the child entities of the item, if any exist</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static void DeleteOneEventType(BLL.Core.EventType item, bool performCascadeOperation )
		{
			try
			{
				// perform main method tasks
				// perform enum check
				if (Enum.IsDefined(typeof(EventTypeCode), item.EventTypeCode) == true)
				{
					throw new Utility.CustomAppException(BLL.Core.ErrorNumber.EnumerationDeleteException, BLL.Core.ErrorManager.GetErrorMessageFromErrorNumber(BLL.Core.ErrorNumber.EnumerationDeleteException), null);
				}

				DAL.Core.EventType itemDAL = new DAL.Core.EventType();
				ReflectionHelper.Copy(item, itemDAL, true);
				DAL.Core.EventType.DeleteOneEventType(itemDAL, performCascadeOperation, ConfigurationInterface.DBOptions, ConfigurationInterface.DebugLevel);
				ReflectionHelper.Copy(itemDAL, item, true);
				item.IsLoaded = false;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.DeleteOneEventType");
			}
		}



		// ------------------------------------------------------------------
		/// <summary>This method deletes EventType data.</summary>
		///
		/// <param name="item">The EventType to be deleted.</param>
		/// <param name="performCascadeOperation">Peform the upserts of the child entities of the item, if any exist</param>
		/// <param name="dbOptions">Database connection information</param>
		/// <param name="debugLevel">Debug level on error</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static void DeleteOneEventType(BLL.Core.EventType item, bool performCascadeOperation , MOD.Data.DatabaseOptions dbOptions, int debugLevel, Guid currentUserID)
		{
			try
			{
				// perform main method tasks
				// perform enum check
				if (Enum.IsDefined(typeof(EventTypeCode), item.EventTypeCode) == true)
				{
					throw new Utility.CustomAppException(BLL.Core.ErrorNumber.EnumerationDeleteException, BLL.Core.ErrorManager.GetErrorMessageFromErrorNumber(BLL.Core.ErrorNumber.EnumerationDeleteException), null);
				}

				DAL.Core.EventType itemDAL = new DAL.Core.EventType();
				ReflectionHelper.Copy(item, itemDAL, true);
				DAL.Core.EventType.DeleteOneEventType(itemDAL, performCascadeOperation, dbOptions, debugLevel);
				ReflectionHelper.Copy(itemDAL, item, true);
				item.IsLoaded = false;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.DeleteOneEventType");
			}
		}

		// ------------------------------------------------------------------
		/// <summary>This method gets all EventType data.</summary>
		///
		/// <param name="dataOptions">Data retrieval options</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.SortableList<BLL.Core.EventType> GetAllEventTypeData(MOD.Data.DataOptions dataOptions)
		{
			try
			{
				// perform main method tasks
				Globals.AddRequiredFilterProperties(dataOptions, ConfigurationInterface.CurrentUserID);
				BLL.SortableList<BLL.Core.EventType> sortableList = new BLL.SortableList<BLL.Core.EventType>(DAL.Core.EventType.GetAllEventTypeData(ConfigurationInterface.DBOptions, dataOptions, ConfigurationInterface.DebugLevel), true, true);
				foreach(BLL.Core.EventType loopObject in sortableList)
				{
					loopObject.IsLoaded = true;
				}
				return sortableList;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.GetAllEventTypeData");
			}
		}



		// ------------------------------------------------------------------
		/// <summary>This method gets all EventType data.</summary>
		///
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.SortableList<BLL.Core.EventType> GetAllEventTypeData()
		{
			try
			{
				// perform main method tasks
				Globals.AddRequiredFilterProperties(ConfigurationInterface.DefaultDataOptions, ConfigurationInterface.CurrentUserID);
				BLL.SortableList<BLL.Core.EventType> sortableList = new BLL.SortableList<BLL.Core.EventType>(DAL.Core.EventType.GetAllEventTypeData(ConfigurationInterface.DBOptions, ConfigurationInterface.DefaultDataOptions, ConfigurationInterface.DebugLevel), true, true);
				foreach(BLL.Core.EventType loopObject in sortableList)
				{
					loopObject.IsLoaded = true;
				}
				return sortableList;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.GetAllEventTypeData");
			}
		}



		// ------------------------------------------------------------------
		/// <summary>This method gets all EventType data.</summary>
		///
		/// <param name="dbOptions">Database connection information</param>
		/// <param name="dataOptions">Data retrieval options</param>
		/// <param name="debugLevel">Debug level on error</param>
		/// <param name="currentUserID">ID of the current user for authentication and auditing</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.SortableList<BLL.Core.EventType> GetAllEventTypeData(MOD.Data.DatabaseOptions dbOptions, MOD.Data.DataOptions dataOptions, int debugLevel, Guid currentUserID)
		{
			try
			{
				// perform main method tasks
				Globals.AddRequiredFilterProperties(dataOptions, currentUserID);
				BLL.SortableList<BLL.Core.EventType> sortableList = new BLL.SortableList<BLL.Core.EventType>(DAL.Core.EventType.GetAllEventTypeData(dbOptions, dataOptions, debugLevel), true, true);
				foreach(BLL.Core.EventType loopObject in sortableList)
				{
					loopObject.IsLoaded = true;
				}
				return sortableList;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.GetAllEventTypeData");
			}
		}

		// ------------------------------------------------------------------
		/// <summary>This method gets a single EventType by an index.</summary>
		///
		/// <param name="eventTypeCode">The index for EventType to be fetched</param>
		/// <param name="dataOptions">Data retrieval options</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.Core.EventType GetOneEventType(int eventTypeCode, MOD.Data.DataOptions dataOptions)
		{
			try
			{
				// perform main method tasks
				Globals.AddRequiredFilterProperties(dataOptions, ConfigurationInterface.CurrentUserID);
				DAL.Core.EventType item = null;
				item = DAL.Core.EventType.GetOneEventType(eventTypeCode, ConfigurationInterface.DBOptions, dataOptions, ConfigurationInterface.DebugLevel);
				BLL.Core.EventType itemBLL = null;
				if (item != null)
				{
					itemBLL = new BLL.Core.EventType();
					ReflectionHelper.Copy(item, itemBLL, true);
					itemBLL.ClearDirtyState(true);
					itemBLL.IsLoaded = true;
				}
				return itemBLL;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.GetOneEventType");
			}
		}



		// ------------------------------------------------------------------
		/// <summary>This method gets a single EventType by an index.</summary>
		///
		/// <param name="eventTypeCode">The index for EventType to be fetched</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.Core.EventType GetOneEventType(int eventTypeCode)
		{
			try
			{
				// perform main method tasks
				Globals.AddRequiredFilterProperties(ConfigurationInterface.DefaultDataOptions, ConfigurationInterface.CurrentUserID);
				DAL.Core.EventType item = null;
				item = DAL.Core.EventType.GetOneEventType(eventTypeCode, ConfigurationInterface.DBOptions, ConfigurationInterface.DefaultDataOptions, ConfigurationInterface.DebugLevel);
				BLL.Core.EventType itemBLL = null;
				if (item != null)
				{
					itemBLL = new BLL.Core.EventType();
					ReflectionHelper.Copy(item, itemBLL, true);
					itemBLL.ClearDirtyState(true);
					itemBLL.IsLoaded = true;
				}
				return itemBLL;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.GetOneEventType");
			}
		}



		// ------------------------------------------------------------------
		/// <summary>This method gets a single EventType by an index.</summary>
		///
		/// <param name="eventTypeCode">The index for EventType to be fetched</param>
		/// <param name="dbOptions">Database connection information</param>
		/// <param name="dataOptions">Data retrieval options</param>
		/// <param name="debugLevel">Debug level on error</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.Core.EventType GetOneEventType(int eventTypeCode, MOD.Data.DatabaseOptions dbOptions, MOD.Data.DataOptions dataOptions, int debugLevel, Guid currentUserID)
		{
			try
			{
				// perform main method tasks
				Globals.AddRequiredFilterProperties(dataOptions, currentUserID);
				DAL.Core.EventType item = null;
				item = DAL.Core.EventType.GetOneEventType(eventTypeCode, dbOptions, dataOptions, debugLevel);
				BLL.Core.EventType itemBLL = null;
				if (item != null)
				{
					itemBLL = new BLL.Core.EventType();
					ReflectionHelper.Copy(item, itemBLL, true);
					itemBLL.ClearDirtyState(true);
					itemBLL.IsLoaded = true;
				}
				return itemBLL;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.GetOneEventType");
			}
		}

		// ------------------------------------------------------------------
		/// <summary>This method updates EventType data.</summary>
		///
		/// <param name="item">The EventType to be updated.</param>
		/// <param name="performCascadeOperation">Peform the upserts of the child entities of the item, if any exist</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static void UpdateOneEventType(BLL.Core.EventType item, bool performCascadeOperation )
		{
			try
			{
				// perform main method tasks
				item.CreatedByUserID = ConfigurationInterface.CurrentUserID;
				item.LastModifiedByUserID = ConfigurationInterface.CurrentUserID;
				DAL.Core.EventType itemDAL = new DAL.Core.EventType();
				ReflectionHelper.Copy(item, itemDAL, true);
				DAL.Core.EventType.UpdateOneEventType(itemDAL, performCascadeOperation, ConfigurationInterface.DBOptions, ConfigurationInterface.DebugLevel);
				ReflectionHelper.Copy(itemDAL, item, true);
				item.IsLoaded = true;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.UpdateOneEventType");
			}
		}



		// ------------------------------------------------------------------
		/// <summary>This method updates EventType data.</summary>
		///
		/// <param name="item">The EventType to be updated.</param>
		/// <param name="performCascadeOperation">Peform the upserts of the child entities of the item, if any exist</param>
		/// <param name="dbOptions">Database connection information</param>
		/// <param name="debugLevel">Debug level on error</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static void UpdateOneEventType(BLL.Core.EventType item, bool performCascadeOperation , MOD.Data.DatabaseOptions dbOptions, int debugLevel, Guid currentUserID)
		{
			try
			{
				// perform main method tasks
				item.CreatedByUserID = currentUserID;
				item.LastModifiedByUserID = currentUserID;
				DAL.Core.EventType itemDAL = new DAL.Core.EventType();
				ReflectionHelper.Copy(item, itemDAL, true);
				DAL.Core.EventType.UpdateOneEventType(itemDAL, performCascadeOperation, dbOptions, debugLevel);
				ReflectionHelper.Copy(itemDAL, item, true);
				item.IsLoaded = true;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Core.UpdateOneEventType");
			}
		}
		#endregion Methods
	}
}