
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
using System.Data;
using System.Drawing;
using System.Web;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;
using MOD.Data;
using BLL = MW.MComm.WalletSolution.BLL;
using MW.MComm.WalletSolution.BLL.UserExperience;
using CoreUtility = MW.MComm.WalletSolution.Utility;
using MW.MComm.Admin.WebUI.Components.Desktop;
namespace MW.MComm.Admin.WebUI.UserControls.Desktop.UserExperience
{
	// ------------------------------------------------------------------------------
	/// <summary>Search Site Help Data is used to help manage SiteHelp information.</summary>
	///
	/// File History:
	/// <created>6/1/2007 (Chris Grundy)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public partial class SearchSiteHelpData  : Components.Desktop.BaseSearchUserControl
	{
		#region Fields
		#endregion Fields
		#region Properties
		public string ListTitle
		{
			get { return lblTitle.Text; }
			set { lblTitle.Text = value; }
		}
		public bool UseValidation
		{
			get
			{
				return base.UseValidation;
			}
			set
			{
				base.UseValidation = value;
				editSiteHelp.UseValidation = value;
			}
		}
		public DataGrid DataGrid { get { return dgPrimaryList; } }
		#endregion Properties
		#region Event Handlers
		// ------------------------------------------------------------------------------
		/// <summary>Load page for Site Help search.</summary>
		///
		// ------------------------------------------------------------------------------
		private void Page_Load(object sender, System.EventArgs e)
		{
			try
			{
				workingSiteHelpData.Visible = ProvideWorkingSet;
				base.OnLoad(); // base list control manages loading data
				if (WorkflowMode != WorkflowMode.Internal)
				{
					if (Session["SearchUserExperience/SiteHelpData"] != null)
					{
						_collection = (BLL.SortableList<BLL.UserExperience.SiteHelp>)Session["SearchUserExperience/SiteHelpData"];
					}
				}
				// Set current item into child control
				if (_selectedIndex > -1)
				{
					this.editSiteHelp.SiteHelpItem = (BLL.UserExperience.SiteHelp) Collection[_selectedIndex];
				}
				this.editSiteHelp.SiteHelpAdded += new EntityEditEventHandler(editSiteHelp_SiteHelpAdded);
				this.editSiteHelp.SiteHelpRemoved += new EntityEditEventHandler(editSiteHelp_SiteHelpRemoved);
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "SearchSiteHelpData.Page_Load"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item added event handler for Site Help.</summary>
		///
		// ------------------------------------------------------------------------------
		private void editSiteHelp_SiteHelpAdded(BaseFormlUserControl sender, EntityEditEventArgs e)
		{
			if (_collection.Contains(e.Entity))
			{
				Globals.AddErrorMessage(this.Page, "Collection already contains this Site Help", new object[0]);
			}
			else
			{
				_collection.Add(e.Entity);
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item removed event handler for Site Help.</summary>
		///
		// ------------------------------------------------------------------------------
		private void editSiteHelp_SiteHelpRemoved(BaseFormlUserControl sender, EntityEditEventArgs e)
		{
			_collection.Add(e.Entity);
		}
		// ------------------------------------------------------------------------------
		/// <summary>Binding for a list of Site Help.</summary>
		///
		// ------------------------------------------------------------------------------
		private void dgPrimaryList_ItemDataBound(object sender, DataGridItemEventArgs e)
		{
			try
			{
				if (e.Item.ItemType == ListItemType.Item || e.Item.ItemType == ListItemType.AlternatingItem || e.Item.ItemType == ListItemType.SelectedItem)
				{
					BLL.UserExperience.SiteHelp vSiteHelp = (BLL.UserExperience.SiteHelp)e.Item.DataItem;
					SetControlText(e.Item,"lblPrimaryName", MOD.Data.DataHelper.GetString(vSiteHelp.PrimaryName, ""));
					SetControlText(e.Item,"lblLocaleCode", MOD.Data.DataHelper.GetString(vSiteHelp.LocaleCode, ""));
					SetControlText(e.Item,"lblSiteHelpName", MOD.Data.DataHelper.GetString(vSiteHelp.SiteHelpName, ""));
					SetControlText(e.Item,"lblSiteHelpText", MOD.Data.DataHelper.GetString(vSiteHelp.SiteHelpText, ""));
					System.Web.UI.WebControls.Image lblSiteHelpImageURL = (System.Web.UI.WebControls.Image)e.Item.FindControl("lblSiteHelpImageURL");
					lblSiteHelpImageURL.ImageUrl = CoreUtility.FileManager.GetAbsoluteHttpUrl(CoreUtility.FileGroupCode.UserExperience, vSiteHelp.SiteHelpImageURL, Page.ResolveUrl("~/images/missing_image-75.jpg"));
					HyperLink lnkSiteHelpImageURL = (HyperLink)e.Item.FindControl("lnkSiteHelpImageURL");
					lnkSiteHelpImageURL.NavigateUrl = Page.ResolveUrl(CoreUtility.FileManager.GetAbsoluteHttpUrl(CoreUtility.FileGroupCode.UserExperience, vSiteHelp.SiteHelpImageURL, Page.ResolveUrl("~/images/missing_image-75.jpg")));
					SetControlText(e.Item,"lblSiteHelpGroupCode", MOD.Data.DataHelper.GetString(vSiteHelp.SiteHelpGroupCode, ""));
					SetControlText(e.Item,"lblSiteHelpDefinitionCode", MOD.Data.DataHelper.GetString(vSiteHelp.SiteHelpDefinitionCode, ""));
					SetControlText(e.Item,"lblCreatedDate", MOD.Data.DataHelper.GetString(vSiteHelp.CreatedDate, ""));
					SetControlText(e.Item,"lblLastModifiedDate", MOD.Data.DataHelper.GetString(vSiteHelp.LastModifiedDate, ""));
					SetControlText(e.Item,"lblSiteHelpDefinitionName", MOD.Data.DataHelper.GetString(vSiteHelp.SiteHelpDefinitionName, MOD.Data.DefaultValue.String));
					SetControlText(e.Item,"lblLocaleName", MOD.Data.DataHelper.GetString(vSiteHelp.LocaleName, MOD.Data.DefaultValue.String));
					SetControlText(e.Item,"lblSiteHelpGroupName", MOD.Data.DataHelper.GetString(vSiteHelp.SiteHelpGroupName, MOD.Data.DefaultValue.String));
					LinkButton lnkEdit = (LinkButton)SetControlText(e.Item, "lnkEdit", "Details");
					HyperLink lnkEditOut = (HyperLink)SetControlText(e.Item, "lnkEditOut", "Details");
					foreach (DataGridColumn loopColumn in dgPrimaryList.Columns)
					{
						if (loopColumn.HeaderText == "Primary Name")
						{
							loopColumn.SortExpression = vSiteHelp.PrimarySortColumn;
							break;
						}
					}
					if (this.WorkflowMode == MOD.Data.WorkflowMode.Internal)
					{
						foreach (DataGridColumn loopColumn in dgPrimaryList.Columns)
						{
							if (loopColumn.HeaderText == "Primary Name")
							{
								loopColumn.Visible = true;
								break;
							}
						}
						lnkEditOut.Visible = false;
					}
					else
					{
						foreach (DataGridColumn loopColumn in dgPrimaryList.Columns)
						{
							if (loopColumn.HeaderText == "Primary Name")
							{
								loopColumn.Visible = false;
								break;
							}
						}
						lnkEdit.Visible = false;
						string modeValue = "edit";
						if (IsEditAvailable == false)
						{
							modeValue = "view";
						}
						lnkEditOut.NavigateUrl = Page.ResolveUrl(string.Format("EditSiteHelp.aspx?mode=" + modeValue + "&message=&LocaleCode={0}&SiteHelpDefinitionCode={1}", vSiteHelp.LocaleCode, vSiteHelp.SiteHelpDefinitionCode));
					}
					System.Web.UI.Control lnkDelete = SetControlText(e.Item, "lnkDelete", (this.WorkflowMode == MOD.Data.WorkflowMode.Internal) ? "Remove" : "Delete");
					if (this.WorkflowMode == MOD.Data.WorkflowMode.External)
					{
						lnkDelete.Visible = false;
					}
					else
					{
						lnkDelete.Visible = IsDeleteAvailable;
					}
					if (lnkDelete is LinkButton)
					{
						WebControl wc = (WebControl)lnkDelete;
						wc.Attributes.Add("onclick", "javascript:return ConfirmDelete();");
					}
					System.Web.UI.Control lnkAdd = SetControlText(e.Item, "lnkAdd", "Add");
					if (this.WorkflowMode == MOD.Data.WorkflowMode.External)
					{
						lnkAdd.Visible = ProvideWorkingSet;
					}
					else
					{
						lnkAdd.Visible = false;
					}
				}
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "SearchSiteHelpData.dgPrimaryList_ItemDataBound"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Set Site Help information from the ui.</summary>
		///
		// ------------------------------------------------------------------------------
		protected override void SetDataFromForm()
		{
			Session["SiteHelpName"] = GetStringFromTextBox(txtSiteHelpName);
			Session["SiteHelpGroupCode"] = GetSelectedValueFromDropDownList(ddlSiteHelpGroupCode);
			Session["LastModifiedDateStart"] = GetStringFromTextBox(txtLastModifiedDateStart);
			Session["LastModifiedDateEnd"] = GetStringFromTextBox(txtLastModifiedDateEnd);
		}
		// ------------------------------------------------------------------------------
		/// <summary>Get Site Help information from the database.</summary>
		///
		// ------------------------------------------------------------------------------
		protected override void LoadCollectionFromDatabase()
		{
			try
			{
				int totalRecords = 0;
				bool maximumListSizeExceeded = false;
				string siteHelpName = MOD.Data.SearchHelper.GetString(Session["SiteHelpName"]);
				int? siteHelpGroupCode = MOD.Data.SearchHelper.GetInt(Session["SiteHelpGroupCode"]);
				DateTime? lastModifiedDateStart = MOD.Data.SearchHelper.GetDateTime(Session["LastModifiedDateStart"]);
				DateTime? lastModifiedDateEnd = MOD.Data.SearchHelper.GetDateTime(Session["LastModifiedDateEnd"]);
				// get primary list data from database and bind
				if (Page.IsPostBack == true || this.TotalRecords > 0)
				{
					_collection = BLL.UserExperience.SiteHelpManager.GetManySiteHelpDataByCriteria(siteHelpName, siteHelpGroupCode, lastModifiedDateStart, lastModifiedDateEnd, out totalRecords, out maximumListSizeExceeded, this.DataOptions);
					Session["SearchUserExperience/SiteHelpData"] = _collection;
					this.TotalRecords = totalRecords;
					this.MaximumListSizeExceeded = maximumListSizeExceeded;
				}
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "SearchSiteHelpData.dgPrimaryList_ItemDataBound"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item command event handler for Site Help list.</summary>
		///
		// ------------------------------------------------------------------------------
		public void dgPrimaryList_ItemCommand(object sender, EventArgs e)
		{
			DataGridCommandEventArgs args = (DataGridCommandEventArgs)e;
			if (args.CommandName == "Add" || args.CommandName == "Edit" || args.CommandName == "Delete")
			{
				int hashCode = int.Parse(args.CommandArgument.ToString());
				BLL.UserExperience.SiteHelp item = ((BLL.SortableList<BLL.UserExperience.SiteHelp>)_collection).Find(hashCode);
				if (args.CommandName == "Add")
				{
					workingSiteHelpData.AddItem(item);
				}
				else if (args.CommandName == "Edit")
				{
					this.editSiteHelp.SiteHelpItem = item;
				}
				else if (args.CommandName == "Delete")
				{
					_collection.Remove(item);
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Page pre render event handler for Site Help.</summary>
		///
		// ------------------------------------------------------------------------------
		private void Page_PreRender(object sender, EventArgs e)
		{
			try
			{
				SetAccessModeAndDisplay(AccessMode);
				base.OnPreRender();
				if (IsPostBack == false)
				{
					txtSiteHelpName.Text = MOD.Data.DataHelper.GetString(Session["SiteHelpName"], "");
					if (ddlSiteHelpGroupCode.Visible == true)
					{
						Components.Lists.DataBind(ddlSiteHelpGroupCode, BLL.UserExperience.SiteHelpGroupManager.GetAllSiteHelpGroupData(Globals.DBOptions, Globals.getDataOptions("SiteHelpGroupName", "", true, true), Globals.DebugLevel, Globals.CurrentUserID), "PrimaryKey", "PrimaryName", true, false);
						ddlSiteHelpGroupCode.ClearSelection();
						try
						{
							ddlSiteHelpGroupCode.SelectedValue = MOD.Data.DataHelper.GetString(Session["SiteHelpGroupCode"], "0");
						}
						catch {}
					}
					txtLastModifiedDateStart.Text = MOD.Data.DataHelper.GetString(Session["LastModifiedDateStart"], "");
					txtLastModifiedDateEnd.Text = MOD.Data.DataHelper.GetString(Session["LastModifiedDateEnd"], "");
				}
				dgPrimaryList.DataSource = _collection;
				dgPrimaryList.DataKeyField = "LocaleCode";
				dgPrimaryList.DataBind();
				if (this.WorkflowMode == MOD.Data.WorkflowMode.Internal)
				{
					editSiteHelp.Visible = true;
					btnNew.Visible = false;
				}
				else
				{
					editSiteHelp.Visible = false;
					btnNew.Visible = true;
				}
				if (btnNew.Visible == true)
				{
					btnNew.Visible = IsEditAvailable;
				}
				this.lblSearchResultsTitle.Visible = TotalRecords != 0;
				this.dgPrimaryList.Visible = TotalRecords != 0;
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "SearchSiteHelpData.Page_PreRender"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Set access and display modes for presenting Site Help information.</summary>
		///
		// ------------------------------------------------------------------------------
		private void SetAccessModeAndDisplay(MOD.Data.AccessMode accessMode)
		{
			// set access mode
			AccessMode = accessMode;
			btnNew.Visible = IsEditAvailable;
		}
		// ------------------------------------------------------------------------------
		/// <summary>Request to create a new Site Help.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnNew_Click(object sender, EventArgs e)
		{
			Globals.ClearMessages();
			Response.Redirect(Page.ResolveUrl(string.Format("EditSiteHelp.aspx?mode=" + MOD.Data.AccessMode.Add.ToString() + "&LocaleCode=" + MOD.Data.DataHelper.GetString(MOD.Data.DefaultValue.Int, "") + "&SiteHelpDefinitionCode=" + MOD.Data.DataHelper.GetString(MOD.Data.DefaultValue.Int, "") + "")));
		}
		
		// ------------------------------------------------------------------------------
		/// <summary>Clear search form for Site Help.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnClear_Click(object sender, EventArgs e)
		{
			Globals.ClearMessages();
			this.TotalRecords = 0;
			_collection = null;
			txtSiteHelpName.Text = "";
			ddlSiteHelpGroupCode.ClearSelection();
			txtLastModifiedDateStart.Text = "";
			txtLastModifiedDateEnd.Text = "";
			SetDataFromForm();
		}
		// ------------------------------------------------------------------------------
		/// <summary>Perform search for Site Help items.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnSearch_Click(object sender, EventArgs e)
		{
			try
			{
				Globals.ClearMessages();
				this.OnSearch(sender,e);
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "SearchSiteHelpData.btnSearch_Click"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Handle Last Modified Date Start selection change.
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		// ------------------------------------------------------------------------------
		private void calLastModifiedDateStart_SelectionChanged(object sender, EventArgs e)
		{
			txtLastModifiedDateStart.Text = calLastModifiedDateStart.SelectedDate.ToShortDateString();
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// HandleLast Modified Date Start scheduler.
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		// ------------------------------------------------------------------------------
		private void btnLastModifiedDateStartCalendar_Click(object sender, EventArgs e)
		{
			if (calLastModifiedDateStart.Visible == false)
			{
				calLastModifiedDateStart.Visible = true;
				btnLastModifiedDateStartCalendar.Text = "Hide Calendar";
				ResetLastModifiedDateStartCalendar(true);
			}
			else
			{
				calLastModifiedDateStart.Visible = false;
				btnLastModifiedDateStartCalendar.Text = "Calendar";
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Handle Last Modified Date End selection change.
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		// ------------------------------------------------------------------------------
		private void calLastModifiedDateEnd_SelectionChanged(object sender, EventArgs e)
		{
			txtLastModifiedDateEnd.Text = calLastModifiedDateEnd.SelectedDate.ToShortDateString();
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// HandleLast Modified Date End scheduler.
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		// ------------------------------------------------------------------------------
		private void btnLastModifiedDateEndCalendar_Click(object sender, EventArgs e)
		{
			if (calLastModifiedDateEnd.Visible == false)
			{
				calLastModifiedDateEnd.Visible = true;
				btnLastModifiedDateEndCalendar.Text = "Hide Calendar";
				ResetLastModifiedDateEndCalendar(true);
			}
			else
			{
				calLastModifiedDateEnd.Visible = false;
				btnLastModifiedDateEndCalendar.Text = "Calendar";
			}
		}
		#endregion Event Handlers
		#region Methods
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Reset Last Modified Date Start schedule.
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		// ------------------------------------------------------------------------------
		private void ResetLastModifiedDateStartCalendar(bool resetVisibleDate)
		{
			try
			{
				calLastModifiedDateStart.SelectedDates.Clear();
				System.DateTime strLastModifiedDateStart = System.DateTime.Parse(txtLastModifiedDateStart.Text);
				calLastModifiedDateStart.SelectedDate = strLastModifiedDateStart;
				if (resetVisibleDate == true)
				{
					calLastModifiedDateStart.VisibleDate = strLastModifiedDateStart;
				}
			}
			catch
			{
				calLastModifiedDateStart.SelectedDates.Clear();
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Reset Last Modified Date End schedule.
		/// </summary>
		/// <param name="sender"></param>
		/// <param name="e"></param>
		// ------------------------------------------------------------------------------
		private void ResetLastModifiedDateEndCalendar(bool resetVisibleDate)
		{
			try
			{
				calLastModifiedDateEnd.SelectedDates.Clear();
				System.DateTime strLastModifiedDateEnd = System.DateTime.Parse(txtLastModifiedDateEnd.Text);
				calLastModifiedDateEnd.SelectedDate = strLastModifiedDateEnd;
				if (resetVisibleDate == true)
				{
					calLastModifiedDateEnd.VisibleDate = strLastModifiedDateEnd;
				}
			}
			catch
			{
				calLastModifiedDateEnd.SelectedDates.Clear();
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
		/// <summary>Initialize component for SiteHelp, add delegates here.</summary>
		///
		// ------------------------------------------------------------------------------
		private void InitializeComponent()
		{
			this.calLastModifiedDateStart.SelectionChanged += new System.EventHandler(calLastModifiedDateStart_SelectionChanged);
			this.btnLastModifiedDateStartCalendar.Click += new EventHandler(btnLastModifiedDateStartCalendar_Click);
			this.calLastModifiedDateEnd.SelectionChanged += new System.EventHandler(calLastModifiedDateEnd_SelectionChanged);
			this.btnLastModifiedDateEndCalendar.Click += new EventHandler(btnLastModifiedDateEndCalendar_Click);
			this.btnSearch.Click += new System.EventHandler(this.btnSearch_Click);
			this.btnClear.Click += new System.EventHandler(this.btnClear_Click);
			this.btnNew.Click += new System.EventHandler(this.btnNew_Click);
			this.dgPrimaryList.SortCommand += new System.Web.UI.WebControls.DataGridSortCommandEventHandler(this.OnListSort);
			this.dgPrimaryList.ItemDataBound += new System.Web.UI.WebControls.DataGridItemEventHandler(this.dgPrimaryList_ItemDataBound);
			this.Load += new System.EventHandler(this.Page_Load);
			this.PreRender += new EventHandler(Page_PreRender);
		}
		#endregion
	}
}