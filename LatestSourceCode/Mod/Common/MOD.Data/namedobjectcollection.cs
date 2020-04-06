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
    /// Used to store objects with a key.  This class is used primarily to
    /// create SP parameter values.
    /// </summary>
    public class NamedObjectCollection : NameObjectCollectionBase
    {
        /// <summary>
        /// Default int indexer
        /// </summary>
        public object this[int i]
        {
            get
            {
                return (object)base.BaseGet(i);
            }
            set
            {
                BaseSet(i, value);
            }
        }

        /// <summary>
        /// Default string idexer
        /// </summary>
        public object this[string s]
        {
            get
            {
                return (object)base.BaseGet(s);
            }
            set
            {
                BaseSet(s, value);
            }
        }

        public bool HasKey(string s)
        {
            return BaseGet(s) != null;
        }

        public void CopyTo(NamedObjectCollection noc)
        {
            foreach (string key in Keys)
                noc[key] = this[key];
        }

        public static NamedObjectCollection CopyFrom(NameValueCollection nvc)
        {
            NamedObjectCollection noc = new NamedObjectCollection();
            foreach (string key in nvc.Keys)
                noc[key] = nvc[key];
            return noc;
        }
    }
}
