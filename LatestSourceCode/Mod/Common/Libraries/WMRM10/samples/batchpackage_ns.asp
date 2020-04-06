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
//This page is used by licenseServer.asp to pass down the license to users. 
//Using the Network object, pass the license. As you are passing the license,
//You can ask some user information such as e-mail address. 
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
    <div align="left">
     <TABLE bgColor=#80ff00 border=1 borderColor=#ffffff borderColorDark=#000000 borderColorLight=#ffffff cellPadding=0 
      cellSpacing=0 height=278 id=TABLE1 style="HEIGHT: 389px; POSITION: relative; WIDTH: 629px" width=407 
      align=left>
        <TBODY>
        <FORM  id=form1 name=form1>
        <TR>
          <TD align=middle bgColor=#80ff00 borderColor=#ff00ff 
          borderColorDark=#000000 borderColorLight=#ffffff height=268 noWrap 
          style="POSITION: relative" vAlign=top width=482>
      <P><FONT face=Tahoma 
            size=3>&nbsp;<IMG border=0 src="../warning.gif"></FONT>
            <FONT face=Tahoma size=2>You have download a piece of content that 
            includes digital security and rights management.&nbsp;&nbsp;</FONT></P>
      <P><FONT face=Tahoma size=2><BR></FONT>&nbsp; 
            <FONT face=Tahoma size=2>Entering the registration information 
            below will send you a digital</FONT>
            <FONT face=Tahoma size=2> license that will unlock your Windows Media and enable you to play on your PC</FONT>&nbsp; 
            <FONT face=Tahoma size=2>&nbsp; </FONT></P>
      <P><FONT face=Tahoma 
      size=2>Name:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
       <INPUT id=text1 name=text1 style="HEIGHT: 25px; WIDTH: 222px"></FONT></P>
      <P><FONT face=Tahoma size=2> &nbsp;Email Address: <INPUT name=email 
            size=49 style="FONT-FAMILY: Verdana; FONT-SIZE: 8pt; HEIGHT: 22px; WIDTH: 221px" 
      VCARD_NAME="vCard.email"> </FONT></P>
            <P align=center>
            <FONT face=Tahoma size=2>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
            <INPUT type=submit value=submit id=submit1 name=submit1>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
            </FORM>
            <P align=center><FONT face=Tahoma size=2 style="POSITION: relative">For more information regarding how we 
            will process your personal information, <A href="Confirm1.asp" target=_blank>click here.</A> 
            </FONT></P></FONT></TD></TR></TBODY>
           </TABLE>
<P></P>
          </div>
          
      <p align="left" style="TEXT-ALIGN: center">&nbsp;</p>
<DIV></DIV>		
</BODY>
</HTML>