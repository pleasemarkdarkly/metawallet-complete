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

namespace MOD.IO
{
    public enum IOEventSeverity
    {
        None = 0, // Informational - normal status messages
        Error = 1,
        Warning = 2,
        Debug = 3
    }

    /// <summary>
    /// Summary description for TaskEventArgs.
    /// </summary>
    public class IOEventArgs
    {
        #region Fields
        private IOEventSeverity _severity = IOEventSeverity.None;
        private string _status = null;
        private int _progress = 0;
        #endregion

        public string Status
        {
            get { return _status; }
        }

        public int Progress
        {
            get { return _progress; }
        }

        public IOEventSeverity Severity
        {
            get { return _severity; }
        }

        /*public IOEventArgs(string status, int progress)
        {
            _status = status;
            _progress = progress;
        }*/

        public IOEventArgs(string status, IOEventSeverity severity)
        {
            _status = status;
            _progress = 100;
            _severity = severity;
        }

        public IOEventArgs(string status, int filesProcessed, int totalFiles, IOEventSeverity severity)
        {
            _status = status;
            _progress = totalFiles > 0 ? (100 * filesProcessed) / totalFiles : 100;
            _severity = severity;
        }

        public IOEventArgs(string status, long bytesProcessed, long totalBytes, IOEventSeverity severity)
        {
            _status = status;
            _progress = totalBytes > 0 ? (int)((100 * bytesProcessed) / totalBytes) : 100;
            _severity = severity;
        }
    }
}
