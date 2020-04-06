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
namespace RImageSchemas.Serialization.Orders.Image {
    using System.Xml.Serialization;
    
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class ImageOrderStatus {
        
        /// <remarks/>
        public Status Status;
        
        /// <remarks/>
        public Timestamps Timestamps;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string ServerId;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string OrderId;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string ClientId;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Originator;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string OriginalOrder;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class Status {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public StatusState State;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string ErrorCode;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string ErrorMessage;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string PercentCompleted;
    }
    
    /// <remarks/>
    public enum StatusState {
        
        /// <remarks/>
        NOT_STARTED,
        
        /// <remarks/>
        IN_PROCESS,
        
        /// <remarks/>
        COMPLETED,
        
        /// <remarks/>
        CANCELLED,
        
        /// <remarks/>
        FAILED,
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class Timestamps {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string OrderRead;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string OrderCompleted;
    }
}