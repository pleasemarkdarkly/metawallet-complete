
<!-- copyright
Meta Wallet, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
/copyright -->
<%@ Register TagPrefix="Wilson" Namespace="Wilson.MasterPages" Assembly="WilsonMasterPages" %>
<%@ Control Language="c#" AutoEventWireup="false" CodeFile ="ListStoredValueAccountData.ascx.cs" Inherits="MW.MComm.Admin.WebUI.UserControls.Desktop.Accounts.ListStoredValueAccountData" TargetSchema="http://schemas.microsoft.com/intellisense/ie5"%>
<%@ Register TagPrefix="MOD" TagName="EditStoredValueAccount" SRC="~/UserControls/Desktop/Accounts/EditStoredValueAccount.ascx" %>
<wilson:masterpage id="Masterpage" runat="server" templatefile="~/Templates/Desktop/ListControl.ascx">
	<wilson:contentregion id="Title" runat="server">
		<asp:Label id="lblTitle" CssClass="subtitle" Runat="server">Stored&nbsp;Value&nbsp;Account List</asp:Label>
	</wilson:contentregion>
	<wilson:contentregion id="Buttons" runat="server">
		<table>
			<tr>
				<td>
					<asp:Button id="btnNew" tabIndex="12" runat="server" CssClass="Button" CausesValidation="False" Text="New Stored&nbsp;Value&nbsp;Account"></asp:Button>
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
			<asp:TemplateColumn HeaderText="Balance" SortExpression="Balance" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblBalance" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Debit&nbsp;Account&nbsp;Number" SortExpression="DebitAccountNumber" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblDebitAccountNumber" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Is&nbsp;Default&nbsp;Debit&nbsp;Account" SortExpression="IsDefaultDebitAccount" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblIsDefaultDebitAccount" Runat="server"></asp:Label>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="Bank&nbsp;Customer&nbsp;Code" SortExpression="BankCustomerCode" Visible="false">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblBankCustomerCode" Runat="server"></asp:Label>
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
			<asp:TemplateColumn HeaderText="Phone&nbsp;Number" SortExpression="PhoneNumber">
				<ItemTemplate>
					<asp:Label CssClass="FormNormal" ID="lblPhoneNumber" Runat="server"></asp:Label>
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
					<asp:LinkButton CssClass="FormNormal" ID="lnkEdit" TabIndex="100" Width="20" Runat="server" CausesValidation="false" CommandName="Edit" CommandArgument='<%#((MW.MComm.WalletSolution.BLL.Accounts.StoredValueAccount)Container.DataItem).GetHashCode()%>'>Details</asp:LinkButton>
					<asp:HyperLink CssClass="FormNormal" ID="lnkEditOut" TabIndex="101" Width="20" Runat="server">Details</asp:HyperLink>
				</ItemTemplate>
			</asp:TemplateColumn>
			<asp:TemplateColumn HeaderText="">
				<ItemTemplate>
					<asp:LinkButton CssClass="FormNormal" ID="lnkDelete" TabIndex="102" Width="20" Runat="server" CausesValidation="false" CommandName="Delete" CommandArgument='<%#((MW.MComm.WalletSolution.BLL.Accounts.StoredValueAccount)Container.DataItem).GetHashCode()%>'>Delete</asp:LinkButton>
				</ItemTemplate>
			</asp:TemplateColumn>
		</Columns>
	</asp:DataGrid>
	<wilson:contentregion id="Detail" runat="server">
		<MOD:EditStoredValueAccount id="editStoredValueAccount" AccessMode="Add" DisplayMode="SingleView" RequiresAuthentication="true" WorkflowMode="Internal" UseWorkingSets="true" runat="server"></MOD:EditStoredValueAccount>
	</wilson:contentregion>
</wilson:masterpage>