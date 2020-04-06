
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
	/// <summary>Working Site Help Data is used to help manage SiteHelp information.</summary>
	///
	/// File History:
	/// <created>6/1/2007 (Chris Grundy)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public partial class WorkingSiteHelpData  : Components.Desktop.BaseListUserControl
	{
		#region Fields
		#endregion Fields
		#region Properties
		public string ListTitle
		{
			get { return lblTitle.Text; }
			set { lblTitle.Text = value; }
		}
		public DataGrid DataGrid { get { return dgPrimaryList; } }
		#endregion Properties
		#region Event Handlers
		// ------------------------------------------------------------------------------
		/// <summary>Load page for Site Help listing.</summary>
		///
		// ------------------------------------------------------------------------------
		private void Page_Load(object sender, System.EventArgs e)
		{
			try
			{
				base.OnLoad(); // base list control manages loading data
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "WorkingSiteHelpData.Page_Load"));
			}
			finally
			{
			}
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
						string modeValue = "edit";
						if (IsEditAvailable == false)
						{
							modeValue = "view";
						}
						lnkEditOut.NavigateUrl = Page.ResolveUrl(string.Format("EditSiteHelp.aspx?mode=" + modeValue + "&message=&LocaleCode={0}&SiteHelpDefinitionCode={1}", vSiteHelp.LocaleCode, vSiteHelp.SiteHelpDefinitionCode));
					}
					System.Web.UI.Control lnkDelete = SetControlText(e.Item, "lnkDelete", "Remove");
					if (lnkDelete is LinkButton)
					{
						WebControl wc = (WebControl)lnkDelete;
						wc.Attributes.Add("onclick", "javascript:return ConfirmDelete();");
					}
				}
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "WorkingSiteHelpData.dgPrimaryList_ItemDataBound"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Get Site Help information from the database.</summary>
		///
		// ------------------------------------------------------------------------------
		protected override void LoadCollectionFromDatabase()
		{
			_collection = (BLL.SortableList<BLL.UserExperience.SiteHelp>) Session["UserExperience/SiteHelpWorkingSet"];
			if (_collection != null)
			{
				((BLL.SortableList<BLL.UserExperience.SiteHelp>)_collection).Sort(SortColumn, SortDirection);
				TotalRecords = _collection.Count;
			}
			else
			{
				TotalRecords = 0;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item command event handler for Site Help list.</summary>
		///
		// ------------------------------------------------------------------------------
		public void dgPrimaryList_ItemCommand(object sender, EventArgs e)
		{
			_collection = (BLL.SortableList<BLL.UserExperience.SiteHelp>) Session["UserExperience/SiteHelpWorkingSet"];
			if (_collection != null)
			{
				DataGridCommandEventArgs args = (DataGridCommandEventArgs)e;
				if (args.CommandName == "Delete")
				{
					int hashCode = int.Parse(args.CommandArgument.ToString());
					BLL.UserExperience.SiteHelp item = ((BLL.SortableList<BLL.UserExperience.SiteHelp>)_collection).Find(hashCode);
					if (item != null)
					{
						RemoveItem(item);
					}
				}
				else if (args.CommandName == "Select")
				{
					int hashCode = int.Parse(args.CommandArgument.ToString());
					BLL.UserExperience.SiteHelp item = ((BLL.SortableList<BLL.UserExperience.SiteHelp>)_collection).Find(hashCode);
					Session["UserExperience/SiteHelpWorkingSetItem"] = item.PrimaryIndex;
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item command event handler for Site Help list.</summary>
		///
		// ------------------------------------------------------------------------------
		public void AddItem(BLL.UserExperience.SiteHelp item)
		{
			_collection = (BLL.SortableList<BLL.UserExperience.SiteHelp>) Session["UserExperience/SiteHelpWorkingSet"];
			if (_collection == null)
			{
				_collection = new BLL.SortableList<BLL.UserExperience.SiteHelp>();
			}
			Globals.ClearMessages();
			if (_collection.Contains(item))
			{
				Globals.AddErrorMessage(this.Page, "Working set already contains this Asset", new object[0]);
			}
			else
			{
				_collection.Add(item);
				((BLL.SortableList<BLL.UserExperience.SiteHelp>)_collection).Sort(SortColumn, SortDirection);
				TotalRecords = _collection.Count;
				Session["UserExperience/SiteHelpWorkingSetItem"] = item.PrimaryIndex;
				Globals.AddStatusMessage("Site Help working set item added.");
			}
			Session["UserExperience/SiteHelpWorkingSet"] = _collection;
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item command event handler for Site Help list.</summary>
		///
		// ------------------------------------------------------------------------------
		public void RemoveItem(BLL.UserExperience.SiteHelp item)
		{
			Globals.ClearMessages();
			_collection = (BLL.SortableList<BLL.UserExperience.SiteHelp>) Session["UserExperience/SiteHelpWorkingSet"];
			if (_collection != null)
			{
				_collection.Remove(item);
				((BLL.SortableList<BLL.UserExperience.SiteHelp>)_collection).Sort(SortColumn, SortDirection);
				TotalRecords = _collection.Count;
				if (_collection.Count == 0)
				{
					_collection = null;
				}
				Globals.AddStatusMessage("Site Help working set item removed.");
			}
			Session["UserExperience/SiteHelpWorkingSet"] = _collection;
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
				dgPrimaryList.DataSource = _collection;
				dgPrimaryList.DataKeyField = "LocaleCode";
				dgPrimaryList.DataBind();
				this.lblTitle.Visible = TotalRecords > 0;
				this.dgPrimaryList.Visible = TotalRecords > 0;
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "WorkingSiteHelpData.Page_PreRender"));
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
		}
		#endregion Event Handlers
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
			this.dgPrimaryList.ItemDataBound += new DataGridItemEventHandler(dgPrimaryList_ItemDataBound);
			this.dgPrimaryList.SortCommand += new DataGridSortCommandEventHandler(OnListSort);
			this.Load += new System.EventHandler(this.Page_Load);
			this.PreRender += new EventHandler(Page_PreRender);
		}
		#endregion
	}
}