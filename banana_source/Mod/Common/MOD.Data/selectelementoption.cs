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
    /// If The xml declares an option for a stored procedure with no arguments
    /// to pass as the default method for filling the options of Select element.
    /// </summary>
    public class SelectElementOption
    {
        /// <summary>
        /// The Procedure name for getting the Options.
        /// </summary>
        [XmlAttribute]
        public string ProcName;

        /// <summary>
        /// Text for the option
        /// </summary>
        [XmlAttribute]
        public string Text;

        /// <summary>
        /// Value for the option
        /// </summary>
        [XmlAttribute]
        public string Value;

        /// <summary>
        /// Does nothing.
        /// </summary>
        /// <param name="sSelected"></param>
        /// <returns></returns>
        public string GetOptions(string sSelected)
        {
            return "";
        }
    }

}
