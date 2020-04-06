
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
using MW.MComm.WalletSolution.WebService;
using MW.MComm.WalletSolution.WebService.Promotions;
using BLL = MW.MComm.WalletSolution.BLL;
using MW.MComm.WalletSolution.BLL.Promotions;
using MOD.Data;
using Utility = MW.MComm.WalletSolution.Utility;
using Microsoft.Practices.EnterpriseLibrary.ExceptionHandling;
namespace MW.MComm.WalletSolution.WebService.Promotions
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to manage PromotionCoupon related information.</summary>
	///
	/// File History:
	/// <created>1/26/2007 (Dave Clemmer)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public class PromotionCouponManager : System.Web.Services.WebService
	{
		#region "Service Methods"
		// ------------------------------------------------------------------
		/// <summary>This web service method inserts PromotionCoupon data.</summary>
		///
		/// <param name="item">The PromotionCoupon to be managed.</param>
		/// <param name="performCascadeOperation">Flag, indicating if a cascade operation should be performed on the PromotionCoupon item.</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults AddOnePromotionCoupon(BLL.Promotions.PromotionCoupon item, bool performCascadeOperation)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Promotions.PromotionCouponManager.AddOnePromotionCoupon(item, performCascadeOperation);
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
		/// <summary>This web service method deletes all PromotionCoupon data by a key.</summary>
		///
		/// <param name="couponCode">A key for PromotionCoupon items to be deleted</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults DeleteAllPromotionCouponDataByCouponCode(int couponCode)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Promotions.PromotionCouponManager.DeleteAllPromotionCouponDataByCouponCode(couponCode);
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
		/// <summary>This web service method deletes all PromotionCoupon data by a key.</summary>
		///
		/// <param name="promotionCode">A key for PromotionCoupon items to be deleted</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults DeleteAllPromotionCouponDataByPromotionCode(int promotionCode)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Promotions.PromotionCouponManager.DeleteAllPromotionCouponDataByPromotionCode(promotionCode);
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
		/// <summary>This web service method deletes PromotionCoupon data.</summary>
		///
		/// <param name="item">The PromotionCoupon to be deleted.</param>
		/// <param name="performCascadeOperation">Flag, indicating if a cascade delete should be performed on the PromotionCoupon item.</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults DeleteOnePromotionCoupon(BLL.Promotions.PromotionCoupon item, bool performCascadeOperation)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Promotions.PromotionCouponManager.DeleteOnePromotionCoupon(item, performCascadeOperation);
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
		/// <summary>This web service method gets all PromotionCoupon data.</summary>
		///
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults GetAllPromotionCouponData(string sortColumn, string sortDirection)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				results.Results = BLL.Promotions.PromotionCouponManager.GetAllPromotionCouponData(Globals.getDataOptions(sortColumn, sortDirection));
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
		/// <summary>This web service method gets all PromotionCoupon data by a key.</summary>
		///
		/// <param name="couponCode">A key for PromotionCoupon items to be fetched</param>
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults GetAllPromotionCouponDataByCouponCode(string couponCode, string sortColumn, string sortDirection)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				results.Results = BLL.Promotions.PromotionCouponManager.GetAllPromotionCouponDataByCouponCode(MOD.Data.DataHelper.GetInt(couponCode, MOD.Data.DefaultValue.Int), Globals.getDataOptions(sortColumn, sortDirection));
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
		/// <summary>This web service method gets all PromotionCoupon data by a key.</summary>
		///
		/// <param name="promotionCode">A key for PromotionCoupon items to be fetched</param>
        /// <param name="sortColumn">Column to sort list data by</param>
         /// <param name="sortDirection">Sort direction (ascending or descending)</param>
		/// <param name="debugLevel">Debug level on error</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults GetAllPromotionCouponDataByPromotionCode(string promotionCode, string sortColumn, string sortDirection)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				results.Results = BLL.Promotions.PromotionCouponManager.GetAllPromotionCouponDataByPromotionCode(MOD.Data.DataHelper.GetInt(promotionCode, MOD.Data.DefaultValue.Int), Globals.getDataOptions(sortColumn, sortDirection));
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
		/// <summary>This web service method gets a single PromotionCoupon by an index.</summary>
		///
		/// <param name="promotionCode">The index for PromotionCoupon to be fetched</param>
		/// <param name="couponCode">The index for PromotionCoupon to be fetched</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults GetOnePromotionCoupon(int promotionCode, int couponCode, string sortColumn, string sortDirection)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Promotions.PromotionCoupon item =  BLL.Promotions.PromotionCouponManager.GetOnePromotionCoupon(MOD.Data.DataHelper.GetInt(promotionCode, MOD.Data.DefaultValue.Int), MOD.Data.DataHelper.GetInt(couponCode, MOD.Data.DefaultValue.Int), Globals.getDataOptions(sortColumn, sortDirection));
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
		/// <summary>This web service method updates PromotionCoupon data.</summary>
		///
		/// <param name="item">The PromotionCoupon to be managed.</param>
		/// <param name="performCascadeOperation">Flag, indicating if a cascade operation should be performed on the PromotionCoupon item.</param>
		// ------------------------------------------------------------------
		[WebMethod]
		public Components.Promotions.PromotionCouponResults UpdateOnePromotionCoupon(BLL.Promotions.PromotionCoupon item, bool performCascadeOperation)
		{
			Components.Promotions.PromotionCouponResults results = new Components.Promotions.PromotionCouponResults();
			results.StatusDescription = "Results OK";
			try
			{
				// perform main method tasks
				BLL.Promotions.PromotionCouponManager.UpdateOnePromotionCoupon(item, performCascadeOperation);
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
		public PromotionCouponManager()
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