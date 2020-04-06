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
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Text;
using System.Runtime.InteropServices;

namespace MOD.IO
{
	public delegate void IOEventHandler(object sender, IOEventArgs e);

	/// <summary>
	/// Summary description for Class1.
	/// </summary>
    public class DirectoryHelper
    {
        [DllImport("kernel32.dll", CharSet = CharSet.Auto)]
        public static extern int GetShortPathName(
                 [MarshalAs(UnmanagedType.LPTStr)]
                 string path,
                 [MarshalAs(UnmanagedType.LPTStr)]
                 StringBuilder shortPath,
                 int shortPathLength
                 );

        [DllImport("kernel32.dll", CharSet = CharSet.Auto)]
        public static extern int GetLongPathName(
                 [MarshalAs(UnmanagedType.LPTStr)]
                 string path,
                 [MarshalAs(UnmanagedType.LPTStr)]
                 StringBuilder longPath,
                 int longPathLength
                 );

        public static event IOEventHandler Progress;

        /// <summary>
        /// Only creates the directory if it doesn't already exist
        /// </summary>
        /// <param name="path"></param>
        public static void SafeCreateDirectory(string path)
        {
            if (!Directory.Exists(path))
                Directory.CreateDirectory(path);
        }

        public static void Copy(string sourcePath, string targetPath)
        {
            Copy(sourcePath, targetPath, false, null, false, false);
        }


        /// <summary>
        /// 
        /// </summary>
        /// <param name="sourcePath"></param>
        /// <param name="targetPath"></param>
        /// <param name="removeSourceFiles">True == Move, False == Copy</param>
        /// <param name="redirects"></param>
        public static void Copy(string sourcePath, string targetPath, bool removeSourceFiles,
            StringDictionary redirects, bool makeWriteable, bool ignoreErrors)
        {
            int filesProcessed = 0;
            int totalFiles = CountFiles(sourcePath, true);

            // specify default values for date to insure everything gets copied
            Copy(sourcePath, targetPath, DateTime.MinValue, DateTime.MaxValue,
                ref filesProcessed, ref totalFiles, redirects, removeSourceFiles, makeWriteable, ignoreErrors);
        }



        public static void Copy(string sourcePath, string targetPath, DateTime startDate, DateTime endDate, StringDictionary redirects,
            bool ignoreErrors)
        {
            int filesProcessed = 0;
            int totalFiles = CountFiles(sourcePath, true);

            // specify default values for date to insure everything gets copied
            Copy(sourcePath, targetPath, startDate, endDate,
                ref filesProcessed, ref totalFiles, redirects, false, false, ignoreErrors);
        }


        /// <summary>
        /// 
        /// </summary>
        /// <param name="sourcePath"></param>
        /// <param name="targetPath"></param>
        /// <param name="startDate"></param>
        /// <param name="endDate"></param>
        /// <param name="foldersProcessed"></param>
        /// <param name="totalFolders"></param>
        /// <param name="deleteOriginal"></param>
        /// <param name="ignoreErrors">An event will still be raised, and should be logged the client class</param>
        public static void CopyBasedOnFileDate(string sourcePath, string targetPath, DateTime startDate, DateTime endDate,
            ref int foldersProcessed, ref int totalFolders, bool deleteOriginal, bool ignoreErrors)
        {
            foldersProcessed++;

            foreach (string file in System.IO.Directory.GetFiles(sourcePath))
            {
                bool copy = true;

                // only check file date if non default values were specified
                if (startDate > DateTime.MinValue || endDate < DateTime.MaxValue)
                {
                    FileInfo info = new FileInfo(file);

                    copy = ((info.CreationTime >= startDate && info.CreationTime <= endDate) ||
                        (info.LastWriteTime >= startDate && info.LastWriteTime <= endDate));
                }

                if (copy)
                {
                    if (!System.IO.Directory.Exists(targetPath))
                        System.IO.Directory.CreateDirectory(targetPath);

                    string targetFilePath = System.IO.Path.Combine(targetPath,
                        Path.GetFileName(file));

                    if (deleteOriginal)
                    {
                        OnProgress(
                            new IOEventArgs(string.Format("Moving file from: {0} to {1}",
                            file, targetPath), foldersProcessed, totalFolders, IOEventSeverity.None));

                        if (File.Exists(targetFilePath))
                            File.Delete(targetFilePath);

                        File.Move(file, targetFilePath);
                    }
                    else
                    {
                        OnProgress(
                            new IOEventArgs(string.Format("Copying file from: {0} to {1}",
                            file, targetPath), foldersProcessed, totalFolders, IOEventSeverity.Debug));

                        try
                        {
                            File.Copy(file, targetFilePath, true);
                        }
                        catch (IOException exc) // TODO: Find correct exception
                        {
                            // "Data error (cyclic redundancy check).\r\n"
                            if (ignoreErrors)
                            {
                                OnProgress(
                                    new IOEventArgs(string.Format("FAILED: Copying file from: {0} to {1}. Error {2}",
                                    file, targetPath, exc.Message),
                                    foldersProcessed, totalFolders, IOEventSeverity.Error));
                                continue;
                            }
                            else
                                throw exc;
                        }
                    }
                }
                else
                {
                    OnProgress(
                        new IOEventArgs(string.Format("File not within date range: {0}",
                        file), foldersProcessed, totalFolders, IOEventSeverity.Warning));

                    break; // skip rest of folder
                }
            }

            foreach (string subPath in Directory.GetDirectories(sourcePath))
            {
                CopyBasedOnFileDate(subPath,
                    System.IO.Path.Combine(
                    targetPath,
                    PathHelper.Current(subPath)),
                    startDate, endDate, ref foldersProcessed, ref totalFolders, deleteOriginal, ignoreErrors);
            }
        }


        /// <summary>
        /// Recursive directory copy. Files created *or* modified between start date and end date
        /// will be copied.
        /// </summary>
        /// <remarks>Had to write this to replace XCOPY, which only pays attention to the date modified.
        /// If a file is copied from one place to another, only the created date changes.</remarks>
        /// <param name="sourcePath"></param>
        /// <param name="targetPath"></param>
        /// <param name="startDate"></param>
        /// <param name="endDate"></param>
        /// <param name="filesProcessed"></param>
        /// <param name="totalFiles"></param>
        /// <param name="deleteOriginal">specify 'true' to move file</param>
        public static void Copy(string sourcePath, string targetPath, DateTime startDate, DateTime endDate,
            ref int filesProcessed, ref int totalFiles, StringDictionary redirects, bool deleteOriginal, bool makeWriteable,
            bool ignoreErrors)
        {
            Copy(sourcePath, targetPath, startDate, endDate, ref filesProcessed, ref totalFiles, redirects, deleteOriginal, makeWriteable, ignoreErrors, false);
        }

        /// <summary>
        /// Recursive directory copy. Files created *or* modified between start date and end date
        /// will be copied.
        /// </summary>
        /// <remarks>Had to write this to replace XCOPY, which only pays attention to the date modified.
        /// If a file is copied from one place to another, only the created date changes.</remarks>
        /// <param name="sourcePath"></param>
        /// <param name="targetPath"></param>
        /// <param name="startDate"></param>
        /// <param name="endDate"></param>
        /// <param name="filesProcessed"></param>
        /// <param name="totalFiles"></param>
        /// <param name="deleteOriginal">specify 'true' to move file</param>
        public static void Copy(string sourcePath, string targetPath, DateTime startDate, DateTime endDate,
            ref int filesProcessed, ref int totalFiles, StringDictionary redirects, bool deleteOriginal, bool makeWriteable,
            bool ignoreErrors, bool deleteFilesWithDirectoryName)
        {
            // check if the target path has an overriding redirect
            string mappedTargetPath = (redirects != null && redirects.ContainsKey(targetPath)) ?
                redirects[targetPath] : targetPath;

            foreach (string file in System.IO.Directory.GetFiles(sourcePath))
            {
                bool copy = true;

                // only check file date if non default values were specified
                if (startDate > DateTime.MinValue || endDate < DateTime.MaxValue)
                {
                    FileInfo info = new FileInfo(file);

                    copy = ((info.CreationTime >= startDate && info.CreationTime <= endDate) ||
                        (info.LastWriteTime >= startDate && info.LastWriteTime <= endDate));
                }

                filesProcessed++;

                if (copy)
                {
                    // Remove any files in the target path that have the same name as a source directory.
                    if (deleteFilesWithDirectoryName)
                    {
                        string path = mappedTargetPath;
                        do
                        {
                            if (Directory.Exists(path))
                            {
                                break;
                            }
                            if (File.Exists(path))
                            {
                                File.Delete(path);
                            }
                            path = Path.GetDirectoryName(path);
                        } while (path != null);
                    }
                    if (!System.IO.Directory.Exists(mappedTargetPath))
                    {
                        System.IO.Directory.CreateDirectory(mappedTargetPath);
                    }

                    string targetFilePath = System.IO.Path.Combine(mappedTargetPath,
                        Path.GetFileName(file));

                    if (deleteOriginal)
                    {
                        OnProgress(
                            new IOEventArgs(string.Format("Moving file from: {0} to {1}",
                            file, mappedTargetPath), filesProcessed, totalFiles, IOEventSeverity.Debug));

                        if (File.Exists(targetFilePath))
                            File.Delete(targetFilePath);

                        File.Move(file, targetFilePath);
                    }
                    else
                    {
                        OnProgress(
                            new IOEventArgs(string.Format("Copying file from: {0} to {1}",
                            file, mappedTargetPath), filesProcessed, totalFiles, IOEventSeverity.Debug));

                        try
                        {
                            File.Copy(file, targetFilePath, true);
                        }
                        catch (IOException exc)
                        {
                            // "Data error (cyclic redundancy check).\r\n"
                            if (ignoreErrors)
                            {
                                OnProgress(
                                    new IOEventArgs(string.Format("FAILED: Copying file from: {0} to {1}. Error {2}",
                                    file, mappedTargetPath, exc.Message),
                                    filesProcessed, totalFiles, IOEventSeverity.Error));
                                continue;
                            }
                            else
                                throw exc;

                        }
                    }

                    if (makeWriteable)
                    {
                        FileAttributes attrib = File.GetAttributes(targetFilePath);

                        if ((attrib & FileAttributes.ReadOnly) > 0)
                            File.SetAttributes(targetFilePath, attrib & ~FileAttributes.ReadOnly);
                    }

                }
                else
                {
                    OnProgress(
                        new IOEventArgs(string.Format("File not within date range: {0}",
                        file), filesProcessed, totalFiles, IOEventSeverity.Warning));

                    break; // TEMPORARY test to speed things up
                }


            }

            foreach (string subPath in System.IO.Directory.GetDirectories(sourcePath))
            {
                Copy(subPath,
                    System.IO.Path.Combine(
                        mappedTargetPath,
                        PathHelper.Current(subPath)),
                        startDate, endDate, ref filesProcessed, ref totalFiles, redirects, deleteOriginal, makeWriteable, ignoreErrors, deleteFilesWithDirectoryName);
            }
        }


        /// <summary>
        /// 
        /// </summary>
        /// <remarks>Directory.Move is insufficient because it will fail if the destination
        /// directory already exists. This version will merge the two directories.</remarks>
        /// <param name="sourcePath"></param>
        /// <param name="targetPath"></param>
        public static void Move(string sourcePath, string targetPath)
        {
            Move(sourcePath, targetPath, false);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>Directory.Move is insufficient because it will fail if the destination
        /// directory already exists. This version will merge the two directories.</remarks>
        /// <param name="sourcePath"></param>
        /// <param name="targetPath"></param>
        /// <param name="deleteFilesWithDirectoryName">If true, any files in the destination directory that
        /// have the same name as on of the source directories being moved will be deleted.  Otherwise
        /// the directory move will fail.</param>
        public static void Move(string sourcePath, string targetPath, bool deleteFilesWithDirectoryName)
        {
            int filesProcessed = 0;
            int totalFiles = CountFiles(sourcePath, true);

            Copy(sourcePath, targetPath, DateTime.MinValue, DateTime.MaxValue, ref filesProcessed,
                ref totalFiles, null, true, false, false, deleteFilesWithDirectoryName);

            Directory.Delete(sourcePath, true);
        }


        protected static void OnProgress(IOEventArgs e)
        {
            if (Progress != null)
                Progress(null, e);
        }


        /// <summary>
        /// 
        /// </summary>
        /// <param name="path"></param>
        /// <returns>1 for the current folder plus 1 for every sub folder</returns>
        public static int CountDirectories(string path)
        {
            int count = 1;
            string[] subDirectories = Directory.GetDirectories(path);

            foreach (string subDir in subDirectories)
                count += CountDirectories(subDir);

            return count;
        }


        public static int CountFiles(string path, bool recurse)
        {
            int count = Directory.GetFiles(path).Length;

            if (recurse)
                foreach (string subDirectory in Directory.GetDirectories(path))
                    count += CountFiles(subDirectory, recurse);

            return count;
        }


        /// <summary>
        /// Deletes oldest files in specified directory, leaving only the 
        /// maximum number of files.
        /// </summary>
        /// <remarks>Uses Date Modified for sort</remarks>
        /// <param name="path"></param>
        /// <param name="maxFiles"></param>
        public static void PurgeOldFiles(string path, int maxFiles)
        {
            FileInfo[] files = GetFilesSortedByDate(path);

            for (int i = 0; i < files.Length - maxFiles; i++)
                File.Delete(((FileInfo)files[i]).FullName);
        }


        /// <summary>
        /// Sorts the files in the directory in ascending order of date.
        /// Date is determined using the newer of either the modified date
        /// or the created date.
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static FileInfo[] GetFilesSortedByDate(string path)
        {
            DirectoryInfo dir = new DirectoryInfo(path);
            FileInfo[] files = dir.GetFiles();

            SortedList list = new SortedList();

            foreach (FileInfo file in files)
            {
                long lastModifed = Math.Max(file.LastWriteTime.Ticks, file.CreationTime.Ticks);
                list.Add(lastModifed.ToString() + file.Name, file);
            }

            FileInfo[] output = new FileInfo[list.Count];
            list.Values.CopyTo(output, 0);

            return output;
        }


        /// <summary>
        /// Copys a list of files. Checks that the file date is in the range specified.
        /// </summary>
        /// <param name="sourcePath"></param>
        /// <param name="relativeFilePaths"></param>
        /// <param name="targetPath"></param>
        /// <param name="startDate"></param>
        /// <param name="endDate"></param>
        /// <returns>The number of files copied</returns>
        public static int Copy(string sourcePath, StringCollection relativeFilePaths, string targetPath,
            DateTime startDate, DateTime endDate, long maxTotalSize, out long totalSize)
        {
            totalSize = 0;

            for (int i = 0; i < relativeFilePaths.Count; i++)
            {
                string relativePath = relativeFilePaths[i];
                string source = Path.Combine(sourcePath, relativePath);
                string destination = Path.Combine(targetPath, relativePath);

                if (File.Exists(source))
                {
                    FileInfo info = new FileInfo(source);

                    bool copy = ((info.CreationTime >= startDate && info.CreationTime <= endDate) ||
                        (info.LastWriteTime >= startDate && info.LastWriteTime <= endDate));

                    if (totalSize + info.Length > maxTotalSize)
                        return i;

                    if (copy)
                    {
                        Directory.CreateDirectory(Path.GetDirectoryName(destination));
                        File.Copy(source, destination, true);

                        totalSize += info.Length;

                        OnProgress(
                            new IOEventArgs(string.Format("Copied file from: {0} to {1}",
                            source, destination), i, relativeFilePaths.Count, IOEventSeverity.Debug));
                    }
                }
                else
                    OnProgress(
                        new IOEventArgs(string.Format("Error, file does not exist: {0}", source), i, relativeFilePaths.Count, IOEventSeverity.Error));
            }

            return relativeFilePaths.Count;
        }


        /// <summary>
        /// Copys a list of files. Checks that the file date is in the range specified.
        /// If the file is successfuilly copied, then the FileCopyItem is marked as such.
        /// </summary>
        /// <param name="sourcePath"></param>
        /// <param name="relativeFilePaths"></param>
        /// <param name="targetPath"></param>
        /// <param name="startDate"></param>
        /// <param name="endDate"></param>
        /// <returns>The number of files copied</returns>
        public static int Copy(string sourcePath, List<FileCopyItem> filesToCopy, string targetPath,
            DateTime startDate, DateTime endDate, long maxTotalSize, out long totalSize)
        {
            totalSize = 0;
            int copied = 0;

            for (int i = 0; i < filesToCopy.Count; i++)
            {
                string relativePath = filesToCopy[i].RelativeFilePath;
                string source = Path.Combine(sourcePath, relativePath);
                string destination = Path.Combine(targetPath, relativePath);

                if (File.Exists(source))
                {
                    FileInfo info = new FileInfo(source);

                    bool copy = !filesToCopy[i].NeedsDateCheck || ((info.CreationTime >= startDate && info.CreationTime <= endDate) ||
                        (info.LastWriteTime >= startDate && info.LastWriteTime <= endDate));

                    if (copy)
                    {
                        if (totalSize + info.Length > maxTotalSize)
                            return i;

                        Directory.CreateDirectory(Path.GetDirectoryName(destination));
                        File.Copy(source, destination, true);

                        totalSize += info.Length;
                        filesToCopy[i].Copied = true;
                        ++copied;

                        OnProgress(
                            new IOEventArgs(string.Format("Copied file from: {0} to {1}",
                                source, destination), i, filesToCopy.Count, IOEventSeverity.Debug));
                    }
                }
                else
                    OnProgress(
                        new IOEventArgs(string.Format("Error, file does not exist: {0}", source), i, filesToCopy.Count, IOEventSeverity.Error));
            }

            return copied;
        }


        public static long CountFileSize(string directory, bool recurse)
        {
            long totalSize = 0;

            foreach (string fileName in Directory.GetFiles(directory))
            {
                FileInfo info = new FileInfo(fileName);
                totalSize += info.Length;
            }

            if (recurse)
            {
                foreach (string subDir in Directory.GetDirectories(directory))
                {
                    totalSize += CountFileSize(subDir, true);
                }
            }

            return totalSize;
        }

        public class FileCopyItem
        {
            public FileCopyItem(Guid fileID, string relativeFilePath)
            {
                m_fileID = fileID;
                m_relativeFilePath = relativeFilePath;
                m_copied = false;
                m_needsDateCheck = false;
            }

            public FileCopyItem(Guid fileID, string relativeFilePath, bool needsDateCheck)
            {
                m_fileID = fileID;
                m_relativeFilePath = relativeFilePath;
                m_copied = false;
                m_needsDateCheck = needsDateCheck;
            }

            public Guid FileID
            {
                get { return m_fileID; }
            }

            public string RelativeFilePath
            {
                get { return m_relativeFilePath; }
            }

            public bool NeedsDateCheck
            {
                get { return m_needsDateCheck; }
                set { m_needsDateCheck = value; }
            }

            public bool Copied
            {
                get { return m_copied; }
                set { m_copied = value; }
            }

            private Guid m_fileID;
            private string m_relativeFilePath;
            private bool m_copied;
            private bool m_needsDateCheck;
        }


    }
}
