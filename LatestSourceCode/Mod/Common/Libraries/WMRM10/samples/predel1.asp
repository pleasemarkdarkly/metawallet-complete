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
<title>V7 License Predelivery</title>
</head>
<SCRIPT LANGUAGE="VBScript">
Sub Validate()
    Dim kid, cid
      
        cid = "3"
       'Get client infomation with the Network object and URL
        netobj.GetLicenseFromURL "<a></a>", "<%= Application("siteurl") %>" + "/prelicgen.asp?predeliver=2&cid="+cid   
        predeliver.submit() 
End Sub
</SCRIPT>

<body>
<P>
<OBJECT name= netobj classid=clsid:A9FC132B-096D-460B-B7D5-1DB0FAE0C062 height=0 id=netobj 
width=0></OBJECT><font color="#0000FF" size="5"><b>Sample 2: Predelivering a 9 Series license</b></font></P>
<P>Get a license for the song now, play the song later!</P>
<form name="predeliver" action="Confirm1.asp"  method="post">
<INPUT type="hidden"  name="cid" >
<p><INPUT type="button" onclick="Validate()" value="Give me a license for the song" style  ="HEIGHT: 28px; WIDTH: 189px"></p>
</form>
</body>


