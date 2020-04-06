'*@@@+++@@@@******************************************************************
'
' Microsoft Windows Media
' Copyright (C) Microsoft Corporation. All rights reserved.
'
' IMPORTANT:  THESE SAMPLES ARE PROVIDED FOR HIGH-LEVEL REFERENCE ONLY
'             AND SHOULD NOT BE USED IN PRODUCTION ENVIRONMENTS.
'
'*@@@---@@@@******************************************************************

' This script is designed to help you import your
' Window Media Rights Manager Version 1.0 keys and certs
' into the registry where Window Media Rights Manager Version 7.0
' expects them to be. In the V1 server these will be found
' in the DRM constants table

dim enrollobj 

set enrollobj = CreateObject("enrollobj.DRMEnroll")

' Replace XXX with your V1 "license_server_private_key"
enrollobj.ImportPrivateKey "XXX"

' Replace XXX with you V1 license server "cert1"
enrollobj.StoreCertificate "cert1", "XXX"

' Replace XXX with you V1 license server "cert2"
enrollobj.StoreCertificate "cert2", "XXX"

Set enrollobj = nothing
'Save this script and run on you license server to import data