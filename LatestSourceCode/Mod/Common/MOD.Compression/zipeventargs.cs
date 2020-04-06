/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

using System;

namespace MOD.Compression
{
	/// <summary>
    /// The ZipEventArgs class is passed as a parameter for zip progress and error callbacks.
	/// </summary>
	public class ZipEventArgs
    {
        #region Fields

        /// <summary>
        /// The current file being processed
        /// </summary>
        private string _filePath;

        /// <summary>
        /// The overall % complete
        /// </summary>
        private int _progress;

        /// <summary>
        /// Total number of files in the archive
        /// </summary>
        private long _totalFilesInArchive;

        /// <summary>
        /// Index of the current file being processed
        /// </summary>
        private long _currentFileIndex;

        /// <summary>
        /// If an error occurs, this contains the exception
        /// </summary>
        private Exception _zipException;

        #endregion Fields

        #region Properties

        /// <summary>
        /// The current file being processed
        /// </summary>
        public string FilePath
		{
			get { return _filePath; }
		}

        /// <summary>
        /// The overall % complete
        /// </summary>
        public int Progress
		{
			get { return _progress; }
		}

        /// <summary>
        /// Total number of files in the archive
        /// </summary>
        public long TotalFilesInArchive
        {
            get { return _totalFilesInArchive; }
        }

        /// <summary>
        /// Index of the current file being processed
        /// </summary>
        public long CurrentFileIndex
        {
            get { return _currentFileIndex; }
        }

        /// <summary>
        /// If an error occurs, this contains the exception
        /// </summary>
        public Exception ZipException
        {
            get { return _zipException; }
        }

        #endregion Properties

        #region Constructors

        public ZipEventArgs(string filePath, int progress)
		{
			_filePath = filePath;
			_progress = progress;
            _totalFilesInArchive = 0;
            _currentFileIndex = 0;
            _zipException = null;
        }

        public ZipEventArgs(string filePath, int progress, long totalFilesInArchive, long currentFileIndex)
        {
            _filePath = filePath;
            _progress = progress;
            _totalFilesInArchive = totalFilesInArchive;
            _currentFileIndex = currentFileIndex;
            _zipException = null;
        }

        public ZipEventArgs(string filePath, Exception ex)
        {
            _filePath = filePath;
            _progress = 0;
            _totalFilesInArchive = 0;
            _currentFileIndex = 0;
            _zipException = ex;
        }

        #endregion Constructors

    }
}
