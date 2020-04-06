
<%@ Page language="c#" MasterPageFile="~/Templates/Desktop/ContentPage.master" EnableEventValidation="False" CodeFile="EditPayment.aspx.cs" AutoEventWireup="false" Inherits="MW.MComm.Admin.WebUI.Pages.Desktop.Payments.EditPayment" ValidateRequest="false" Title="MW.MComm.Admin.WebUI - Edit Payment" %>
<%@ Register TagPrefix="MOD" TagName="EditPayment" Src="~/UserControls/Desktop/Payments/EditPayment.ascx"%>
<asp:Content id="Content1" ContentPlaceHolderID="cphTitle" runat="server">MW.MComm.Admin.WebUI - Edit Payment</asp:Content>
<asp:Content id="Content2" ContentPlaceHolderID="cphMetaTags" runat="server">
	<meta content="Payment" name="keywords"/>
	<meta content="MW.MComm.Admin.WebUI" name="description"/>
</asp:Content>
<asp:Content id="Content6" ContentPlaceHolderID="cphContent" runat="server">
	<MOD:EditPayment id="editPayment" AccessMode="Add" DisplayMode="TabbedView" WorkflowMode="External" UseWorkingSets="true" RequiresAuthentication="true" runat="server"></MOD:EditPayment>
</asp:Content>