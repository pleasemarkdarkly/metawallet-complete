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
<!-- #include file="ComplexRights.asp" -->

<%
'Version 7 license generation function
Function GenV2Lic(CID, RID, Priority)
    Dim v2licObj
    
 
   Dim contentserverpubkey
     
    contentserverpubkey  = Application("contentserverpubkey")
    GenV2Lic = ""
    Set v2licObj = Server.CreateObject("Wmrmobjs.WMRMLicGen")
   
    v2licObj.KeyID = kid
    call v2licObj.SetKey("", key)
    v2licObj.Attribute("LICENSESERVER") = "<NAME>" + owner + "</NAME>"
    rights = SetV2Rights(RID, licenseType)
    v2licObj.Rights = rights
    v2licObj.ClientInfo = clientinfo
    v2licObj.IndividualizedVersion = indiVersion

    'Call BindToPubKey to make the DRM client verify the content header whenever the media file is used.
    v2licObj.BindToPubKey = contentserverpubkey
    v2licObj.Priority = Priority
 
    if err.number = 0 then
        GenV2Lic = v2licObj.GetLicenseToDeliver
    end if

    set v2licObj = nothing
End Function

'Version 1 license generation method
Function GenV1Lic(CID, RID, challenge)
    Dim v1licObj
    Dim appsec(3)
    Dim rights(7)
    Dim daysToExpire
    Dim strLicense, nIssueID
    
    Set v1licObj = Server.CreateObject("LicenseServer.LicenseGenerator")
    
    GenV1Lic = ""
    'DRM v1 client verification key
    cvpk = "ZHyme!DRoiebD8uLV3V2UEbUkhd8pDjcCeVsS8P8V3u3B0i5RVpFcA=="
    appsec(0) = 0
    appsec(1) = 0
    appsec(2) = 0

    rights(1) = 0
    rights(2) = 0
    rights(3) = 0
    rights(5) = 0
    rights(6) = 0
    rights(7) = 0

    Select Case RID
    Case ""
    Case Else
        daysToExpire = 2
        appsec(3) = 100
        rights(0) = 3
        rights(4) = 3
    End Select
    v1licObj.Set "client_verification_public_key_0.1.0.0", cvpk
    v1licObj.Set "license_server_public_key", licserverpubkey
    v1licObj.Set "license_server_private_key", licserverprivkey
    v1licObj.Set "cert1", cert1
    v1licObj.Set "cert2", cert2
    v1licObj.Set "seed", seed
    call v1licObj.Set("kid", kid)
    Call v1licObj.IssueLicense("", challenge, 0, Null, daysToExpire, rights, appsec, strLicense, nIssueID)
    if (err.number = 0)then
        GenV1Lic = strLicense
    end if
    set v1licObj = nothing
End Function
%>