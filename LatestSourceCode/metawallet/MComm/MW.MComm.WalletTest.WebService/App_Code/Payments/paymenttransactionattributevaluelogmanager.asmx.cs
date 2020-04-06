
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
using System.Data;
using System.Diagnostics;
using System.Web;
using System.Web.Services;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using System.IO;
using System.Text;
using MW.MComm.WalletTest.WebService;
using MW.MComm.WalletTest.WebService.Payments;
using BLL = MW.MComm.WalletSolution.BLL;
using MW.MComm.WalletSolution.BLL.Payments;
using MOD.Data;
using Utility = MW.MComm.WalletSolution.Utility;
using Microsoft.Practices.EnterpriseLibrary.ExceptionHandling;
namespace MW.MComm.WalletTest.WebService.Payments
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to manage PaymentTransactionAttributeValueLog related information.</summary>
	///
	/// File History:
	/// <created>1/26/2007 (Dave Clemmer)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public class PaymentTransactionAttributeValueLogManager : System.Web.Services.WebService
	{
		#region "Service Methods"
		// ------------------------------------------------------------------
		/// <summary>This web service method gets all PaymentTransactionAttributeValueLog data.</summary>
		///
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Payments.PaymentTransactionAttributeValueLogResults GetAllPaymentTransactionAttributeValueLogData(string sortColumn, string sortDirection)
		{
			Components.Payments.PaymentTransactionAttributeValueLogResults results = new Components.Payments.PaymentTransactionAttributeValueLogResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				results.Results = BLL.Payments.PaymentTransactionAttributeValueLogManager.GetAllPaymentTransactionAttributeValueLogData(Globals.getDataOptions(sortColumn, sortDirection));
				results.TotalRecords = results.Results.Count;
			}
			catch (System.Exception ex)
			{
				results.StatusCode = -1;
				string exceptionMessage = "";
				System.Exception messageEx = ex;
				while (messageEx != null)
				{
					exceptionMessage += System.Environment.NewLine + messageEx.Message;
					messageEx = messageEx.InnerException;
				}
				results.StatusDescription = exceptionMessage;
			}
			finally
			{
			}
			return results;
		}
		// ------------------------------------------------------------------
		/// <summary>This web service method gets all PaymentTransactionAttributeValueLog data by a key.</summary>
		///
		/// <param name="baseAttributeID">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Payments.PaymentTransactionAttributeValueLogResults GetAllPaymentTransactionAttributeValueLogDataByBaseAttributeID(string baseAttributeID, string sortColumn, string sortDirection)
		{
			Components.Payments.PaymentTransactionAttributeValueLogResults results = new Components.Payments.PaymentTransactionAttributeValueLogResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				results.Results = BLL.Payments.PaymentTransactionAttributeValueLogManager.GetAllPaymentTransactionAttributeValueLogDataByBaseAttributeID(MOD.Data.DataHelper.GetGuid(baseAttributeID, MOD.Data.DefaultValue.Guid), Globals.getDataOptions(sortColumn, sortDirection));
				results.TotalRecords = results.Results.Count;
			}
			catch (System.Exception ex)
			{
				results.StatusCode = -1;
				string exceptionMessage = "";
				System.Exception messageEx = ex;
				while (messageEx != null)
				{
					exceptionMessage += System.Environment.NewLine + messageEx.Message;
					messageEx = messageEx.InnerException;
				}
				results.StatusDescription = exceptionMessage;
			}
			finally
			{
			}
			return results;
		}
		// ------------------------------------------------------------------
		/// <summary>This web service method gets all PaymentTransactionAttributeValueLog data by criteria.</summary>
		///
		/// <param name="attributeValue">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
		/// <param name="lastModifiedDateStart">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
		/// <param name="lastModifiedDateEnd">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Payments.PaymentTransactionAttributeValueLogResults GetAllPaymentTransactionAttributeValueLogDataByCriteria(string attributeValue, string lastModifiedDateStart, string lastModifiedDateEnd, string sortColumn, string sortDirection)
		{
			Components.Payments.PaymentTransactionAttributeValueLogResults results = new Components.Payments.PaymentTransactionAttributeValueLogResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				results.Results = BLL.Payments.PaymentTransactionAttributeValueLogManager.GetAllPaymentTransactionAttributeValueLogDataByCriteria(MOD.Data.SearchHelper.GetString(attributeValue), MOD.Data.SearchHelper.GetDateTime(lastModifiedDateStart), MOD.Data.SearchHelper.GetDateTime(lastModifiedDateEnd), Globals.getDataOptions(sortColumn, sortDirection));
				results.TotalRecords = results.Results.Count;
			}
			catch (System.Exception ex)
			{
				results.StatusCode = -1;
				string exceptionMessage = "";
				System.Exception messageEx = ex;
				while (messageEx != null)
				{
					exceptionMessage += System.Environment.NewLine + messageEx.Message;
					messageEx = messageEx.InnerException;
				}
				results.StatusDescription = exceptionMessage;
			}
			finally
			{
			}
			return results;
		}
		// ------------------------------------------------------------------
		/// <summary>This web service method gets all PaymentTransactionAttributeValueLog data by a key.</summary>
		///
		/// <param name="paymentTransactionLogID">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Payments.PaymentTransactionAttributeValueLogResults GetAllPaymentTransactionAttributeValueLogDataByPaymentTransactionLogID(string paymentTransactionLogID, string sortColumn, string sortDirection)
		{
			Components.Payments.PaymentTransactionAttributeValueLogResults results = new Components.Payments.PaymentTransactionAttributeValueLogResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				results.Results = BLL.Payments.PaymentTransactionAttributeValueLogManager.GetAllPaymentTransactionAttributeValueLogDataByPaymentTransactionLogID(MOD.Data.DataHelper.GetGuid(paymentTransactionLogID, MOD.Data.DefaultValue.Guid), Globals.getDataOptions(sortColumn, sortDirection));
				results.TotalRecords = results.Results.Count;
			}
			catch (System.Exception ex)
			{
				results.StatusCode = -1;
				string exceptionMessage = "";
				System.Exception messageEx = ex;
				while (messageEx != null)
				{
					exceptionMessage += System.Environment.NewLine + messageEx.Message;
					messageEx = messageEx.InnerException;
				}
				results.StatusDescription = exceptionMessage;
			}
			finally
			{
			}
			return results;
		}
		// ------------------------------------------------------------------
		/// <summary>This web service method gets all PaymentTransactionAttributeValueLog data by criteria.</summary>
		///
		/// <param name="attributeValue">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
		/// <param name="lastModifiedDateStart">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
		/// <param name="lastModifiedDateEnd">A key for PaymentTransactionAttributeValueLog items to be fetched</param>
         /// <param name="startIndex">Start Index (beginning at 1)</param>
         /// <param name="pageSize">Page Size</param>
         /// <param name="maximumListSize">Maximum List Size</param>
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Payments.PaymentTransactionAttributeValueLogResults GetManyPaymentTransactionAttributeValueLogDataByCriteria(string attributeValue, string lastModifiedDateStart, string lastModifiedDateEnd, int startIndex, int pageSize, int maximumListSize, string sortColumn, string sortDirection)
		{
			Components.Payments.PaymentTransactionAttributeValueLogResults results = new Components.Payments.PaymentTransactionAttributeValueLogResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				int totalRecords = 0;
				bool maximumListSizeExceeded = false;
				results.Results = BLL.Payments.PaymentTransactionAttributeValueLogManager.GetManyPaymentTransactionAttributeValueLogDataByCriteria(MOD.Data.SearchHelper.GetString(attributeValue), MOD.Data.SearchHelper.GetDateTime(lastModifiedDateStart), MOD.Data.SearchHelper.GetDateTime(lastModifiedDateEnd), out totalRecords, out maximumListSizeExceeded, Globals.getDataOptions(sortColumn, sortDirection, startIndex, pageSize, maximumListSize));
				results.TotalRecords = results.Results.Count;
			}
			catch (System.Exception ex)
			{
				results.StatusCode = -1;
				string exceptionMessage = "";
				System.Exception messageEx = ex;
				while (messageEx != null)
				{
					exceptionMessage += System.Environment.NewLine + messageEx.Message;
					messageEx = messageEx.InnerException;
				}
				results.StatusDescription = exceptionMessage;
			}
			finally
			{
			}
			return results;
		}
		// ------------------------------------------------------------------
		/// <summary>This web service method gets a single PaymentTransactionAttributeValueLog by an index.</summary>
		///
		/// <param name="paymentTransactionAttributeValueLogID">The index for PaymentTransactionAttributeValueLog to be fetched</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Payments.PaymentTransactionAttributeValueLogResults GetOnePaymentTransactionAttributeValueLog(string paymentTransactionAttributeValueLogID, string sortColumn, string sortDirection)
		{
			Components.Payments.PaymentTransactionAttributeValueLogResults results = new Components.Payments.PaymentTransactionAttributeValueLogResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Payments.PaymentTransactionAttributeValueLog item =  BLL.Payments.PaymentTransactionAttributeValueLogManager.GetOnePaymentTransactionAttributeValueLog(MOD.Data.DataHelper.GetGuid(paymentTransactionAttributeValueLogID, MOD.Data.DefaultValue.Guid), Globals.getDataOptions(sortColumn, sortDirection));
				// populate desired collections with lazy loading
				bool isAccessed = true;
				results.Results.Add(item);
			}
			catch (System.Exception ex)
			{
				results.StatusCode = -1;
				string exceptionMessage = "";
				System.Exception messageEx = ex;
				while (messageEx != null)
				{
					exceptionMessage += System.Environment.NewLine + messageEx.Message;
					messageEx = messageEx.InnerException;
				}
				results.StatusDescription = exceptionMessage;
			}
			finally
			{
			}
			return results;
		}
		// ------------------------------------------------------------------
		/// <summary>This web service method logs PaymentTransactionAttributeValueLog data.</summary>
		///
		/// <param name="paymentTransactionAttributeValueLogID">A property of PaymentTransactionAttributeValueLog item to be managed</param>
		/// <param name="paymentTransactionLogID">A property of PaymentTransactionAttributeValueLog item to be managed</param>
		/// <param name="baseAttributeID">A property of PaymentTransactionAttributeValueLog item to be managed</param>
		/// <param name="attributeValue">A property of PaymentTransactionAttributeValueLog item to be managed</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Payments.PaymentTransactionAttributeValueLogResults LogOnePaymentTransactionAttributeValueLog(string paymentTransactionAttributeValueLogID, string paymentTransactionLogID, string baseAttributeID, string attributeValue)
		{
			Components.Payments.PaymentTransactionAttributeValueLogResults results = new Components.Payments.PaymentTransactionAttributeValueLogResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Payments.PaymentTransactionAttributeValueLog item = new BLL.Payments.PaymentTransactionAttributeValueLog();
				item.PaymentTransactionAttributeValueLogID = MOD.Data.DataHelper.GetGuid(paymentTransactionAttributeValueLogID, MOD.Data.DefaultValue.Guid);
				item.PaymentTransactionLogID = MOD.Data.DataHelper.GetGuid(paymentTransactionLogID, MOD.Data.DefaultValue.Guid);
				item.BaseAttributeID = MOD.Data.DataHelper.GetGuid(baseAttributeID, MOD.Data.DefaultValue.Guid);
				item.AttributeValue = attributeValue;
				BLL.Payments.PaymentTransactionAttributeValueLogManager.LogOnePaymentTransactionAttributeValueLog(item, false);
				results.Results.Add(item);
			}
			catch (System.Exception ex)
			{
				results.StatusCode = -1;
				string exceptionMessage = "";
				System.Exception messageEx = ex;
				while (messageEx != null)
				{
					exceptionMessage += System.Environment.NewLine + messageEx.Message;
					messageEx = messageEx.InnerException;
				}
				results.StatusDescription = exceptionMessage;
			}
			finally
			{
			}
			return results;
		}
		#endregion "Service Methods"
		#region "Miscellaneous"
		// ------------------------------------------------------------------------------
		/// <summary>This web service method is the constructor.</summary>
		// ------------------------------------------------------------------------------
		public PaymentTransactionAttributeValueLogManager()
		{
			//
			// constructor logic
			//
			InitializeComponent();
		}
			//Required by the Web Services Designer
			private IContainer components = null;
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
		}
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if(disposing && components != null)
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}
		#endregion "Miscellaneous"
	}
}