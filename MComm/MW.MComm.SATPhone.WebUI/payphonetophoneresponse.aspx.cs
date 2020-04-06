
/*<copyright>
	MOD Systems, Inc (c) 2006 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/
using System;
using System.Collections;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Web;
using System.Web.SessionState;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;
using System.Diagnostics;
using MOD.Data;
using MW.MComm.WalletSolution.BLL.Accounts;
using MW.MComm.WalletSolution.BLL.Accounts;
using BLL = MW.MComm.WalletSolution.BLL;
using Utility = MW.MComm.WalletSolution.Utility;
using MW.MComm.WalletSolution.MComm.Nuevatel.CustomerManager;

namespace MW.MComm.SATPhone.WebUI
{

	// ------------------------------------------------------------------------------
	/// <summary>This page contains Edit Account controls for managing Account information.</summary>
	///
	/// File History:
	/// <created>9/1/2006 (Dave Clemmer)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public partial class PayPhoneToPhone : System.Web.UI.Page
	{
	
		// ------------------------------------------------------------------------------
		/// <summary>Load page for managing Account.</summary>
		///
		// ------------------------------------------------------------------------------
		private void Page_Load(object sender, System.EventArgs e)
		{
			this.Response.ContentType = "text/xml";
			if (this.IsPostBack == false)
			{
				int localeCode = (int)BLL.Environments.LocaleCode.SpanishBolivia;
				string fromPhone = Request.Form.Get("Origen");
				string toPhone = Request.Form.Get("Destino");
				string amount = Request.Form.Get("Monto");

				try
				{
					//EventLog.WriteEntry("MW.MComm.SATPhone.WebUI", "PayPhoneToPhoneResponse.PageLoad:Origen(" + fromPhone + ")Destino(" + toPhone + ")Monto(" + amount + ")");
					// validate
					txtStatus.Text = "";
					if (fromPhone == null || fromPhone == string.Empty || toPhone == null || toPhone == string.Empty || amount == null || amount == string.Empty)
					{
						txtStatus.Text = "Could not process request.";
					}
					else
					{

						// initiate order and send notice to sender
						BLL.Orders.Order order = BLL.Orders.OrderManager.InitiateOrder(fromPhone, null, toPhone, null, decimal.Parse(amount), (int)BLL.Accounts.CurrencyCode.Bolivianos, "testing");
						localeCode = order.DebitMetaPartner.LocaleCode;

						// send notification
						MOD.Data.NamedObjectCollection eventData = BLL.Notifications.NotificationGenerator.SendNotificationsForOrderEvent(BLL.Events.EventCode.PaymentInitiated, order, order.DebitMetaPartner, null, Globals.MailServer, Globals.MailSenderEmail, Globals.SMSSenderPhone);

						MW.MComm.WalletSolution.MComm.SMS.RequestApproval.requestAproval s_RequestApproval = new MW.MComm.WalletSolution.MComm.SMS.RequestApproval.requestAproval();
						s_RequestApproval.Credentials = System.Net.CredentialCache.DefaultCredentials;
						string requestResponse = s_RequestApproval.getAprovalAndPin(order.OrderID.ToString(), fromPhone);

						txtStatus.Text += "\r\nAn order of " + amount + " " + order.Currency.CurrencyName + " was initiated from " + fromPhone + " to " + toPhone + " (order ID is: " + order.OrderID.ToString() + ")" + requestResponse + ".";
					}
				}
				catch (Utility.CustomAppException ex)
				{
					if (ex.SeverityLevel != BLL.Core.SeverityLevelCode.None && ex.SeverityLevel != BLL.Core.SeverityLevelCode.OK)
					{
						Utility.CustomAppException.HandleException(ex);
					}
					txtStatus.Text += BLL.UserExperience.FriendlyErrorManager.GetFriendlyErrorMessage(ex.ErrorNumber, localeCode);
				}
				catch (System.Exception ex)
				{
					Utility.CustomAppException.HandleException(ex);
					txtStatus.Text += BLL.Core.ErrorManager.GetErrorMessageFromException(ex, localeCode, false);
				}
			}
		}

		#region Web Form Designer generated code
		override protected void OnInit(EventArgs e)
		{
			//
			// CODEGEN: This call is required by the ASP.NET Web Form Designer.
			//
			InitializeComponent();
			base.OnInit(e);
		}
		
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{	
			this.Load += new System.EventHandler(this.Page_Load);
		}
		#endregion
	}
}