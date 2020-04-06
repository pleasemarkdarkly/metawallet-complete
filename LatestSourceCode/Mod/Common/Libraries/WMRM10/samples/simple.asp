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
'""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
'Main function: 
'Get the client information, generate the license, then send it back to the client.
'
'Information needed to generate the license: 
'   Required: Key (generate it)
'             License key seed (from the packaging server) 
'             ClientInfo (from Header or Network object)
'             Key ID (from Header or Network object)
'   Optional: Priority, attributes, rights 
'
'How to generate the key:
'   Challenge object (get client info, header) 
'    ---> Header object (get key ID)
'    ---> Key object (generate key with license key seed, key ID) 
'    ---> Licence object (generate license with key, key ID)
'    ---> Response object (add license and response)  
'
'
'""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
%>
 
<%
'Option explicit 
Response.Buffer = True
Response.Expires = 0

'To get a license, client provides information to verify it has the right to one

do

    On Error Resume Next
    
    Dim conpublicKey 'The public key for the packaging server
    Dim seed 'This license key seed is shared with the packaging server

    conpublicKey = Application("contentserverpubkey")
    seed      = Application("seed")
    
    'Objects: Challenge, Header, Key, Rights, License, Decoding, Response objects
    Dim objChallenge
    Dim objHeader
    Dim objKey
    Dim objRights
    Dim objLicense
    Dim objResponse
    
    'Tag information
    Dim description
    Dim silent
    Dim delivery_tag
    
    
    
    description = ""
     
   '"""""""""""""""""""""""""""""""""""""""""""""""""""""
   'Check the request to see whether it is for silent
   'or non-silent delivery.
   '"""""""""""""""""""""""""""""""""""""""""""""""""""""""  
 
    silent = TRUE
    IF (request("nonsilent") <> "") THEN
	     silent = FALSE
    END IF
     
    'Get the Header information using the Challenge object.
    
    '""""""""""""""""
    'Challenge Object
    '""""""""""""""""
    'Set the Challenge object
    Set objChallenge = Server.CreateObject("wmrmobjs.wmrmchallenge")
    
    'Get client information
    Dim strLicenseRequested
    strLicenseRequested = Request("challenge") 
    
    'Get the challenge
    objChallenge.Challenge = strLicenseRequested
    if (err.number <> 0) then
        exit do
    end if
    
    'Get client information and header from the Challenge object
    Dim varClientInfo
    Dim varHeader
    
    'Set the client information in the Challenge object
    varClientInfo = objChallenge.ClientInfo 
     
    'Set the header in the Challenge object 
    varHeader = objChallenge.Header 
    
                 
    '""""""""""""""""
    'Header Object
    '""""""""""""""""
    
    'Set the Header object
    Set objHeader = Server.CreateObject("wmrmobjs.wmrmheader")
    Dim Kid
         
    'Put the header into the Header object to get the key ID information
    objHeader.Header = varHeader
    if (err.number <> 0) then
        exit do
    end if
    
    'Verify the header with the packaging server's public key
    'You can get the public key by e-mail or from a database, but
    'this sample uses an Application variable to collect this information
    Dim blnResult
    blnResult = objHeader.Verify(conpublicKey) 'Public key information from a database
    if (err.number <> 0) then
        exit do
    end if 
    if (blnResult = 0) then
    'The header was not verified
        exit do
    end if

      
    'Get the key ID from the Header object
    Kid = objHeader.KeyID 
    
    Dim indiVersion 
    indiVersion = objHeader.IndividualizedVersion
    err.clear 'IndividualizedVersion may not always exist and hence err may be set. Reset it.
    '""""""""""""""""""
    'Key Object
    '"""""""""""""""""
    'Generate the key from the Key object
    Set objKey = server.CreateObject("wmrmobjs.wmrmkeys")
    Dim varKEY
    
    'Put the license key seed and key ID into the Key object
    objKey.KeyID = Kid 'from the Header object
    objKey.Seed = Seed 
    if (err.number <> 0) then
        exit do
    end if
    'Generate the key information
    varKEY = objKey.GenerateKey 
    if (err.number <> 0) then
        exit do
    end if
    
    '"""""""""""""""""""""""""""""""
    'Rights object to generate rights
    '"""""""""""""""""""""""""""""""
     Set objRights = server.CreateObject("wmrmobjs.wmrmRights")
     Dim SetV2Rights
               
    With objRights
        .MinimumAppSecurity = 500
        .AllowPlayOnPC = true
        .AllowBackupRestore = true
        .AllowTransferToSDMI = true
        .Playcount = 2 
        .PMRights = 51
        .PMAppSecurity = 150
    End with 
    
    if err.number = 0 then
        SetV2Rights = objRights.GetAllRights
    end if
    
    '"""""""""""""""""""""""""""""""""
    'Generate a license with the License object
    '"""""""""""""""""""""""""""""""""
    Set objLicense = Server.CreateObject("wmrmobjs.wmrmlicgen")
    Dim varLicense
    Dim varCategory
    Dim varVersion
    
    With objLicense
    
    
    .KeyID = Kid ' from Key object 
    if (err.number <> 0) then
      exit do
    end if
    
    .SetKey "", varKEY ' from Key object
    if (err.number <> 0) then
      exit do
    end if
    
    .Priority = 10 'set priority from 0 to 10
    if (err.number <> 0) then
      exit do
    end if
    
    .Attribute("LICENSESERVER") = "<NAME>License Sever</NAME>"  
    if (err.number <> 0) then
      exit do
    end if
    
    .Rights =setV2Rights 'From Rights object
    if (err.number <> 0) then
      exit do
    end if
    
    .ClientInfo = varClientInfo ' from challenge object
    if (err.number <> 0) then
      exit do
    end if
    
    .IndividualizedVersion = indiVersion
    if (err.number <> 0) then
      exit do
    end if          
    
    .GetClientVersion varCategory, varVersion
    if (err.number <> 0) then
      exit do
    end if
          
    Select Case varCategory
      Case 0
          ' Client is an Un-Individualized Win32 System
          
          ' If varVersion is 513 then this is the V7 client
    
      case 1
          ' Client is an Individualized Win32 System
    
          ' If varVersion is 513 then this is the V7 client
    
      Case Else
          ' Invalid client category
          exit do             
    End Select
    
    .BindToPubKey = conpublicKey ' This is required now.
    'generate License
    varLicense = .GetLicenseToDeliver() 
    if (err.number <> 0) then
      exit do
    end if
    
    End with
    delivery_tag = "deliver"            
loop while false 
 
'Send an error message or deliver the license
IF (delivery_tag = "" and err.number <> 0) then
    Response.Write err.number & ":" & err.description
Elseif (delivery_tag = "deliver") then

    '"""""""""""""""""""""""""""""
    'Response Object
    '"""""""""""""""""""""""""""""
    set responseObj = Server.CreateObject("wmrmobjs.wmrmresponse")
    Dim licresponse
    'Add the license
    Call   responseObj.AddLicense("2.0.0.0", varLicense)
            
    IF   (silent = True) then
         licresponse = responseObj.GetLicenseResponse()
         Response.Write licresponse
    Else 
         'Replace quotes here to pass a value
         'responseObj.ReplaceQuotesWith = """"""   'For VBScript            
         responseObj.ReplaceQuotesWith = "\""" 'For JavaScript
         licresponse =responseObj.GetLicenseResponse()
         
    %>                      
      <!-- #include file="simple_ns.asp" -->
    <%        
    End if

End if

'Clear objects

Set objChallenge = Nothing
Set objHeader = Nothing
Set objKey = Nothing
Set objRights = Nothing
Set objLicense = Nothing
Set objDecoding = Nothing
Set responseObj= Nothing

%>
