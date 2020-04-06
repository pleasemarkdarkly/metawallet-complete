<%@ LANGUAGE="VBScript"%>
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
		<TITLE>Protect the content</TITLE>
		<%
ON ERROR RESUME NEXT
Dim seed, siteurl
Dim keyObj, headobj, protectObj
Dim oldHeaderObj

Dim cid, rid, kid, key, input, output
Dim v1regpage, v2regpage, licurl, v1licurl, owner
Dim header
Dim result
Dim value
Dim secversion
Dim usekid
Dim inputfile, outputfile, headerfile
Dim outputdir, headerdir
Dim inputfiledefault
Dim sign, signcertcn, signstorename
Dim description
Dim KeyID

description = ""

'Set the default values for your server


do	


'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
'Get static information. This sample uses global.asa for these values, but in real practice, 
'these values would come from a location such as a database. 
''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''' 
    'Retrieve global parameters needed to create the header
    seed                    = Application("seed")
    contentserverprivkey    = Application("contentserverprivkey")
    contentserverpubkey     = Application("contentserverpubkey")
    siteurl                 = Application("siteurl")
    owner                   = Application("ownerid")
    KeyID                   = Application("KeyID")
   
    'Get information from the form
    v1regpage  = Request("v1URL") 'Version 1 license acquisition URL
    v2regpage  = Request("URL")   'Version 7 license acquisition URL
    secversion = Request("secversion")'Security (individualization) version
    usekid     = Request("usekid")'Whether to use the key ID
    inputfile  = Request("input")  'Input file name
    outputfile = Request("output") 'Output file name
    cid        = Request("CID") 'Content ID
    rid        = Request("RID") 'Rights 
    
    cid = Trim(cid)
    rid = Trim(rid)
    usekid = Trim(usekid)
    
    if (cid = "") then
      cid = "0"
    end if
    if (rid = "") then
      rid = "0"
    end if
    
    'Set the version 7 license acquisition URL
    licurl     = siteurl + "/" + v2regpage    
    
    'Set the version 1 license acquisition URL
    if v1regpage <> "" then
      v1licurl = siteurl + "/" + v1regpage 
    end if  
    
    err.clear
    
    'Set Key, Header, and Protect objects
    
    Set keyObj           = Server.CreateObject("Wmrmobjs.WMRMKeys")
    if (err.number <> 0) then
        exit do
    end if
    Set headobj          = Server.CreateObject("Wmrmobjs.WMRMHeader")
    if (err.number <> 0) then
        exit do
    end if
    Set protectObj       = Server.CreateObject("Wmrmobjs.WMRMProtect")
    if (err.number <> 0) then
        exit do
    end if
    
      
    
  
    '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    'Generate key using the Key object.
    'Generate the symmetric key information.
    'We need the license key seed and key ID to generate the key,
    'so generate these values or retrieve one from a database.
    '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    
    'Ask which key ID to use: a database value or generated value
    if (usekid = "on") then
        kid = Request("kid")  
    else
        if (inputfile <> "" and v2regpage <> "simple.asp" and v2regpage <>"complex.asp") then
            kid = KeyID
        else
            kid = keyObj.GenerateKeyID()
        end if
    end if

   'Use database values to generate a Key
    keyObj.seed   = seed
    keyObj.KeyID  = kid
    
    'Get a symmetric key
    key = keyObj.GenerateKey()
    if (err.number <> 0) then
        exit do
    end if
        
    ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    'Generating the header 
    'Create the version 7 XML header for the media file. 
    'The following information is used: Version, Header, KeyID, 
    'ContentID, IndividualizedVersion, LicenseAcqURL, Attribute, etc.
    'This sample uses values from the global.asa file.
    ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    
    'Put parameters into the object
    headObj.KeyID           = kid
        if (err.number <> 0) then
           exit do
        end if
    
    headObj.LicenseAcqURL   = licurl 'Version 7 license acquisition URL
         if (err.number <> 0) then
           exit do
         end if
    headObj.ContentID       = cid  
         if (err.number <> 0) then
           exit do
         end if
     
    'Checksum key information
    call headObj.SetCheckSum(key)
        if (err.number <> 0) then
           exit do
        end if
          
     If v2regpage <> "Simple.asp" Then
       headObj.Attribute("RID") = rid
     End If 
       
        if (err.number <> 0) then
          exit do
        end if
    
    if (secversion <> "") then
    	headobj.IndividualizedVersion =  secversion
    end if
        if (err.number <> 0) then
          exit do
        end if
    'Sign the header with the private key 
    'Later, the header will be verified with the public key
    call headobj.Sign(contentserverprivkey)
       if (err.number <> 0) then
         exit do
       end if
    
    'Generate the header information
    header = headobj.Header
        if (err.number <> 0) then
         exit do
        end if
    
    ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    'Protect the content
    'Information needed for packaging:
    'InputFile, outputFile, V1LicenseAcqURL, Key, Header, SignStoreName, 
    'SignCertCN, V1KeyID, etc.
    ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    'If the output field is not empty:
     if (outputfile <> "") then
        protectObj.InputFile = inputfile
        if (err.number <> 0) then
            exit do
        end if
        
        IF  v1licurl <> "" then
          protectObj.V1LicenseAcqURL = v1licurl
        End IF
        
        if (err.number <> 0) then
            exit do
        end if
        protectObj.Key = key
        if (err.number <> 0) then
            exit do
        end if
        protectObj.Header = header
        if (err.number <> 0) then
            exit do
        end if
        protectObj.V1KeyID = kid
        if (err.number <> 0) then
            exit do
        end if
        
      'Packaging the file
      Call protectObj.ProtectFile(outputfile)
       if (err.number <> 0) then
            exit do
        end if
                
        description = "The media file has been successfully packaged" 
      
        
    end if
loop while false

If err.number <> 0 then
  description = "0x" + CStr(Hex(err.number)) + ":" + err.description
End If

'Clear the content

set keyObj       = nothing
set headobj      = nothing
set protectObj   = nothing
set oldHeaderObj = nothing
%>
</HEAD>
<BODY>
<FORM action=Package.asp method=post name=protect2>
<P><b><font size="4">Sample: Protecting a single 
media file and delivering multiple types of licenses</font></b><B>
<FONT size=5 style="COLOR: #ff4500">
<HR></FONT>
</B>
<p><b>    <font color="#0000FF">    Media file information</font></b></p>
<TABLE border=1 cellPadding=1 cellSpacing=1 width="540" >
  
  <TR>
    <TD width="221"><font size="2">Input file name</font></TD>
    <TD width="303"><font size="2"><INPUT 
      id=file1 name=input size=30 type=file></font></TD></TR>
  <TR>
    <TD width="221"><font size="2">Output path and file name</font></TD>
    <TD width="303"><font size="2"><INPUT name=output size=30></font></TD></TR>
  <TR>
    <TD width="221"><font size="2">9 Series license acquisition URL</font></TD>
    <TD width="303">
        <font size="2">
        <SELECT id=select1 name=URL size="1" > 
           <OPTION selected value="simple.asp">Simple (Simple.asp)</OPTION> 
           <OPTION value="complex.asp">Complex (Complex.asp)</OPTION> 
           <OPTION>Predelivery (No URL)</OPTION>
        </SELECT>
        </font>
    </TD>
  </TR>
  <TR>
    <TD width="221">
      <P><font size="2">Version 1 license acquisition URL</font></P>  </TD>
    <TD width="303"><font size="2"><INPUT id=text1 name=v1URL 
       value=""></font></TD></TR>
  <TR>
    <TD width="221">
      <P> <font size="2"> License to issue (valid for Complex only)</font></P></TD>
    <TD width="303"><font size="2"><SELECT id=select3 name=CID size="1" 
      > 
      <OPTION value =500 selected 
       >9 Series license</OPTION>
      <OPTION value=400>9 Series and Version 1 licenses</OPTION>
      <OPTION value=300>Two 9 Series licenses with different priorities</OPTION>
      </SELECT></font></TD></TR>
  <TR>
    <TD width="221">   <font size="2">   Rights to allow (valid for Complex
      only)</font></TD>
    <TD width="303"><font size="2"><SELECT id=select2 name=RID size="1" > 
    <OPTION selected value=5>Unlimited play</OPTION>
    <OPTION value=1>Play one time</OPTION>
    <OPTION value=2>Expires on 12-1-05</OPTION>
    <OPTION value=3>Allow transfer to SDMI device, unlimited play</OPTION>
    <OPTION value=4>Play two times</OPTION>
  
    </SELECT></font></TD></TR>
  <TR>
    <TD width="221"> <font size="2">Owner ID</font></TD>
    <TD width="303"><font size="2"><%=owner%></font></TD></TR>
</table><p>    <b><font color="#0000FF">Information to pass in
      header<br>
</font></b><TABLE border=1 cellPadding=1 cellSpacing=1 width="540" >
  <TR>
    <TD width="221"><font size="2">Key ID</font></TD>
    <TD width="303"><font size="2"><INPUT name=kid value="<%=kid %>"  
     ></font></TD></TR>
  <TR>
    <TD width="221"><font size="2">Key</font></TD>
    <TD width="303" ><font size="2">"<%=key %>"</font></TD></TR></TABLE> 
<TABLE border=1 cellPadding=1 cellSpacing=1 width="540" 
>
  </table><p>
      <b><font color="#0000FF">Information to share with the License Service<br>
      </font></b><TABLE border=1 cellPadding=1 cellSpacing=1 width="540" >
  
  <TR>
    <TD width="222"><font size="2">License key seed</font></TD>
    <TD width="302"><font size="2"><INPUT id=text3 name=seed 
      value="<%=seed %>"></font></TD></TR>
  
  <TR>
    <TD width="222"><font size="2">Content Server Public key</font></TD>
    <TD width="302"><font size="2"><INPUT id=text4 name=sPubKey 
       
      value="<%=contentserverpubkey %>"></font></TD></TR>
  
  </TABLE>
  
 <BR><font size="2"><INPUT name=usekid type=checkbox>       Use the specified Key 
ID (if this box is unchecked, a random Key ID will be generated)</font>
      
 <P><font size="2">Status:</font><B 
><B><EM><font size="2"> <%=description %></P>
<HR>
 </font></EM>      
  
<INPUT id=done name=submit  type=submit value=Package>
<P></P></B></FORM></B>
  
</BODY>
</HTML>
