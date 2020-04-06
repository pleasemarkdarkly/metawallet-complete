using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace Toshiba.SDSDMW
{
    public partial class SSS
    {
        /// <summary>Error Codes</summary>
        public enum STS : uint
        {
            /// <summary>The operation completed successfully.</summary>
            SSS_STS_SUCCESS = 0x0,
            /// <summary>Other errors</summary>
            SSS_STS_ERR_ERROR = 0x1,

            /// <summary>The system cannot find the file specified.</summary>
            SSS_STS_ERR_FILE_NOT_FOUND = 0x2,
            /// <summary>The system cannot find the path specified.</summary>
            SSS_STS_ERR_PATH_NOT_FOUND = 0x3,
            /// <summary>The parameter is incorrect.</summary>
            SSS_STS_ERR_INVALID_PARAMETER = 0x4,
            /// <summary>Access is denied.</summary>
            SSS_STS_ERR_ACCESS_DENIED = 0x5,
            /// <summary>The handle is invalid.</summary>
            SSS_STS_ERR_INVALID_HANDLE = 0x6,
            /// <summary>The data is invalid.</summary>
            SSS_STS_ERR_INVALID_DATA = 0x7,
            /// <summary>The order which functions are called is different.</summary>
            SSS_STS_ERR_ORDER_FUNCTION = 0x8,
            /// <summary>SD card driver which can use 3CAPI is not installed</summary>
            SSS_STS_ERR_NOT_USE_SDDRIVER = 0x9,
            /// <summary>The protected area of SD card is write-protected.</summary>
            SSS_STS_ERR_WRITE_PROTECTED = 0xa,

            /// <summary>Contents are full.</summary>
            SSS_STS_ERR_CONTENTS_FULL = 0x21,
            /// <summary>Keys are full.</summary>
            SSS_STS_ERR_KEY_FULL = 0x22,
            /// <summary>The key is not registered.</summary>
            SSS_STS_ERR_NOT_EXIST_KEY = 0x23,
            /// <summary>The content is not played.</summary>
            SSS_STS_ERR_NOT_PLAYBACK = 0x24,
            /// <summary>The service is not registered</summary>
            SSS_STS_ERR_NOT_EXIST_SERVICE = 0x25,
            /// <summary>The media is un-format</summary>
            SSS_STS_ERR_UNFORMAT = 0x26,
            /// <summary>The key is already registered</summary>
            SSS_STS_ERR_ALREADY_EXIST_KEY = 0x27,
            /// <summary>The Time Stamp is not registered</summary>
            SSS_STS_ERR_NOT_EXIST_TS = 0x28,
            /// <summary>The seeking is failed.</summary>
            SSS_STS_ERR_SEEK = 0x29,

            /// <summary>The usage rule data is invalid.</summary>
            SSS_STS_ERR_UR_INVALID = 0x71,
            /// <summary>There is no playback count.</summary>
            SSS_STS_ERR_UR_COUNT = 0x72,
            /// <summary>Current time is before a start for playback the content.</summary>
            SSS_STS_ERR_UR_STARTTIME = 0x73,
            /// <summary>The content license has expired.</summary>
            SSS_STS_ERR_UR_ENDTIME = 0x74,
            /// <summary>The content license has expired.</summary>
            SSS_STS_ERR_UR_SPAN = 0x75,
            /// <summary>The content cannot be copied.</summary>
            SSS_STS_ERR_UR_COPY = 0x76,
            /// <summary>The content cannot be moved.</summary>
            SSS_STS_ERR_UR_MOVE = 0x77,
            /// <summary>The time stamp is invalid.</summary>
            SSS_STS_ERR_TS_INVALID = 0x78,
            /// <summary>The clock is not correct.</summary>
            SSS_STS_ERR_BAD_CLOCK = 0x79,

            /// <summary>Connection to the key server failed.</summary>
            SSS_STS_ERR_SVR_CONNECTION_FAILED = 0x91,
            /// <summary>The format of CSV file is invalid.</summary>
            SSS_STS_ERR_SVR_CSV_FORMAT_INVALID = 0x92,
            /// <summary>Authentication of the service provider failed.</summary>
            SSS_STS_ERR_SVR_PROVIDER_AUTH_FAILED = 0x93,
            /// <summary>The User Key ID is invalid.</summary>
            SSS_STS_ERR_SVR_UKID_INVALID = 0x94,
            /// <summary>The User Key ID is not registered.</summary>
            SSS_STS_ERR_SVR_UKID_NOT_FOUND = 0x95,
            /// <summary>The Content ID is invalid.</summary>
            SSS_STS_ERR_SVR_CID_INVALID = 0x96,
            /// <summary>The Content ID is not registered.</summary>
            SSS_STS_ERR_SVR_CID_NOT_FOUND = 0x97,
            /// <summary>The Service ID is invalid.</summary>
            SSS_STS_ERR_SVR_SVCID_INVALID = 0x98,
            /// <summary>System error of the key server.</summary>
            SSS_STS_ERR_SVR_SYSTEM_ERROR = 0x99,
            /// <summary>Unspecified error of the key server.</summary>
            SSS_STS_ERR_SVR_UNSPECIFIED = 0x9A,
        }

        public enum MediaStatus
        {
            SSS_MEDIA_REMOVE = 0,
            SSS_MEDIA_INSERT = 1
        }

        public enum SeekOrigin
        {
            SSS_SEEK_SET = 0,
            SSS_SEEK_CUR = 1,
            SSS_SEEK_END = 2
        }

        public enum CONTENT_FORMAT_H264_PROFILE : byte
        {
            Baseline = 0x08,
            MainProfile = 0x04,
            HighProfile = 0x02
        }

        public enum CONTENT_FORMAT_H264_LEVEL : byte
        {
            Level_1_2 = 0x80,
            Level_1_3 = 0x40,
            Level_3 = 0x20
        }

        public enum CONTENT_FORMAT_MPEG2_PROFILE : byte
        {
            MainProfileNotUsed = 0x00,
            MainProfileUsed = 0x01
        }

        public enum CONTENT_FORMAT_MPEG2_LEVEL : byte
        {
            MainLevelNotUsed = 0x00,
            MainLevelUsed = 0x08
        }

        public enum CONTENT_FORMAT_AUDIO_ATR : byte
        {
            None = 0x00,
            MPEG2AAC = 0x80,
            MPEG4AAC = 0x40
        }

        public enum CONTENT_FORMAT_CATG : byte
        {
            MP4Container = 0x00,
            TransportStreamContainer = 0x01
        }

        public enum CONTENT_FORMAT_FORM : byte
        {
            None = 0x00,
            ExtendedTransportStream = 0x01,
            TimeStampedTransportStream = 0x02
        }

        public enum UR_MCCNTRLMoveControl : byte
        {
            MoveNever = 0x00,
            MoveOnce = 0x01,
            MoveUnlimited = 0x02
        }

        public enum UR_MCCNTRLCopyControl : byte
        {
            CopyNever = 0x00,
            CopyUnlimited = 0x0f
        }

        public enum UR_I_P_CNTPlaybackControl : ushort
        {
            PlaybackNever = 0x0000,
            PlaybackUnlimited = 0xffff
        }

        public enum UR_C_P_CNTPlaybackControl : ushort
        {
            PlaybackNever = 0x0000,
            PlaybackUnlimited = 0xffff
        }

        public enum UR_V_INITIALExportControl : byte
        {
            ExportToSDVideoNotPermitted = 0x00,
            ExportToSDVideoPermitted = 0x01,
        }

        public enum UR_V_CURRENTExportControl : byte
        {
            ExportToSDVideoNotPermitted = 0x00,
            ExportToSDVideoPermitted = 0x01,
        }

        /// <summary>
        /// Represents the key file where the exported Content Key is stored in the SD-Video format.
        /// </summary>
        public enum UR_V_EXSDV_INFOTitleKeyType : byte
        {
            /// <summary>The Title Key of exported content is stored in VIDEO001.KEY file under SD-Video directory.</summary>
            VIDEO001_KEY = 0x00,
            /// <summary>The Title Key of exported content is stored in MOxxx.KEY file under SD-Video directory, where xxx is a serial number (001~009).</summary>
            MOxxx_KEY = 0x01
        }

        /// <summary>
        /// Describes a content type of the content.
        /// </summary>
        public enum CONTENT_TYPE : byte
        {
            AudioContent = 0x10,
            VideoContent = 0x20
        }

        /// <summary>
        /// Represents whether or not the CCI_Byte in the content stream is valid.
        /// </summary>
        /// <remarks>
        /// The term “category” or “ISDB-T Use” herein is defined in SD
        /// Memory Card Specifications – Part15 Video Profile
        /// Specification Addendum to SD Specifications Part 15
        /// Separate Delivery Specifications. When this bit is set to 1b
        /// and Current Export to SD-Video Flag is 1b, setting of CCI
        /// in the stream has a restriction described in section 3.4.2.
        /// </remarks>
        public enum UR_V_CCIFLAGSStrmCCI : byte
        {
            /// <summary>When the category of content is not ISDB-T Use</summary>
            StrmCCINotValid = 0x00,
            /// <summary>When the category of content is ISDB-T Use</summary>
            StrmCCIIsValid = 0x01
        }

        /// <summary>
        /// Represents whether or not a device is required to re-encrypt content after a copy
        /// </summary>
        /// <remarks>
        /// This flag is used for content which category is ISDB-T Use.
        /// That is, when StrmCCI is set to 1b, this flag is valid. When
        /// a category of content is not ISDB-T Use, this flag shall be
        /// set to 0b.
        /// This flag shall not be set to 1b when RDI packs in the
        /// content stream are set to both “No More Copy” and “EPN”.
        /// When the flag is set to 1b and a device does the copy
        /// process described in section 3.6.2 of this book, the device is
        /// not required to re-encrypt the content.
        /// </remarks>
        public enum UR_V_CCIFLAGSNonReencryption : byte
        {
            ReencryptionRequired = 0x00,
            ReencryptionNotRequired = 0x01
        }

        public enum UR_V_CCIFLAGSAPSTB : byte
        {
            APSOff = 0x00,
            APSType1 = 0x01,
            APSType2 = 0x02,
            APSType3 = 0x03,
        }

        public enum SSS_WRITECEX : uint
        {
            SSS_WRITECEX_INITIALIZE = 0,
            SSS_WRITECEX_PVOTRANSFER = 1,
            SSS_WRITECEX_FINALIZE = 2
        }

        /// <summary>
        /// [8 bytes] User Key ID (UKID)
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_UKID
        {
            /// <summary>[3 bytes] Identifier of a Service</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 3)]
            public byte[] SVC_ID;
            /// <summary>[1 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] Reserved;
            /// <summary>[4 bytes] Serial Number</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] SN;
        }

        /// <summary>
        /// [56 bytes] Usage Rule for User Key (UR_U)
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_UR_U
        {
            /// <summary>[1 bytes] Trigger Bits</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] UR_TRIGGER;
            /// <summary>[1 bytes] User Key Type</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] UR_UKT;
            /// <summary>[8 bytes] User Key ID</summary>
            //[MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public SSS_UKID UR_UK_ID;
            /// <summary>[30 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 30)]
            public byte[] Reserved;
            /// <summary>[8 bytes] Hash Value</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public byte[] UR_HASH;
            /// <summary>[8 bytes] Check Value</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public byte[] UR_CHECK;
        }

        /// <summary>
        /// [16 bytes] Content ID (CID)
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_CID
        {
            /// <summary>[3 bytes] Identifier of a Service</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 3)]
            public byte[] SVC_ID;
            /// <summary>[1 bytes] Content Type</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] CONTENT_TYPE;
            /// <summary>[2 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] Reserved;
            /// <summary>[8 bytes] Serial Number</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public byte[] SN;
            /// <summary>[2 bytes] Sub Serial Number</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] Sub_SN;
        }

        /// <summary>
        /// [56 bytes] Usage Rule for Content (UR_C)
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_UR_C
        {
            /// <summary>[1 bytes] Trigger Bits for Playback. Trigger Bits for Copy/Move.</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] UR_TRIGGER;
            /// <summary>[1 bytes] Initial Move Control Information. Current Move Control Information. Copy Count Control Information.</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] UR_MCCNTRL;
            /// <summary>[4 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] Reserved_1;
            /// <summary>[1 bytes] Trigger Bits for Profile Processes</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] UR_PF_TRIGGER;
            /// <summary>[2 bytes] Current Fields Group for Profile</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] UR_PF_CURRENT;
            /// <summary>[2 bytes] Initial Fields Group for Profile</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] UR_PF_INITIAL;
            /// <summary>[5 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 5)]
            public byte[] Reserved_2;
            /// <summary>[3 bytes] Current Start Date of Playback Period</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 3)]
            public byte[] UR_C_STRTDATE;
            /// <summary>[3 bytes] Current End Date of Playback Period</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 3)]
            public byte[] UR_C_ENDDATE;
            /// <summary>[2 bytes] Current Playback Counter</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] UR_C_P_CNT;
            /// <summary>[2 bytes] Reserved for Current Field Group</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] Reserved_for_CFG;
            /// <summary>[3 bytes] Initial Start Date of Playback Period</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 3)]
            public byte[] UR_I_STRTDATE;
            /// <summary>[3 bytes] Initial End Date of Playback Period</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 3)]
            public byte[] UR_I_ENDDATE;
            /// <summary>[2 bytes] Initial Playback Counter</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] UR_I_P_CNT;
            /// <summary>[2 bytes] Reserved for Initial Field Group</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] Reserved_for_IFG;
            /// <summary>[1 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] Reserved_5;
            /// <summary>[3 bytes] Playback Span</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 3)]
            public byte[] UR_SPAN;
            /// <summary>[8 bytes] Service Defined ID</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public byte[] UR_SD_ID;
            /// <summary>[8 bytes] Check Value</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public byte[] UR_CHECK;
        }
        
        /// <summary>
        /// [96 bytes] Content Key Data (CKI - ECKUR)
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_CKD
        {
            /// <summary>[1 bytes] Content Type</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] CONTENT_TYPE;
            /// <summary>[4 bytes] Content Format</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] CONTENT_FORMAT;
            /// <summary>[1 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] Reserved;
            /// <summary>[2 bytes] Character Set Code for Title</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] CHAR_CODE;
            /// <summary>[8 bytes] Language for Title</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public byte[] LANG;
            /// <summary>[64 bytes] Title of Content</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 64)]
            public byte[] TITLE;
            /// <summary>[16 bytes] Content ID</summary>
            //[MarshalAs(UnmanagedType.ByValArray, SizeConst = 16)]
            public SSS_CID CID;
        }

        /// <summary>
        /// [160 bytes] Content Key Information (CKI)
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_CKI
        {
            /// <summary>[1 bytes] Content Type</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] CONTENT_TYPE;
            /// <summary>[4 bytes] Content Format</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] CONTENT_FORMAT;
            /// <summary>[1 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] Reserved;
            /// <summary>[2 bytes] Character Set Code for Title</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] CHAR_CODE;
            /// <summary>[8 bytes] Language for Title</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 8)]
            public byte[] LANG;
            /// <summary>[4 bytes] Title of Content</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 64)]
            public byte[] TITLE;
            /// <summary>[6 bytes] Content ID</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 16)]
            public byte[] CID;
            /// <summary>[4 bytes] Encrypted Content Key and Usage Rule</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 64)]
            public byte[] ECKUR;
        }

        /// <summary>
        /// [2048 bytes] Content Information (PRGI_TBL)
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_PRGI_TBL
        {
            /// <summary>[64 bytes] Program Information</summary>
            //[MarshalAs(UnmanagedType.ByValArray, SizeConst = 64)]
            public PRGI PRGI;
            /// <summary>[64 bytes] Text Attribute</summary>
            //[MarshalAs(UnmanagedType.ByValArray, SizeConst = 64)]
            public TIATR TIATR;
            /// <summary>[640 bytes] Text Information 1 Data Area</summary>
            //[MarshalAs(UnmanagedType.ByValArray, SizeConst = 640)]
            public TXTI1_DA TXTI1_DA;
            /// <summary>[1280 bytes] Text Information 2 Data Area</summary>
            //[MarshalAs(UnmanagedType.ByValArray, SizeConst = 1280)]
            public TXTI2_DA TXTI2_DA;
        }

        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct PRGI
        {
            /// <summary>[4 bytes] Content Format</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] CO_FRMT;
            /// <summary>[12 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 12)]
            public byte[] Reserved_1;
            /// <summary>[5 bytes] Size of Program</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 5)]
            public byte[] PRG_SZ;
            /// <summary>[2 bytes] Number of Media Object Units in this Program</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] MOU_Ns;
            /// <summary>[1 bytes] Number of marker positions</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] MRK_Ns;
            /// <summary>[4 bytes] Playback duration of Program in millisecond</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] PB_TM_PRG;
            /// <summary>[4 bytes] Offset of Representation Picture in millisecond</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] REP_OFST;
            /// <summary>[1 bytes] Flag of Media Object Unit Mapping</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] MOMAP_FL;
            /// <summary>[1 bytes] Number of Parcels in this Program</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] PCL_Ns;
            /// <summary>[30 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 30)]
            public byte[] Reserved_2;
        }

        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct TIATR
        {
            /// <summary>[2 bytes] Attribute of Text1</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] TI1_ATR;
            /// <summary>[10 bytes] Attribute of Text2</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 10)]
            public byte[] TI2_ATR;
            /// <summary>[52 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 52)]
            public byte[] Reserved;
        }

        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct TXTI1_DA
        {
            /// <summary>[128 bytes] Title Information</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 128)]
            public byte[] TXTI1_TTL;
            /// <summary>[16 bytes] Genre Information</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 16)]
            public byte[] TXTI1_GNR;
            /// <summary>[128 bytes] Copyright Management Information</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 128)]
            public byte[] TXTI1_CPR;
            /// <summary>[368 bytes] Free Area</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 368)]
            public byte[] TXTI1_FR;
        }

        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct TXTI2_DA
        {
            /// <summary>[256 bytes] Title Information</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 256)]
            public byte[] TXTI2_TTL;
            /// <summary>[32 bytes] Genre Information</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 32)]
            public byte[] TXTI2_GNR;
            /// <summary>[256 bytes] Copyright Management Information</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 256)]
            public byte[] TXTI2_CPR;
            /// <summary>[736 bytes] Free Area</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 736)]
            public byte[] TXTI2_FR;
        }

        /// <summary>
        /// [56 bytes] Playback Information of Stream Data
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_PLAYINFO
        {
            /// <summary>[4 bytes] The change flag of PID information. 1 : PID Information is changed. 0 : PID Information is not changed.</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] UPDATE_FLAG;
            /// <summary>[2 bytes] PID of PCR</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_PCR;
            /// <summary>[2 bytes] PID of PMT</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_PMT;
            /// <summary>[2 bytes] PID of RDI</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_RDI;
            /// <summary>[2 bytes] PID of PAT</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_PAT;
            /// <summary>[1 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] Reserved_1;
            /// <summary>[1 bytes] Total number of elementary streams</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] Ns_ELMSTRM;
            /// <summary>[2 bytes] PID assign Table</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_TBL;
            /// <summary>[2 bytes] PID of elementary stream1</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM1;
            /// <summary>[2 bytes] PID of elementary stream2</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM2;
            /// <summary>[2 bytes] PID of elementary stream3</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM3;
            /// <summary>[2 bytes] PID of elementary stream4</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM4;
            /// <summary>[2 bytes] PID of elementary stream5</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM5;
            /// <summary>[2 bytes] PID of elementary stream6</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM6;
            /// <summary>[2 bytes] PID of elementary stream7</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM7;
            /// <summary>[2 bytes] PID of elementary stream8</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM8;
            /// <summary>[2 bytes] PID of elementary stream9</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM9;
            /// <summary>[2 bytes] PID of elementary stream10</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM10;
            /// <summary>[2 bytes] PID of elementary stream11</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM11;
            /// <summary>[2 bytes] PID of elementary stream12</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM12;
            /// <summary>[2 bytes] PID of elementary stream13</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM13;
            /// <summary>[2 bytes] PID of elementary stream14</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM14;
            /// <summary>[2 bytes] PID of elementary stream15</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM15;
            /// <summary>[2 bytes] PID of elementary stream16</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] PID_ELMSTRM16;
            /// <summary>[2 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 2)]
            public byte[] Reserved_2;
        }

        /// <summary>
        /// [23 bytes] Time Stamp of Media
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct SSS_TSF
        {
            /// <summary>[1 bytes] Reserved</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] TSF_VALID;
            /// <summary>[1 bytes] In-Use</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] TSF_INUSE;
            /// <summary>[1 bytes] Exception Termination Counter</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 1)]
            public byte[] TSF_ETC;
            /// <summary>[4 bytes] Year (e.g. 2008)</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] TSF_YEAR;
            /// <summary>[4 bytes] Month (1 - 12)</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] TSF_MON;
            /// <summary>[4 bytes] Day (1 - 31)</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] TSF_DAY;
            /// <summary>[4 bytes] Hour (0 - 23)</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] TSF_HOUR;
            /// <summary>[4 bytes] Minutes (0 - 59)</summary>
            [MarshalAs(UnmanagedType.ByValArray, SizeConst = 4)]
            public byte[] TSF_MIN;
        }


        // Initializer Functions
        public static void InitializeStructure(ref SSS_UKID structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_UKID)boxed;
                    }
                }
            }
        }

        public static void InitializeStructure(ref SSS_UR_U structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_UR_U)boxed;
                    }
                }
            }
            InitializeStructure(ref structure.UR_UK_ID);
        }

        public static void InitializeStructure(ref SSS_CID structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_CID)boxed;
                    }
                }
            }
        }

        public static void InitializeStructure(ref SSS_UR_C structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_UR_C)boxed;
                    }
                }
            }
        }

        public static void InitializeStructure(ref SSS_CKD structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_CKD)boxed;
                    }
                }
            }
        }

        public static void InitializeStructure(ref SSS_CKI structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_CKI)boxed;
                    }
                }
            }
        }

        public static void InitializeStructure(ref SSS_PRGI_TBL structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_PRGI_TBL)boxed;
                    }
                }
            }
            InitializeStructure(ref structure.PRGI);
            InitializeStructure(ref structure.TIATR);
            InitializeStructure(ref structure.TXTI1_DA);
            InitializeStructure(ref structure.TXTI2_DA);
        }

        public static void InitializeStructure(ref PRGI structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (PRGI)boxed;
                    }
                }
            }
        }
        public static void InitializeStructure(ref TIATR structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (TIATR)boxed;
                    }
                }
            }
        }
        public static void InitializeStructure(ref TXTI1_DA structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (TXTI1_DA)boxed;
                    }
                }
            }
        }
        public static void InitializeStructure(ref TXTI2_DA structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (TXTI2_DA)boxed;
                    }
                }
            }
        }

        public static void InitializeStructure(ref SSS_PLAYINFO structure)
        {
            foreach (System.Reflection.FieldInfo fieldInfo in structure.GetType().GetFields())
            {
                if (fieldInfo.FieldType == typeof(byte[]))
                {
                    object[] attributes = fieldInfo.GetCustomAttributes(typeof(MarshalAsAttribute), true);
                    if (attributes.Length > 0)
                    {
                        MarshalAsAttribute maa = attributes[0] as MarshalAsAttribute;
                        Object boxed = (Object)structure;
                        byte[] bytes = new byte[maa.SizeConst];
                        fieldInfo.SetValue(boxed, bytes);
                        structure = (SSS_PLAYINFO)boxed;
                    }
                }
            }
        }


    }
}
