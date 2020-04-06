using System;
using System.Data;
using System.Data.SqlClient;
using System.Xml.Serialization;
using System.Xml;
using System.Text;
using System.IO;
using System.Text.RegularExpressions;
using System.Collections.Specialized;
using System.Collections;
using System.Reflection;

namespace MOD.Data
{
    /// <summary>
    /// Event arguments passed by SqlProcAdapter events.
    /// </summary>
    public class SqlProcEventArg : EventArgs
    {
        /// <summary>
        /// Depends on the event.
        /// </summary>
        public object Param1;

        /// <summary>
        /// Stored procedure as it is being executed.
        /// </summary>
        public SqlProc SP;

        public SqlCommand Command;
    }
}
