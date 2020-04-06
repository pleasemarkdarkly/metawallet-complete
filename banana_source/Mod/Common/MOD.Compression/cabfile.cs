/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;
using MOD.IO;

namespace MOD.Compression
{
    // ------------------------------------------------------------------
    /// <summary>
    /// The CabFile class provides a wrapper for command line CAB file compression
    /// </summary>
    // ------------------------------------------------------------------
    public class CabFile
    {
        // ------------------------------------------------------------------
        /// <summary>
        /// Compresses and archives the specified directory and all of its subdirectories to the specified file.
        /// 
        /// Options passed to CABARC.EXE:
        ///   -p: preserve relative path names
        ///   -P: remove prefix (tell it where to remember relative paths from)
        ///   -r: recurse into subdirectories
        ///   N: create new cabinet
        /// </summary>
        /// <param name="directoryPath"></param>
        /// <param name="archiveFilePathName"></param>
        /// <param name="cabarcExeFilePath">Path to the CABARC.EXE utility that is used to compress the file</param>
        /// <returns>The output messages of the command-line CABARC.EXE utility</returns>
        // ------------------------------------------------------------------
        public static string CompressDirectory(string directoryPath, string archiveFilePathName, string cabarcExeFilePath)
        {
            if (!Directory.Exists(Path.GetDirectoryName(archiveFilePathName)))
                Directory.CreateDirectory(Path.GetDirectoryName(archiveFilePathName));

            string filePattern = Path.Combine(directoryPath, "*");
            string pathPrefix = directoryPath.Substring(directoryPath.IndexOf("\\") + 1);

            string parameters = string.Format("-p -r -P \"{0}\" N \"{1}\" \"{2}\"",
                pathPrefix, archiveFilePathName, filePattern);

            ProcessStartInfo startInfo = new ProcessStartInfo(cabarcExeFilePath, parameters);
            startInfo.CreateNoWindow = true;
            startInfo.RedirectStandardOutput = true;
            startInfo.UseShellExecute = false;

            Process process = Process.Start(startInfo);
            string output = process.StandardOutput.ReadToEnd();
            process.WaitForExit();

            if ((process.ExitCode != 0) || !File.Exists(archiveFilePathName))
            {
                // Skip past all the "-- adding" notices.
                string parsedOutput = output;
                int idx = output.LastIndexOf("-- adding");
                if (idx >= 0)
                {
                    parsedOutput = output.Substring(idx);
                    idx = parsedOutput.IndexOf("\n");
                    if (idx >= 0)
                    {
                        parsedOutput = parsedOutput.Substring(idx);
                    }
                }

                throw new ApplicationException(
                    string.Format("CABARC compression for file {0} failed, return code: {1}\nDetails: {2}",
                        archiveFilePathName,
                        process.ExitCode,
                        parsedOutput));
            }

            return output;
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Extracts all the files from the given archive file to the specified path
        /// </summary>
        /// <remarks>
        /// Options:
        /// 
        /// -o overwrite
        /// -p preserve relative paths
        /// X  extract
        /// </remarks>
        /// <param name="archiveFilePathName">The archive file to extract from</param>
        /// <param name="destinationRootPath">The root path to extract the files to</param>
        /// <param name="cabarcExeFilePath">Path to the CABARC.EXE utility that is used to uncompress the file</param>
        /// <returns>The output messages of the command-line CABARC.EXE utility</returns>
        // ------------------------------------------------------------------
        public static string ExtractAll(string archiveFilePathName, string destinationRootPath, string cabarcExeFilePath)
        {
            if (!destinationRootPath.EndsWith("\\"))
            {
                destinationRootPath += "\\";
            }

            StringBuilder shortArchiveFilePathName = new StringBuilder(100);
            StringBuilder shortPath = new StringBuilder(100);

            DirectoryHelper.GetShortPathName(destinationRootPath, shortPath, 100);
            DirectoryHelper.GetShortPathName(archiveFilePathName, shortArchiveFilePathName, 100);

            string parameters = string.Format("-o -p X {0} * {1}",
                shortArchiveFilePathName, shortPath);

            ProcessStartInfo startInfo = new ProcessStartInfo(cabarcExeFilePath, parameters);

            startInfo.CreateNoWindow = true;
            startInfo.RedirectStandardOutput = true;
            startInfo.UseShellExecute = false;

            Process process = Process.Start(startInfo);

            string output = process.StandardOutput.ReadToEnd();

            //DebugLogManager.Write(string.Format("CABARC output:\n{0}", output), "Trace");

            process.WaitForExit();

            if ((process.ExitCode != 0) || output.Contains("failed: code"))
            {
                throw new ApplicationException(
                    string.Format("CABARC compression failed, return code: {0}\nDetails: {1}",
                    process.ExitCode,
                    output));
            }

            return output;
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Extracts one file from the archive to the specified path.
        /// </summary>
        /// <param name="archiveFilePathName">The archive file to extract from</param>
        /// <param name="fileToExtractName">The name of the file to extract</param>
        /// <param name="destinationRootPath">The root path to extract the files to</param>
        /// <param name="cabarcExeFilePath">Path to the CABARC.EXE utility that is used to uncompress the file</param>
        /// <returns>The output messages of the command-line CABARC.EXE utility</returns>
        // ------------------------------------------------------------------
        public static string ExtractOneFile(string archiveFilePathName, string fileToExtractName, string destinationRootPath, string cabarcExeFilePath)
        {
            // output path must end in back slash
            if (!destinationRootPath.EndsWith("\\"))
            {
                destinationRootPath += "\\";
            }

            string parameters = string.Format(@"-o X {0} {1} {2}",
                archiveFilePathName, fileToExtractName, destinationRootPath);

            ProcessStartInfo startInfo = new ProcessStartInfo(cabarcExeFilePath, parameters);

            startInfo.CreateNoWindow = true;
            startInfo.RedirectStandardOutput = true;
            startInfo.UseShellExecute = false;

            Process process = Process.Start(startInfo);

            string output = process.StandardOutput.ReadToEnd();

            process.WaitForExit();

            Console.WriteLine(output);

            if (process.ExitCode != 0)
                throw new ApplicationException(
                    string.Format("CABARC extraction failed, return code: {0}\nDetails: {1}",
                    process.ExitCode,
                    output));

            return output;
        }

    }
}
