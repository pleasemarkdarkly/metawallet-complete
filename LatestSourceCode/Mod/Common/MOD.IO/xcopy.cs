/*<copyright>
 MOD Systems, Inc (c) 2005 All Rights Reserved. 720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 
All Rights Reserved, (c) 2005, covered by Trademark Laws, contents are considered Restricted Secrets 
by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected 
SBUX employees as outlined in the Licensing Agreement between MOD Systems and Starbuck Corporation on 
June 3rd, 2005.   
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, 
read, or have access to any part or whole of software source code.  If you have done so, immediatly 
report yourself to your manager. 
Do not reproduce any portions of this software.  Unauthorized use or disclosure of this information 
could impact MOD System's competitive advantage.   
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel 
or otherwise, to any intellectual property rights is granted in this source code.   
CONFIDENTIAL SOURCE CODE
</copyright>*/

using System;
using System.Configuration;
using System.Diagnostics;
using System.Runtime.InteropServices;

namespace MOD.IO
{
    /// <summary>
	/// Wrapper for initiating an XCopy process
	/// </summary>
	public class XCopy
	{
		/// <summary>
		/// Initiates a new process for XCopy with these parameters: 
		/// /V (verify) 
		/// /R (overwrite) 
		/// /Y (supress prompting)
		/// 
		/// Optionally includes: 
		/// /S (subdirectories) and 
		/// /D:{date} (for files newer than date)
		/// 
		/// </summary>
		/// <param name="sourcePath"></param>
		/// <param name="destinationPath">Make sure to end this with a "\" so XCopy doesn't prompt
		/// to clarify if a directory or file was specified.</param>
		/// <param name="modifiedDate"></param>
		/// <param name="recursive"></param>
		/// <returns></returns>
		public static int Copy(string xcopyExePath, string sourcePath, string destinationPath, DateTime modifiedDate, bool recursive)
		{
			string parameters = string.Format("{0} {1} /V /R /Y {2}", sourcePath, destinationPath,
				recursive ? "/S" : string.Empty);
			
			if (modifiedDate > DateTime.MinValue)
				parameters = string.Format("{0} /D:{1}", parameters, modifiedDate.ToString("MM-dd-yyyy"));
			
			ProcessStartInfo startInfo = 
				new ProcessStartInfo(xcopyExePath, parameters);

			startInfo.CreateNoWindow = true;

			Process process = Process.Start(startInfo);

			while (!process.HasExited)
			{
				process.WaitForExit(1000);
				//System.Windows.Forms.Application.DoEvents();
			}

			if (process.ExitCode != 0)
				throw new ApplicationException(
					string.Format("XCOPY failed. Source: {0}, Destination {1}, Modified Date: {2}, Recursive: {3}",
					sourcePath, destinationPath, modifiedDate.ToString(), recursive.ToString()));

			return process.ExitCode;
		}

	}
}
