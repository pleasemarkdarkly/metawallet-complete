
<!-- copyright
Meta Wallet, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
/copyright -->
<%@ Register TagPrefix="Wilson" Namespace="Wilson.MasterPages" Assembly="WilsonMasterPages" %>
<%@ Control Language="c#" AutoEventWireup="false" CodeFile ="ListBillPayAccountData.ascx.cs" Inherits="MW.MComm.Admin.WebUI.UserControls.Desktop.Accounts.ListBillPayAccountData" TargetSchema="http://schemas.microsoft.com/intellisense/ie5"%>
<%@ Register TagPrefix="MOD" TagName="EditBillPayAccount" SRC="~/UserControls/Desktop/Accounts/EditBillPayAccount.ascx" %>
<wilson:masterpage id="Masterpage" runat="server" templatefile="~/Templates/Desktop/ListControl.ascx">
	<wilson:contentregion id="Title" runat="server">
		<asp:Label id="lblTitle" CssClass="subtitle" Runat="server">Bill&nbsp;Pay&nbsp;Account List</asp:Label>
	</wilson:contentregion>
	<wilson:contentregion id="Buttons" runat="server">
		<table>
			<tr>
				<td>
					<asp:Button id="btnNew" tabIndex="12" runat="server" CssClass="Button" CausesValidation="False" Text="New Bill&nbsp;Pay&nbsp;Account"></asp:Button>
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
			<asp:TemplateColumn HeaderText="Business&nbsp;Account&nbsp;Number" SortExpression="BusinessAccountNumber" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblBusinessAccountNumber" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Start&nbsp;Date" SortExpression="StartDate">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblStartDate" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="End&nbsp;Date" SortExpression="EndDate">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblEndDate" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Default&nbsp;Minimum&nbsp;Payment" SortExpression="DefaultMinimumPayment" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblDefaultMinimumPayment" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Default&nbsp;Maximum&nbsp;Payment" SortExpression="DefaultMaximumPayment" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblDefaultMaximumPayment" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Hour&nbsp;Of&nbsp;Day" SortExpression="HourOfDay" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblHourOfDay" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Day&nbsp;Of&nbsp;Week" SortExpression="DayOfWeek" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblDayOfWeek" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Week&nbsp;Of&nbsp;Month" SortExpression="WeekOfMonth" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblWeekOfMonth" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Month&nbsp;Of&nbsp;Year" SortExpression="MonthOfYear" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblMonthOfYear" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Number&nbsp;Of&nbsp;Reminders" SortExpression="NumberOfReminders" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblNumberOfReminders" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Frequency&nbsp;Code" SortExpression="FrequencyCode" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblFrequencyCode" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Account&nbsp;Name" SortExpression="AccountName">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblAccountName" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Account&nbsp;Sub&nbsp;Type&nbsp;Code" SortExpression="AccountSubTypeCode" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblAccountSubTypeCode" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Currency&nbsp;Code" SortExpression="CurrencyCode" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblCurrencyCode" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Description" SortExpression="Description" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblDescription" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Is&nbsp;Active" SortExpression="IsActive">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblIsActive" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Frequency&nbsp;Name" SortExpression="FrequencyName">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblFrequencyName" Runat="server"></asp:Label>
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
					<asp:LinkButton CssClass="FormNormal" ID="lnkEdit" TabIndex="100" Width="20" Runat="server" CausesValidation="false" CommandName="Edit" CommandArgument='<%#((MW.MComm.WalletSolution.BLL.Accounts.BillPayAccount)Container.DataItem).GetHashCode()%>'>Details</asp:LinkButton>
					<asp:HyperLink CssClass="FormNormal" ID="lnkEditOut" TabIndex="101" Width="20" Runat="server">Details</asp:HyperLink>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="">
				<ItemTemplate>
					<asp:LinkButton CssClass="FormNormal" ID="lnkDelete" TabIndex="102" Width="20" Runat="server" CausesValidation="false" CommandName="Delete" CommandArgument='<%#((MW.MComm.WalletSolution.BLL.Accounts.BillPayAccount)Container.DataItem).GetHashCode()%>'>Delete</asp:LinkButton>
				</ItemTemplate>
			</asp:TemplateColumn>
		</Columns>
	</asp:DataGrid>
	<wilson:contentregion id="Detail" runat="server">
		<MOD:EditBillPayAccount id="editBillPayAccount" AccessMode="Add" DisplayMode="SingleView" RequiresAuthentication="true" WorkflowMode="Internal" UseWorkingSets="true" runat="server"></MOD:EditBillPayAccount>
	</wilson:contentregion>
</wilson:masterpage>