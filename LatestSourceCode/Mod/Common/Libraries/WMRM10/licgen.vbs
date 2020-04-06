Dim WSHShell
Set WSHShell = WScript.CreateObject("WScript.Shell")

dim keysobjs
dim privkey
dim pubkey
dim seed

Set keysobj= CreateObject("wmrmobjs.WMRMKeys")
keysobj.GenerateSigningKeys privkey, pubkey
seed = keysobj.GenerateSeed()
Dim cmd

' Write the private key to privkey.txt.
cmd = "command.com /C echo " + privkey + " > privkey.txt" 
WSHShell.Run cmd,0

'Write the public key to pubkey.txt.
cmd = "command.com /C echo " + pubkey + " > pubkey.txt"
WSHShell.Run cmd,0

' Write the license key seed to seed.txt.
cmd = "command.com /C echo " + seed + " > seed.txt"
WSHShell.Run cmd,0

