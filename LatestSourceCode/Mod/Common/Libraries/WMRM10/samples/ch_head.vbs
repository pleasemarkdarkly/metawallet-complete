'*@@@+++@@@@******************************************************************
'
' Microsoft Windows Media
' Copyright (C) Microsoft Corporation. All rights reserved.
'
' IMPORTANT:  THESE SAMPLES ARE PROVIDED FOR HIGH-LEVEL REFERENCE ONLY
'             AND SHOULD NOT BE USED IN PRODUCTION ENVIRONMENTS.
'
'*@@@---@@@@******************************************************************

Option Explicit

Dim headerObj
Dim protectObj
Dim header

Set headerObj = CreateObject("wmrmobjs.WMRMHeader")
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

Set protectObj = CreateObject("wmrmobjs.WMRMProtect")
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

protectObj.InputFile = "c:\file.wma"
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

' Get the header from the protected file
header = protectObj.Header
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

msgbox header

headerObj.Header = header
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

headerObj.ContentID = "10"
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

call headerObj.Sign("IrmzREWHEJM6NTHex1KYxIZZKDA=")
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

header = headerObj.Header
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

Set headerobj = nothing

msgbox header

protectobj.Header = header
protectobj.WriteFile false, "c:\file_newheader.wma"

set protectobj = nothing

Set protectObj = CreateObject("wmrmobjs.WMRMProtect")
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

protectObj.InputFile = "c:\file_newheader.wma"
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

' Get the header from the protected file
header = protectObj.Header
if (err.number <> 0) then
    msgbox err.description
end if
err.clear

msgbox header

set protectobj = nothing