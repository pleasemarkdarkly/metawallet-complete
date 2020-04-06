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
<meta name="GENERATOR" content="Microsoft FrontPage 4.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
</head>

<body>

<%
 'don't cache the page
 Response.AddHeader "Pragma", "No-Cache"
 Response.CacheControl = "Private"

'set rightsoptions

  If (Request.Form("pc") = "on") or (Request.Form("sdmi") = "on")or (Request.Form("cid") <> "") Then
 
	Dim txtType
	  
	Dim oRights
	Dim strRights
    
    Dim cid         'content ID
    
	
	Dim pc				'Allow playback on PC
	Dim cd				'Allow burning to CD
	Dim delRoll		'Delete license on clock rollback
	Dim disRoll     	'Disable license on clock rollback
	Dim backup     	'Allow backup/restore
	Dim sdmi			'Allow transfer to SDMI-compliant device
	dim nonSdmi		'Allow transfer to non-SDMI-compliant device
	Dim pmRights		'Set portable license rights
	Dim bDate			'Beginning date of license validity
	Dim eDate			'Expiration date of license
	Dim pmDate			'Expiration date of portable license
	Dim playCount		'Play count
	Dim transCount  	'Transfer count for SDMI-compliant device
	Dim minSecur		'Minimum application security level
	Dim digital     	'Allow digital output
	Dim driverCert  	'Verify driver components
	Dim driverSec   	'Minimum driver security
	Dim pmSec    		'Minimum security level for portable devices
    
        
	pc			= Request.Form ("pc")
	cd			= Request.Form ("cd")
	delRoll		= Request.Form ("delRoll")
	disRoll		= Request.Form ("disRoll")
	backup		= Request.Form ("backup")
	pmRights    = Request.Form ("pmRights")
	sdmi		= Request.Form ("sdmi")
	nonSdmi     = Request.Form ("nonSdmi")
	bDate		= Request.Form ("bDate")
	eDate		= Request.Form ("eDate")
	pmDate		= Request.Form ("pmDate")
	playCount	= Request.Form ("playCount")
	transCount	= Request.Form ("transCount")	
	minSecur	= Request.Form ("minSecur")
    digital     = Request.Form ("digital")
    driverCert  = Request.Form ("driverCert")
    driverSec   = Request.Form ("driverSec")
    pmSec       = Request.Form ("pmSec")
    
   'Make the rights string based on the form input, then pass the string as an attribute in the header
   	
		If  pc <> "" Then 'Allow playback on PC
		 strRights = pc
		End If
		 strRights = strRights +"."
		 
		If  cd <> "" Then  'Allow burning to CD
		  strRights = strRights + cd
		End If
		  strRights = strRights +"."
		 
	    If  delRoll <> "" Then 'Delete license on clock rollback
	      strRights = strRights + delRoll		     
		End If
		  strRights = strRights +"."

		If disRoll <> "" Then 'Disable license on clock rollback
		  strRights = strRights + disRoll		    
		End If
		  strRights = strRights +"."

		If  backup <> "" Then 'Allow backup/restore
		  strRights = strRights + backup		       
		End If
		  strRights = strRights +"."
		  
	    If sdmi <> "" Then 'Allow transfer to SDMI-compliant device
		  strRights = strRights + sdmi
		End If
	     strRights = strRights +"."
	     
		If nonSdmi <> "" Then 'Allow transfer to non-SDMI-compliant device
		  strRights = strRights + nonSdmi			   
		End If
		strRights = strRights +"."
	    
	    If pmRights <> "" Then 'Set portable license rights
			strRights = strRights + pmRights
			strRights = strRights +"/"
			If pmDate <> "" Then 'Expiration date of portable license
				strRights = strRights + pmDate
			Else
			    strRights = strRights + "?"			      
			End If
			strRights = strRights +"/"
			If pmSec <> "" then
			    strRights = strRights + pmSec
			Else
			    strRights = strRights + "?"
			End If			
        End If
           strRights = strRights +"."
		
		If bDate <> "" Then 'Beginning date of license validity
		  strRights = strRights + bDate
	    End If
		  strRights = strRights +"."
	    
		If edate <> "" Then 'Expiration date of license
		  strRights = strRights + eDate		      
		End If
		  strRights = strRights +"."

		If playCount <> "" Then 'Play count
		  strRights = strRights + playCount		      
		End If
		  strRights = strRights +"."
	   
	    If transCount <> "" Then 'Transfer count
		  strRights = strRights + transCount		      
		End If
		  strRights = strRights +"."
		  
		If minSecur <> "" Then 'Minimum application security level
		  strRights = strRights + minSecur		     
		End If
		 strRights = strRights +"."
		 
		If digital <> "" Then 'Allow digital output
		  strRights = strRights + digital
		Else
			    strRights = strRights + "?"	     
		End If
		 strRights = strRights +"/"
		
		If driverCert <> "" Then 'Verify driver components
		  strRights = strRights + driverCert
		Else
			    strRights = strRights + "?"	     
		End If
		 strRights = strRights +"/"
		 
		If driverSec <> "" Then 'Secure Audio Path mode (minimum driver security)
		  strRights = strRights + driverSec	
		Else
			    strRights = strRights + "?"	 	     
		End If
		
	 
    Response.Write "<B>"& "You selected options"&"<BR>" & strRights &"<BR>" 
    Response.Write "Do you want to submit your selection?" & "</B>"
      'Pass string value    
%>
<form action="batchpackage_complex.asp" method="post" id="form2" name="form2">
  <input type="hidden" name="rights" value="<%=strRights%>">
  <input type="submit" value="Submit" id="submit2" name="submit2"><BR>
  <BR><A href="batchpackage_rights.asp"><strong>Reset Options</strong></A>
</form>

<%
Else
%>
<form action="batchpackage_rights.asp" method="post" id="form1" name="form1">
  <p><font size="6"></font>&nbsp;</p>
  <p>
     <b><font color="#0000ff">
     Select the rights to allow</font></b></p>
  <table border="1" cellpadding="1" cellspacing="1">
    <tr>
      <td valign="top"><font size="2"><input id="checkbox1" name="pc" style="HEIGHT: 20px; WIDTH: 20px" type="checkbox" >Allow
        playback on PC</font></td>
      <td valign="top"><font size="2"><input id="checkbox3" name="cd" type="checkbox">Allow
        burning to CD</font></td>
    </tr>
    <tr>
      <td valign="top"><font size="2"><input id="checkbox6" name="delRoll" type="checkbox">Delete
        license if clock is set back</font></td>
      <td valign="top"><font size="2"><input id="checkbox7" name="disRoll" type="checkbox">Disable
        license if clock is set back</font></td>
    </tr>
    <tr>
      <td valign="top"><font size="2"><input id="checkbox8" name="backup" type="checkbox">Allow
        license management<br>
        &nbsp;&nbsp; (backup and restore licenses)</font></td>
      <td valign="top">
      <P><font size="2"><INPUT id=checkbox10 name=sdmi type=checkbox>Allow transfer to
      SDMI-compliant device</font></P>
           </td>
    </tr>
  <TR>
    <TD valign="top"><font size="2">Rights of portable license&nbsp;<INPUT id=text9 name=pmRights 
      style="HEIGHT: 25px; WIDTH: 62px">    
       </font></TD>
    <TD valign="top"><font size="2"><INPUT id=checkbox11 name=nonSdmi 
      type=checkbox>Allow transfer to non-SDMI-compliant 
    device</font></TD></TR>
  </table><p><b><font >To allow any of the following rights,
  specify a value for it<br>
  </font></b><table border="1" cellpadding="1" cellspacing="1">
    <tr>
    <TD valign="top"><font size="2">Minimum security level for applications</font></TD>
    <TD valign="top"><font size="2"><INPUT id=text7 name="minSecur" 
      style="HEIGHT: 25px; WIDTH: 65px"></font></TD>
    </tr>
    <tr>
      <td valign="top">
        <font size="2">Minimum security level for portable devices</font></td>
      <td valign="top"><font size="2"><INPUT id=text8 
  name="pmSec">
        </font>
          </td>
    </tr>
    <tr>
      <td valign="top"><font size="2">Date license becomes valid</font></td>
      <td valign="top"><font size="2"><input id="text1" name="bDate" ></font></td>
    </tr>
    <tr>
      <td valign="top"><font size="2">Date license expires</font></td>
      <td valign="top"><font size="2"><input id="text2" name="eDate" 
     ></font></td>
    </tr>
    <tr>
      <td valign="top"><font size="2">Date portable license expires</font></td>
      <td valign="top"><font size="2"><input id="text3" name="pmDate" style="HEIGHT: 25px; WIDTH: 203px" ></font></td>
    </tr>
    <tr>
      <td valign="top"><font size="2">Play count</font></td>
      <td valign="top"><font size="2"><input id="text4" name="playCount" style="HEIGHT: 25px; WIDTH: 67px" ></font></td>
    </tr>
    <tr>
      <td valign="top"><font size="2">Transfer count</font>
         </td>
      <td valign="top"><font size="2"><input id="text5" name="transCount" style="HEIGHT: 25px; WIDTH: 68px" ></font></td>
    </tr>
  <TR></TR></table><p><b><font color="#0000ff">Settings for Secure Audio Path mode<br>
  </font></b><table border="1" cellpadding="1" cellspacing="1" width="505">

  <TR>
    <TD valign="top" width="190" ><font size="2">&nbsp;Minimum driver security</font></TD>
    <TD valign="top" width="299"><font size="2"><INPUT id="driverSec" name=text6 
      style="HEIGHT: 25px; WIDTH: 76px"> 
      </font></TD>
    </TR>
    <tr>
     <TD valign="top" colspan="2" width="495"><font size="2"><INPUT id=checkbox4 name="digital" 
      type=checkbox>&nbsp;Allow digital output</font></TD>
    </tr>
    <tr>
     <TD valign="top" colspan="2" width="495"><font size="2"><INPUT id=checkbox2 name="driverCert" 
      type=checkbox>Verify driver components</font></TD>
    </tr>
  </table>
  <p>&nbsp; <input id="reset1" name="reset1" style="HEIGHT: 28px; WIDTH: 128px" type="reset" value="Reset">
  <input id="submit1" name="submit1" style="HEIGHT: 28px; WIDTH: 160px" type="submit" value="Apply"></p>
</form>

<%
End If
%>
</body>

</html>
