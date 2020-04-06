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
namespace RImageSchemas.Serialization.Misc.FullDiscMap {
    using System.Xml.Serialization;
    
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute("FullDiscMap", Namespace="", IsNullable=false)]
    public class DiscInfo {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("DiscInfo")]
        public DiscInfo1 DiscInfo1;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlTypeAttribute(TypeName="DiscInfo")]
    [System.Xml.Serialization.XmlRootAttribute("DiscInfo", Namespace="", IsNullable=false)]
    public class DiscInfo1 {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("SessionInfo")]
        public SessionInfo[] SessionInfo;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("TocEntry")]
        public TocEntry[] TocEntry;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string FreeBlocks;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string FirstFreeBlock;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string LeadoutStartBlock;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string NumberOfSessions;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string NumberOfTracks;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string FirstLeadinBlockMsf;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string NumberOfDvdLayers;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Upc;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(DiscInfoRawMode.@false)]
        public DiscInfoRawMode RawMode = DiscInfoRawMode.@false;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class SessionInfo {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("TrackInfo")]
        public TrackInfo[] TrackInfo;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string SessionNumber;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(SessionInfoSessionType.Standard)]
        public SessionInfoSessionType SessionType = SessionInfoSessionType.Standard;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string LeadinControl;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string LeadoutControl;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string LeadoutStartBlock;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string NextSessionStartBlock;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(SessionInfoOpen.@false)]
        public SessionInfoOpen Open = SessionInfoOpen.@false;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class TrackInfo {
        
        /// <remarks/>
        public SubchannelControlBits SubchannelControlBits;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("SubIndex")]
        public SubIndex[] SubIndex;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string SessionNumber;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string TrackNumber;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(TrackInfoTrackType.Audio)]
        public TrackInfoTrackType TrackType = TrackInfoTrackType.Audio;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string StartBlock;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string NumberOfBlocks;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string PregapBlocks;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string PostgapBlocks;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(TrackInfoHasRunoutBlocks.@false)]
        public TrackInfoHasRunoutBlocks HasRunoutBlocks = TrackInfoHasRunoutBlocks.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(TrackInfoHasTrailingPregap.@false)]
        public TrackInfoHasTrailingPregap HasTrailingPregap = TrackInfoHasTrailingPregap.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string MaxIndex;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(TrackInfoIso9660.@false)]
        public TrackInfoIso9660 Iso9660 = TrackInfoIso9660.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(TrackInfoJoliet.@false)]
        public TrackInfoJoliet Joliet = TrackInfoJoliet.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(TrackInfoUDF.@false)]
        public TrackInfoUDF UDF = TrackInfoUDF.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Isrc;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string VolumeId;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string BlockSize;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class SubchannelControlBits {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(SubchannelControlBitsPreEmphasis.@false)]
        public SubchannelControlBitsPreEmphasis PreEmphasis = SubchannelControlBitsPreEmphasis.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(SubchannelControlBitsAllowCopy.@false)]
        public SubchannelControlBitsAllowCopy AllowCopy = SubchannelControlBitsAllowCopy.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(SubchannelControlBitsData.@false)]
        public SubchannelControlBitsData Data = SubchannelControlBitsData.@false;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(SubchannelControlBitsFourChannel.@false)]
        public SubchannelControlBitsFourChannel FourChannel = SubchannelControlBitsFourChannel.@false;
    }
    
    /// <remarks/>
    public enum SubchannelControlBitsPreEmphasis {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum SubchannelControlBitsAllowCopy {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum SubchannelControlBitsData {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum SubchannelControlBitsFourChannel {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class TocEntry {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string SessionNumber;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Control;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Adr;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Tno;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Point;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Msf;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Zero;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string Pmsf;
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlRootAttribute(Namespace="", IsNullable=false)]
    public class SubIndex {
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string BlockNumber;
    }
    
    /// <remarks/>
    public enum TrackInfoTrackType {
        
        /// <remarks/>
        Audio,
        
        /// <remarks/>
        Mode1,
        
        /// <remarks/>
        XAForm1,
        
        /// <remarks/>
        XAMixed,
        
        /// <remarks/>
        CDI,
        
        /// <remarks/>
        Mode2,
        
        /// <remarks/>
        CDGPack,
        
        /// <remarks/>
        CDGRaw,
    }
    
    /// <remarks/>
    public enum TrackInfoHasRunoutBlocks {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum TrackInfoHasTrailingPregap {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum TrackInfoIso9660 {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum TrackInfoJoliet {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum TrackInfoUDF {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum SessionInfoSessionType {
        
        /// <remarks/>
        Standard,
        
        /// <remarks/>
        CDI,
        
        /// <remarks/>
        XA,
    }
    
    /// <remarks/>
    public enum SessionInfoOpen {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
    
    /// <remarks/>
    public enum DiscInfoRawMode {
        
        /// <remarks/>
        @true,
        
        /// <remarks/>
        @false,
    }
}
