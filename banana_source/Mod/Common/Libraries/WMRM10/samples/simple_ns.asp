<%
'*@@@+++@@@@******************************************************************
'
' Microsoft Windows Media
' Copyright (C) Microsoft Corporation. All rights reserved.
'
' IMPORTANT:  THESE SAMPLES ARE PROVIDED FOR HIGH-LEVEL REFERENCE ONLY
'             AND SHOULD NOT BE USED IN PRODUCTION ENVIRONMENTS.
'
'*@@@---@@@@******************************************************************
%>
<HTML>
<HEAD>
<TITLE>V2 Licensing</TITLE>
<Script Language="JavaScript">
function StoreV2License(hr)
{     
	netobj.StoreLicense( "<%= licresponse %>" );
}
</Script>    
</HEAD>
<BODY onLoad="StoreV2License()">
<OBJECT classid=clsid:A9FC132B-096D-460B-B7D5-1DB0FAE0C062 height=0 id=netobj 
width=0> 
	<EMBED MAYSCRIPT TYPE="application/x-drm-v2" HIDDEN="true">
</OBJECT>
You have received a license for this song. Click Play.
</BODY>
</HTML>