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
<html>
<head>
<title>9 Series License Predelivery</title>
    <script Language="VBScript">
    Sub Window_OnLoad()
        'On Error Resume Next
        'Get client information with Network object
        document.predeliver.clientinfo.value = netobj.GetSystemInfo()
    End Sub
   </script>
</head>
<SCRIPT LANGUAGE="JavaScript">
<!--
function LicenseDown()
{
      
        document.predeliver.cid.value = "3";
      
        document.predeliver.submit();
   
}


//-->
</SCRIPT>

<body>
<P><STRONG>
<FONT size=6 color=#7cfc00>
<OBJECT classid=clsid:A9FC132B-096D-460B-B7D5-1DB0FAE0C062 height=0 id=netobj 
width=0></OBJECT></FONT><font color="#0000FF" size="5">Sample 1: Predelivering a 9 Series license</font></STRONG></P>
<P><font>The best song ever will soon be available! </font>Buy it now!</P>
<font size="5">
<form name="predeliver" action="prelicgen.asp?predeliver=1"  method="post">
<INPUT type="hidden"  name="clientinfo" ><INPUT type="hidden"  name="cid" >
<p><INPUT type="button" onClick="LicenseDown()" value="Give me the license for the song" ></p>
</form>
</body>
</HTML>

