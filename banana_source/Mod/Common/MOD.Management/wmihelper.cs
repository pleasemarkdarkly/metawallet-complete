using System;
using System.Collections;
using System.Text;
using System.Management;
using System.ComponentModel;
using System.Runtime.InteropServices;

namespace MOD.Management
{
    [Flags()]
    public enum ShutdownFlags
    {
        LogOff = 0,
        ForcedLogOff = 4,
        Shutdown = 1,
        ForcedShutdown = 5,
        Reboot = 2,
        ForcedReboot = 6,
        PowerOff = 8,
        ForcedPowerOf = 12
    }

    public class WmiHelper
    {
        private static ManagementObject GetOSObject(string machineName)
        {
            ManagementObject o;

            ManagementPath path = new ManagementPath();
            path.Server = machineName;
            path.NamespacePath = @"root\CIMV2";

            /* Check your systems BOOT.INI file for :
            [operating systems]
            multi(0)disk(0)rdisk(0)partition(1)\WINNT="Microsoft Windows 2000 Professional" /fastdetect
            and add the info into the RelativePath property.
            */

            //path.RelativePath = @"Win32_OperatingSystem.Name=""Microsoft Windows 2000 Professional|C:\\WINNT|\\Device\\Harddisk0\\Partition1""";
            path.RelativePath = @"Win32_OperatingSystem.Name=""Microsoft Windows XP Professional|C:\\Windows|\\Device\\Harddisk0\\Partition1""";
            o = new ManagementObject(path);

            return o;
        }

        public static void Reboot(string machineName)
        {
            ManagementObject win32OS = GetOSObject(machineName);

            // Turn on required privileges to reboot/shutdown etc.
            bool enablePrivileges = win32OS.Scope.Options.EnablePrivileges;
            win32OS.Scope.Options.EnablePrivileges = true;

            ManagementBaseObject inParams = null;

            //Use 'Shutdown' method to shutdown a system.
            ManagementBaseObject outParams = win32OS.InvokeMethod("Reboot", inParams, null);

            foreach (PropertyData property in win32OS.Properties)
                Console.WriteLine("{0}: {1}", property.Name, property.Value);

            win32OS.Scope.Options.EnablePrivileges = enablePrivileges;
            
            // Console.WriteLine ((System.UInt32)(outParams.Properties["ReturnValue"].Value));
            win32OS.Dispose();
        }


		public static void Shutdown(string machineName)
		{
			Shutdown(machineName, ShutdownFlags.ForcedShutdown);
		}

        public static void Shutdown(string machineName, ShutdownFlags flags)
        {
            ManagementObject win32OS = GetOSObject(machineName);

            // Turn on required privileges to reboot/shutdown etc.
            bool enablePrivileges = win32OS.Scope.Options.EnablePrivileges;
            win32OS.Scope.Options.EnablePrivileges = true;

            ManagementBaseObject inParams = win32OS.GetMethodParameters("Win32Shutdown");
            inParams["Flags"] = (int)flags;

            ManagementBaseObject outParams = win32OS.InvokeMethod("Win32Shutdown", inParams, null);

            win32OS.Scope.Options.EnablePrivileges = enablePrivileges;

            foreach (PropertyData property in outParams.Properties)
                Console.WriteLine("{0}: {1}", property.Name, property.Value);

             win32OS.Dispose();
        }

        public static string[] GetMacAddresses()
        {
            ManagementObjectSearcher query = null;
            ManagementObjectCollection queryCollection = null;
            ArrayList addresses = new ArrayList();

            try
            {
                query = new ManagementObjectSearcher("SELECT * FROM Win32_NetworkAdapterConfiguration");

                queryCollection = query.Get();

                foreach (ManagementObject mo in queryCollection)
                {
                    if (mo["MacAddress"] != null)
                    {
                        addresses.Add(mo["MacAddress"].ToString());
                    }
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Source);
                Console.WriteLine(ex.Message);
            }

            string[] output = new string[addresses.Count];
            addresses.CopyTo(output);

            return output;
        }
    }
}
