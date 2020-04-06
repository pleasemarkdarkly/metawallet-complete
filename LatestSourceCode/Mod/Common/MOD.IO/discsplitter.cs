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
using System.Data;
using System.Collections.Specialized;

namespace MOD.IO
{
	/// <summary>
	/// Summary description for DiscSplitter.
	/// </summary>
	public class DiscSplitter
	{
		#region Constants
		public const string DISC_FOLDER_NAME_FORMAT = "Disc{0}";
		private const int SPLIT_FILE_BUFFER_SIZE = 8 * 1024;

		private const string XML_MANIFEST_TEMPLATE = 
			@"<?xml version=""1.0"" encoding=""utf-8"" ?>" +
			@"<Manifest DiscSetID=""{0}"" DiscNumber=""{1}"" DiscCount=""{2}""/>";

		public const string FILE_NAME_MANIFEST = "Manifest.xml";
		#endregion

		public static event IOEventHandler Progress;

		#region Static Methods - Splitting

		/// <summary>
		/// Recurses a file folder, counting the size of the files until
		/// it exceeds the specified threshold (the size of a removable disc).
		/// After the threshold is reached, files are moved to a parallel path
		/// ending in \Disc2.
		/// </summary>
		/// <param name="path">must end in \Disc1</param>
		/// <param name="folderSize">Maximum size for one folder tree, in MB</param>
		/// <param name="maxFileSize">Maximum size of any one file, in KB</param>
		public static int Split(string path, int folderSize, int maxFileSize, out long totalFileSize)
		{
			OnProgress(new IOEventArgs("Evaluating folder size: " + path, IOEventSeverity.Debug));

			string expectedSuffix = string.Format(DISC_FOLDER_NAME_FORMAT, 1) + "\\";

			if (!path.EndsWith(string.Format(expectedSuffix, 1)))
				throw new ApplicationException(
					string.Format(@"DiscSplitter.Split expects path to end with ""{0}""", 
					expectedSuffix));

			// First, make sure there is no single file that exceeds the length
			SplitFiles(path, maxFileSize < int.MaxValue ? maxFileSize * 1024 : maxFileSize);

			totalFileSize = 0;

			int totalFiles = MoveFilesToParallelFolder(path, 
				path, (long)folderSize * 1024L * 1024L, ref totalFileSize);

			CreateManifestFiles(path, (int)(totalFileSize / 1024 / 1024 / folderSize) + 1);

			return totalFiles;
		}

		
		/// <summary>
		/// Moves files from the Disc1 path to Disc2, Disc3, etc. as it finds files in excess fo the
		/// folder size parameter.
		/// </summary>
		/// <param name="rootPath">C:\Publishing\Export\Content\Transfer1\Disc1</param>
		/// <param name="path">C:\Publishing\Export\Content\Transfer1\Disc1\SQL</param>
		/// <param name="folderSize">Maximum size for one folder tree (equivalent to a disc in this case)</param>
		/// <param name="sizeSoFar"></param>
		/// <returns></returns>
		private static int MoveFilesToParallelFolder(string rootPath, string path, long folderSize, ref long sizeSoFar)
		{
			OnProgress(new IOEventArgs("Counting file size in " + rootPath, IOEventSeverity.Debug));

			int filesProcessed = 0;
			int filesMoved = 0;
			int subDirFilesProcessed = 0; // including subdirectories

			string[] files = Directory.GetFiles(path);

			foreach (string filePath in files)
			{
				FileInfo info = new FileInfo(filePath);
				
				sizeSoFar += info.Length;

				long folderNumber = (sizeSoFar / folderSize) + 1;

				if (folderNumber > 1)
				{
					string nextFolderPath = GetNextFolderPath(rootPath, (int)folderNumber);
					
					// replace ...\Disc1\... with ...\Disc2\...
					string destFilePath = filePath.Replace(rootPath, nextFolderPath);

					if (!Directory.Exists(System.IO.Path.GetDirectoryName(destFilePath)))
						Directory.CreateDirectory(System.IO.Path.GetDirectoryName(destFilePath));

					if (File.Exists(destFilePath))
						File.Delete(destFilePath);

					File.Move(filePath, destFilePath);

					filesMoved++;
				}

				filesProcessed++;
			}

			// a pre-order traversal keeps the the files at the root on the first disc
			foreach (string childPath in System.IO.Directory.GetDirectories(path))
				subDirFilesProcessed = MoveFilesToParallelFolder(rootPath, childPath, folderSize, ref sizeSoFar);

			// if all the files for this folder were moved, then all of the files in the sub folder must
			// also have been moved, and this folder can be deleted
			if ((filesMoved > 0 || Directory.GetDirectories(path).Length == 0) && 
					filesMoved == filesProcessed)
				Directory.Delete(path);

			return filesProcessed + subDirFilesProcessed;
		}

		
		/// <summary>
		/// Recurses the specfied path, if finds any files greater than the specified size -
		/// breaks them into separate files of the specified size.
		/// </summary>
		/// <param name="path"></param>
		/// <param name="maxSize"></param>
		public static void SplitFiles(string path, long maxSize)
		{
			int filesProcessed = 0;
			int totalFiles = DirectoryHelper.CountFiles(path, true);

			SplitFiles(path, maxSize, ref filesProcessed, ref totalFiles);
		}

		public static void SplitFiles(string path, long maxSize, ref int filesProcessed, ref int totalFiles)
		{
			OnProgress(new IOEventArgs("Looking for files to split: " + path, filesProcessed, totalFiles, IOEventSeverity.Debug));

			foreach (string childPath in System.IO.Directory.GetDirectories(path))
				SplitFiles(childPath, maxSize, ref filesProcessed, ref totalFiles);

			foreach (string filePathName in System.IO.Directory.GetFiles(path))
			{
				FileInfo info = new FileInfo(filePathName);
				
				if (info.Length > maxSize)
					SplitFile(filePathName, maxSize);

				filesProcessed++;
			}
		}

		
		public static void SplitFile(string filePathName, long maxSize)
		{
			OnProgress(new IOEventArgs("Splitting file: " + filePathName, IOEventSeverity.None));

			long bytesRead = 0;
			long totalBytesRead = 0;
			byte[] buffer = new byte[SPLIT_FILE_BUFFER_SIZE];
			int fileNumber = 0;

			FileStream inputStream = new FileStream(filePathName, FileMode.Open, FileAccess.Read);
			FileStream outputStream = new FileStream(GetSplitFileName(filePathName, fileNumber), 
				FileMode.Create, FileAccess.Write);
			
			bytesRead = inputStream.Read(buffer, 0, buffer.Length);
			totalBytesRead = bytesRead;

			while (bytesRead > 0)
			{
				int nextFileNumber =  (int)(totalBytesRead / maxSize);

				if (nextFileNumber > fileNumber) // time to start next file
				{
					outputStream.Flush();
					outputStream.Close();
					long splitPoint = totalBytesRead;
				
					fileNumber = nextFileNumber;

					outputStream = new FileStream(GetSplitFileName(filePathName, fileNumber),
						FileMode.Create, FileAccess.Write);
				}

				outputStream.Write(buffer, 0, (int)bytesRead);

				bytesRead = inputStream.Read(buffer, 0, buffer.Length);
				totalBytesRead += bytesRead;
			}

			outputStream.Flush();
			outputStream.Close();
			inputStream.Close();
			File.Delete(filePathName); // delete original file
		}

		
		private static string GetSplitFileName(string filePathName, int fileNumber)
		{
			return string.Format(@"{0}\{1}.Part{2}",
				System.IO.Path.GetDirectoryName(filePathName),
				System.IO.Path.GetFileName(filePathName),
                fileNumber.ToString());
		}

		
		private static string GetNextFolderPath(string folder1Path, int folderNumber)
		{
			string nextFolderName = string.Format(DISC_FOLDER_NAME_FORMAT, folderNumber);
					
			string parentFolderPath = 
				folder1Path.Substring(0, folder1Path.LastIndexOf("\\", folder1Path.Length - 2) + 1);

			string nextFolderPath = System.IO.Path.Combine(parentFolderPath, nextFolderName);
			nextFolderPath += "\\";

			return nextFolderPath;
		}

		
		private static void CreateManifestFiles(string path, int folderCount)
		{
			Guid discSetID = Guid.NewGuid();
			DataSet ds = new DataSet();

			for (int i = 1; i <= folderCount; i++)
			{
				string folderPath = GetNextFolderPath(path, i);
				string filePathName = System.IO.Path.Combine(folderPath, FILE_NAME_MANIFEST);
				
				FileStream stream = new FileStream(filePathName,  FileMode.Create, FileAccess.Write);
				StreamWriter writer = new StreamWriter(stream);

				writer.WriteLine(XML_MANIFEST_TEMPLATE,
					discSetID.ToString(), i, folderCount);

				writer.Flush();
				writer.Close();
			}
		}

		#endregion

		#region Static Methods - Merging
		public static void MergeOneDisc(string discDrivePath, string targetPath, StringDictionary redirects)
		{
			OnProgress(new IOEventArgs(string.Format("Initiating copy from {0} to {1}.", 
				discDrivePath, targetPath), IOEventSeverity.None));

			IOEventHandler eventHandler = new IOEventHandler(Directory_Progress);
			DirectoryHelper.Progress += eventHandler;
			DirectoryHelper.Copy(discDrivePath, targetPath, false, redirects, true, true);
			DirectoryHelper.Progress -= eventHandler;
		}

		/// <summary>
		/// Looks for the manifest file on the disc.
		/// </summary>
		/// <param name="discDrivePath"></param>
		/// <returns></returns>
		public static void GetDiscSetDescription(string discDrivePath, out Guid discSetID, out int discCount)
		{
			DataSet manifest = new DataSet();
			manifest.ReadXml(System.IO.Path.Combine(discDrivePath, FILE_NAME_MANIFEST));

			discSetID = new Guid((string)manifest.Tables["Manifest"].Rows[0]["DiscSetID"]);
			discCount = Convert.ToInt32(manifest.Tables["Manifest"].Rows[0]["DiscCount"]);
		}

		public static bool VerifyDiscNumber(string discDrivePath, Guid discSetID, int discNumber)
		{
			try
			{
				DataSet manifest = new DataSet();
				manifest.ReadXml(System.IO.Path.Combine(discDrivePath, FILE_NAME_MANIFEST));

				Guid foundDiscSetID = new Guid((string)manifest.Tables["Manifest"].Rows[0]["DiscSetID"]);
				int foundDiscNumber = Convert.ToInt32(manifest.Tables["Manifest"].Rows[0]["DiscNumber"]);

				return (foundDiscNumber == discNumber &&
					foundDiscSetID == discSetID);
			}
			catch (FileNotFoundException)
			{
				return false;
			}
			catch (DirectoryNotFoundException)
			{	
				return false;
			}
		}

		/// <summary>
		/// Opens one output stream and iterate through multiple input streams
		/// to re-combine a split file.
		/// </summary>
		/// <param name="filePathName">full path ending in ".Part0" + extension</param>
		public static void RecombineFile(string inputFilePathName)
		{
			long bytesRead = 0;
			byte[] buffer = new byte[SPLIT_FILE_BUFFER_SIZE];
			int fileNumber = 0;
			long totalBytesRead = 0; // for progress event
			int lastProgress = 0;

			string outputFilePathName = inputFilePathName.Replace(".Part0", string.Empty);

			FileStream outputStream = new FileStream(outputFilePathName, 
				FileMode.Create, FileAccess.Write);

			while (File.Exists(inputFilePathName))
			{
				FileStream inputStream = new FileStream(inputFilePathName, FileMode.Open, FileAccess.Read);
				bytesRead = inputStream.Read(buffer, 0, buffer.Length);
				totalBytesRead += bytesRead;

				while (bytesRead > 0)
				{
					outputStream.Write(buffer, 0, (int)bytesRead);
					bytesRead = inputStream.Read(buffer, 0, buffer.Length);
					totalBytesRead += bytesRead;

					// only report progress every 10% of the time
					int newProgress = (int)(10 * totalBytesRead / inputStream.Length);
					if (newProgress > lastProgress)
					{
						lastProgress = newProgress;
						OnProgress(new IOEventArgs("Recombining file: " + inputFilePathName, 
							totalBytesRead, inputStream.Length, IOEventSeverity.Debug));
					}
				}

				inputStream.Flush();
				inputStream.Close();
				File.Delete(inputFilePathName);
			
				fileNumber++;
				inputFilePathName = GetSplitFileName(outputFilePathName, fileNumber);
				totalBytesRead = 0;
			}

			outputStream.Flush();
			outputStream.Close();
		}

		
		public static void RecombineFiles(string path)
		{
			OnProgress(new IOEventArgs("Looking for files to recombine: " + path, IOEventSeverity.Debug));

			foreach (string childPath in System.IO.Directory.GetDirectories(path))
				RecombineFiles(childPath);

			foreach (string filePathName in System.IO.Directory.GetFiles(path))
			{
				if (filePathName.IndexOf(".Part0") > -1)
					RecombineFile(filePathName);
			}
		}
		#endregion

		protected static void OnProgress(IOEventArgs e)
		{
			if (Progress != null)
				Progress(null, e);
		}

		/*protected static void OnProgress(string s)
		{
			if (Progress != null)
				Progress(null, new IOEventArgs(s, 0));
		}*/

		private static void Directory_Progress(object sender, IOEventArgs e)
		{
			OnProgress(e);
		}
	}
}
