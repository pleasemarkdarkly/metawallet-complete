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
  Response.Buffer = True
  Response.Expires = 0
  
  
    On Error Resume Next   
   
    Dim licreq, header, clientid, kid, seed, key, rights, indiVersion
    Dim challengeObj, keyObj, rightObj, licObj, ResponseObj, headerObj
    Dim delivery_status
    Dim contentserverpubkey 
    Dim predeliver, fn, owner
    Dim GenV2Lic
      
    'Get the following values from global.asa, but in real practice, these
    'values would come from a database.
    seed				= Application("seed")
    Kid                 = Application("KeyID")  
    contentserverpubkey = Application("contentserverpubkey")
    
    'Create objects
    Set challengeObj     = Server.CreateObject("Wmrmobjs.WMRMChallenge")
    Set headerObj        = Server.CreateObject("Wmrmobjs.WMRMHeader")
    Set keyObj           = Server.CreateObject("Wmrmobjs.WMRMKeys")
    Set rightObj         = Server.CreateObject("Wmrmobjs.WMRMRights")
    Set ResponseObj      = Server.CreateObject("Wmrmobjs.WMRMResponse")
    Set licObj			 = Server.CreateObject("Wmrmobjs.WMRMLicGen")
    err.clear
        
       
       
        
       If (Request("predeliver") = "1") then 
            'Predeliver one page
            predeliver = 1
       Else
            'Predeliver two pages
            predeliver = 2
       End If
       
   
    do      
        If (predeliver = 2) then  
            licreqencoded = request("challenge")
            If (licreqencoded = "") then
                Exit do
            End If
            challengeObj.Challenge = licreqencoded
            
            clientinfo = challengeObj.ClientInfo

            headerObj.Header = challengeObj.Header
            CID = Request("cid") 
            indiVersion = headerObj.IndividualizedVersion
            err.clear          
        Else
            clientinfo = Request("clientinfo")
    	    indiVersion = Request("indiVersion") 'could be an empty string to indicate that un-individualized client is ok.
            CID = Request("cid")
        End If
        
        'Generate the key
        keyObj.seed   = seed
        keyObj.KeyID  = kid
        key = keyObj.GenerateKey()

        If (err.number <> 0) then
            Exit do
        End If
       
         'Set the rights
        With rightObj
             .MinimumAppSecurity = 500
             .AllowPlayOnPC = true
             .AllowBackupRestore = true
             .AllowTransferToSDMI = true
             .PMRights = 51
             .PMAppSecurity = 150
             .PMExpirationDate = "#20001231Z#"
         End with
        rights = rightObj.GetAllRights()
           If (err.number <> 0) then
            Exit do
           End If
       
    GenV2Lic = ""
    
    Dim Priority
    Priority = 10
    With LicObj
		 .KeyID = kid
    call .SetKey("", key)
		 .Attribute("LICENSESERVER") = "<NAME>" + owner + "</NAME>"
         .Rights = rights
           If (err.number <> 0) then
            Exit do
           End If
         .ClientInfo = clientinfo

           If (err.number <> 0) then
            Exit do
           End If
       
         .IndividualizedVersion = indiVersion

           If (err.number <> 0) then
            Exit do
           End If

         .Priority = Priority
	       If (err.number <> 0) then
            Exit do
           End If
          .BindToPubKey = contentserverpubkey ' This is required now
          GenV2Lic = .GetLicenseToDeliver
        
    End With  
        
        'Error checking
        If (err.number = 0) then 
          delivery_status = "deliver"
        Else
          delivery_status = ""
        End if   
    loop while false
    
    Call ResponseObj.AddLicense("2.0.0.0", GenV2Lic)
   
    if (predeliver = 1) then
       ResponseObj.ReplaceQuotesWith = "\"""
    end if
    
    licresponse = ResponseObj.GetLicenseResponse()
    
    'Send an error message or deliver the license
    If (delivery_status = "" and err.number <> 0) then
           Response.Write err.number & ":" & err.description
    ElseIf (delivery_status = "deliver") then 
        if (predeliver = 2 ) then
	    	Response.Write licresponse
	else			
%>
<!-- #include file ="confirm2.asp" -->
<%
        end If
    Else
        Response.Write err.number & ":" & err.description
    End If
  
    
    
    Set challengeObj = nothing
    Set headerObj    = nothing
    Set keyObj       = nothing
    Set rightObj     = nothing
    set LicObj       = nothing
    Set ResponseObj  = nothing
   
   
%>
