/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

//#define USE_SHELL
#define USE_SHARPZIPLIB

using System;
using System.IO;
using System.Threading;

namespace MOD.Compression
{
    /// <summary>
    /// Summary description for ZipFile.
    /// </summary>
    public class ZipFile
    {
        public delegate void ZipProgressEventHandler(object sender, ZipEventArgs e);

        #region Static Events

        public static event ZipProgressEventHandler OnZipProgress;
        public static event ZipProgressEventHandler OnZipError;

        #endregion Static Events


#if USE_SHARPZIPLIB

        // Default compression level to use for directories if none is specified
        // Range is from 0 - 9
        public const int DEFAULT_DIRECTORY_COMPRESSION_LEVEL = 5;

        // Default compression level to use for files if none is specified
        // Range is from 0 - 9
        public const int DEFAULT_FILE_COMPRESSION_LEVEL = 5;

        // Size of the buffer to use when reading files into the archive or writing files out of the archive.
        private const int ZIP_BUFFER_SIZE = 512 * 1024;

        // ------------------------------------------------------------------
        /// <summary>
        /// Compresses and archives the specified directory to the specified file
        /// </summary>
        /// <param name="directoryPath"></param>
        /// <param name="archiveFilePathName"></param>
        /// <param name="password">Currently not supported</param>
        // ------------------------------------------------------------------
        public static void CompressDirectory(string directoryPath, string archiveFilePathName, string password)
        {
            CompressDirectory(directoryPath, archiveFilePathName, password, DEFAULT_DIRECTORY_COMPRESSION_LEVEL);
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Compresses and archives the specified directory to the specified file
        /// </summary>
        /// <param name="directoryPath"></param>
        /// <param name="archiveFilePathName"></param>
        /// <param name="password">Currently not supported</param>
        // ------------------------------------------------------------------
        public static void CompressDirectory(string directoryPath, string archiveFilePathName, string password, int compressionLevel)
        {
            using (ICSharpCode.SharpZipLib.Zip.ZipOutputStream zipOutputStream = new ICSharpCode.SharpZipLib.Zip.ZipOutputStream(File.Create(archiveFilePathName)))
            {
                zipOutputStream.SetLevel(compressionLevel);

                byte[] buffer = new byte[ZIP_BUFFER_SIZE];
                ICSharpCode.SharpZipLib.Zip.ZipNameTransform zipNameTransform = new ICSharpCode.SharpZipLib.Zip.ZipNameTransform(directoryPath);

                AddDirectoryToZip(zipOutputStream, directoryPath, zipNameTransform, buffer);

                zipOutputStream.Finish();
                zipOutputStream.Close();
            }
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Compresses and archives the specified file to the specified archive file
        /// </summary>
        /// <param name="filePath"></param>
        /// <param name="archiveFilePathName"></param>
        /// <param name="password">Currently not supported</param>
        // ------------------------------------------------------------------
        public static void CompressFile(string fileName, string archiveFilePathName)
        {
            CompressFile(fileName, archiveFilePathName, DEFAULT_FILE_COMPRESSION_LEVEL);
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Compresses and archives the specified file to the specified archive file
        /// </summary>
        /// <param name="filePath"></param>
        /// <param name="archiveFilePathName"></param>
        /// <param name="password">Currently not supported</param>
        // ------------------------------------------------------------------
        public static void CompressFile(string fileName, string archiveFilePathName, int compressionLevel)
        {
            using (ICSharpCode.SharpZipLib.Zip.ZipOutputStream zipOutputStream = new ICSharpCode.SharpZipLib.Zip.ZipOutputStream(File.Create(archiveFilePathName)))
            {
                zipOutputStream.SetLevel(compressionLevel);

                byte[] buffer = new byte[ZIP_BUFFER_SIZE];
                ICSharpCode.SharpZipLib.Zip.ZipNameTransform zipNameTransform = new ICSharpCode.SharpZipLib.Zip.ZipNameTransform(Path.GetDirectoryName(fileName));

                AddFileToZip(zipOutputStream, fileName, zipNameTransform, buffer);

                zipOutputStream.Finish();
                zipOutputStream.Close();
            }
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Returns a list of all files contained within the specified archive file
        /// </summary>
        /// <param name="archiveFilePathName"></param>
        // ------------------------------------------------------------------
        public static System.Collections.Generic.List<string> GetFileList(string archiveFilePathName)
        {
            System.Collections.Generic.List<string> fileList = new System.Collections.Generic.List<string>();
            using (ICSharpCode.SharpZipLib.Zip.ZipInputStream s = new ICSharpCode.SharpZipLib.Zip.ZipInputStream(File.OpenRead(archiveFilePathName)))
            {
                ICSharpCode.SharpZipLib.Zip.ZipEntry zipEntry;
                byte[] buffer = new byte[ZIP_BUFFER_SIZE];
                while ((zipEntry = s.GetNextEntry()) != null)
                {
                    fileList.Add(zipEntry.Name);
                }
            }
            return fileList;
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Extracts all files. Does *not* delete ZIP file.
        /// </summary>
        /// <param name="archiveFilePathName"></param>
        /// <param name="directoryPath"></param>
        /// <param name="password">Ignored, not implemented</param>
        // ------------------------------------------------------------------
        public static void ExtractAll(string archiveFilePathName, string directoryPath, string password)
        {
            if (!Directory.Exists(directoryPath))
            {
                Directory.CreateDirectory(directoryPath);
            }

            using (ICSharpCode.SharpZipLib.Zip.ZipInputStream s = new ICSharpCode.SharpZipLib.Zip.ZipInputStream(File.OpenRead(archiveFilePathName)))
            {
                ICSharpCode.SharpZipLib.Zip.ZipEntry zipEntry;
                byte[] buffer = new byte[ZIP_BUFFER_SIZE];
                while ((zipEntry = s.GetNextEntry()) != null)
                {
                    string directoryName = Path.Combine(directoryPath, Path.GetDirectoryName(zipEntry.Name));
                    string fileName = Path.Combine(directoryName, Path.GetFileName(zipEntry.Name));

                    // create directory
                    if (!Directory.Exists(directoryName))
                    {
                        Directory.CreateDirectory(directoryName);
                    }

                    if (!string.IsNullOrEmpty(fileName))
                    {
                        ExtractFileFromZip(s, fileName, buffer);
                    }
                }
            }
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Extracts all files. Does *not* delete ZIP file.
        /// If an error is encountered while extracting a file, this method will attempt to continue the extraction process.
        /// </summary>
        /// <param name="archiveFilePathName"></param>
        /// <param name="directoryPath"></param>
        /// <param name="password">Ignored, not implemented</param>
        /// <returns>The number of recoverable errors that occurred while extracting.</returns>
        // ------------------------------------------------------------------
        public static int ExtractAllAndSkipErrors(string archiveFilePathName, string directoryPath, string password)
        {
            int errorCount = 0;

            if (!Directory.Exists(directoryPath))
            {
                Directory.CreateDirectory(directoryPath);
            }

//            using (ICSharpCode.SharpZipLib.Zip.ZipInputStream s = new ICSharpCode.SharpZipLib.Zip.ZipInputStream(File.OpenRead(archiveFilePathName)))
            ICSharpCode.SharpZipLib.Zip.ZipInputStream s = null;
            long totalFileCount = 0;
            long currentFileIndex = 0;
            if (OnZipProgress != null)
            {
                ICSharpCode.SharpZipLib.Zip.ZipFile zipFile = new ICSharpCode.SharpZipLib.Zip.ZipFile(archiveFilePathName);
                totalFileCount = zipFile.Count;
                if (totalFileCount == 0)
                {
                    totalFileCount = 1;
                }
                zipFile.Close();
            }
            try
            {
                s = new ICSharpCode.SharpZipLib.Zip.ZipInputStream(File.OpenRead(archiveFilePathName));
                ICSharpCode.SharpZipLib.Zip.ZipEntry zipEntry;
                byte[] buffer = new byte[ZIP_BUFFER_SIZE];
                while ((zipEntry = s.GetNextEntry()) != null)
                {
                    string directoryName = Path.Combine(directoryPath, Path.GetDirectoryName(zipEntry.Name));
                    string fileName = Path.Combine(directoryName, Path.GetFileName(zipEntry.Name));

                    if (OnZipProgress != null)
                    {
                        OnZipProgress(null, new ZipEventArgs(fileName, (int)(100 * currentFileIndex / totalFileCount), totalFileCount, currentFileIndex));
                    }
                    ++currentFileIndex;

                    // create directory
                    if (!Directory.Exists(directoryName))
                    {
                        Directory.CreateDirectory(directoryName);
                    }

                    if (!string.IsNullOrEmpty(fileName))
                    {
                        try
                        {
                            ExtractFileFromZip(s, fileName, buffer);
                        }
                        catch (ICSharpCode.SharpZipLib.Zip.ZipException ex)
                        {
                            ++errorCount;
                            if (string.Compare(ex.Message, "CRC mismatch", true) == 0)
                            {
                                bool recovered = true;
                                try
                                {
                                    if (OnZipError != null)
                                    {
                                        OnZipError(null, new ZipEventArgs(fileName, ex));
                                    }
                                    s.Close();
                                    s.Dispose();
                                    s = new ICSharpCode.SharpZipLib.Zip.ZipInputStream(File.OpenRead(archiveFilePathName));
                                    int i = 0;
                                    while ((zipEntry = s.GetNextEntry()) != null)
                                    {
                                        if (++i >= currentFileIndex)
                                        {
                                            break;
                                        }
                                    }
                                    if (zipEntry == null)
                                    {
                                        break;
                                    }
                                }
                                catch
                                {
                                    recovered = false;
                                }
                                if (!recovered)
                                {
                                    throw;
                                }
                            }
                            else
                            {
                                throw;
                            }
                        }
                    }
                }
            }
            finally
            {
                if (s != null)
                {
                    s.Close();
                    s.Dispose();
                }
            }
            return errorCount;
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Extracts one file from the archive to the specified output directory.
        /// NOTE: This will match by file name, ignoring the directory path.
        /// </summary>
        /// <param name="archiveFilePathName">The ZIP file to open</param>
        /// <param name="fileName">The file to extract</param>
        /// <param name="outputPath">The directory to write the extracted file to</param>
        // ------------------------------------------------------------------
        public static bool ExtractOneFile(string archiveFilePathName, string fileName, string outputPath)
        {
            bool extracted = false;
            if (!File.Exists(archiveFilePathName))
            {
                return false;
            }
            using (ICSharpCode.SharpZipLib.Zip.ZipInputStream s = new ICSharpCode.SharpZipLib.Zip.ZipInputStream(File.OpenRead(archiveFilePathName)))
            {
                ICSharpCode.SharpZipLib.Zip.ZipEntry zipEntry;
                byte[] buffer = new byte[ZIP_BUFFER_SIZE];

                // Find the specified file
                while ((zipEntry = s.GetNextEntry()) != null)
                {
                    if (string.Compare(Path.GetFileName(zipEntry.Name), fileName, true) != 0)
                    {
                        continue;
                    }

                    string directoryName = Path.Combine(outputPath, Path.GetDirectoryName(zipEntry.Name));
                    string outputFileName = Path.Combine(outputPath, Path.GetFileName(zipEntry.Name));

                    // create directory
                    if (!Directory.Exists(directoryName))
                    {
                        Directory.CreateDirectory(directoryName);
                    }

                    if (!string.IsNullOrEmpty(outputFileName))
                    {
                        ExtractFileFromZip(s, outputFileName, buffer);
                        extracted = true;
                        break;
                    }
                }

            }
            return extracted;
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Adds all files in the directory and subdirectories to the given zip file.
        /// </summary>
        /// <param name="zipOutputStream"></param>
        /// <param name="directoryPath"></param>
        /// <param name="zipNameTransform"></param>
        /// <param name="buffer"></param>
        // ------------------------------------------------------------------
        private static void AddDirectoryToZip(
            ICSharpCode.SharpZipLib.Zip.ZipOutputStream zipOutputStream,
            string directoryPath,
            ICSharpCode.SharpZipLib.Zip.ZipNameTransform zipNameTransform,
            byte[] buffer)
        {
            string[] fileNames = Directory.GetFiles(directoryPath);
            foreach (string fileName in fileNames)
            {
                AddFileToZip(zipOutputStream, fileName, zipNameTransform, buffer);
            }
            string[] subDirNames = Directory.GetDirectories(directoryPath);
            foreach (string subDirName in subDirNames)
            {
                AddDirectoryToZip(zipOutputStream, subDirName, zipNameTransform, buffer);
            }
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Adds a file to the given zip file.
        /// </summary>
        /// <param name="zipOutputStream"></param>
        /// <param name="filePath"></param>
        /// <param name="zipNameTransform"></param>
        /// <param name="buffer"></param>
        // ------------------------------------------------------------------
        private static void AddFileToZip(
            ICSharpCode.SharpZipLib.Zip.ZipOutputStream zipOutputStream,
            string fileName,
            ICSharpCode.SharpZipLib.Zip.ZipNameTransform zipNameTransform,
            byte[] buffer)
        {
            if (OnZipProgress != null)
            {
                OnZipProgress(null, new ZipEventArgs(fileName, 0));
            }

            ICSharpCode.SharpZipLib.Zip.ZipEntry zipEntry = new ICSharpCode.SharpZipLib.Zip.ZipEntry(zipNameTransform.TransformFile(fileName));
            zipEntry.DateTime = DateTime.Now;
            zipOutputStream.PutNextEntry(zipEntry);

            using (FileStream fs = File.OpenRead(fileName))
            {
                int bytesRead;
                do
                {
                    bytesRead = fs.Read(buffer, 0, buffer.Length);
                    zipOutputStream.Write(buffer, 0, bytesRead);
                } while (bytesRead > 0);
            }
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Extracts the current file from the given zip input stream to the given file name.
        /// </summary>
        /// <param name="zipOutputStream"></param>
        /// <param name="destinationFileName"></param>
        /// <param name="buffer"></param>
        // ------------------------------------------------------------------
        private static void ExtractFileFromZip(
            ICSharpCode.SharpZipLib.Zip.ZipInputStream zipInputStream,
            string destinationFileName,
            byte[] buffer)
        {
            using (FileStream streamWriter = File.Create(destinationFileName))
            {
                int bytesRead;
                while (true)
                {
                    bytesRead = zipInputStream.Read(buffer, 0, buffer.Length);
                    if (bytesRead > 0)
                    {
                        streamWriter.Write(buffer, 0, bytesRead);
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

#else

        #region Windows Shell Constants

        public const int SHCONTF_INCLUDEHIDDEN = 128;
        public const int SHCONTF_FOLDERS = 32;
        public const int SHCONTF_NONFOLDERS = 64;

        public const uint COPYHERE_NO_OPTIONS                    = 0x0000; // Default. No options specified.
        public const uint COPYHERE_NO_PROGRESS_DIALOG            = 0x0004; // Do not display a progress dialog box.
        public const uint COPYHERE_RENAME_TARGET_IF_EXISTS       = 0x0008; // Rename the target file if a file exists at the target location with the same name.
        public const uint COPYHERE_YES_TO_ALL                    = 0x0010; // Click "Yes to All" in any dialog box displayed.
        public const uint COPYHERE_PRESERVE_UNDO                 = 0x0040; // Preserve undo information, if possible.
        public const uint COPYHERE_ONLY_IF_WILDCARD              = 0x0080; // Perform the operation only if a wildcard file name (*.*) is specified.
        public const uint COPYHERE_PROGRESS_DIALOG_NO_FILE_NAMES = 0x0100; // Display a progress dialog box but do not show the file names.
        public const uint COPYHERE_NO_NEW_DIRECTORY_CONFIRMATION = 0x0200; // Do not confirm the creation of a new directory if the operation requires one to be created.
        public const uint COPYHERE_NO_UI_ON_ERROR                = 0x0400; // Do not display a user interface if an error occurs.
        public const uint COPYHERE_DISABLE_RECURSION             = 0x1000; // Disable recursion.
        public const uint COPYHERE_ONLY_COPY_SPECIFIED_FILES     = 0x2000; // Do not copy connected files as a group. Only copy the specified files.

        #endregion Windows Shell Constants

        // File name for placeholder files to put in empty directories
        private static readonly string MOD_PLACEHOLDER_FILE_NAME = "_MOD_PLACEHOLDER_FILE_";
        // Maximum amount of time to wait for a zip file to compress before timing out
        private static readonly TimeSpan MAX_COMPRESSION_WAIT_TIME = new TimeSpan(0, 45, 0);

        // ------------------------------------------------------------------
        /// <summary>
        /// Uses the windows API to create a ZIP file. Deletes input directory after files have been copied into ZIP.
        /// </summary>
        /// <param name="directoryPath"></param>
        /// <param name="archiveFilePathName"></param>
        /// <param name="password">Currently not supported</param>
        // ------------------------------------------------------------------
        public static void CompressDirectory(string directoryPath, string archiveFilePathName, string password)
        {
            //Create an empty zip file
            byte[] emptyzip = new byte[]{80,75,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

            FileStream fs = File.Create(archiveFilePathName);
            fs.Write(emptyzip, 0, emptyzip.Length);
            fs.Flush();
            fs.Close();

            // If an empty directory is encountered while zipping, then Windows will display a warning dialog.
            // To prevent this, add a placeholder file to every empty subdirectory.
            AddPlaceholderFiles(directoryPath);

            // Copy a folder and its contents into the newly created zip file
            Shell32.ShellClass shell = new Shell32.ShellClass();
            Shell32.Folder3 sourceFolder = (Shell32.Folder3)shell.NameSpace(directoryPath);
            Shell32.Folder3 destFolder = (Shell32.Folder3)shell.NameSpace(archiveFilePathName);

            int sourceItemCount = CountItems(sourceFolder);

            // Start compressing the files
            Shell32.FolderItems3 sourceItems = (Shell32.FolderItems3)sourceFolder.Items();
            sourceItems.Filter(SHCONTF_INCLUDEHIDDEN | SHCONTF_NONFOLDERS | SHCONTF_FOLDERS, "*");
            destFolder.CopyHere((Shell32.FolderItems3)sourceItems, COPYHERE_NO_PROGRESS_DIALOG | COPYHERE_YES_TO_ALL | COPYHERE_NO_UI_ON_ERROR);
            DateTime maxWaitTimeExpirationDate = DateTime.Now + MAX_COMPRESSION_WAIT_TIME;

            // Wait for asynchronous call to complete
            Thread.Sleep(1000);

            bool failed = false;
            do
            {
                int destItemCount = CountItems(destFolder);
                if (destItemCount == sourceItemCount)
                {
                    break;
                }
                if (DateTime.Now > maxWaitTimeExpirationDate)
                {
                    failed = true;
                    break;
                }
                Thread.Sleep(3000);
            } while (true);

            RemovePlaceholderFiles(directoryPath);

            if (failed)
            {
                throw new Exception("Timed out while compressing directory " + directoryPath);
            }

			Directory.Delete(directoryPath, true);

        }


        // ------------------------------------------------------------------
        /// <summary>
        /// Extracts all files. Does *not* delete ZIP file.
        /// </summary>
        /// <param name="archiveFilePathName"></param>
        /// <param name="directoryPath"></param>
        /// <param name="password">Ignored, not implemented</param>
        // ------------------------------------------------------------------
        public static void ExtractAll(string archiveFilePathName, string directoryPath, string password)
        {
            if (!Directory.Exists(directoryPath))
            {
                Directory.CreateDirectory(directoryPath);
            }

            // Copy a folder and its contents into the newly created zip file
            Shell32.ShellClass shell = new Shell32.ShellClass();
            Shell32.Folder3 sourceFolder = (Shell32.Folder3)shell.NameSpace(archiveFilePathName);
            Shell32.Folder3 destFolder = (Shell32.Folder3)shell.NameSpace(directoryPath); 
            Shell32.FolderItems3 items = (Shell32.FolderItems3)sourceFolder.Items();

            int sourceFileCount = CountItems(sourceFolder);
            int destinationPreCopyFileCount = CountItems(destFolder);

            destFolder.CopyHere(items, COPYHERE_NO_PROGRESS_DIALOG | COPYHERE_YES_TO_ALL | COPYHERE_NO_UI_ON_ERROR); // 20 = Do not display progress box and copy all files

            // Wait for asynchronous call to complete
            Thread.Sleep(1000);
            
            int i = 0;
            int currentDestinationFileCount = CountItems(destFolder);
            
            // If all of the files already exist at the destination (and are being overwritten), 
            // then this will wait a fixed duration (30s)
            while ((currentDestinationFileCount < destinationPreCopyFileCount + sourceFileCount) && 
                i++ < 10)
            {
                Thread.Sleep(3000);
                currentDestinationFileCount = CountItems(destFolder);
            }

            RemovePlaceholderFiles(directoryPath);
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Counts the number of files in the given folder.
        /// Recursively iterates through all subfolders.
        /// </summary>
        // ------------------------------------------------------------------
        public static int CountItems(Shell32.Folder3 folder)
        {
            if (folder == null || folder.Items() == null)
            {
                return 0;
            }

            Shell32.FolderItems3 items = (Shell32.FolderItems3)folder.Items();
            items.Filter(SHCONTF_INCLUDEHIDDEN | SHCONTF_NONFOLDERS | SHCONTF_FOLDERS, "*");
            int count = items.Count;

            foreach (Shell32.FolderItem folderItem in items)
            {
                if ((folderItem != null) && folderItem.IsFolder)
                {
                    count += CountItems((Shell32.Folder3)folderItem.GetFolder);
                }
            }

            return count;
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// If the given directory is empty, this method adds a placeholder file to that directory.
        /// Otherwise, it recurses into subdirectories, adding a placeholder file to each empty subdirectory.
        /// </summary>
        // ------------------------------------------------------------------
        private static void AddPlaceholderFiles(string rootDirectory)
        {
            string[] subDirs = Directory.GetDirectories(rootDirectory);
            if (subDirs.Length > 0)
            {
                foreach (string subDir in subDirs)
                {
                    AddPlaceholderFiles(subDir);
                }
            }
            else if (Directory.GetFiles(rootDirectory, "*.*").Length == 0)
            {
                using (FileStream fs = File.Create(Path.Combine(rootDirectory, MOD_PLACEHOLDER_FILE_NAME)))
                {
                    fs.Close();
                }
            }
        }

        // ------------------------------------------------------------------
        /// <summary>
        /// Traverses the directory and subdirectories, deleting all placeholder files.
        /// </summary>
        // ------------------------------------------------------------------
        private static void RemovePlaceholderFiles(string rootDirectory)
        {
            string[] subDirs = Directory.GetDirectories(rootDirectory);
            foreach (string subDir in subDirs)
            {
                RemovePlaceholderFiles(subDir);
            }

            if (File.Exists(Path.Combine(rootDirectory, MOD_PLACEHOLDER_FILE_NAME)))
            {
                File.Delete(Path.Combine(rootDirectory, MOD_PLACEHOLDER_FILE_NAME));
            }
        }

#endif

        public ZipFile()
        {
        }

    }
}
