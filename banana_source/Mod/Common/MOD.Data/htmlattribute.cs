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
    /// Used to declare name/value pairs for HTML attributes to be printed onto
    /// form elements.
    /// </summary>
    public class HtmlAttribute
    {
        /// <summary>
        /// Default constructor is needed for serialization
        /// </summary>
        public HtmlAttribute()
        {
        }

        /// <summary>
        /// Constructor used to set the values for name and value.
        /// </summary>
        /// <param name="n">Name</param>
        /// <param name="v">Value</param>
        public HtmlAttribute(string n, string v)
        {
            Name = n;
            Value = v;
        }

        /// <summary>
        /// Name of teh attribute such as class,onclick, etc.
        /// </summary>
        [XmlAttribute]
        public string Name;

        /// <summary>
        /// Value for the attribute, will be printed unchanged
        /// </summary>
        [XmlAttribute]
        public string Value;
    }
}
