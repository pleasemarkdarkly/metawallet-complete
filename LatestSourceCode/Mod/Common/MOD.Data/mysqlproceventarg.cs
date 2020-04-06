using System;
using System.Data;
using MySql.Data;
using MySql.Data.MySqlClient;
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
    /// Event arguments passed by MySqlProcAdapter events.
    /// </summary>
    public class MySqlProcEventArg : EventArgs
    {
        /// <summary>
        /// Depends on the event.
        /// </summary>
        public object Param1;

        /// <summary>
        /// Stored procedure as it is being executed.
        /// </summary>
        public MySqlProc SP;

        public MySqlCommand Command;
    }
}
