using System;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System.Diagnostics;

namespace MOD.IO
{
	/// <summary>
	/// Summary description for FileHelper.
	/// </summary>
	public class FileHelper
	{
		/// <summary>
		/// Appends to the specified file. The directory path and file are created if they do not exsist.
		/// </summary>
		/// <param name="fullPathFileName"></param>
		/// <param name="fileText"></param>
		public static void AppendToFile(string path, string fileText)
		{
            // create the directory path if it is not available
            if (System.IO.Directory.Exists(Path.GetDirectoryName(path)) == false &&
                Path.GetDirectoryName(path) != String.Empty)
            {
                System.IO.Directory.CreateDirectory(Path.GetDirectoryName(path));
            }

			TextWriter outputFile = new System.IO.StreamWriter(path, true);
			outputFile.Write(fileText);
			outputFile.Close();
		}

		/// <summary>
        /// Writes to the specified file (no append). The directory path and file are created if they do not exsist.
		/// </summary>
		/// <param name="fullPathFileName"></param>
		/// <param name="fileText"></param>
		public static void WriteToFile(string path, string fileText)
		{
            // create the directory path if it is not available
            if (System.IO.Directory.Exists(Path.GetDirectoryName(path)) == false &&
                Path.GetDirectoryName(path) != String.Empty)
            {
                System.IO.Directory.CreateDirectory(Path.GetDirectoryName(path));
            }

            TextWriter outputFile = new System.IO.StreamWriter(path);
			outputFile.Write(fileText);
			outputFile.Close();
		}

        /// <summary>
        /// Returns a unique file name with the same extension as the supplied filename.
        /// </summary>
        /// <param name="fileName"></param>
        /// <returns></returns>
        public static string GenerateUniqueFileName(string fileName)
        {
            //return DateTime.Now.Ticks.ToString() + Path.GetExtension(fileName);
            return Guid.NewGuid().ToString("N") + Path.GetExtension(fileName);
        }

		/// <summary>
		/// Opens the specified file, calculates the MD5 hash, and returns the value as a hex string.
		/// </summary>
		/// <param name="fileName"></param>
		public static void CalculateMD5HashAndFileLength( string fileName, out string hash, out long fileLength )
		{
			FileStream fs = null;
			try
			{
				fs = File.OpenRead( fileName );
				fileLength = fs.Length;
				hash = CalculateMD5Hash( fs );
			}
			finally
			{
				if (fs != null)
				{
					fs.Close();
				}
			}
		}

        private const int BUFFER_SIZE = 500 * 1024;

        /// <summary>
        /// Calculates the MD5 hash and length of the given input stream.
        /// </summary>
        /// <param name="fileName"></param>
        public static void CalculateMD5HashAndFileLength(Stream inputStream, out string hash, out long fileLength)
        {
            byte[] buffer = new byte[BUFFER_SIZE];
            System.Security.Cryptography.MD5CryptoServiceProvider md5 = null;
            fileLength = 0;
            try
            {
                md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
                int bytesRead = 0;
                do
                {
                    bytesRead = inputStream.Read(buffer, 0, BUFFER_SIZE);
                    fileLength += bytesRead;
                    if (bytesRead < BUFFER_SIZE)
                    {
                        break;
                    }
                    md5.TransformBlock(buffer, 0, bytesRead, buffer, 0);
                } while (true);
                md5.TransformFinalBlock(buffer, 0, bytesRead);
                hash = ToHexString(md5.Hash);
            }
            finally
            {
                if (md5 != null)
                {
                    md5.Clear();
                }
            }
        }

		/// <summary>
		/// Opens the specified file, calculates the MD5 hash, and returns the value as a hex string.
		/// </summary>
		/// <param name="fileName"></param>
		/// <returns></returns>
		public static string CalculateMD5Hash( string fileName )
		{
			FileStream fs = null;
			try
			{
				fs = File.OpenRead( fileName );
				return CalculateMD5Hash( fs );
			}
			finally
			{
				if (fs != null)
				{
					fs.Close();
				}
			}
		}

		/// <summary>
		/// Returns the MD5 hash of the given stream as a hex string.
		/// </summary>
		/// <param name="inputStream"></param>
		/// <returns></returns>
		public static string CalculateMD5Hash( Stream inputStream )
		{
			System.Security.Cryptography.MD5CryptoServiceProvider md5 = null;
			try
			{
				md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
				return ToHexString( md5.ComputeHash( inputStream ) );
			}
			finally
			{
				if (md5 != null)
				{
					md5.Clear();
				}
			}
		}

		/// <summary>
		/// Converts an array of bytes into a hexadecimal string
		/// </summary>
		public static string ToHexString( byte[] data )
		{
			System.Text.StringBuilder sb = new System.Text.StringBuilder( data.Length * 2 );
			for (int i = 0; i < data.Length; ++i)
			{
				sb.Append( c_chHexCharacters[data[i] >> 4] );
				sb.Append( c_chHexCharacters[data[i] & 0xF] );
			}
			return sb.ToString();
		}

        /// <summary>
        /// Converts an array of bytes into a hexadecimal string
        /// </summary>
        public static string ToHexString(byte[] data, int offset, int length)
        {
            System.Text.StringBuilder sb = new System.Text.StringBuilder(length * 2);
            for (int i = 0; i < length; ++i)
            {
                sb.Append(c_chHexCharacters[data[offset + i] >> 4]);
                sb.Append(c_chHexCharacters[data[offset + i] & 0xF]);
            }
            return sb.ToString();
        }

		private static readonly char[] c_chHexCharacters = new char[] { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

        /// <summary>
        /// Set extended NTFS file properties such as Title, Subject, and Comments by creating
        /// alternate file streams for the file.
        /// </summary>
        /// <param name="fileName"></param>
        /// <param name="streamName">for example "Comments"</param>
        /// <param name="value"></param>
        public static void AddFileStream(string fileName, string streamName, string value)
        {
            FileStreams streams = new FileStreams(fileName);
            streams.Add(streamName);
            FileStream fs = streams[streamName].Open(FileMode.OpenOrCreate, FileAccess.Write);
            StreamWriter writer = new StreamWriter(fs);
            writer.Write(value);
            writer.Flush();
            writer.Close();
            fs.Close();
        }

        public static void SetProperty(string fileName, SummaryPropId[] properties, string[] values)
        {
            // first you need to either create or open a file and its
            // property set stream
            IPropertySetStorage propSetStorage = null;
            Guid IID_PropertySetStorage = new Guid("0000013A-0000-0000-C000-000000000046");

            uint hresult = ole32.StgOpenStorageEx(
                fileName,
                (int)(STGM.SHARE_EXCLUSIVE | STGM.READWRITE),
                (int)STGFMT.FILE,
                0,
                (IntPtr)0,
                (IntPtr)0,
                ref IID_PropertySetStorage,
                ref propSetStorage);
            if (hresult != 0)
            {
                throw new Exception(String.Format("StgOpenStorageEx for file {0} failed, HRESULT = 0x{1:X8}", fileName, hresult));
            }

            // next you need to create or open the Summary Information property set
            Guid fmtid_SummaryProperties = new Guid("F29F85E0-4FF9-1068-AB91-08002B27B3D9");
            IPropertyStorage propStorage = null;

            hresult = propSetStorage.Create(
                ref fmtid_SummaryProperties,
                (IntPtr)0,
                (int)PROPSETFLAG.DEFAULT,
                (int)(STGM.CREATE | STGM.READWRITE | STGM.SHARE_EXCLUSIVE),
                ref propStorage);
            if (hresult != 0)
            {
                throw new Exception(String.Format("IPropertySetStorage.Create failed, HRESULT = 0x{0:X8}", hresult));
            }

            for (int i = 0; i < properties.Length; i++)
            {
                // next, you assemble a property descriptor for the property you
                // want to write to, in our case the Comment property
                PropSpec propertySpecification = new PropSpec();
                propertySpecification.ulKind = 1;
                propertySpecification.Name_Or_ID = new IntPtr((int)properties[i]);

                //now, set the value you want in a property variant
                PropVariant propertyValue = new PropVariant();
                propertyValue.FromObject(values[i]);

                // Simply pass the property spec and its new value to the WriteMultiple
                // method and you're almost done
                propStorage.WriteMultiple(1, ref propertySpecification, ref propertyValue, 2);
            }

            // the only thing left to do is commit your changes.  Now you're done!
            hresult = propStorage.Commit((int)STGC.DEFAULT);
            if (hresult != 0)
            {
                throw new Exception(String.Format("IPropertyStorage.Commit failed, HRESULT = 0x{0:X8}", hresult));
            }

            try
            {
                System.Runtime.InteropServices.Marshal.ReleaseComObject(propSetStorage);
            }
            catch { }
        }
    
        /// <summary>
        ///     Computes the checksum of a file, using an MD5 hash.
        /// </summary>
        /// <param name="filePath">
        ///     Fully qualified path of the file to compute the checksum for.
        /// </param>
        /// <returns>
        ///     A string containing the checksum value.
        /// </returns>
        public static string ComputeFileChecksum(string filePath)
        {

            MD5 md5 = MD5.Create();
            StringBuilder checksum = new StringBuilder();

            using (FileStream fileStream = File.Open(filePath, FileMode.Open, FileAccess.Read))
            {
                foreach (byte b in md5.ComputeHash(fileStream))
                {
                    checksum.Append(b.ToString("x2").ToLower());
                }
            }

            return checksum.ToString();

        }

        public static bool Robocopy(string sourceFilePath, string destinationFilePath, bool overwrite)
        {
            ProcessStartInfo startInfo = new ProcessStartInfo();

            startInfo.FileName = "robocopy.exe";
            startInfo.Arguments = String.Format("/R:5 /NP \"{0}\" \"{1}\" {2}",
                Path.GetDirectoryName(sourceFilePath),
                Path.GetDirectoryName(destinationFilePath), Path.GetFileName(sourceFilePath));
            startInfo.WindowStyle = ProcessWindowStyle.Hidden;

            Process process = Process.Start(startInfo);

            while (!process.HasExited)
            {
                System.Threading.Thread.Sleep(2000);
            }

            switch (process.ExitCode)
            {
                case 16:
                case 8:
                    {
                        //16 = Fatal error
                        //8 = Failed Copies
                        return false;
                    }

                case 4:
                case 2:
                case 1:
                case 0:
                    {
                        //4 = Mismatch copies
                        //2 = Extra files
                        //1 = Copy succcessful
                        //0 = No change
                        break;
                    }
            }

            //Robocopy keeps the same file name so rename the file
            File.Move(Path.Combine(
                Path.GetDirectoryName(destinationFilePath),
                Path.GetFileName(sourceFilePath)),
                destinationFilePath);

            return true;
        }
    }
}
