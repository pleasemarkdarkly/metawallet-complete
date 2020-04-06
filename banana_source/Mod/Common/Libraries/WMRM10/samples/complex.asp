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


<!-- #include file="complexlicgen.asp" -->

<%
    On Error Resume Next
    Dim  licreq, header, clientid, kid, seed, key, rights, license1, license2, license3, license4
    Dim challengeObj, keyObj, headerObj, v1licObj, licrespObj
    dim delivery_status
    dim silent
    Dim contentserverpubkey 
    Dim recObj
    Dim predeliver, fn, RID, indiVersion
    
    Response.Buffer = True
    Response.Expires = 0
    
    'Use values from global.asa for this sample
    'In real practice, these values would come from a database
    seed                                        = Application("seed")
    contentserverpubkey         = Application("contentserverpubkey")
    
    'Create the objects
    Set challengeObj     = Server.CreateObject("Wmrmobjs.WMRMChallenge")
    Set headobj          = Server.CreateObject("Wmrmobjs.WMRMHeader")
    Set keyObj           = Server.CreateObject("Wmrmobjs.WMRMKeys")
    Set licrespObj       = Server.CreateObject("Wmrmobjs.WMRMResponse")
    err.clear
    
    silent = true
    
    'Check the license request to see whether it is for silent or non-silent delivery
    if (Request("nonsilent") <> "") then
        silent = false
    end if
    
    'Check the license request to see whether it is for predelivery
    if (Request("predeliver") = "") then
       'If the request is not for predelivery, set the value to 0
        predeliver = 0
    else
       'Check if the request is for silent predelivery
       
       if (Request("predeliver") = "1") then 
            'Non-silent predelivery
            predeliver = 1
       else
            'Silent predelivery
            predeliver = 2
       end if
       silent = false

    end if
    
    delivery_status = ""
    description = ""

    do      
            'Not for predelivery or for silent predelivery
        if (predeliver = 0 or predeliver = 2) then  
            licreqencoded = request("challenge")
            if (licreqencoded = "") then
                exit do
            end if
            challengeObj.Challenge = licreqencoded
            clientinfo = challengeObj.ClientInfo
            
            'Check whether the request is for a version 1 license
            if (predeliver = 0) then
                v1challenge     = challengeObj.V1Challenge
                header          = challengeObj.Header
                headObj.Header  = header 
                
                'Verify the header with the public key       
                result = headObj.Verify(contentserverpubkey)
                
                'Error checking
                if (err.number <> 0) then
                    exit do
                end if        
                if (result = 0) then
                    description = "The media file you are trying to play has been corrupted or modified and cannot be played."
                    exit do
                end if 
                       
                'Get the key ID from the header
                kid = headObj.KeyID   
                if (err.number <> 0) then
                    exit do
                end if        
                CID   = headObj.ContentID
                RID   = headObj.Attribute("RID")
                indiVersion = headObj.IndividualizedVersion

                err.clear
             else
                
                'If the request is for predelivery with GetSystemInfo, the information does not come
                'from the header. The information could come from a database, but in this sample, 
                'we use information collected from a form and global.asa.
                
                kid = Application("kid")
                CID = Request("cid")  
                silent = true             
             end if          
        else
           'If the request is for predelivery with GetLicenseFromURL, the information should come from 
           'another source such as a user interface or database. 
           'For this sample, we use information collected from a form and global.asa.
            
            clientinfo = Request("clientinfo")
            indiVersion = Request("indiVersion")
            kid = Application("kid")
            CID = Request("cid")
        end if
        
        'Generate the key
        keyObj.seed   = seed
        keyObj.KeyID  = kid
        key = keyObj.GenerateKey()

        if (err.number <> 0) then
            exit do
        end if
       
        'Different sample ASP pages are provided to show you how to 
        'deliver licenses for version 1 and version 7
        
              
        If (silent = false) then
             licrespObj.ReplaceQuotesWith = "\"""
        End If
    
        Select Case CID
        Case "200"
            'Deliver only a version 1 license
            'Issue license with the given challenge blob. 
            'Ignore the license that is issued because it is for a dummy key ID in the challenge
            license1 = GenV1Lic(CID, RID, v1challenge)
            Call licrespObj.AddLicense("0.1.0.0", license1)
            licresponse = licrespObj.GetLicenseResponse
        Case "300"
            'Two V7 licenses, one has priority=1000 and the other has priority=2000
            license1 = GenV2Lic(CID, RID, 1000)
            Call licrespObj.AddLicense("2.0.0.0", license1)
            license2 = GenV2Lic(CID, RID, 2000)
            Call licrespObj.AddLicense("2.0.0.0", license2)
            licresponse = licrespObj.GetLicenseResponse
        Case "400"
            'Two licenses,one is v1 license and other is v7 license
            license1 = GenV1Lic(CID, RID, v1challenge)
            Call licrespObj.AddLicense("0.1.0.0", license1)
            license2 = GenV2Lic(CID, RID, 1000)
            Call licrespObj.AddLicense("2.0.0.0", license2)
            licresponse = licrespObj.GetLicenseResponse
        
        Case Else
            'Single V7 license
            license1 = GenV2Lic(CID, RID, 1000)
            Call licrespObj.AddLicense("2.0.0.0", license1)
            licresponse = licrespObj.GetLicenseResponse
        End Select
        
        
        delivery_status = "deliver"
    loop while false
 
    'Send an error message or deliver the license
    if (delivery_status = "" and err.number <> 0) then
        Response.Write err.number & ":" & err.description
    elseif (delivery_status = "deliver") then    
        'For a silent license delivery, response the result
        if (silent = true) then
                Response.Write licresponse
            else
                                
%>        
                <!-- #include file="complex_ns.asp" -->
<%     
        end if
        
    else
        Response.Write description
    end if
    err.clear
    
    Set challengeObj = nothing
    Set keyObj       = nothing
    Set headerObj    = nothing
    Set licrespObj   = nothing
%>


        
