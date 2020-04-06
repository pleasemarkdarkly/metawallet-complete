
<!-- copyright
Meta Wallet, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
/copyright -->
<%@ Register TagPrefix="Wilson" Namespace="Wilson.MasterPages" Assembly="WilsonMasterPages" %>
<%@ Control Language="c#" AutoEventWireup="false" CodeFile ="EditStoredValueAccount.ascx.cs" Inherits="MW.MComm.Admin.WebUI.UserControls.Desktop.Accounts.EditStoredValueAccount" TargetSchema="http://schemas.microsoft.com/intellisense/ie5"%>
<%@ Register TagPrefix="MOD" TagName="PageSectionLinks" Src="~/UserControls/Desktop/Utility/PageSectionLinks.ascx" %>
<%@ Register TagPrefix="MODC" Namespace="MW.MComm.Admin.WebUI.Controls"%>
<wilson:masterpage id="Masterpage" runat="server" templatefile="~/Templates/Desktop/DetailControl.ascx">
	<wilson:contentregion id="Title" runat="server">
		<asp:Label id="lblTitle" CssClass="subtitle" Runat="server">Edit Stored&nbsp;Value&nbsp;Account</asp:Label>&nbsp;<asp:Label id="lblTitleMessage" CssClass="subtitle" Runat="server"></asp:Label>
	</wilson:contentregion>
	<wilson:contentregion id="ItemInfo" runat="server">
		<div class="IDSection" id="ItemInfoContent" runat="server">
		<table>
			<tr>
				<td>Account&nbsp;ID:</td>
				<td>
					<span class="ID">
					<MODC:PropVal id="propAccountID" runat="server" prop="StoredValueAccountItem.AccountID" cssclass="ID"></MODC:PropVal>
					</span>
				</td>
			</tr>
			<tr>
				<td>Account&nbsp;Name:</td>
				<td>
					<span class="ID">
					<MODC:PropVal id="propAccountName" runat="server" prop="StoredValueAccountItem.AccountName" cssclass="ID"></MODC:PropVal>
					</span>
				</td>
			</tr>
		</table>
		</div>
	</wilson:contentregion>
	<wilson:contentregion id="DetailNavigation" runat="server">
		<div class="SectionLink" id="SectionLinkContent" runat="server">
		<MOD:PageSectionLinks id="sectionLinks" runat="server" CssClass="SectionLink" SelectedCssClass="selSectionLink" ValidationList="Basics,Additional_Info" SectionList="Basics,Additional_Info"></MOD:PageSectionLinks>
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
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblAccountIDDisplay" runat="server">Account&nbsp;ID:</asp:Label></span></td>
				<td valign="top">
					<asp:Label id="lblAccountID" runat="server" CssClass="FormNormal"></asp:Label>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblMetaPartnerPhoneIDDisplay" runat="server">Meta&nbsp;Partner&nbsp;Phone:</asp:Label></span></td>
				<td valign="top">
					<asp:DropDownList id="ddlMetaPartnerPhoneID" tabIndex="2" runat="server" CssClass="FormNormal"></asp:DropDownList>
					<asp:Label id="lblMetaPartnerPhoneIDWorkingSet" runat="server" CssClass="FormNormal"> (from Meta&nbsp;Partner&nbsp;Phone working set)</asp:Label>
					<a id="lnkMetaPartnerPhoneIDWorkingSet" runat="server" onclick="javascript:return PromptToDiscardChanges();" class="FormNormal">search</a>
					<asp:CompareValidator id="valMetaPartnerPhoneID" ControlToValidate="ddlMetaPartnerPhoneID" EnableClientScript="False" Display="Dynamic" Runat="server" Type="String" ValueToCompare="0" Operator="NotEqual" ErrorMessage="Please select a value from the list." ></asp:CompareValidator>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblDebitAccountNumberDisplay" runat="server">Debit&nbsp;Account&nbsp;Number:</asp:Label></span></td>
				<td valign="top">
					<asp:TextBox id="txtDebitAccountNumber" tabIndex="3" runat="server" maxLength="100" Width="150" CssClass="FormNormal"></asp:TextBox>
					<asp:RequiredFieldValidator id="valDebitAccountNumberRequired" ControlToValidate="txtDebitAccountNumber" EnableClientScript="False" Display="Dynamic" Runat="server" ErrorMessage="Please enter some text." ></asp:RequiredFieldValidator>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblIsDefaultDebitAccountDisplay" runat="server">Is&nbsp;Default&nbsp;Debit&nbsp;Account:</asp:Label></span></td>
				<td valign="top">
					<asp:CheckBox id="chkIsDefaultDebitAccount" tabIndex="4" runat="server" CssClass="FormNormal"></asp:CheckBox>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblMetaPartnerIDDisplay" runat="server">Meta&nbsp;Partner:</asp:Label></span></td>
				<td valign="top">
					<asp:DropDownList id="ddlMetaPartnerID" tabIndex="5" runat="server" CssClass="FormNormal"></asp:DropDownList>
					<asp:Label id="lblMetaPartnerIDWorkingSet" runat="server" CssClass="FormNormal"> (from Meta&nbsp;Partner working set)</asp:Label>
					<a id="lnkMetaPartnerIDWorkingSet" runat="server" onclick="javascript:return PromptToDiscardChanges();" class="FormNormal">search</a>
					<asp:CompareValidator id="valMetaPartnerID" ControlToValidate="ddlMetaPartnerID" EnableClientScript="False" Display="Dynamic" Runat="server" Type="String" ValueToCompare="0" Operator="NotEqual" ErrorMessage="Please select a value from the list." ></asp:CompareValidator>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblAccountNameDisplay" runat="server">Account&nbsp;Name:</asp:Label></span></td>
				<td valign="top">
					<asp:TextBox id="txtAccountName" tabIndex="6" runat="server" maxLength="255" Width="300" CssClass="FormNormal"></asp:TextBox>
					<asp:RequiredFieldValidator id="valAccountNameRequired" ControlToValidate="txtAccountName" EnableClientScript="False" Display="Dynamic" Runat="server" ErrorMessage="Please enter some text." ></asp:RequiredFieldValidator>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblAccountSubTypeCodeDisplay" runat="server">Account&nbsp;Sub&nbsp;Type:</asp:Label></span></td>
				<td valign="top">
					<asp:DropDownList id="ddlAccountSubTypeCode" tabIndex="7" runat="server" CssClass="FormNormal"></asp:DropDownList>
					<asp:CompareValidator id="valAccountSubTypeCode" ControlToValidate="ddlAccountSubTypeCode" EnableClientScript="False" Display="Dynamic" Runat="server" Type="String" ValueToCompare="0" Operator="NotEqual" ErrorMessage="Please select a value from the list." ></asp:CompareValidator>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblCurrencyCodeDisplay" runat="server">Currency:</asp:Label></span></td>
				<td valign="top">
					<asp:DropDownList id="ddlCurrencyCode" tabIndex="8" runat="server" CssClass="FormNormal"></asp:DropDownList>
					<asp:CompareValidator id="valCurrencyCode" ControlToValidate="ddlCurrencyCode" EnableClientScript="False" Display="Dynamic" Runat="server" Type="String" ValueToCompare="0" Operator="NotEqual" ErrorMessage="Please select a value from the list." ></asp:CompareValidator>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelRequired"><asp:Label ID="lblIsActiveDisplay" runat="server">Is&nbsp;Active:</asp:Label></span></td>
				<td valign="top">
					<asp:CheckBox id="chkIsActive" tabIndex="9" runat="server" CssClass="FormNormal"></asp:CheckBox>
				</td>
			</tr>
		</table>
	</MODC:PageSection>
	<MODC:PageSection id="Section_Additional_Info" visible="false" runat="server">
		<table>
			<tr>
				<td valign="top"><span class="FormLabelOptional"><asp:Label ID="lblBankCustomerCodeDisplay" runat="server">Bank&nbsp;Customer&nbsp;Code:</asp:Label></span></td>
				<td valign="top">
					<asp:TextBox id="txtBankCustomerCode" tabIndex="10" runat="server" maxLength="50" Width="150" CssClass="FormNormal"></asp:TextBox>
				</td>
			</tr>
			<tr>
				<td valign="top"><span class="FormLabelOptional"><asp:Label ID="lblDescriptionDisplay" runat="server">Description:</asp:Label></span></td>
				<td valign="top">
					<asp:TextBox id="txtDescription" tabIndex="11" runat="server" Width="300" CssClass="FormNormal" TextMode="MultiLine" Rows="5" Columns="100"></asp:TextBox>
				</td>
			</tr>
		</table>
	</MODC:PageSection>
</wilson:masterpage>