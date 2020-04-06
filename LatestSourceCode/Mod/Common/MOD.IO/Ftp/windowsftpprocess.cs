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
using System.IO;
using System.Diagnostics;

namespace MOD.IO.Ftp
{
	/// <summary>
	/// Wrapper for shell FTP using a script.
	/// </summary>
	public class WindowsFtpProcess
	{
		#region Constants
		//	open ftp.blah.com
		//	(username)
		//	(password)
		//	cd Reports\Blah
		//	mput C:\Publishing\Export\Reports\XYZ.txt
		//	y
		//	bye
		private const string SCRIPT_UPLOAD = 
			"open {0}\r\n{1}\r\n{2}\r\ncd {3}\r\nmput {4}\r\ny\r\nbye";

		private const string SCRIPT_DOWNLOAD = 
			"open {0}\r\n{1}\r\n{2}\r\ncd {3}\r\nget {4} {5}\r\ny\r\nbye";

		private const string SCRIPT_DOWNLOAD_WITH_DELETE = 
			"open {0}\r\n{1}\r\n{2}\r\ncd {3}\r\nget {4} {5}\r\ny\rDELE {4}\nbye";
		#endregion

		public static int Upload(Uri targetPath, string username, string password, string localFilePath, out string output)
		{
			string script = string.Format(SCRIPT_UPLOAD,
				targetPath.Host,
				username,
				password,
				targetPath.AbsolutePath,
				localFilePath);

			return ExecuteScript(script, out output);
		}


		/// <summary>
		/// 
		/// </summary>
		/// <remarks>Will create the local folder if no such folder exists.</remarks>
		/// <param name="targetFile"></param>
		/// <param name="username"></param>
		/// <param name="password"></param>
		/// <param name="localFilePath"></param>
		/// <returns></returns>
		public static int Download(Uri targetFile, string username, string password, string localFilePath, bool delete, out string output)
		{
			string localPath = Path.GetDirectoryName(localFilePath);

			if (!Directory.Exists(localPath))
				Directory.CreateDirectory(localPath);

			string scriptFormat = delete ? SCRIPT_DOWNLOAD_WITH_DELETE : SCRIPT_DOWNLOAD;

			string script = string.Format(scriptFormat,
				targetFile.Host,
				username,
				password,
				targetFile.Segments[1],
				targetFile.Segments[2],
				localFilePath);

			return ExecuteScript(script, out output);
		}

		private static int ExecuteScript(string script, out string output)
		{
			string scriptFilePath = Path.GetTempFileName();	
			
			FileStream stream = new FileStream(scriptFilePath, FileMode.Create, FileAccess.Write);

			StreamWriter writer = new StreamWriter(stream);
			writer.Write(script);
			writer.Flush();
			writer.Close();
			stream.Close();

			ProcessStartInfo startInfo = 
				new ProcessStartInfo("FTP", "-s:" + scriptFilePath);

			startInfo.UseShellExecute = false;
			startInfo.WindowStyle = ProcessWindowStyle.Hidden;
			startInfo.CreateNoWindow = true;
			startInfo.RedirectStandardOutput = true;

			Process process = Process.Start(startInfo);

			output = process.StandardOutput.ReadToEnd();

			while (!process.HasExited)
			{
				process.WaitForExit(250);
				output += process.StandardOutput.Read();
			}

			File.Delete(scriptFilePath);

			if (process.ExitCode != 0)
				throw new ApplicationException(
					string.Format("FTP failed. Script: {0}", script));

			return process.ExitCode;
		}

	}
}
