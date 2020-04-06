
/*<copyright>
Meta Wallet, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/
using System;
using System.Collections;
using System.Collections.Specialized;
using System.Data;
using System.Drawing;
using System.Web;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;
using MOD.Data;
using BLL = MW.MComm.WalletSolution.BLL;
using MW.MComm.WalletSolution.BLL.Environments;
using CoreUtility = MW.MComm.WalletSolution.Utility;
using MW.MComm.Admin.WebUI.Components.Desktop;
namespace MW.MComm.Admin.WebUI.UserControls.Desktop.Environments
{
	// ------------------------------------------------------------------------------
	/// <summary>Edit Date Format is used to help manage DateFormat information.</summary>
	///
	/// File History:
	/// <created>6/1/2007 (Chris Grundy)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public partial class EditDateFormat  : Components.Desktop.BaseFormlUserControl
	{
		#region Events
		/// <summary>
		/// Raised when "Add" button is clicked in internal mode.
		/// Container handles this event and adds entity to collection.
		/// </summary>
		public event EntityEditEventHandler DateFormatAdded;
		/// <summary>
		/// Raised when "Remove" button is clicked in internal mode.
		/// Container handles this event and removes entity from collection.
		/// </summary>
		public event EntityEditEventHandler DateFormatRemoved;
		#endregion Events
		#region Declarations
		#endregion Declarations
		#region Properties
		/// <summary>
		/// The DateFormat currently being edited by this control.
		/// Get accessor casts base._entity to DateFormat
		/// Set accessor used by parent control to set the item currently being edited
		/// </summary>
		public BLL.Environments.DateFormat DateFormatItem
		{
			get
			{
				return (BLL.Environments.DateFormat) _entity;
			}
			set
			{
				_entity = value; // only set by container
				Session["DateFormatItem"] = _entity;
			}
		}
		#endregion Properties
		#region Event Handlers
		// ------------------------------------------------------------------------------
		/// <summary>Load page for editing Date Format, getting mode and parameters.</summary>
		///
		// ------------------------------------------------------------------------------
		private void Page_Load(object sender, System.EventArgs e)
		{
			try
			{
				base.OnLoad();
				if (IsPostBack == true)
				{
					// entity may come from session, or be set by container
					if (_entity == null)
					{
						_entity = (BLL.Environments.DateFormat)Session["DateFormatItem"];
					}
					if (WorkflowMode == WorkflowMode.External)
					{
						CopyFormToEntity(); // apply changes to object
					}
				}
				else
				{
					if (Request.QueryString["SaveMessages"] == null)
					{
						Globals.ClearMessages();
					}
					SetTitle(); // from query string
					if (WorkflowMode == WorkflowMode.External)
					{
						LoadEntity();
					}
					
					if (_entity == null)
					{
						CreateNewEntity();
					}
					
					// update entity in session
					Session["DateFormatItem"] = _entity;
				}
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.Page_Load"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Delete Date Format.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnDelete_Click(object sender, EventArgs e)
		{
			bool doRedirect = true;
			try
			{
				Globals.ClearMessages();
				if (WorkflowMode == WorkflowMode.External)
				{
					bool performCascade = true;
					BLL.Environments.DateFormatManager.DeleteOneDateFormat(DateFormatItem, performCascade);
					Globals.AddStatusMessage("Date Format deleted.");
				}
				else
				{
					// raise event so item is removed from collection
					if (DateFormatRemoved != null)
					{
						DateFormatRemoved(this, new EntityEditEventArgs(_entity));
					}
				}
				// create new object and store it in _entity
				CreateNewEntity();
				Session["DateFormatItem"] = _entity;
				CurrentSection = "Basics";
				sectionLinks.CurrentSection = "Basics";
				SetAccessModeAndDisplay(MOD.Data.AccessMode.Add);
			}
			catch (CoreUtility.CustomAppException ex)
			{
				doRedirect = false;
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				doRedirect = false;
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.btnDelete_Click"));
			}
			finally
			{
			}
			if (doRedirect == true && WorkflowMode == MOD.Data.WorkflowMode.External)
			{
				NameValueCollection queryString = new NameValueCollection();
				queryString.Add("DateFormatCode", MOD.Data.DataHelper.GetString(MOD.Data.DefaultValue.Int, ""));
				queryString.Add("mode", MOD.Data.AccessMode.Add.ToString());
				queryString.Add("SaveMessages", "true");
				Response.Redirect(GetPageUrl(queryString, true, false));
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Request to create a new Date Format.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnNew_Click(object sender, EventArgs e)
		{
			bool doRedirect = true;
			try
			{
				Globals.ClearMessages();
				// create new object and store it in _entity
				CreateNewEntity();
				Session["DateFormatItem"] = _entity;
				this.sectionLinks.OnSection("Basics");
				SetAccessModeAndDisplay(MOD.Data.AccessMode.Add);
				Globals.AddStatusMessage("Add new Date Format.");
			}
			catch (CoreUtility.CustomAppException ex)
			{
				doRedirect = false;
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				doRedirect = false;
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.btnNew_Click"));
			}
			finally
			{
			}
			if (doRedirect == true && WorkflowMode == MOD.Data.WorkflowMode.External)
			{
				NameValueCollection queryString = new NameValueCollection();
				queryString.Add("DateFormatCode", MOD.Data.DataHelper.GetString(MOD.Data.DefaultValue.Int, ""));
				queryString.Add("mode", MOD.Data.AccessMode.Add.ToString());
				queryString.Add("SaveMessages", "true");
				Response.Redirect(GetPageUrl(queryString, true, false));
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Reset form for Date Format.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnReset_Click(object sender, EventArgs e)
		{
			try
			{
				Globals.ClearMessages();
				// reset data in the form
				if (WorkflowMode == WorkflowMode.External)
				{
					LoadEntity();
					if (_entity == null)
					{
						CreateNewEntity();
					}
					Session["DateFormatItem"] = _entity;
					sectionLinks.CurrentSection = "Basics";
				}
				else
				{
					CreateNewEntity();
				}
				Globals.AddStatusMessage("Date Format reset.");
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.btnReset_Click"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Save Date Format.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnSave_Click(object sender, EventArgs e)
		{
			bool doRedirect = true;
			bool isValid = true;
			try
			{
				Globals.ClearMessages();
				if (WorkflowMode == WorkflowMode.Internal)
				{
					// copy form values to _entity properties
					CopyFormToEntity();
				}
				if (btnSave.CausesValidation == true)
				{
					Page.Validate();
					isValid = Page.IsValid;
				}
				if (isValid == true)
				{
					if (WorkflowMode == WorkflowMode.Internal)
					{
						if (AccessMode == MOD.Data.AccessMode.Add)
						{
							if (DateFormatAdded != null && (DateFormatItem.DateFormatCode != MOD.Data.DefaultValue.Int || DateFormatItem.DateFormatName != MOD.Data.DefaultValue.String || DateFormatItem.DataFormatString != MOD.Data.DefaultValue.String || DateFormatItem.Description != MOD.Data.DefaultValue.String || DateFormatItem.IsActive != MOD.Data.DefaultValue.Bool || DateFormatItem.CreatedByUserID != MOD.Data.DefaultValue.Guid || DateFormatItem.CreatedDate != MOD.Data.DefaultValue.DateTime || DateFormatItem.LastModifiedByUserID != MOD.Data.DefaultValue.Guid || DateFormatItem.LastModifiedDate != MOD.Data.DefaultValue.DateTime || DateFormatItem.Timestamp != null))
							{
								DateFormatAdded(this, new EntityEditEventArgs(_entity));
								// create new object and store it in _entity
								CreateNewEntity();
								Session["DateFormatItem"] = _entity;
								this.sectionLinks.OnSection("Basics");
								SetAccessModeAndDisplay(MOD.Data.AccessMode.Add);
							}
						}
						else
						{
							Globals.AddStatusMessage("Date Format updated.");
						}
					}
					else
					{
						UpsertToDatabase(true);
						if (AccessMode == MOD.Data.AccessMode.Add)
						{
							doRedirect = true;
							Globals.AddStatusMessage("Date Format added.");
						}
						else
						{
							Globals.AddStatusMessage("Date Format updated.");
						}
						SetAccessModeAndDisplay(MOD.Data.AccessMode.Edit);
					}
				}
				else
				{
					Globals.AddErrorMessage(Page, "Date Format validation failed.");
				}
			}
			catch (CoreUtility.CustomAppException ex)
			{
				doRedirect = false;
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				doRedirect = false;
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.btnSave_Click"));
			}
			finally
			{
			}
			if (doRedirect == true && isValid == true && WorkflowMode == MOD.Data.WorkflowMode.External)
			{
				NameValueCollection queryString = new NameValueCollection();
				queryString.Add("DateFormatCode", DateFormatItem.DateFormatCode.ToString());
				queryString.Add("mode", MOD.Data.AccessMode.Edit.ToString());
				queryString.Add("SaveMessages", "true");
				if (sectionLinks.CurrentSection != "")
				{
					queryString.Add("currentsection", sectionLinks.CurrentSection);
					Response.Redirect(GetPageUrl(queryString, true, true));
				}
				else
				{
					Response.Redirect(GetPageUrl(queryString, true, false));
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Go to basics tab.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnBasics_Click(object sender, EventArgs e)
		{
			try
			{
				Globals.ClearMessages();
				sectionLinks.OnSection("Basics");
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.btnBasics_Click"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Move to the previous section.
		/// </summary>
		// ------------------------------------------------------------------------------
		private void btnPrevious_Click(object sender, EventArgs e)
		{
			try
			{
				Globals.ClearMessages();
				sectionLinks.OnPrevious();
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.btnBasics_Click"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Move the next section.
		/// </summary>
		// ------------------------------------------------------------------------------
		private void btnNext_Click(object sender, EventArgs e)
		{
			try
			{
				Globals.ClearMessages();
				sectionLinks.OnNext();
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.btnBasics_Click"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Pre render control.
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		// ------------------------------------------------------------------------------
		private void Page_PreRender(object sender, EventArgs e)
		{
			try
			{
				SetAccessModeAndDisplay(AccessMode);
				base.OnPreRender();
				CopyEntityToForm();
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "EditDateFormat.Page_PreRender"));
			}
			finally
			{
			}
		}
		#endregion Event Handlers
		#region Methods
		// ------------------------------------------------------------------------------
		/// <summary>Set the title area.</summary>
		///
		// ------------------------------------------------------------------------------
		private void SetTitle()
		{
			if (Request.QueryString.Get("message") != null && Request.QueryString.Get("message") != "")
			{
				lblTitleMessage.Text = "(" + Request.QueryString.Get("message").Trim() + ")";
			}
			else
			{
				lblTitleMessage.Text = "";
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Create a new Date Format object reference
		/// </summary>
		/// <returns></returns>
		// ------------------------------------------------------------------------------
		protected void CreateNewEntity()
		{
			BLL.Environments.DateFormat vDateFormat = new BLL.Environments.DateFormat();
			vDateFormat.DateFormatCode = MOD.Data.DataHelper.GetInt(Request.QueryString["DateFormatCode"], MOD.Data.DefaultValue.Int);
			_entity = vDateFormat;
		}
		// ------------------------------------------------------------------------------
		/// <summary>Update form from Date Format information.</summary>
		///
		// ------------------------------------------------------------------------------
		private void CopyEntityToForm()
		{
			BLL.Environments.DateFormat vDateFormat = DateFormatItem;
			txtDateFormatCode.Text = MOD.Data.EditHelper.GetInt(vDateFormat.DateFormatCode);
			txtDateFormatName.Text = MOD.Data.EditHelper.GetString(vDateFormat.DateFormatName);
			txtDataFormatString.Text = MOD.Data.EditHelper.GetString(vDateFormat.DataFormatString);
			txtDescription.Text = MOD.Data.EditHelper.GetString(vDateFormat.Description);
			chkIsActive.Checked = MOD.Data.DataHelper.GetBool(vDateFormat.IsActive, MOD.Data.DefaultValue.Bool);
			// Drop downs should be disabled when control is "Internal" and either value is constrained by container
			if (WorkflowMode == WorkflowMode.Internal)
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Set Date Format information from the form.</summary>
		///
		// ------------------------------------------------------------------------------
		private void CopyFormToEntity()
		{
			BLL.Environments.DateFormat vDateFormat = DateFormatItem;
			if (vDateFormat == null)
			{
				throw CoreUtility.CustomAppException.WrapException(new Exception("Date Format not found"), "EditDateFormat.CopyFormToEntity()");
			}
			try
			{
				vDateFormat.DateFormatCode = MOD.Data.DataHelper.GetInt(txtDateFormatCode.Text, MOD.Data.DefaultValue.Int);
			}
			catch {}
			vDateFormat.DateFormatName = EditHelper.EncodeStringForDB(MOD.Data.DataHelper.GetString(txtDateFormatName.Text, null));
			vDateFormat.DataFormatString = EditHelper.EncodeStringForDB(MOD.Data.DataHelper.GetString(txtDataFormatString.Text, null));
			vDateFormat.Description = EditHelper.EncodeStringForDB(MOD.Data.DataHelper.GetString(txtDescription.Text, null));
			vDateFormat.IsActive = chkIsActive.Checked;
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Load entity from database, store in _entity and Session["DateFormatItem"]
		/// </summary>
		/// <returns></returns>
		// ------------------------------------------------------------------------------
		protected void LoadEntity()
		{
			_entity = null;
			int dateFormatCode = MOD.Data.DataHelper.GetInt(Request.QueryString["DateFormatCode"], MOD.Data.DefaultValue.Int);
			if (dateFormatCode != MOD.Data.DefaultValue.Int)
			{
				_entity = BLL.Environments.DateFormatManager.GetOneDateFormat(dateFormatCode, Globals.getDataOptions("", "", true, true));
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Update Date Format information in the database.</summary>
		///
		// ------------------------------------------------------------------------------
		private void UpsertToDatabase(bool performCascade)
		{
			BLL.Environments.DateFormat vDateFormat = DateFormatItem;
			if (AccessMode == MOD.Data.AccessMode.Add)
			{
				BLL.Environments.DateFormatManager.AddOneDateFormat(vDateFormat, performCascade);
			}
			else if (AccessMode == MOD.Data.AccessMode.Edit)
			{
				BLL.Environments.DateFormatManager.UpdateOneDateFormat(vDateFormat, performCascade);
			}
			DateFormatItem.DateFormatCode = vDateFormat.DateFormatCode;
		}
		// ------------------------------------------------------------------------------
		/// <summary>Set access and display modes for presenting Date Format information.</summary>
		///
		// ------------------------------------------------------------------------------
		private void SetAccessModeAndDisplay(MOD.Data.AccessMode accessMode)
		{
			// set access mode
			AccessMode = accessMode;
			// set access mode display
			switch (AccessMode)
			{
				case MOD.Data.AccessMode.Add:
					lblTitle.Text = "Add Date&nbsp;Format";
					btnSave.Text = "Add";
					break;
				case MOD.Data.AccessMode.Edit:
					lblTitle.Text = "Edit Date&nbsp;Format";
					btnSave.Text = "Save";
					break;
				case MOD.Data.AccessMode.View:
					lblTitle.Text = "View Date&nbsp;Format";
					break;
				default:
					lblTitle.Text = "View Date&nbsp;Format";
					break;
			}
			btnDelete.Visible = IsDeleteAvailable;
			btnNew.Visible = IsEditAvailable;
			btnSave.Visible = IsEditAvailable || IsAddAvailable;
			txtDateFormatCode.Enabled = IsAddAvailable;
			// set workflow display
			if (WorkflowMode == MOD.Data.WorkflowMode.Internal)
			{
				btnDelete.Text = "Remove";
				btnReset.Visible = false;
			}
			else
			{
				btnDelete.Text = "Delete";
				btnReset.Visible = IsEditAvailable || IsAddAvailable;
			}
			// set display mode display
			if (DisplayMode == DisplayMode.TabbedView)
			{
				Section_Additional_Info.Visible = true;
				Section_Basics.Visible = true;
				this.ItemInfo.Visible = true;
				this.DetailNavigation.Visible = true;
				this.ItemInfoContent.Visible = true;
				this.SectionLinkContent.Visible = true;
				this.ButtonsInfo.Visible = true;
				this.btnBasics.Visible = false; //!sectionLinks.IsOnFirstTab;
				this.btnPrevious.Visible = !sectionLinks.IsOnFirstTab;
				this.btnNext.Visible = !sectionLinks.IsOnLastTab;
				this.btnPrevious.CausesValidation = false;
				this.btnNext.CausesValidation = false;
				this.btnBasics.CausesValidation = false;
				this.btnSave.CausesValidation = false;
				foreach (string section in sectionLinks.ValidationList.Split(','))
				{
					if (section == sectionLinks.CurrentSection)
					{
						this.btnPrevious.CausesValidation = true;
						this.btnNext.CausesValidation = true;
						this.btnBasics.CausesValidation = false; //true;
						this.btnSave.CausesValidation = true;
						break;
					}
				}
			}
			else
			{
				sectionLinks.SectionList = "";
				sectionLinks.Visible = false;
				Section_Additional_Info.Visible = true;
				Section_Basics.Visible = true;
				this.ButtonsInfo.Visible = true;
				this.ItemInfo.Visible = false;
				this.DetailNavigation.Visible = false;
				this.ItemInfoContent.Visible = false;
				this.SectionLinkContent.Visible = false;
				this.btnBasics.Visible = false;
				this.btnPrevious.Visible = false;
				this.btnNext.Visible = false;
			}
		}
		#endregion Methods
		#region Web Form Designer generated code
		override protected void OnInit(EventArgs e)
		{
			//
			// CODEGEN: This call is required by the ASP.NET Web Form Designer.
			//
			InitializeComponent();
			base.OnInit(e);
		}
		
		// ------------------------------------------------------------------------------
		/// <summary>Initialize component for DateFormat, add delegates here.</summary>
		///
		// ------------------------------------------------------------------------------
		private void InitializeComponent()
		{
			this.Load += new System.EventHandler(this.Page_Load);
			this.PreRender += new EventHandler(Page_PreRender);
			this.btnDelete.Click += new EventHandler(btnDelete_Click);
			this.btnDelete.Attributes.Add("onclick", "javascript:return ConfirmDelete();");
			this.btnNew.Click += new EventHandler(btnNew_Click);
			this.btnNew.Attributes.Add("onclick", "javascript:return PromptToDiscardChanges();");
			this.btnReset.Click += new EventHandler(btnReset_Click);
			this.btnSave.Click += new EventHandler(btnSave_Click);
			this.btnPrevious.Click += new EventHandler(btnPrevious_Click);
			this.btnNext.Click += new EventHandler(btnNext_Click);
			this.btnBasics.Click += new EventHandler(btnBasics_Click);
		}
		#endregion Web Form Designer generated code
	}
}