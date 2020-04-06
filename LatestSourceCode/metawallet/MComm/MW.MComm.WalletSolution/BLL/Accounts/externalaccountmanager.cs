
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
using MW.MComm.WalletSolution.BLL.Accounts;
using MOD.Data;
using MW.MComm.WalletSolution.BLL.Config;
using BLL = MW.MComm.WalletSolution.BLL;
using DAL = MW.MComm.WalletSolution.DAL;
using Utility = MW.MComm.WalletSolution.Utility;
using Microsoft.Practices.EnterpriseLibrary.ExceptionHandling;
namespace MW.MComm.WalletSolution.BLL.Accounts
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to manage ExternalAccount related information.</summary>
	///
	/// File History:
	/// <created>1/26/2007 (Dave Clemmer)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public partial class ExternalAccountManager
	{
		#region Constructors
		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		// ------------------------------------------------------------------------------
		public ExternalAccountManager()
		{
			//
			// constructor logic
			//
		}
		#endregion Constructors
		#region Methods
		// ------------------------------------------------------------------
		/// <summary>This method gets a single ExternalAccount by an index.</summary>
		///
		/// <param name="externalAccountNumber">The index for ExternalAccount to be fetched</param>
		/// <param name="dataOptions">Data retrieval options</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.Accounts.ExternalAccount GetOneExternalAccountByBankCodeAndExternalAccountNumber(string externalAccountNumber, MOD.Data.DataOptions dataOptions)
		{
			// perform main method tasks
			return BLL.Accounts.ExternalAccountManager.GetOneExternalAccountByBankCodeAndExternalAccountNumber(externalAccountNumber, BusinessObjectManager.DBOptions, dataOptions, BusinessObjectManager.DebugLevel, BusinessObjectManager.ApplicationUserID);
		}
		// ------------------------------------------------------------------
		/// <summary>This method gets a single ExternalAccount by an index.</summary>
		///
		/// <param name="externalAccountNumber">The index for ExternalAccount to be fetched</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.Accounts.ExternalAccount GetOneExternalAccountByBankCodeAndExternalAccountNumber(string externalAccountNumber)
		{
			// perform main method tasks
			return BLL.Accounts.ExternalAccountManager.GetOneExternalAccountByBankCodeAndExternalAccountNumber(externalAccountNumber, BusinessObjectManager.DBOptions, BusinessObjectManager.DataOptions(), BusinessObjectManager.DebugLevel, BusinessObjectManager.ApplicationUserID);
		}
		// ------------------------------------------------------------------
		/// <summary>This method gets a single ExternalAccount by an index.</summary>
		///
		/// <param name="externalAccountNumber">The index for ExternalAccount to be fetched</param>
		/// <param name="dbOptions">Database connection information</param>
		/// <param name="dataOptions">Data retrieval options</param>
		/// <param name="debugLevel">Debug level on error</param>
		/// <exception cref="CustomAppException">Thrown when an error is encountered in BLL</exception>
		/// <exception cref="System.Exception">Thrown when prior exceptions are thrown</exception>
		// ------------------------------------------------------------------
		public static BLL.Accounts.ExternalAccount GetOneExternalAccountByBankCodeAndExternalAccountNumber(string externalAccountNumber, MOD.Data.DatabaseOptions dbOptions, MOD.Data.DataOptions dataOptions, int debugLevel, Guid currentUserID)
		{
			try
			{
				// perform main method tasks
				Globals.AddRequiredFilterProperties(dataOptions, currentUserID);
				bool useCache = false;
				string key = String.Empty;
				BLL.Accounts.ExternalAccount itemBLL = null;
				if (dbOptions.IsCacheable(typeof(BLL.Accounts.ExternalAccount)) == true && dataOptions.UseCache == true)
				{
					useCache = true;
					key = BLL.Accounts.ExternalAccount.GetCacheKey(typeof(BLL.Accounts.ExternalAccount), "PrimaryKey", externalAccountNumber.ToString());
				}
				if (useCache == true)
				{
					itemBLL = (BLL.Accounts.ExternalAccount)Utility.CacheManager.Cache[key];
				}
				if (itemBLL == null)
				{
					DAL.Accounts.ExternalAccount item = DAL.Accounts.ExternalAccount.GetOneExternalAccountByBankCodeAndExternalAccountNumber(externalAccountNumber, dbOptions, dataOptions, debugLevel);
					if (item != null)
					{
						itemBLL = new BLL.Accounts.ExternalAccount();
						ReflectionHelper.Copy(item, itemBLL, true);
						itemBLL.ClearDirtyState(true);
						itemBLL.IsLoaded = true;
						if (useCache == true)
						{
							Utility.CacheManager.Cache.Add(key, itemBLL);
						}
					}
				}
				return itemBLL;
			}
			catch (System.Exception ex)
			{
				throw Utility.CustomAppException.WrapException(ex, "BLL.Accounts.GetOneExternalAccountByBankCodeAndExternalAccountNumber");
			}
		}
		#endregion Methods
	}
}