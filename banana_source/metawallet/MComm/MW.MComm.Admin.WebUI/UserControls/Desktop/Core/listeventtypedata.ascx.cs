
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
using MW.MComm.WalletSolution.BLL.Core;
using CoreUtility = MW.MComm.WalletSolution.Utility;
using MW.MComm.Admin.WebUI.Components.Desktop;
namespace MW.MComm.Admin.WebUI.UserControls.Desktop.Core
{
	// ------------------------------------------------------------------------------
	/// <summary>List Event Type Data is used to help manage EventType information.</summary>
	///
	/// File History:
	/// <created>6/1/2007 (Chris Grundy)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public partial class ListEventTypeData  : Components.Desktop.BaseListUserControl
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
				editEventType.UseValidation = value;
			}
		}
		public DataGrid DataGrid { get { return dgPrimaryList; } }
		#endregion Properties
		#region Event Handlers
		// ------------------------------------------------------------------------------
		/// <summary>Load page for Event Type listing.</summary>
		///
		// ------------------------------------------------------------------------------
		private void Page_Load(object sender, System.EventArgs e)
		{
			try
			{
				base.OnLoad(); // base list control manages loading data
				// Set current item into child control
				if (_selectedIndex > -1)
				{
					this.editEventType.EventTypeItem = (BLL.Core.EventType) Collection[_selectedIndex];
				}
				this.editEventType.EventTypeAdded += new EntityEditEventHandler(editEventType_EventTypeAdded);
				this.editEventType.EventTypeRemoved += new EntityEditEventHandler(editEventType_EventTypeRemoved);
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "ListEventTypeData.Page_Load"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item added event handler for Event Type.</summary>
		///
		// ------------------------------------------------------------------------------
		private void editEventType_EventTypeAdded(BaseFormlUserControl sender, EntityEditEventArgs e)
		{
			Globals.ClearMessages();
			if (_collection.Contains(e.Entity))
			{
				Globals.AddErrorMessage(Page, "Collection already contains this Event Type");
			}
			else
			{
				_collection.Add(e.Entity);
				Globals.AddStatusMessage("Event Type added.");
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item removed event handler for Event Type.</summary>
		///
		// ------------------------------------------------------------------------------
		private void editEventType_EventTypeRemoved(BaseFormlUserControl sender, EntityEditEventArgs e)
		{
			Globals.ClearMessages();
			_collection.Remove(e.Entity);
			Globals.AddStatusMessage("Event Type removed.");
		}
		// ------------------------------------------------------------------------------
		/// <summary>Binding for a list of Event Type.</summary>
		///
		// ------------------------------------------------------------------------------
		private void dgPrimaryList_ItemDataBound(object sender, DataGridItemEventArgs e)
		{
			try
			{
				if (e.Item.ItemType == ListItemType.Item || e.Item.ItemType == ListItemType.AlternatingItem || e.Item.ItemType == ListItemType.SelectedItem)
				{
					BLL.Core.EventType vEventType = (BLL.Core.EventType)e.Item.DataItem;
					SetControlText(e.Item,"lblPrimaryName", MOD.Data.DataHelper.GetString(vEventType.PrimaryName, ""));
					SetControlText(e.Item,"lblEventTypeCode", MOD.Data.DataHelper.GetString(vEventType.EventTypeCode, ""));
					SetControlText(e.Item,"lblEventTypeName", MOD.Data.DataHelper.GetString(vEventType.EventTypeName, ""));
					SetControlText(e.Item,"lblDescription", MOD.Data.DataHelper.GetString(vEventType.Description, ""));
					SetControlText(e.Item,"lblIsActive", MOD.Data.DataHelper.GetString(vEventType.IsActive, ""));
					SetControlText(e.Item,"lblCreatedDate", MOD.Data.DataHelper.GetString(vEventType.CreatedDate, ""));
					SetControlText(e.Item,"lblLastModifiedDate", MOD.Data.DataHelper.GetString(vEventType.LastModifiedDate, ""));
					LinkButton lnkEdit = (LinkButton)SetControlText(e.Item, "lnkEdit", "Details");
					HyperLink lnkEditOut = (HyperLink)SetControlText(e.Item, "lnkEditOut", "Details");
					foreach (DataGridColumn loopColumn in dgPrimaryList.Columns)
					{
						if (loopColumn.HeaderText == "Primary Name")
						{
							loopColumn.SortExpression = vEventType.PrimarySortColumn;
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
						lnkEditOut.NavigateUrl = Page.ResolveUrl(string.Format("EditEventType.aspx?mode=" + modeValue + "&message=&EventTypeCode={0}", vEventType.EventTypeCode));
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
				}
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "ListEventTypeData.dgPrimaryList_ItemDataBound"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Get Event Type information from the database.</summary>
		///
		// ------------------------------------------------------------------------------
		protected override void LoadCollectionFromDatabase()
		{
			_collection = BLL.Core.EventTypeManager.GetAllEventTypeData(Globals.DBOptions, DataOptions, Globals.DebugLevel, Globals.CurrentUserID);
		}
		// ------------------------------------------------------------------------------
		/// <summary>Item command event handler for Event Type list.</summary>
		///
		// ------------------------------------------------------------------------------
		public void dgPrimaryList_ItemCommand(object sender, EventArgs e)
		{
			DataGridCommandEventArgs args = (DataGridCommandEventArgs)e;
			if (args.CommandName == "Edit" || args.CommandName == "Delete")
			{
				int hashCode = int.Parse(args.CommandArgument.ToString());
				BLL.Core.EventType item = ((BLL.SortableList<BLL.Core.EventType>)_collection).Find(hashCode);
				if (args.CommandName == "Edit")
				{
					this.editEventType.EventTypeItem = item;
					this.editEventType.AccessMode = MOD.Data.AccessMode.Edit;
				}
				else if (args.CommandName == "Delete")
				{
					Globals.ClearMessages();
					_collection.Remove(item);
					if (this.editEventType.EventTypeItem == item)
					{
						this.editEventType.AccessMode = MOD.Data.AccessMode.Add;
					}
					Globals.AddStatusMessage("Event Type removed.");
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Page pre render event handler for Event Type.</summary>
		///
		// ------------------------------------------------------------------------------
		private void Page_PreRender(object sender, EventArgs e)
		{
			try
			{
				SetAccessModeAndDisplay(AccessMode);
				base.OnPreRender();
				dgPrimaryList.DataSource = _collection;
				dgPrimaryList.DataKeyField = "EventTypeCode";
				dgPrimaryList.DataBind();
				if (this.WorkflowMode == MOD.Data.WorkflowMode.Internal)
				{
					editEventType.Visible = true;
					btnNew.Visible = false;
				}
				else
				{
					editEventType.Visible = false;
					btnNew.Visible = true;
				}
				if (btnNew.Visible == true)
				{
					btnNew.Visible = IsEditAvailable;
				}
			}
			catch (CoreUtility.CustomAppException ex)
			{
				base.HandleError(ex);
			}
			catch (System.Exception ex)
			{
				base.HandleError(CoreUtility.CustomAppException.WrapException(ex, "ListEventTypeData.Page_PreRender"));
			}
			finally
			{
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>Set access and display modes for presenting Event Type information.</summary>
		///
		// ------------------------------------------------------------------------------
		private void SetAccessModeAndDisplay(MOD.Data.AccessMode accessMode)
		{
			// set access mode
			AccessMode = accessMode;
			btnNew.Visible = IsEditAvailable;
		}
		// ------------------------------------------------------------------------------
		/// <summary>Request to create a new Event Type.</summary>
		///
		// ------------------------------------------------------------------------------
		private void btnNew_Click(object sender, EventArgs e)
		{
			Globals.ClearMessages();
			Response.Redirect(Page.ResolveUrl(string.Format("EditEventType.aspx?mode=" + MOD.Data.AccessMode.Add.ToString() + "&EventTypeCode=" + MOD.Data.DataHelper.GetString(MOD.Data.DefaultValue.Int, "") + "")));
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
		/// <summary>Initialize component for EventType, add delegates here.</summary>
		///
		// ------------------------------------------------------------------------------
		private void InitializeComponent()
		{
			this.btnNew.Click += new System.EventHandler(this.btnNew_Click);
			this.dgPrimaryList.ItemDataBound += new DataGridItemEventHandler(dgPrimaryList_ItemDataBound);
			this.dgPrimaryList.SortCommand += new DataGridSortCommandEventHandler(OnListSort);
			this.Load += new System.EventHandler(this.Page_Load);
			this.PreRender += new EventHandler(Page_PreRender);
		}
		#endregion
	}
}