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
'Option explicit 
Response.Buffer = True
Response.Expires = 0


On Error Resume Next


Dim conpublicKey 'This is the public key for the packaging server
Dim seed 'This is the license key seed that should be shared with the packaging server
  
'Information about the license delivery method
Dim silent

'Objects: Challenge, Header, Key, Rights, License, Decoding, Response
Dim objChallenge
Dim objHeader
Dim objKey
Dim objLicense
Dim objResponse

Dim strLicenseRequested
Dim varClientInfo
Dim varHeader
Dim Kid
Dim cid
Dim blnResult 
Dim indiVersion
Dim varKEY
Dim varLicense
Dim licresponse
Dim parseRights
Dim readyRights


'Set objects
Set objChallenge = Server.CreateObject("wmrmobjs.wmrmchallenge")
Set objHeader = Server.CreateObject("wmrmobjs.wmrmheader")
Set objKey = server.CreateObject("wmrmobjs.wmrmkeys")
Set objLicense = Server.CreateObject("wmrmobjs.wmrmlicgen")
set ObjResponse = Server.CreateObject("wmrmobjs.wmrmresponse")


 conpublicKey =  Application("contentserverpubkey")  
 seed         =  Application("seed") 
 
    'Check the license request to see whether the license delivery is silent or non-silent
         silent = True
    If (request("nonsilent") <> "") Then
	     silent = False
    End If


'Get a challenge from the client
strLicenseRequested = Request("challenge") 

'Standard license generation process
With objChallenge
	   .Challenge = strLicenseRequested
	varClientInfo = .ClientInfo 
    varHeader     = .Header 
End with
             
With objHeader
       .Header = varHeader
     blnResult = .Verify(conpublicKey)
	 Kid       = .KeyID 
	 cid       = .ContentID 
	 parseRights = .Attribute("options")
         indiVersion = .IndividualizedVersion
End with
err.clear

With objKey 
       .KeyID = Kid 
       .Seed  = Seed 
      varKEY  = .GenerateKey 
End with   
     'Get the rights
   
     
     Call Rights(parseRights, readyRights, cid) 
         
With objLicense
               .KeyID = Kid 'Key ID from Key object 
               .SetKey "", varKEY 'Key from Key object
               .Priority = 10 'Set the license priority (0 - 10)
               .Rights =readyRights 'Rights string from Rights object
               .ClientInfo = varClientInfo 'Client information from challenge object
               .IndividualizedVersion = indiVersion
               .BindToPubKey = conpublicKey        
                
  varLicense = .GetLicenseToDeliver() 
               
End with
       
        
With objResponse 'Response object
               
               .AddLicense "2.0.0.0", varLicense
                    
          If   (silent = True) Then
	             licresponse = .GetLicenseResponse()
                 Response.Write licresponse
          Else 
                 'Replace these quotes to pass a value
                 'objResponse.ReplaceQuotesWith = """"""   'for VBScript            
                               .ReplaceQuotesWith = "\""" 'for JavaScript
                 licresponse = .GetLicenseResponse()
                 
%>                      
			  <!-- #include file="batchpackage_ns.asp" -->
<%        
           End if
End With
 

'Clear objects

Set objChallenge = Nothing
Set objHeader = Nothing
Set objKey = Nothing
Set objLicense = Nothing
Set objDecoding = Nothing
Set objResponse= Nothing

%>

<%
'This function shows a simple process to parse the rights string. 
Function Rights(strRights, realRights, cid)
Dim objRight
Set objRight = server.CreateObject("Wmrmobjs.WMRMRights")

    With objRight

   If cid = "" Then
       cid = 9999 
      if  parseRights <> "" Then
       cid = 0 
      End if
   End If
   
Select Case CInt(cid)


Case 0
		    Dim myArray

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
			Dim digital    	    'Allow digital output
			Dim driverCert 	    'Verify driver components
			Dim driverSec   	'Secure Audio Path mode (minimum driver security)
			Dim ssap        	
			Dim asap        	 
			Dim pmRight     	
			Dim pospm			
			Dim pm				
			Dim sappos		

			myArray = Split(strRights,".",-1,1)
		   
		    pc			= myArray(0)
			cd			= myArray(1)
			delRoll		= myArray(2)
			disRoll		= myArray(3)
			backup		= myArray(4)
			sdmi		= myArray(5)
			nonSdmi		= myArray(6)
			pm       	= myArray(7)	
			bDate		= myArray(8)
			eDate		= myArray(9)
			playCount	= myArray(10)
			transCount	= myArray(11)	
			minSecur	= myArray(12)
			ssap        = myArray(13)
			 
		
				
		   If pm <> "" Then
		    pm = Trim(pm)
	        pmpos = Instr(1, pm, "/", 1)
			pmRight     = Left(pm, pmpos-1)
			pmDate		= Right(pm, Len(pm)-pmpos)
			pmpos       = Instr(1, pmDate, "/", 1)
			pmDate      = Left(pmDate, pmpos-1)
			pmpos       = InStrRev(pm,"/",-1,0) 
			pmSec       = Right(pm, Len(pm)-pmpos)
	       End If 
	       
	       If ssap <> "" Then
	        
	        ssap = Trim(ssap)
	        sappos			= Instr(1, ssap, "/", 1)
			digital			= Left(ssap, sappos-1)
			driverCert 		= Right(ssap, Len(ssap)-sappos)
			sappos			= Instr(1, driverCert, "/", 1)
			driverCert      = Left(driverCert, sappos-1)
			sappos			= InStrRev(ssap,"/",-1,0) 
			driverSec       = Right(ssap, Len(ssap)-sappos)
		   End If 

		

		If  backup <> "" Then
		.AllowBackupRestore = True
		End If

		If  cd <> "" Then
		.AllowBurnToCD = True
		End If

		If pc <> "" Then
		.AllowPlayOnPC = True
		End If

		If  nonSdmi <> "" Then
		.AllowTransferToNonSDMI = True
		End If

		If sdmi <> "" Then
		.AllowTransferToSDMI = True
		End If

		If  bDate <> "" Then
		.BeginDate = bDate 
		End If

		If  delRoll <> "" Then
		.DeleteOnClockRollback = True
		End If

		If  disRoll <> "" Then
		.DisableOnClockRollback = True
		End If

		If edate <> "" Then
		 .ExpirationDate = eDate 
		End If

		If  minSecur <> "" Then
		 .MinimumAppSecurity = minSecur
		End If
        If  pmRight <> "" Then
		 .PMRights = pmRight
		 	If pmSec <> "?" Then
			 .PMAppSecurity = pmSec
			End If 
			If  pmDate <> "?" Then
			.PMExpirationDate = pmDate 
			End If
		End If
		
		If  playcount <> "" Then
		 .Playcount = playcount
		End If
	
		If  transCount <> "" Then
		.TransferCount = transCount
		End If
				
		If digital = "on" Then
		    digital = True
		Else 
		    digital = False
		End If
		If driverCert <> "?" Then
		    driverCert = True
		Else
		    driverCert = False
		End If
		 
		If driverSec <> "?" Then
		    driverSec = driverSec
		Else
		    driverSec = ""
		End If 

		If digital <> "False" or driverCert <> "False" or driverSec <> "" Then
		 Call .SetSAPMode(digital, driverCert, driverSec)
		End If
       
		realRights = .GetAllRights()
  
 Case 1 
      
		  .AllowBackupRestore = True
		  .AllowBurnToCD = True
		  .AllowPlayOnPC = True
		  .AllowTransferToSDMI = True
		  
		  realRights = .GetAllRights()
     
 Case 2  
		  .AllowBackupRestore = True
		  .AllowBurnToCD = True
		  .AllowPlayOnPC = True
		  .AllowTransferToSDMI = True
		  .Playcount = 2
		  
		  realRights = .GetAllRights()
 Case Else
          .AllowBackupRestore = True
		  .AllowBurnToCD = True
		  .AllowPlayOnPC = True
		  .AllowTransferToSDMI = True
		  .Playcount = 1
		  
		  realRights = .GetAllRights()
  
End Select 
 
  End With 
  Set objRights = Nothing 

End Function

%>




