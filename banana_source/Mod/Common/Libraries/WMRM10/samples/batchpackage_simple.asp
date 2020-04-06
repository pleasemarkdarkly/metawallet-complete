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

<%
'""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
'BatchPackage_Simple overview:
' 1. Generate a public key, private key, and license key seed 
'    (the same values will be used to package all files).
' 2. Check if the input and output directory information is entered. 
'    If not (usually when the page is first run), show the form.
' 3. After the input and output directory information is entered,  
'    it is submited to the BatchPackage_Simple.asp page again. Then, the process
'    to package files can be run. 
' 4. BatchPackage_Simple.asp manipulates the directory using FileSystemObject.
' 5. With values from the form, BatchPackage_Simple.asp calls ProtectAll function
'    to package each file.
' 6. After packaging files from the input directory, the names of 
'    packaged files are displayed in a table with other information. 
'
'""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
 
  'Don't cache
  Response.AddHeader "Pragma", "No-Cache"
  Response.CacheControl = "Private"
If Request.form("newplag") <> "one" Then

   'This information is used for all files to be packaged. 
   'Information can come from a database or be generated automatically.
   'In this sample, we get the license key seed from global.asa, and we
   'generate the public key and private key for signing the header. 

   Dim showseed  'License key seed from global.asa or a database
   Dim pubkey    'a public key 
   Dim prikey    'a private key
   Dim oKey      'the Key object
   Dim nplag     'plag for skipping this process on second time 
   Dim rights 
   
    showseed =  Application("seed")
    pubkey   =  Application("contentserverpubkey") 
    prikey   =  Application("contentserverprivkey")
   
    'Declare the Key object
     Set oKey = Server.CreateObject("Wmrmobjs.WMRMKeys")
     
     
     If prikey = "" Then
      'Generate public and private keys for signing the header      
     Call      oKey.GenerateSigningKeys(prikey, pubkey) 
     End If 
    
    'Get the license key seed from a database (from global.asa in this sample)  
     If showseed = "" Then
      showseed = oKey.GenerateSeed
     End If
     
  
	'From Options page
	 rights = Request.Form("rights")
  
	'For skipping this process for the second time 
	 nplag = "one" 
End If
  
If Request.Form("unprotected") <> "" And Request.Form("protected")<> "" Then 
  

     
   Dim seed     'The final license key seed  
   Dim getseed  'License key seed from the form 
 
   Dim protectedDir
   Dim inputPath
   Dim allRights
   Dim allLicense
   Dim v7URL
   Dim v1URL
   Dim spriKey
   Dim spubKey
   
   
 'Declare the variables for generating files
   Dim objFSO, objFolder
   Dim objCollection, objItem
   Dim strPhysicalPath, strTitle 
   Dim strPath, strTemp
   Dim strName, strFile, strExt, strType
   Dim intSizeB,  dtmDate
   Dim plag
   Dim outPath
   Dim KID
   Dim newrights
   Dim cid
   
   protectedDir = Request.Form("protected") 'Input file directory
   allRights	= Request("newrights") 'Selected rights string value
   v7URL		= Request.Form("v7URL") 'Version 7 license acquisition URL
   v1URL		= Request.Form("v1URL") 'Version 1 license acquisition URL
   spriKey		= Request.Form("sPriKey")'Private key for signing header
   spubKey		= Request.Form("sPubKey") 'Public key for signing header
   Kid			= Request.Form("kid") 'Key ID if specified by user
   cid			= Request.Form("cid") 'Content ID for right options
    
    
   'Get the path to the input directory and make a right format
    strPath = ""
    strPath = Request.Form("unprotected")
    strPath = LCase(strPath)
    If Right(strPath, 1) <> "\" Then
	  strPath = strPath & "\"
    End If 
    
    'Get the path to the output directory and make a right format
    outPath = ""
    outPath = Request.Form("protected")
    outPath = LCase(outPath)
    If Right(outPath, 1) <> "\" Then
	  outPath = outPath & "\"
    End If  
  
     'In case the user wants to edit the license key seed
     getseed = Request.Form("seed")
     If getseed <> "" Then 
        seed = getseed
     
     End If
 


   'Create the file system objects
   Set objFSO = Server.CreateObject("Scripting.FileSystemObject")
   Set objFolder = objFSO.GetFolder(strPath)'strPhysicalPath
   Set objCollection = objFolder.Files
   
   'The next HTML page shows a table header to list packaged files
%>
<html>

<head>
<meta name="GENERATOR" content="Microsoft FrontPage 4.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
<style>body  { background-color: #cccccc; background-repeat: repeat; background-attachment: 
               scroll; color: #000000; font-family: Arial; font-size: 10pt;background-position: 0% 50% }
       table { background-color: #000000; background-repeat: repeat; background-attachment: 
               scroll; color: #ffffff; background-position: 0% 50% }
       th    { background-color: #0000ff; background-repeat: repeat; background-attachment: 
               scroll; color: #ffffff; background-position: 0% 50% }
       td    { background-color: #ffffff; background-repeat: repeat; background-attachment: 
               scroll; color: #000000; background-position: 0% 50% }
       tt    { font-family: Courier; font-size: 11pt }
</style>
</head>

<body>

<center><strong>
<h1>Protected Music Files:</h1>
</strong>
<table width="100%" border="0" cellspacing="1" cellpadding="2">
  <tr>
    <th align="left">Name</th>
    <th align="left">Bytes</th>
    <th align="left">Type</th>
    <th align="left">Date</th>
    <th align="left">Time</th>
  </tr>

  <%
   ''''''''''''''''''''''''''''''''''''''''
   ' Output the file list
   ''''''''''''''''''''''''''''''''''''''''
   dim ssdate 'Package files according to file modified date (start of date range) 
   Dim esdate  'Package files according to file modified date (end of date range)
   Dim fsdate 'File modified date
   Dim outFile
   Dim outName
   
   'Users can specify a date range for packaging files based on 
   'the file modified date (not created date).
   
  
   'Set a start date
   ssdate = Request.Form("sdate")
   esdate = Request.Form("edate")
   
   If ssdate <> "" Then
     ssdate = CDate(ssdate)
   Else
     ssdate = #1900/1/1#  
   End If
   
   'Set an ending date
   If  esdate <> "" Then
     esdate = CDate(esdate)
   Else
     esdate  = Now()
   End If
   esdate    = FormatDateTime(esdate,vbShortDate)
   ssdate    = FormatDateTime(ssdate,vbShortDate)
  
  'Go through each file in the directory
   For Each objItem in objCollection
      strtype = ""
      strName = ""
      strFile = ""
      fsdate	= CDate(objItem.DateLastModified) 
      fsdate    = FormatDateTime(fsdate,vbShortDate)
      strName	= objItem.Name 'File name
      
			If Instr(strName,".") Then  'File extension
			  strExt = Right(strName,Len(strName)-Instr(strName,".")) 
			Else 
			  strExt = ""
			End If
          
      Select Case UCase(strExt)
        Case "ASF", "WMA", "WMS", "WMV" 'Select audio files only
           If datediff("d",ssdate,fsdate) >= 0 and datediff("d",fsdate,esdate) >= 0 Then
            strtype	= objItem.Type 'File type
			dtmdate	= CDate(objItem.DateLastModified) 'Last modifed date
			strFile	= Server.HTMLEncode(Ucase(strName)) 'File name
			intSizeB	= objItem.Size 'File size
			inputFile = strPath + strFile 'Input file name
			outName  = Left(strFile, Len(strFile)-3)'Outfile Name change
			outName = outName & "WMA"
			outFile = outPath + outName 'Output path using same file name
			
			'Package file process -- call a ProtectAll function from protect.asp
     	   Call ProtectAll(inputFile, outFile, secversion, v7URL, _
                       v1URL, allRights, seed, Kid, cid, spriKey, spubKey)
           End If 
         Case Else ' If it is not music file, pass protect process
            strtype	= objItem.Type
			dtmdate	= CDate(objItem.DateLastModified) 
			strName = "Not a music file"
			strFile	= Server.HTMLEncode(Lcase(strName))
			intSizeB= objItem.Size
         End Select
      
          'Put each file values to a table row
  %>
  <tr>
    <td align="left"><%=strFile%></td>
    <td align="left"><%=FormatNumber(intSizeB,0)%></td>
    <td align="left"><%=strType%></td>
    <td align="left"><%=FormatDateTime(dtmDate,vbShortDate)%></td>
    <td align="left"><%=FormatDateTime(dtmDate,vbLongTime)%></td>
  </tr>
  <% 
	Next  'Loop 
	   Set objFSO = Nothing
       Set objFolder = Nothing
	Response.Write "<B>Used Key Information</B><BR>"
    Response.Write "public key: " & spubkey
    Response.Write "<BR>"&"Seed: " & seed
    Response.Write "<BR>"&"Private Key: " & sprikey
	
	      Response.Write  "<BR><B>"&"Listed contents are successfully protected now" 
  %>
</table>
</center><a href="batchpackage_simple.asp">Return to main menu </a>

<%   
Else   
%>
<form action="batchpackage_simple.asp" method="post">
<input type="hidden" name="newplag" value="<%=nplag%>">
  <p><strong><font size="5">Sample: Batch packaging from a directory</font></strong>
  <hr>
   <p align="left"><font><strong>Enter input and output
  directories, License acquisition URLs</strong></font><br>
  </p>
  <b><font size="5"></font>
  <table border="1" cellpadding="1" cellspacing="2" width="75%">
    <tr>
      <td colspan="2" >Location of files and license
        acquisition pages</td>
    </tr>
    <tr>
      <td>Input directory (unprotected files)</td>
      <td><input id="text2" name="unprotected"  size="45"></td>
    </tr>
    <tr>
      <td>Output directory (protected files)</td>
      <td><input id="text3" name="protected"   size="45"></td>
    </tr>
    <tr>
      <td>License acquisition URL for V7</td>
      <td><input id="text6" name="v7URL"  Value="http://YourV2SeverName/wm/batchpackage_licgen.asp" size="45"></td>
    </tr>
    <tr>
      <td>
        <p>License acquisition URL for V1</p>
      </td>
      <td><input id="text1" name="v1URL" Value=""  size="45"></td>
    </tr>
     <tr>
      <td>
        <p>Content Id</p>
      </td>
      <td><input id="text1" name="cid"  size="45"></td>
    </tr>
    <tr><td colspan="2">
      
        <p>Protect Files &nbsp; &nbsp; &nbsp; &nbsp;Start: <INPUT type="text" id=file1 name=sdate value="1/1/1900"> 
        End:<INPUT type="text" id=file2 name=edate value=<%=now()%>>
     
        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
     
    </tr>
  </table>
 <b><strong><font ><font size="2"><em>
  <table border="1" cellpadding="1" cellspacing="1"  width="75%">
    <tr>
      <td colspan="2">
        <p align="center"><font ><strong></strong></font></p>
      </em></font></font><font>Information
  to share with the License Service</font></td>
  </tr>
  <font size="2"><em><font >
  <tr>
    <td><font >Key ID</font></td>
    <td><input name="kid" value="<%=kid %>" size="42"></td>
  </tr>
  <tr>
    <td><font >Seed&nbsp;&nbsp;&nbsp;</font></td>
    <td><font >
    <input id="text3" name="seed"  value="<%=showseed %>" size="42"></font></td>
  </tr>
  <tr>
    <td><font >Public key for signing headers</font></td>
    <td><font >
    <input id="text4" name="sPubKey" value="<%=pubkey %>" size="42"></font></td>
  </tr>
  <tr>
    <td><font >Private key for signing headers</font></td>
    <td><font >
    <input id="text5" name="sPriKey" value="<%=prikey %>" size="42"></font></font></td>
  </tr>
  </table>
  </font></strong><br>
  </em></b><b><em><font size="2">
  <input id="submit1" name="process"  type="submit" value="Protect Files">
  </strong>
  <hr>
  </font></em></b>
  </form>
  <%
End If
  %>

<%
  Function ProtectAll(ByVal inputFile, _
                      ByVal outputFile, _
                      ByVal secversion,_
                      ByVal v7licurl, _
                      ByVal v1licurl, _
                      ByVal XMLoptions, _
                      Byval Seed,_
                      Byval Kid, _
                      ByVal cid, _
                      ByVal spriKey, _
                      ByVal spubKey) 
                       
    'Object
    Dim objKey
    Dim objHeader
    Dim objProtect
    
    Set objKey           = Server.CreateObject("Wmrmobjs.WMRMKeys")
    Set objHeader        = Server.CreateObject("Wmrmobjs.WMRMHeader")
    Set objProtect       = Server.CreateObject("Wmrmobjs.WMRMProtect")
    

   'Key generation
    Dim newseed
    Dim newkid
    Dim newprikey
    Dim newpubkey
    
       
    with objKey  'License key seed generation
    If seed <> "" Then
       .seed = seed  
    Else
     newseed = .GenerateSeed
       .Seed = newseed
    End If
    
    If  kid <> "" Then  'Key ID generation
	  .KeyID  = kid
	   newkid = kid
	Else
	 newkid = .GenerateKeyID 
	  .KeyID = newkid
	End If
	   
    key = .GenerateKey() 'Key generation
    
    If spriKey = "" Then 'Private key for signing header
    Call      .GenerateSigningKeys(newprikey, newpubkey)  
    Else
     newprikey = spriKey
     newpubkey = spubKey
    End If 
    
    End With
   
    'Header generation
     With objHeader      
      .KeyID           = newkid 'Key ID
      .LicenseAcqURL   = v7licurl 'Version 7 License acquisition URL
      If cid <> "" Then
      .ContentID       = cid  'Content ID 
      End If
      .SetCheckSum(key)        
      '.IndividualizedVersion =  "2.2" 'security version
      .Attribute("options") = XMLoptions 'String value for rights options
      .Sign(newprikey) 'Sign
     header = .Header 'Get a header
     End with
    
    'protect object
     With objProtect
       .InputFile = inputfile 'Input file name
    	if v1licurl <> "" Then
          .V1LicenseAcqURL = v1licurl 'Version 1 license server  URL
        End If       
       .Key = key   'Key
       .Header = header 'Header
       .V1KeyID = newkid 'Version 1 key ID -- for this sample we used the same key ID as the version 7 key ID
       .ProtectFile(outputfile) 'Output path and file name
     End With
                
     Set objKey     = Nothing
     Set objHeader  = Nothing
     Set objProtect = Nothing
     
   End Function
     
%>

</body>

</html>
