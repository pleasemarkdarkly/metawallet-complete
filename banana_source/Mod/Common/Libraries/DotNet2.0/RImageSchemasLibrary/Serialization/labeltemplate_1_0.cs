﻿//------------------------------------------------------------------------------
// <autogenerated>
//     This code was generated by a tool.
//     Runtime Version: 1.1.4322.2032
//
//     Changes to this file may cause incorrect behavior and will be lost if 
//     the code is regenerated.
// </autogenerated>
//------------------------------------------------------------------------------

// 
// This source code was auto-generated by xsd, Version=1.1.4322.2032.
// 
namespace RImageSchemas.Serialization.Misc.LabelTemplate {
    using System.Xml.Serialization;
    
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class LabelTemplate {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("LabelInfo")]
        public LabelInfo[] LabelInfo;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class LabelInfo {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("MergeFields")]
        public MergeFields[] MergeFields;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Description;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string LabelFilename;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string BitmapFilename;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class MergeFields {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string FieldName;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string FieldData;
    }
}