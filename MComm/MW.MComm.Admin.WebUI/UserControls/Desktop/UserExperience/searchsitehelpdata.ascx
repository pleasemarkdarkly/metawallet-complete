
<!-- copyright
Meta Wallet, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
/copyright -->
<%@ Register TagPrefix="Wilson" Namespace="Wilson.MasterPages" Assembly="WilsonMasterPages" %>
<%@ Control Language="c#" AutoEventWireup="false" CodeFile ="SearchSiteHelpData.ascx.cs" Inherits="MW.MComm.Admin.WebUI.UserControls.Desktop.UserExperience.SearchSiteHelpData" TargetSchema="http://schemas.microsoft.com/intellisense/ie5"%>
<%@ Register TagPrefix="MOD" TagName="EditSiteHelp" SRC="~/UserControls/Desktop/UserExperience/EditSiteHelp.ascx" %>
<%@ Register TagPrefix="MOD" TagName="WorkingSiteHelpData" SRC="~/UserControls/Desktop/UserExperience/WorkingSiteHelpData.ascx" %>
<%@ Register TagPrefix="MOD" TagName="ListPager" SRC="~/UserControls/Desktop/Utility/ListPager.ascx" %>
<wilson:masterpage id="Masterpage" runat="server" templatefile="~/Templates/Desktop/PaginatedSearchControl.ascx">
	<wilson:contentregion id="Title" runat="server">
		<asp:Label id="lblTitle" CssClass="subtitle" Runat="server">Site&nbsp;Help Search</asp:Label>
	</wilson:contentregion>
	<wilson:contentregion id="Criteria" runat="server">
	<asp:Panel ID="pnlCriteriaForm" runat="server" DefaultButton="btnSearch">
		<table>
			<tr>
				<td><span class="FormLabelOptional">Site&nbsp;Help&nbsp;Name:</span></td>
				<td>
					<asp:TextBox id="txtSiteHelpName" tabIndex="1" CssClass="FormNormal" Runat="server" MaxLength="200" Width="200"></asp:TextBox>
				</td>
			</tr>
			<tr>
				<td><span class="FormLabelOptional">Site&nbsp;Help&nbsp;Group:</span></td>
				<td>
					<asp:DropDownList id="ddlSiteHelpGroupCode" tabIndex="2" runat="server" CssClass="FormNormal"></asp:DropDownList>
				</td>
			</tr>
			<tr>
				<td><span class="FormLabelOptional">Last&nbsp;Modified&nbsp;Date Start:</span></td>
				<td>
					<asp:TextBox id="txtLastModifiedDateStart" tabIndex="3" CssClass="FormNormal" Runat="server" MaxLength="200" Width="200"></asp:TextBox>&nbsp;<asp:Button id="btnLastModifiedDateStartCalendar" tabIndex="4" runat="server" CssClass="Button" CausesValidation="False" Text="Calendar"></asp:Button>
					<asp:RangeValidator id="valLastModifiedDateStart" ControlToValidate="txtLastModifiedDateStart" EnableClientScript="False" Display="Dynamic" Runat="server" Type="Date" MinimumValue="1900/1/1" MaximumValue="2100/1/1" ErrorMessage="Must be a valid date from 1/1/1900 to 1/1/2100." ></asp:RangeValidator>
					<asp:Calendar id="calLastModifiedDateStart" runat="server" tabIndex="5" Visible="false" CssClass="FormNormal" SelectionMode="DayWeekMonth"><TodayDayStyle BorderStyle="Dotted" BorderWidth="1" BorderColor="#000000" /><SelectedDayStyle BackColor="#eeffee" ForeColor="#000000" /></asp:Calendar>
				</td>
			</tr>
			<tr>
				<td><span class="FormLabelOptional">Last&nbsp;Modified&nbsp;Date End:</span></td>
				<td>
					<asp:TextBox id="txtLastModifiedDateEnd" tabIndex="6" CssClass="FormNormal" Runat="server" MaxLength="200" Width="200"></asp:TextBox>&nbsp;<asp:Button id="btnLastModifiedDateEndCalendar" tabIndex="7" runat="server" CssClass="Button" CausesValidation="False" Text="Calendar"></asp:Button>
					<asp:RangeValidator id="valLastModifiedDateEnd" ControlToValidate="txtLastModifiedDateEnd" EnableClientScript="False" Display="Dynamic" Runat="server" Type="Date" MinimumValue="1900/1/1" MaximumValue="2100/1/1" ErrorMessage="Must be a valid date from 1/1/1900 to 1/1/2100." ></asp:RangeValidator>
					<asp:Calendar id="calLastModifiedDateEnd" runat="server" tabIndex="8" Visible="false" CssClass="FormNormal" SelectionMode="DayWeekMonth"><TodayDayStyle BorderStyle="Dotted" BorderWidth="1" BorderColor="#000000" /><SelectedDayStyle BackColor="#eeffee" ForeColor="#000000" /></asp:Calendar>
				</td>
			</tr>
		</table>
		</asp:Panel>
	</wilson:contentregion>
	<wilson:contentregion id="SearchResultsTitle" runat="server">
		<asp:Label id="lblSearchResultsTitle" CssClass="subtitle" Runat="server">Search Results</asp:Label>
	</wilson:contentregion>
	<wilson:contentregion id="Pager1" runat="server">
		<MOD:ListPager id="firstPager" runat="server"></MOD:ListPager>
	</wilson:contentregion>
	<wilson:contentregion id="Pager2" runat="server">
		<MOD:ListPager id="secondPager" runat="server"></MOD:ListPager>
	</wilson:contentregion>
	<wilson:contentregion id="Buttons" runat="server">
		<table>
			<tr>
				<td>
					<asp:Button id="btnSearch" tabIndex="10" runat="server" CssClass="Button" CausesValidation="True" Text="Search"></asp:Button>
					<asp:Button id="btnClear" tabIndex="11" runat="server" CssClass="Button" CausesValidation="False" Text="Clear"></asp:Button>
					<asp:Button id="btnNew" tabIndex="12" runat="server" CssClass="Button" CausesValidation="False" Text="New Site&nbsp;Help"></asp:Button>
				</td>
			</tr>
		</table>
	</wilson:contentregion>


	<asp:DataGrid id="dgPrimaryList" Runat="server" AutoGenerateColumns="False" GridLines="None" AllowSorting="True" HeaderStyle-CssClass="tableHeader" SelectedItemStyle-CssClass="selTableCell" ItemStyle-CssClass="tableCell" AlternatingItemStyle-CssClass="altTableCell" OnItemCommand="dgPrimaryList_ItemCommand">
		<HeaderStyle></HeaderStyle>
		<ItemStyle></ItemStyle>
		<AlternatingItemStyle></AlternatingItemStyle>
		<FooterStyle></FooterStyle>
		<Columns>
			<asp:TemplateColumn HeaderText="Primary Name" SortExpression="PrimarySortColumn">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblPrimaryName" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Locale&nbsp;Code" SortExpression="LocaleCode">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblLocaleCode" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Site&nbsp;Help&nbsp;Name" SortExpression="SiteHelpName">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblSiteHelpName" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Site&nbsp;Help&nbsp;Text" SortExpression="SiteHelpText" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblSiteHelpText" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Site&nbsp;Help&nbsp;Image&nbsp;URL" SortExpression="SiteHelpImageURL">
				<ItemTemplate>
					<asp:Image CssClass="FormNormal" ID="lblSiteHelpImageURL" Runat="server" Width="50" Height="50"></asp:Image>&nbsp;<asp:HyperLink CssClass="FormNormal" ID="lnkSiteHelpImageURL" Runat="server" Target="SiteHelpImageURL">View</asp:HyperLink>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Site&nbsp;Help&nbsp;Group&nbsp;Code" SortExpression="SiteHelpGroupCode" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblSiteHelpGroupCode" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Site&nbsp;Help&nbsp;Definition&nbsp;Code" SortExpression="SiteHelpDefinitionCode">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblSiteHelpDefinitionCode" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Site&nbsp;Help&nbsp;Definition&nbsp;Name" SortExpression="SiteHelpDefinitionName">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblSiteHelpDefinitionName" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Locale&nbsp;Name" SortExpression="LocaleName">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblLocaleName" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Site&nbsp;Help&nbsp;Group&nbsp;Name" SortExpression="SiteHelpGroupName">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblSiteHelpGroupName" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Created&nbsp;Date" SortExpression="CreatedDate" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblCreatedDate" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Last&nbsp;Modified&nbsp;Date" SortExpression="LastModifiedDate">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblLastModifiedDate" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="">
				<ItemTemplate>
					<asp:LinkButton CssClass="FormNormal" ID="lnkEdit" TabIndex="100" Width="20" Runat="server" CausesValidation="false" CommandName="Edit" CommandArgument='<%#((MW.MComm.WalletSolution.BLL.UserExperience.SiteHelp)Container.DataItem).GetHashCode()%>'>Details</asp:LinkButton>
					<asp:HyperLink CssClass="FormNormal" ID="lnkEditOut" TabIndex="101" Width="20" Runat="server">Details</asp:HyperLink>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="">
				<ItemTemplate>
					<asp:LinkButton CssClass="FormNormal" ID="lnkDelete" TabIndex="102" Width="20" Runat="server" CausesValidation="false" CommandName="Delete" CommandArgument='<%#((MW.MComm.WalletSolution.BLL.UserExperience.SiteHelp)Container.DataItem).GetHashCode()%>'>Delete</asp:LinkButton>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="">
				<ItemTemplate>
					<asp:LinkButton CssClass="FormNormal" ID="lnkAdd" TabIndex="103" Width="20" Runat="server" CausesValidation="false" CommandName="Add" CommandArgument='<%#((MW.MComm.WalletSolution.BLL.UserExperience.SiteHelp)Container.DataItem).GetHashCode()%>'>Add</asp:LinkButton>
				</ItemTemplate>
			</asp:TemplateColumn>
		</Columns>
	</asp:DataGrid>
	<wilson:contentregion id="Detail" runat="server">
		<MOD:EditSiteHelp id="editSiteHelp" AccessMode="Add" DisplayMode="SingleView" RequiresAuthentication="true" WorkflowMode="Internal" UseWorkingSets="true" runat="server"></MOD:EditSiteHelp>
	</wilson:contentregion>
	<wilson:contentregion id="WorkingSet" runat="server">
		<MOD:WorkingSiteHelpData id="workingSiteHelpData" AccessMode="Edit" DisplayMode="SingleView" RequiresAuthentication="true" WorkflowMode="External" runat="server"></MOD:WorkingSiteHelpData>
	</wilson:contentregion>
</wilson:masterpage>