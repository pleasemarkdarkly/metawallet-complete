
<%@ Page language="c#" MasterPageFile="~/Templates/Desktop/ContentPage.master" EnableEventValidation="False" CodeFile="EditNotificationDeliveryType.aspx.cs" AutoEventWireup="false" Inherits="MW.MComm.Admin.WebUI.Pages.Desktop.Notifications.EditNotificationDeliveryType" ValidateRequest="false" Title="MW.MComm.Admin.WebUI - Edit Notification Delivery Type" %>
<%@ Register TagPrefix="MOD" TagName="EditNotificationDeliveryType" Src="~/UserControls/Desktop/Notifications/EditNotificationDeliveryType.ascx"%>
<asp:Content id="Content1" ContentPlaceHolderID="cphTitle" runat="server">MW.MComm.Admin.WebUI - Edit Notification Delivery Type</asp:Content>
<asp:Content id="Content2" ContentPlaceHolderID="cphMetaTags" runat="server">
	<meta content="NotificationDeliveryType" name="keywords"/>
	<meta content="MW.MComm.Admin.WebUI" name="description"/>
</asp:Content>
<asp:Content id="Content6" ContentPlaceHolderID="cphContent" runat="server">
	<MOD:EditNotificationDeliveryType id="editNotificationDeliveryType" AccessMode="Add" DisplayMode="SingleView" WorkflowMode="External" UseWorkingSets="true" RequiresAuthentication="true" runat="server"></MOD:EditNotificationDeliveryType>
</asp:Content>