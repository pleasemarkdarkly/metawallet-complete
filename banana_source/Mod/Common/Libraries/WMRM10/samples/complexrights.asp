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
Function SetV2Rights(RID, licenseType)
    'On Error Resume Next
    SetV2Rights = ""

    do
       
        
        set objRight = server.CreateObject("Wmrmobjs.WMRMRights")
         
        
        if (err.number <> 0) then
            exit do
        end if
        
    

        Select Case RID
        Case "1"	'Allow one play
            With objRight
        
             .MinimumAppSecurity = 500
             .AllowPlayOnPC = true
             .AllowBackupRestore = true
             .AllowTransferToSDMI = true
             .Playcount = 1
             .PMRights = 51
             .PMAppSecurity = 150
           
             End with
          	     
        Case "2" 'Specify an expiration date
             With objRight
             .MinimumAppSecurity = 500
             .AllowPlayOnPC = true
             .AllowBackupRestore = true
             .ExpirationDate = "#20051201Z#"
             .PMRights = 17
             .PMAppSecurity = 1000
             .PMExpirationDate = "#20051201Z#"
             End with 
               
        Case "3" 'Allow transfer to SDMI device and unlimited play on PC
             With objRight
             .MinimumAppSecurity = 500
             .AllowPlayOnPC = true
             .AllowBackupRestore = true
             .AllowTransferToSDMI = true
             .PMRights = 17
             .PMAppSecurity = 999
              End With
    
        Case "4"	'Allow two plays
             With objRight
             .MinimumAppSecurity = 500
             .AllowPlayOnPC = true
             .Playcount = 2
             .AllowBackupRestore = true
             End with
             
         CASE Else
             With objRight
             .MinimumAppSecurity = 500
             .AllowPlayOnPC = true
             .AllowBackupRestore = true
             .AllowTransferToSDMI = true
              End with    
         
        End Select

    loop while false
    if err.number = 0 then
        SetV2Rights = objRight.GetAllRights
    end if

    set drmrightsobj = nothing

End Function

%>
        
