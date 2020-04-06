/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

using System;
using System.IO;

namespace MOD.Compression
{
	/// <summary>
	/// Summary description for CompressionType.
	/// </summary>
	public enum CompressionFormat
	{
		Cab,
		Zip,
        Unknown
	}

    public class CompressionFormatHelper
    {
        // ------------------------------------------------------------------
        /// <summary>
        /// Opens the specified file and determines the compression format
        /// </summary>
        // ------------------------------------------------------------------
        public static CompressionFormat FindFormat(string fileName)
        {
            using (FileStream fs = new FileStream(fileName, FileMode.Open))
            {
                byte[] buffer = new byte[4];
                if (fs.Read(buffer, 0, buffer.Length) != buffer.Length)
                {
                    return CompressionFormat.Unknown;
                }
                if ((buffer[0] == 0x50) &&
                    (buffer[1] == 0x4B) &&
                    (buffer[2] == 0x03) &&
                    (buffer[3] == 0x04))
                {
                    return CompressionFormat.Zip;
                }
                else if ((buffer[0] == 0x4D) &&
                    (buffer[1] == 0x53) &&
                    (buffer[2] == 0x43) &&
                    (buffer[3] == 0x46))
                {
                    return CompressionFormat.Cab;
                }
                else
                {
                    return CompressionFormat.Unknown;
                }
            }
        }
    }
}
