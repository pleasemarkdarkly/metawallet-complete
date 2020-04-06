
<!-- copyright
Meta Wallet, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
/copyright -->
<%@ Register TagPrefix="Wilson" Namespace="Wilson.MasterPages" Assembly="WilsonMasterPages" %>
<%@ Control Language="c#" AutoEventWireup="false" CodeFile ="EditOrderCoupon.ascx.cs" Inherits="MW.MComm.Admin.WebUI.UserControls.Desktop.Orders.EditOrderCoupon" TargetSchema="http://schemas.microsoft.com/intellisense/ie5"%>
<%@ Register TagPrefix="MOD" TagName="PageSectionLinks" Src="~/UserControls/Desktop/Utility/PageSectionLinks.ascx" %>
<%@ Register TagPrefix="MODC" Namespace="MW.MComm.Admin.WebUI.Controls"%>
<wilson:masterpage id="Masterpage" runat="server" templatefile="~/Templates/Desktop/DetailControl.ascx">
	<wilson:contentregion id="Title" runat="server">
		<asp:Label id="lblTitle" CssClass="subtitle" Runat="server">Edit Order&nbsp;Coupon</asp:Label>&nbsp;<asp:Label id="lblTitleMessage" CssClass="subtitle" Runat="server"></asp:Label>
	</wilson:contentregion>
	<wilson:contentregion id="ItemInfo" runat="server">
		<div class="IDSection" id="ItemInfoContent" runat="server">
		<table>
			<tr>
				<td>Order&nbsp;ID:</td>
				<td>
					<span class="ID">
					<MODC:PropVal id="propOrderID" runat="server" prop="OrderCouponItem.OrderID" cssclass="ID"></MODC:PropVal>
					</span>
				</td>
			</tr>
			<tr>
				<td>Meta&nbsp;Partner&nbsp;Coupon&nbsp;ID:</td>
				<td>
					<span class="ID">
					<MODC:PropVal id="propMetaPartnerCouponID" runat="server" prop="OrderCouponItem.MetaPartnerCouponID" cssclass="ID"></MODC:PropVal>
					</span>
				</td>
			</tr>
			<tr>
				<td>Debit&nbsp;Meta&nbsp;Partner&nbsp;ID:</td>
				<td>
					<span class="ID">
					<MODC:PropVal id="propDebitMetaPartnerID" runat="server" prop="OrderCouponItem.DebitMetaPartnerID" cssclass="ID"></MODC:PropVal>
					</span>
				</td>
			</tr>
		</table>
		</div>
	</wilson:contentregion>
	<wilson:contentregion id="DetailNavigation" runat="server">
		<div class="SectionLink" id="SectionLinkContent" runat="server">
		<MOD:PageSectionLinks id="sectionLinks" runat="server" CssClass="SectionLink" SelectedCssClass="selSectionLink" ValidationList="Basics" SectionList="Basics"></MOD:PageSectionLinks>
		</div>
	</wilson:contentregion>
	<wilson:contentregion id="Buttons" runat="server">
		<table id="ButtonsInfo" runat="server">
			<tr>
				<td>
					<asp:Button id="btnSave" tabIndex="201" runat="server" CssClass="Button" CausesValidation="True" Text="Save"></asp:Button>
					<asp:Button id="btnDelete" tabIndex="201" runat="server" CssClass="Button" CausesValidation="False" Text="Delete"></asp:Button>
					<asp:Button id="btnReset" tabIndex="202" runat="server" CssClass="Button" CausesValidation="False" Text="Reset"></asp:Button>
					<asp:Button id="btnNew" tabIndex="203" runat="server" CssClass="Button" CausesValidation="False" Text="New"></asp:Button>
					<asp:Button id="btnBasics" tabIndex="205" runat="server" CssClass="Button" CausesValidation="True" Text="Basics"></asp:Button>
					<asp:Button id="btnPrevious" tabIndex="206" runat="server" CssClass="Button" CausesValidation="True" Visible="False" Text="< Previous"></asp:Button>
					<asp:Button id="btnNext" tabIndex="207" runat="server" CssClass="Button" CausesValidation="True" Text="Next >"></asp:Button>
				</td>
			</tr>
		</table>
	</wilson:contentregion>

	<MODC:PageSection id="Section_Basics" visible="false" runat="server">
		<table>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblOrderIDDisplay" runat="server">Order:</asp:Label></span></td>
				<td valign="top">
					<asp:DropDownList id="ddlOrderID" tabIndex="1" runat="server" CssClass="FormNormal"></asp:DropDownList>
					<asp:Label id="lblOrderIDWorkingSet" runat="server" CssClass="FormNormal"> (from Order working set)</asp:Label>
					<a id="lnkOrderIDWorkingSet" runat="server" onclick="javascript:return PromptToDiscardChanges();" class="FormNormal">search</a>
					<asp:CompareValidator id="valOrderID" ControlToValidate="ddlOrderID" EnableClientScript="False" Display="Dynamic" Runat="server" Type="String" ValueToCompare="0" Operator="NotEqual" ErrorMessage="Please select a value from the list." ></asp:CompareValidator>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblMetaPartnerCouponIDDisplay" runat="server">Meta&nbsp;Partner&nbsp;Coupon:</asp:Label></span></td>
				<td valign="top">
					<asp:DropDownList id="ddlMetaPartnerCouponID" tabIndex="2" runat="server" CssClass="FormNormal"></asp:DropDownList>
					<asp:Label id="lblMetaPartnerCouponIDWorkingSet" runat="server" CssClass="FormNormal"> (from Meta&nbsp;Partner&nbsp;Coupon working set)</asp:Label>
					<a id="lnkMetaPartnerCouponIDWorkingSet" runat="server" onclick="javascript:return PromptToDiscardChanges();" class="FormNormal">search</a>
					<asp:CompareValidator id="valMetaPartnerCouponID" ControlToValidate="ddlMetaPartnerCouponID" EnableClientScript="False" Display="Dynamic" Runat="server" Type="String" ValueToCompare="0" Operator="NotEqual" ErrorMessage="Please select a value from the list." ></asp:CompareValidator>
				</td>
			</tr>
		</table>
	</MODC:PageSection>
</wilson:masterpage>