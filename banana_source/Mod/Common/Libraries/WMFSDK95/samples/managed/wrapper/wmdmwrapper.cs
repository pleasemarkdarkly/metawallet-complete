using System;
using System.Runtime.CompilerServices; 
using System.Runtime.InteropServices;

namespace WMDMLib
{
	public enum WMDM_TAG_DATATYPE
	{
		WMDM_TYPE_DWORD   =  0, //corresponds to DWORD
		WMDM_TYPE_STRING  =  1, //corresponds to LPCWSTR
		WMDM_TYPE_BINARY  =  2, //corresponds to LPBYTE
		WMDM_TYPE_BOOL    =  3, //corresponds to BOOL
		WMDM_TYPE_QWORD   =  4, //corresponds to QWORD
		WMDM_TYPE_WORD    =  5, //corresponds to WORD
		WMDM_TYPE_GUID    =  6, //corresponds to GUID
		WMDM_TYPE_DATE    =  7, //corresponds to WMDMDATE
	}

	public enum WMDM_SESSION_TYPE
	{
		WMDM_SESSION_NONE                   =  0x0000,
		WMDM_SESSION_TRANSFER_TO_DEVICE     =  0x0001, 
		WMDM_SESSION_TRANSFER_FROM_DEVICE   =  0x0010,
		WMDM_SESSION_DELETE                 =  0x0100,
		WMDM_SESSION_CUSTOM                 =  0x1000,
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct _WAVEFORMATEX
	{
		public ushort    wFormatTag;        /* format type */
		public ushort    nChannels;         /* number of channels (i.e. mono, stereo...) */
		public uint   nSamplesPerSec;    /* sample rate */
		public uint   nAvgBytesPerSec;   /* for buffer estimation */
		public ushort    nBlockAlign;       /* block size of data */
		public ushort    wBitsPerSample;    /* Number of bits per sample of mono data */
		public ushort    cbSize;            /* The count in bytes of the size of
		                                      extra information (after cbSize) */
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct _BITMAPINFOHEADER
	{
		public uint  biSize; 
		public int   biWidth; 
		public int   biHeight; 
		public ushort   biPlanes; 
		public ushort   biBitCount; 
		public uint  biCompression; 
		public uint  biSizeImage; 
		public int   biXPelsPerMeter; 
		public int   biYPelsPerMeter; 
		public uint  biClrUsed; 
		public uint  biClrImportant; 
	} 

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct RECT
	{
		public int left;
		public int top;
		public int right;
		public int bottom;
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct _VIDEOINFOHEADER
	{
		public RECT  rcSource;
		public RECT  rcTarget;
		public uint  dwBitRate;
		public uint  dwBitErrorRate;
		public long  AvgTimePerFrame;
		public _BITMAPINFOHEADER  bmiHeader;
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMFILECAPABILITIES
	{ 
		[MarshalAs(UnmanagedType.LPWStr)]
		public string pwszMimeType;   // Mime type
		public uint   dwReserved;     // Recerved for future use - Should be 0 for now.
	} 

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct OPAQUECOMMAND
	{
		public Guid guidCommand;
		public uint dwDataLen;
		[MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] public byte[] pData;
		[MarshalAs(UnmanagedType.LPArray,SizeConst=20)] public byte [] abMAC;
	} 

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct  WMDMID
	{
		public uint cbSize;
		public uint dwVendorID;
		[MarshalAs(UnmanagedType.LPArray,SizeConst=128)] public byte[] pID;
		public uint SerialNumberLength;
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDMDATETIME 
	{
		public ushort wYear; 
		public ushort wMonth; 
		public ushort wDay; 
		public ushort wHour; 
		public ushort wMinute; 
		public ushort wSecond; 
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDMRIGHTS
	{
		public uint cbSize;
		public uint dwContentType;
		public uint fuFlags;
		public uint fuRights;
		public uint dwAppSec;
		public uint dwPlaybackCount;
		public WMDMDATETIME ExpirationDate;
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDMMetadataView
	{
		[MarshalAs(UnmanagedType.LPWStr)] string pwszViewName;
		public uint nDepth;
		[MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] string[] ppwszTags;
	} 

	public enum WMDM_STORAGE_ENUM_MODE
	{
		ENUM_MODE_RAW, //enumerate storages as organized on the physical storage
		ENUM_MODE_USE_DEVICE_PREF, //use default metadata views if device indicates
		ENUM_MODE_METADATA_VIEWS //use default organization of storgaes based on metadata
	}

	public enum WMDM_FORMATCODE : uint
	{
		WMDM_FORMATCODE_NOTUSED                      = 0x0000,
		WMDM_FORMATCODE_ALLIMAGES                    = 0xFFFFFFFF,
		WMDM_FORMATCODE_UNDEFINED                    = 0x3000,
		WMDM_FORMATCODE_ASSOCIATION                  = 0x3001,
		WMDM_FORMATCODE_SCRIPT                       = 0x3002,
		WMDM_FORMATCODE_EXECUTABLE                   = 0x3003,
		WMDM_FORMATCODE_TEXT                         = 0x3004,
		WMDM_FORMATCODE_HTML                         = 0x3005,
		WMDM_FORMATCODE_DPOF                         = 0x3006,
		WMDM_FORMATCODE_AIFF                         = 0x3007,
		WMDM_FORMATCODE_WAVE                         = 0x3008,
		WMDM_FORMATCODE_MP3                          = 0x3009,
		WMDM_FORMATCODE_AVI                          = 0x300A,
		WMDM_FORMATCODE_MPEG                         = 0x300B,
		WMDM_FORMATCODE_ASF                          = 0x300C,
		WMDM_FORMATCODE_RESERVED_FIRST               = 0x300D,
		WMDM_FORMATCODE_RESERVED_LAST                = 0x37FF,

		WMDM_FORMATCODE_IMAGE_UNDEFINED              = 0x3800,
		WMDM_FORMATCODE_IMAGE_EXIF                   = 0x3801,
		WMDM_FORMATCODE_IMAGE_TIFFEP                 = 0x3802,
		WMDM_FORMATCODE_IMAGE_FLASHPIX               = 0x3803,
		WMDM_FORMATCODE_IMAGE_BMP                    = 0x3804,
		WMDM_FORMATCODE_IMAGE_CIFF                   = 0x3805,
		WMDM_FORMATCODE_IMAGE_GIF                    = 0x3807,
		WMDM_FORMATCODE_IMAGE_JFIF                   = 0x3808,
		WMDM_FORMATCODE_IMAGE_PCD                    = 0x3809,
		WMDM_FORMATCODE_IMAGE_PICT                   = 0x380A,
		WMDM_FORMATCODE_IMAGE_PNG                    = 0x380B,
		WMDM_FORMATCODE_IMAGE_TIFF                   = 0x380D,
		WMDM_FORMATCODE_IMAGE_TIFFIT                 = 0x380E,
		WMDM_FORMATCODE_IMAGE_JP2                    = 0x380F,
		WMDM_FORMATCODE_IMAGE_JPX                    = 0x3810,
		WMDM_FORMATCODE_IMAGE_RESERVED_FIRST         = 0x3811,
		WMDM_FORMATCODE_IMAGE_RESERVED_LAST          = 0x3FFF,

		WMDM_FORMATCODE_UNDEFINEDFIRMWARE            = 0xB802,
		WMDM_FORMATCODE_WINDOWSIMAGEFORMAT           = 0xB881,
		WMDM_FORMATCODE_UNDEFINEDAUDIO               = 0xB900,
		WMDM_FORMATCODE_WMA                          = 0xB901,
		WMDM_FORMATCODE_UNDEFINEDVIDEO               = 0xB980,
		WMDM_FORMATCODE_WMV                          = 0xB981,
		WMDM_FORMATCODE_UNDEFINEDCOLLECTION          = 0xBA00,
		WMDM_FORMATCODE_ABSTRACTMULTIMEDIAALBUM      = 0xBA01,
		WMDM_FORMATCODE_ABSTRACTIMAGEALBUM           = 0xBA02,
		WMDM_FORMATCODE_ABSTRACTAUDIOALBUM           = 0xBA03,
		WMDM_FORMATCODE_ABSTRACTVIDEOALBUM           = 0xBA04,
		WMDM_FORMATCODE_ABSTRACTAUDIOVIDEOPLAYLIST   = 0xBA05,
		WMDM_FORMATCODE_ABSTRACTCONTACTGROUP         = 0xBA06,
		WMDM_FORMATCODE_ABSTRACTMESSAGEFOLDER        = 0xBA07,
		WMDM_FORMATCODE_ABSTRACTCHAPTEREDPRODUCTION  = 0xBA08,
		WMDM_FORMATCODE_WPLPLAYLIST                  = 0xBA10,
		WMDM_FORMATCODE_M3UPLAYLIST                  = 0xBA11,
		WMDM_FORMATCODE_MPLPLAYLIST                  = 0xBA12,
		WMDM_FORMATCODE_ASXPLAYLIST                  = 0xBA13,
		WMDM_FORMATCODE_PLSPLAYLIST                  = 0xBA14,
		WMDM_FORMATCODE_UNDEFINEDDOCUMENT            = 0xBA80,
		WMDM_FORMATCODE_ABSTRACTDOCUMENT             = 0xBA81,
		WMDM_FORMATCODE_UNDEFINEDMESSAGE             = 0xBB00,
		WMDM_FORMATCODE_ABSTRACTMESSAGE              = 0xBB01,
		WMDM_FORMATCODE_UNDEFINEDCONTACT             = 0xBB80,
		WMDM_FORMATCODE_ABSTRACTCONTACT              = 0xBB81,
		WMDM_FORMATCODE_VCARD2                       = 0xBB82,
		WMDM_FORMATCODE_VCARD3                       = 0xBB83,
		WMDM_FORMATCODE_UNDEFINEDCALENDARITEM        = 0xBE00,
		WMDM_FORMATCODE_ABSTRACTCALENDARITEM         = 0xBE01,
		WMDM_FORMATCODE_VCALENDAR1                   = 0xBE02,
		WMDM_FORMATCODE_UNDEFINEDWINDOWSEXECUTABLE   = 0xBE80
	}

	public enum WMDM_ENUM_PROP_VALID_VALUES_FORM
	{
		WMDM_ENUM_PROP_VALID_VALUES_ANY,
		WMDM_ENUM_PROP_VALID_VALUES_RANGE,
		WMDM_ENUM_PROP_VALID_VALUES_ENUM
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDM_PROP_VALUES_RANGE
	{
		[MarshalAs(UnmanagedType.AsAny)]
		public object rangeMin;
		[MarshalAs(UnmanagedType.AsAny)]
		public object rangeMax;
		[MarshalAs(UnmanagedType.AsAny)]
		public object rangeStep;
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDM_PROP_VALUES_ENUM
	{
		public uint cEnumValues;
		[MarshalAs(UnmanagedType.LPArray,SizeParamIndex=0)] public object[] pValues;
	} //WMDM_PROP_VALUES_ENUM;


	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDM_PROP_DESC
	{
		[MarshalAs(UnmanagedType.LPWStr)] public string pwszPropName;
		public WMDM_ENUM_PROP_VALID_VALUES_FORM ValidValuesForm;
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDRM_PROP_DESC_RANGE
	{
		[MarshalAs(UnmanagedType.LPWStr)] public string pwszPropName;
		public WMDM_ENUM_PROP_VALID_VALUES_FORM ValidValuesForm;
		public WMDM_PROP_VALUES_RANGE ValidValuesRange;
	}

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDM_PROP_DESC_ENUM
	{
		[MarshalAs(UnmanagedType.LPWStr)] public string pwszPropName;
		public WMDM_ENUM_PROP_VALID_VALUES_FORM ValidValuesForm;
		public WMDM_PROP_VALUES_ENUM EnumeratedValidValues;
	}

	
	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDM_PROP_CONFIG
	{
		public uint nPreference;
		public uint nPropDesc;
		[MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] public WMDM_PROP_DESC[] pPropDesc;
	} 

	[StructLayout(LayoutKind.Sequential,Pack=8)]
	public struct WMDM_FORMAT_CAPABILITY
	{
		public uint nPropConfig;
		[MarshalAs(UnmanagedType.LPArray,SizeParamIndex=0)] public WMDM_PROP_CONFIG[] pConfigs;
	} //WMDM_FORMAT_CAPABILITY;

	public enum WMDM_FIND_SCOPE
	{
		WMDM_FIND_SCOPE_GLOBAL,
		WMDM_FIND_SCOPE_IMMEDIATE_CHILDREN        
	}// WMDM_FIND_SCOPE;

	public enum WMDM_ERROR_CODE : uint
	{
		WMDM_S_NOT_ALL_PROPERTIES_APPLIED       = 0x00045001,
	WMDM_S_NOT_ALL_PROPERTIES_RETRIEVED     = 0x00045002,

	//
	//Error codes
	//

	WMDM_E_BUSY                             = 0x80045000,
	WMDM_E_INTERFACEDEAD                    = 0x80045001,
	WMDM_E_INVALIDTYPE                      = 0x80045002,
	WMDM_E_PROCESSFAILED                    = 0x80045003,
	WMDM_E_NOTSUPPORTED                     = 0x80045004,
	WMDM_E_NOTCERTIFIED                     = 0x80045005,
	WMDM_E_NORIGHTS                         = 0x80045006,
	WMDM_E_CALL_OUT_OF_SEQUENCE             = 0x80045007,
	WMDM_E_BUFFERTOOSMALL                   = 0x80045008,
	WMDM_E_MOREDATA                         = 0x80045009,
	WMDM_E_MAC_CHECK_FAILED                 = 0x8004500A,
	WMDM_E_USER_CANCELLED                   = 0x8004500B,
	WMDM_E_SDMI_TRIGGER                     = 0x8004500C,
	WMDM_E_SDMI_NOMORECOPIES                = 0x8004500D,
	WMDM_E_REVOKED                          = 0x8004500E,
	WMDM_E_LICENSE_NOTEXIST                 = 0x8004500F,
	WMDM_E_INCORRECT_APPSEC                 = 0x80045010,
	WMDM_E_INCORRECT_RIGHTS                 = 0x80045011,
	WMDM_E_LICENSE_EXPIRED                  = 0x80045012,
	WMDM_E_CANTOPEN_PMSN_SERVICE_PIPE       = 0x80045013,
	WMDM_E_TOO_MANY_SESSIONS                = 0x80045013

}

//cpp_quote("// Revocation Flags,
public enum WMDM_REVOCATION_FLAGS
{
	WMDM_WMDM_REVOKED                       = 0x00000001,
WMDM_APP_REVOKED                        = 0x00000002,
WMDM_SP_REVOKED                         = 0x00000004,
WMDM_SCP_REVOKED                        = 0x00000008
}

//cpp_quote("// GetFormatSupport2 Flags,
	public enum WMDM_GetFormatSupport2_Flags 
	{
		WMDM_GET_FORMAT_SUPPORT_AUDIO           = 0x00000001,
		WMDM_GET_FORMAT_SUPPORT_VIDEO           = 0x00000002,
		WMDM_GET_FORMAT_SUPPORT_FILE            = 0x00000004,
	}

//cpp_quote("// MDMRIGHTS Flags,
	public enum WMDM_MDMRIGHTS_Flags
	{
		WMDM_RIGHTS_PLAYBACKCOUNT               = 0x00000001,
		WMDM_RIGHTS_EXPIRATIONDATE              = 0x00000002,
		WMDM_RIGHTS_GROUPID                     = 0x00000004,
		WMDM_RIGHTS_FREESERIALIDS               = 0x00000008,
		WMDM_RIGHTS_NAMEDSERIALIDS              = 0x00000010,
	}   
//cpp_quote("// Device Type Flags,
	public enum WMDM_Device_Type_Flags
	{
		WMDM_DEVICE_TYPE_PLAYBACK               = 0x00000001,
		WMDM_DEVICE_TYPE_RECORD                 = 0x00000002,
		WMDM_DEVICE_TYPE_DECODE                 = 0x00000004,
		WMDM_DEVICE_TYPE_ENCODE                 = 0x00000008,
		WMDM_DEVICE_TYPE_STORAGE                = 0x00000010,
		WMDM_DEVICE_TYPE_VIRTUAL                = 0x00000020,
		WMDM_DEVICE_TYPE_SDMI                   = 0x00000040,
		WMDM_DEVICE_TYPE_NONSDMI                = 0x00000080,
		WMDM_DEVICE_TYPE_NONREENTRANT           = 0x00000100,
		WMDM_DEVICE_TYPE_FILELISTRESYNC         = 0x00000200,
		WMDM_DEVICE_TYPE_VIEW_PREF_METADATAVIEW = 0x00000400,
	}
//cpp_quote("// Device Power Source Flags,
	public enum WMDM_Device_Power_Source_Flags
	{
		WMDM_POWER_CAP_BATTERY                  = 0x00000001,
		WMDM_POWER_CAP_EXTERNAL                 = 0x00000002,
		WMDM_POWER_IS_BATTERY                   = 0x00000004,
		WMDM_POWER_IS_EXTERNAL                  = 0x00000008,
		WMDM_POWER_PERCENT_AVAILABLE            = 0x00000010,
	}
//cpp_quote("// Device Status Flags,
	public enum WMDM_Device_Status_Flags
	{
		WMDM_STATUS_READY                       = 0x00000001,
		WMDM_STATUS_BUSY                        = 0x00000002,
		WMDM_STATUS_DEVICE_NOTPRESENT           = 0x00000004,
		WMDM_STATUS_DEVICECONTROL_PLAYING       = 0x00000008,
		WMDM_STATUS_DEVICECONTROL_RECORDING     = 0x00000010,
		WMDM_STATUS_DEVICECONTROL_PAUSED        = 0x00000020,
		WMDM_STATUS_DEVICECONTROL_REMOTE        = 0x00000040,
		WMDM_STATUS_DEVICECONTROL_STREAM        = 0x00000080,
		WMDM_STATUS_STORAGE_NOTPRESENT          = 0x00000100,
		WMDM_STATUS_STORAGE_INITIALIZING        = 0x00000200,
		WMDM_STATUS_STORAGE_BROKEN              = 0x00000400,
		WMDM_STATUS_STORAGE_NOTSUPPORTED        = 0x00000800,
		WMDM_STATUS_STORAGE_UNFORMATTED         = 0x00001000,
		WMDM_STATUS_STORAGECONTROL_INSERTING    = 0x00002000,
		WMDM_STATUS_STORAGECONTROL_DELETING     = 0x00004000,
		WMDM_STATUS_STORAGECONTROL_APPENDING    = 0x00008000,
		WMDM_STATUS_STORAGECONTROL_MOVING       = 0x00010000,
		WMDM_STATUS_STORAGECONTROL_READING      = 0x00020000,
	}
//cpp_quote("// Device Capabilities Flags,
	public enum WMDM_Device_Capabilities_Flags
	{
		WMDM_DEVICECAP_CANPLAY                  = 0x00000001,
		WMDM_DEVICECAP_CANSTREAMPLAY            = 0x00000002,
		WMDM_DEVICECAP_CANRECORD                = 0x00000004,
		WMDM_DEVICECAP_CANSTREAMRECORD          = 0x00000008,
		WMDM_DEVICECAP_CANPAUSE                 = 0x00000010,
		WMDM_DEVICECAP_CANRESUME                = 0x00000020,
		WMDM_DEVICECAP_CANSTOP                  = 0x00000040,
		WMDM_DEVICECAP_CANSEEK                  = 0x00000080,
		WMDM_DEVICECAP_HASSECURECLOCK           = 0x00000100,
	}

//cpp_quote("// WMDM Seek Flags,
	public enum WMDM_Seek_Flags2
	{
		WMDM_SEEK_REMOTECONTROL                 = 0x00000001,
		WMDM_SEEK_STREAMINGAUDIO                = 0x00000002,
	}

//cpp_quote("// Storage Attributes Flags,
	public enum WMDM_Storage_Attribute_Flags
	{
		WMDM_STORAGE_ATTR_FILESYSTEM            = 0x00000001,
		WMDM_STORAGE_ATTR_REMOVABLE             = 0x00000002,
		WMDM_STORAGE_ATTR_NONREMOVABLE          = 0x00000004,
		WMDM_FILE_ATTR_FOLDER                   = 0x00000008,
		WMDM_FILE_ATTR_LINK                     = 0x00000010,
		WMDM_FILE_ATTR_FILE                     = 0x00000020,
		WMDM_FILE_ATTR_VIDEO                    = 0x00000040,
		WMDM_STORAGE_ATTR_CANEDITMETADATA       = 0x00000080,
		WMDM_STORAGE_ATTR_FOLDERS               = 0x00000100,
		// These flag are defined below but can be used with this group of flags also
		WMDM_STORAGECONTROL_INSERTBEFORE        = 0x00000200,
		WMDM_STORAGECONTROL_INSERTAFTER         = 0x00000400,
		WMDM_STORAGECONTROL_INSERTINTO          = 0x00000800,
		WMDM_FILE_ATTR_AUDIO                    = 0x00001000,
		WMDM_FILE_ATTR_DATA                     = 0x00002000,
		WMDM_FILE_ATTR_CANPLAY                  = 0x00004000,
		WMDM_FILE_ATTR_CANDELETE                = 0x00008000,
		WMDM_FILE_ATTR_CANMOVE                  = 0x00010000,
		WMDM_FILE_ATTR_CANRENAME                = 0x00020000,
		WMDM_FILE_ATTR_CANREAD                  = 0x00040000,
		WMDM_FILE_ATTR_MUSIC                    = 0x00080000,
		WMDM_FILE_CREATE_OVERWRITE              = 0x00100000,
		WMDM_FILE_ATTR_AUDIOBOOK                = 0x00200000,
		WMDM_FILE_ATTR_HIDDEN                   = 0x00400000,
		WMDM_FILE_ATTR_SYSTEM                   = 0x00800000,
		WMDM_FILE_ATTR_READONLY                 = 0x01000000,
		WMDM_STORAGE_ATTR_HAS_FOLDERS           = 0x02000000,
		WMDM_STORAGE_ATTR_HAS_FILES             = 0x04000000,
		WMDM_STORAGE_IS_DEFAULT                 = 0x08000000,
		WMDM_STORAGE_CONTAINS_DEFAULT           = 0x10000000,
		WMDM_STORAGE_ATTR_VIRTUAL               = 0x20000000,
	}
//cpp_quote("// Storage Capabilities Flags,
	public enum WMDM_Storage_Capabilities_Flags
	{
		WMDM_STORAGECAP_FOLDERSINROOT           = 0x00000001,
		WMDM_STORAGECAP_FILESINROOT             = 0x00000002,
		WMDM_STORAGECAP_FOLDERSINFOLDERS        = 0x00000004,
		WMDM_STORAGECAP_FILESINFOLDERS          = 0x00000008,
		WMDM_STORAGECAP_FOLDERLIMITEXISTS       = 0x00000010,
		WMDM_STORAGECAP_FILELIMITEXISTS         = 0x00000020,
		WMDM_STORAGECAP_NOT_INITIALIZABLE       = 0x00000040, //by default top-level storage is formattable
	}
//cpp_quote("// WMDM Mode Flags,
	public enum WMDM_Mode_Flags
	{
		WMDM_MODE_BLOCK                         = 0x00000001,
		WMDM_MODE_THREAD                        = 0x00000002,
		WMDM_CONTENT_FILE                       = 0x00000004,
		WMDM_CONTENT_FOLDER                     = 0x00000008,
		WMDM_CONTENT_OPERATIONINTERFACE         = 0x00000010,
		WMDM_MODE_QUERY                         = 0x00000020,
		WMDM_MODE_PROGRESS                      = 0x00000040,
		WMDM_MODE_TRANSFER_PROTECTED            = 0x00000080,
		WMDM_MODE_TRANSFER_UNPROTECTED          = 0x00000100,
		WMDM_STORAGECONTROL_INSERTBEFORE        = 0x00000200,
		WMDM_STORAGECONTROL_INSERTAFTER         = 0x00000400,
		WMDM_STORAGECONTROL_INSERTINTO          = 0x00000800,
		WMDM_MODE_RECURSIVE                     = 0x00001000,
		// WMDM_FILE_CREATE_OVERWRITE              = 0x00100000,
	}
//cpp_quote("// WMDM Rights Flags,
//cpp_quote("// NON_SDMI = !SDMI_PROTECTED,
//cpp_quote("// SDMI = SDMI_VALIDATED,
	public enum WMDM_Rights_Flags
	{
		WMDM_RIGHTS_PLAY_ON_PC                  = 0x00000001,
		WMDM_RIGHTS_COPY_TO_NON_SDMI_DEVICE     = 0x00000002,
		WMDM_RIGHTS_COPY_TO_CD                  = 0x00000008,
		WMDM_RIGHTS_COPY_TO_SDMI_DEVICE         = 0x00000010,
	}

//cpp_quote("// WMDM Seek Flags,
	public enum WMDM_Seek_Flags
	{
		WMDM_SEEK_BEGIN                         = 0x00000001,
		WMDM_SEEK_CURRENT                       = 0x00000002,
		WMDM_SEEK_END                           = 0x00000008,
	}
//cpp_quote("// WMDM Device Enumeration Flags,
	public enum WMDM_Device_Enumeration_Flags
	{
		DO_NOT_VIRTUALIZE_STORAGES_AS_DEVICES   = 0x00000001,
		ALLOW_OUTOFBAND_NOTIFICATION            = 0x00000002,
	}

public enum WMDMMessage
{
	WMDM_MSG_DEVICE_ARRIVAL,
	WMDM_MSG_DEVICE_REMOVAL,
	WMDM_MSG_MEDIA_ARRIVAL,
	WMDM_MSG_MEDIA_REMOVAL
}

	[Guid("15CC68E3-27CC-4ecd-B222-3F5D02D80BD5"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMMetaData
	{
		uint AddItem(
			[In] WMDM_TAG_DATATYPE Type,
			[In, MarshalAs(UnmanagedType.LPWStr)] string pwszTagName,
			[In, MarshalAs(UnmanagedType.LPArray,SizeParamIndex=3)] byte[] pValue,
			[In] uint iLength );

		uint QueryByName(
			[In, MarshalAs(UnmanagedType.LPWStr)] string pwszTagName,
			[Out] out WMDM_TAG_DATATYPE pType,
			[Out, MarshalAs(UnmanagedType.LPArray,SizeParamIndex=3)] out byte[] ppValue,
			[Out] out uint pcbLength);

		uint QueryByIndex(
			[In] uint iIndex,
			[Out, MarshalAs(UnmanagedType.LPWStr)] out string ppwszTagName,
			[Out] out WMDM_TAG_DATATYPE pType,
			[Out, MarshalAs(UnmanagedType.LPArray,SizeParamIndex=4)] out byte[] ppValue,
			[Out] out uint pcbLength);
		
		uint GetItemCount(
			[Out] out uint iCount);
	}

	
	[Guid("1DCB3A00-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDeviceManager
	{
		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		uint GetRevision(
			[Out] out uint pdwRevision);

		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		uint GetDeviceCount(
			[Out] out uint pdwCount);

		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		uint EnumDevices(
			[Out] out IWMDMEnumDevice ppEnumDevice);
	}

	[Guid("923E5249-8731-4c5b-9B1C-B8B60B6E46AF"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDeviceManager2 : IWMDeviceManager
	{
		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		uint GetDeviceFromCanonicalName(
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszCanonicalName,
			[Out] out IWMDMDevice ppDevice);
		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		uint EnumDevices2(
			[Out] out IWMDMEnumDevice ppEnumDevice);
		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		uint Reinitialize();
	}

	[Guid("af185c41-100d-46ed-be2e-9ce8c44594ef"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDeviceManager3 : IWMDeviceManager2
	{
		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		uint SetDeviceEnumPreference(
			[In] uint dwEnumPref);
	}

	[Guid("1DCB3A07-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorageGlobals
	{
		uint GetCapabilities([Out] out uint pdwCapabilities);
		uint GetSerialNumber(
			[Out] out WMDMID pSerialNum,
			[In,Out,MarshalAs(UnmanagedType.LPArray,SizeConst=8)] ref byte[] abMac);
		uint GetTotalSize([Out] out uint pdwTotalSizeLow, [Out] out uint pdwTotalSizeHigh);
		uint GetTotalFree([Out] out uint pdwFreeLow, [Out] out uint pdwFreeHigh);
		uint GetTotalBad([Out] out uint pdwBadLow, [Out] out uint pdwBadHigh);
		uint GetStatus([Out] out uint pdwStatus);
		uint Initialize([In] uint fuMode, [In] IWMDMProgress pProgress);
	}


	[Guid("1DCB3A06-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorage
	{
		uint SetAttribute(
			[In] uint dwAttributes,
			[In] _WAVEFORMATEX pFormat);

		uint GetStorageGlobals(
			[Out] out IWMDMStorageGlobals ppStorageGlobals);

		uint GetAttributes(
			[Out] out uint pdwAttributes,
			[In,Out] ref _WAVEFORMATEX pFormat);

		uint GetName(
			[Out,MarshalAs(UnmanagedType.LPWStr,SizeParamIndex=1)] out string pwszName,
			[In] uint nMaxChars);

		uint GetDate(
			[Out] out WMDMDATETIME pDateTimeUTC);

		uint GetSize(
			[Out] out uint pdwSizeLow,
			[Out] out uint pdwSizeHigh);

		uint GetRights(
			[Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] out WMDMRIGHTS[] ppRights,
			[Out] out uint pnRightsCount,
			[In,Out,MarshalAs(UnmanagedType.LPArray,SizeConst=8)] ref byte[] abMac);

		uint EnumStorage(
			[Out] out IWMDMEnumStorage pEnumStorage);

		uint SendOpaqueCommand(
			[In,Out] ref OPAQUECOMMAND pCommand);

	}

	[Guid("1ED5A144-5CD5-4683-9EFF-72CBDB2D9533"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorage2 : IWMDMStorage
	{
		uint GetStorage(
			[In,MarshalAs(UnmanagedType.LPWStr)] string pszStorageName,
			[Out] out IWMDMStorage ppStorage);

		uint SetAttributes2(
			[In] uint dwAttributes,
			[In] uint dwAttributesEx,
			[In] _WAVEFORMATEX pFormat,
			[In] _VIDEOINFOHEADER pVideoFormat);

		uint GetAttributes2(
			[Out] out uint pdwAttributes,
			[Out] out uint pdwAttributesEx,
			[In,Out] ref _WAVEFORMATEX pAudioFormat,
			[In,Out] ref _VIDEOINFOHEADER pVideoFormat);
	}

	[Guid("97717EEA-926A-464e-96A4-247B0216026E"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorage3 : IWMDMStorage2
	{
		uint GetMetadata(
			[Out] out IWMDMMetaData ppMetaData);

		uint SetMetadata(
			[In] IWMDMMetaData pMetaData);

		uint CreateEmptyMetadataObject(
			[Out] out IWMDMMetaData ppMetadata);

		uint SetEnumPreference(
			[In,Out] ref WMDM_STORAGE_ENUM_MODE pMode,
			[In] uint nViews,
			[In,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] WMDMMetadataView[] pViews);

	}


	[Guid("c225bac5-a03a-40b8-9a23-91cf478c64a6"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorage4 : IWMDMStorage3
	{
		uint SetReferences(
			[In] uint dwRefs,
			[In,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=0)] IWMDMStorage[] ppIWMDMStorage);

		uint GetReferences(
			[Out] out uint pdwRefs,
			[Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=0)] out IWMDMStorage[] pppIWMDMStorage);

		uint GetRightsWithProgress(
			[In] IWMDMProgress3 pIProgressCallback,
			[Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=2)] out WMDMRIGHTS[] ppRights,
			[Out] out uint pnRightsCount);

		uint GetSpecifiedMetadata(
			[In] uint cProperties,
			[In,MarshalAs(UnmanagedType.LPArray,ArraySubType=UnmanagedType.LPWStr,SizeParamIndex=0)] string[] ppwszPropNames,
			[Out] out IWMDMMetaData ppMetadata);

		uint FindStorage(
			[In] WMDM_FIND_SCOPE findScope,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszUniqueID,
			[Out] out IWMDMStorage ppStorage);

		uint GetParent( [Out] out IWMDMStorage ppStorage );
	}

	[Guid("1DCB3A0B-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMOperation
	{
		uint BeginRead();
		uint BeginWrite();
		uint GetObjectName(
			[Out,MarshalAs(UnmanagedType.LPWStr,SizeParamIndex=1)] out string pwszName,
			[In] uint nMaxChars);
		uint SetObjectName(
			[In,MarshalAs(UnmanagedType.LPWStr,SizeParamIndex=1)] string pwszName,
			[In] uint nMaxChars);
		uint GetObjectAttributes(
			[Out] out uint pdwAttributes,
			[In,Out] ref _WAVEFORMATEX pFormat);
		uint SetObjectAttributes(
			[In] uint dwAttributes,
			[In] _WAVEFORMATEX pFormat);
		uint GetObjectTotalSize(
			[Out] out uint pdwSize,
			[Out] out uint pdwSizeHigh);
		uint SetObjectTotalSize(
			[In] uint dwSize,
			[In] uint dwSizeHigh);
		uint TransferObjectData(
			[In,Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] ref byte[] pData,
			[In,Out] ref uint pdwSize,
			[In,Out,MarshalAs(UnmanagedType.LPArray,SizeConst=8)] ref byte[] abMac);
		uint End(
			[In] ref uint phCompletionCode,
			[In,MarshalAs(UnmanagedType.IUnknown)] object pNewObject);
	}

	[Guid("33445B48-7DF7-425c-AD8F-0FC6D82F9F75"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMOperation2 : IWMDMOperation
	{
		uint SetObjectAttributes2(
			[In] uint dwAttributes,
			[In] uint dwAttributesEx,
			[In] _WAVEFORMATEX pFormat,
			[In] _VIDEOINFOHEADER pVideoFormat);

		uint GetObjectAttributes2(
			[Out] out uint pdwAttributes,
			[Out] out uint pdwAttributesEx,
			[In, Out] ref _WAVEFORMATEX pAudioFormat,
			[In, Out] ref _VIDEOINFOHEADER pVideoFormat);
	}

	[Guid("d1f9b46a-9ca8-46d8-9d0f-1ec9bae54919"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMOperation3 : IWMDMOperation2
	{
		uint TransferObjectDataOnClearChannel(
			[In, Out, MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] ref byte[] pData,
			[In,Out] ref uint pdwSize);
	}

	[Guid("1DCB3A0C-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMProgress
	{
		uint Begin([In] uint dwEstimatedTicks);
		uint Progress([In] uint dwTranspiredTicks);
		uint End();
	}

	[Guid("3A43F550-B383-4e92-B04A-E6BBC660FEFC"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMProgress2 : IWMDMProgress
	{
		uint End2([In] uint hrCompletionCode);
	}

	[Guid("21DE01CB-3BB4-4929-B21A-17AF3F80F658"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMProgress3 : IWMDMProgress2
	{
		uint Begin3(
			[In] Guid EventId,
			[In] uint dwEstimatedTicks,
			[In,Out] ref OPAQUECOMMAND pContext);
		uint Progress3(
			[In] Guid EventId,
			[In] uint dwTranspiredTicks,
			[In,Out] ref OPAQUECOMMAND pContext);
		uint End3(
			[In] Guid EventId,
			[In] uint hrCompletionCode,
			[In, Out] ref OPAQUECOMMAND pContext);
	}

	[Guid("1DCB3A02-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMDevice
	{
		uint GetName(
			[Out,MarshalAs(UnmanagedType.LPWStr,SizeParamIndex=1)] out string pwszName,
			[In] uint nMaxChars);
		uint GetManufacturer(
			[Out,MarshalAs(UnmanagedType.LPWStr,SizeParamIndex=1)] out string pwszName,
			[In] uint nMaxChars);
		uint GetVersion( [Out] out uint pdwVersion );
		uint GetType( [Out] out uint pdwType );
		uint GetSerialNumber( 
			[Out] out WMDMID pSerialNumber,
			[In, Out, MarshalAs(UnmanagedType.LPArray,SizeConst=8)] ref byte[] abMac);
		uint GetPowerSource(
			[Out] out uint pdwPowerSource,
			[Out] out uint pdwPercentRemaining);
		uint GetStatus(
			[Out] out uint pdwStatus );
		uint GetDeviceIcon(
			[Out] out uint hIcon);
		uint EnumStorage(
			[Out] out IWMDMEnumStorage ppEnumStorage);
		uint GetFormatSupport(
			[Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=1)] out _WAVEFORMATEX[] ppFormatEx,
			[Out] out uint pnFormatCount,
			[Out,MarshalAs(UnmanagedType.LPArray,ArraySubType=UnmanagedType.LPWStr,SizeParamIndex=3)] out string[] pppwszMimeType,
			[Out] out uint pnMimeTypeCount);
		uint SendOpaqueCommand(
			[In, Out] ref OPAQUECOMMAND pCommand );
	}

	[Guid("E34F3D37-9D67-4fc1-9252-62D28B2F8B55"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMDevice2 : IWMDMDevice
	{
		uint GetStorage(
			[In, MarshalAs(UnmanagedType.LPWStr)] string pszStorageName,
			[Out] out IWMDMStorage ppStorage );

		uint GetFormatSupport2(
			[In] uint dwFlags,
			[Out, MarshalAs(UnmanagedType.LPArray,SizeParamIndex=2)] out _WAVEFORMATEX[] ppAudioFormatEx,
			[Out] out uint pnAudioFormatCount,
			[Out, MarshalAs(UnmanagedType.LPArray,SizeParamIndex=4)] out _VIDEOINFOHEADER[] ppVideoFormatEx,
			[Out] out uint pnVideoFormatCount,
			[Out, MarshalAs(UnmanagedType.LPArray,SizeParamIndex=6)] out WMFILECAPABILITIES[] ppFileType,
			[Out] out uint pnFileTypecount);

		uint GetSpecifyPropertyPages(
			//[Out] out ISpecifyPropertyPages ppSpecifyPropPages,
			[Out, MarshalAs(UnmanagedType.IUnknown)] out object ppSpecifyPropPages,
			[Out, MarshalAs(UnmanagedType.LPArray,ArraySubType=UnmanagedType.IUnknown,SizeParamIndex=2)] out object[] pppUnknowns,
			[Out] out uint pcUnks);

		uint GetCanonicalName(
			[Out,MarshalAs(UnmanagedType.LPWStr,SizeParamIndex=1)] out string pwszPnPName,
			[In] uint nMaxChars);
	}

	[Guid("6c03e4fe-05db-4dda-9e3c-06233a6d5d65"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMDevice3 : IWMDMDevice2
	{
		//
		//Get/Set a device property
		//
		uint GetProperty(
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszPropName,
			[Out,MarshalAs(UnmanagedType.AsAny)] out object pValue);
		uint SetProperty(
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszPropName,
			[In,MarshalAs(UnmanagedType.AsAny)] object pValue);

		//
		//Get capabilties of the device for a particular format
		//
		uint GetFormatCapability(
			[In] WMDM_FORMATCODE format,
			[Out] out WMDM_FORMAT_CAPABILITY pFormatSupport);

		//
		//DeviceIoControl
		//
		uint DeviceIoControl(
			[In] uint dwIoControlCode,
			[In,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=2)] byte[] lpInBuffer,
			[In] uint nInBufferSize,
			[Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=4)] out byte[] lpOutBuffer,
			[In,Out] ref uint pnOutBufferSize);

		//
		//Find storage based on unique-id
		//
		uint FindStorage(
			[In] WMDM_FIND_SCOPE findScope,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszUniqueID,
			[Out] out IWMDMStorage ppStorage);
	}


	[Guid("82af0a65-9d96-412c-83e5-3c43e4b06cc7"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMDeviceSession
	{
		//
		// Indicates beginning of a transfer session
		// This can be used to optimize things that need to be done only once per transfer
		// session. This includes querying of device certificate and such
		//
		uint BeginSession(
			[In] WMDM_SESSION_TYPE type,
			[In,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=2)] byte[] pCtx,
			[In] uint dwSizeCtx);

		//
		// Indicates end of a transfer session
		//
		uint EndSession(
			[In] WMDM_SESSION_TYPE type,
			[In,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=2)] byte[] pCtx,
			[In] uint dwSizeCtx);
	}

	[Guid("1DCB3A01-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMEnumDevice
	{
		uint Next(
			[In] uint celt,
			[Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=0)] out IWMDMDevice[] ppDevice,
			[Out] out uint pceltFetched);

		uint Skip(
			[In] uint celt,
			[Out] out uint pceltFetched);

		uint Reset();
		uint Clone( 
			[Out] out IWMDMEnumDevice ppEnumDevice);
	}

	[Guid("1DCB3A04-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMDeviceControl
	{
		uint GetStatus([Out] out uint pdwStatus);
		uint GetCapabilitites([Out] out uint pdwCapabilitiesMask);
		uint Play();
		uint Records([In] _WAVEFORMATEX pFormat);
		uint Pause();
		uint Resume();
		uint Stop();
		uint Seek([In] uint fuMode, [In] int nOffset);
	}

	[Guid("1DCB3A05-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMEnumStorage
	{
		uint Next(
			[In] uint celt,
			[Out,MarshalAs(UnmanagedType.LPArray,SizeParamIndex=0)] out IWMDMStorage[] ppStorage,
			[Out] out uint pceltFetched);

		uint Skip(
			[In] uint celt,
			[Out] out uint pceltFetched);

		uint Reset();
		uint Clone( 
			[Out] out IWMDMEnumStorage ppEnumStorage);
	}

	[Guid("1DCB3A08-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorageControl
	{
		uint Insert(
			[In] uint fuMode,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszFile,
			[In] IWMDMOperation pOperation,
			[In] IWMDMProgress pProgress,
			[Out] out IWMDMStorage ppNewObject);
		uint Delete(
			[In] uint fuMode,
			[In] IWMDMProgress pProgress);
		uint Rename(
			[In] uint fuMode,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszNewName,
			[In] IWMDMProgress pProgress);
		uint Read(
			[In] uint fuMode,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszFile,
			[In] IWMDMProgress pProgress,
			[In] IWMDMOperation pOperation);
		uint Move(
			[In] uint fuMode,
			[In] IWMDMStorage pTargetObject,
			[In] IWMDMProgress pProgress);
	}

	[Guid("972C2E88-BD6C-4125-8E09-84F837E637B6"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorageControl2 : IWMDMStorageControl
	{
		uint Insert2(
			[In] uint fuMode,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszFileSource,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszFileDest,
			[In] IWMDMOperation pOperation,
			[In] IWMDMProgress pProgress,
			[In,MarshalAs(UnmanagedType.IUnknown)] object pUnknown,
			[In,Out] ref IWMDMStorage ppNewObject);

	}

	[Guid("B3266365-D4F3-4696-8D53-BD27EC60993A"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMStorageControl3 : IWMDMStorageControl2
	{
		uint Insert3(
			[In] uint fuMode,
			[In] uint fuType,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszFileSource,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszFileDest,
			[In] IWMDMOperation pOperation,
			[In] IWMDMProgress pProgress,
			[In] IWMDMMetaData pMetaData,
			[In,MarshalAs(UnmanagedType.IUnknown)] object pUnknown,
			[In,Out] ref IWMDMStorage ppNewObject);
	}

	[Guid("1DCB3A09-33ED-11d3-8470-00C04F79DBC0"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMObjectInfo
	{
		uint GetPlayLength([Out] out uint pdwLength);
		uint SetPlayLength([In] uint dwLength);
		uint GetPlayOffset([Out] out uint pdwOffset);
		uint SetPlayOffset([In] uint dwOffset);
		uint GetTotalLength([Out] out uint pdwLength);
		uint GetLastPlayPosition([Out] out uint pdwLastPos);
		uint GetLongestPlayPosition([Out] out uint pdwLongestPos);
	}

	[Guid("EBECCEDB-88EE-4e55-B6A4-8D9F07D696AA"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMRevoked
	{
		uint GetRevocationURL(
			[In,Out,MarshalAs(UnmanagedType.LPWStr,SizeParamIndex=1)] ref string ppwszRevocationURL,
			[In,Out] ref uint pdwBufferLen,
			[Out] out uint pdwRevokedBitFlag);
	}

	////////////////////////////////////////////////////////////////////////
	//Outgoing interface(s)
	////////////////////////////////////////////////////////////////////////
	[Guid("3F5E95C0-0F43-4ed4-93D2-C89A45D59B81"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDMNotification
	{
		uint WMDMMessage(
			[In] uint dwMessageType,
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszCanonicalName);
	}

	public class Constants
	{
		//basic properties
		public const string WMDM_FILE_NAME = "WMDM/FileName";  //WMDM_TYPE_STRING
		public const string WMDM_FORMAT_CODE = "WMDM/FormatCode"; //WMDM_TYPE_DWORD (WMDM_FORMATCODE)
		public const string WMDM_LAST_MODIFIED_DATE = "WMDM/LastModifiedDate"; //WMDM_TYPE_DATETIME
		public const string WMDM_FILE_CREATION_DATE = "WMDM/FileCreationDate"; //WMDM_TYPE_DATETIME
		public const string WMDM_FILE_SIZE = "WMDM/FileSize"; //WMDM_TYPE_QWORD
		public const string WMDM_FILE_ATTRIBUTES = "WMDM/FileAttributes"; //WMDM_TYPE_QWORD

		//general media properties
		public const string AUDIO_WAVE_CODEC = "WMDM/AudioWAVECodec"; //WMDM_TYPE_DWORD
		public const string VIDEO_FOUR_CC_CODEC = "WMDM/VideoFourCCCodec"; //WMDM_TYPE_DWORD
		public const string WMDM_TITLE = "WMDM/Title"; //WMDM_TYPE_STRING
		public const string WMDM_AUTHOR = "WMDM/Author"; //WMDM_TYPE_STRING
		public const string WMDM_DESCRIPTION = "WMDM/Description"; //WMDM_TYPE_STRING
		public const string WMDM_IS_PROTECTED = "WMDM/IsProtected"; //WMDM_TYPE_BOOL
		public const string WMDM_ALBUM_TITLE = "WMDM/AlbumTitle"; //WMDM_TYPE_STRING
		public const string WMDM_ALBUM_ARTIST = "WMDM/AlbumArtist"; //WMDM_TYPE_STRING
		public const string WMDM_TRACK = "WMDM/Track"; //WMDM_TYPE_DWORD
		public const string WMDM_GENRE = "WMDM/Genre"; //WMDM_TYPE_STRING
		public const string WMDM_TRACK_MOOD = "WMDM/TrackMood"; //WMDM_TYPE_STRING
		public const string WMDM_ALBUM_COVER_FORMAT = "WMDM/AlbumCoverFormat"; //WMDM_TYPE_DWORD
		public const string WMDM_ALBUM_COVER_SIZE = "WMDM/AlbumCoverSize"; //WMDM_TYPE_DWORD
		public const string WMDM_ALBUM_COVER_HEIGHT = "WMDM/AlbumCoverHeight"; //WMDM_TYPE_DWORD
		public const string WMDM_ALBUM_COVER_WIDTH = "WMDM/AlbumCoverWidth"; //WMDM_TYPE_DWORD
		public const string WMDM_ALBUM_COVER_DURATION = "WMDM/AlbumCoverDuration"; //WMDM_TYPE_DWORD

		//for compatibility reasons it is kept as string - WM library uses string
		public const string WMDM_YEAR = "WMDM/Year"; //WMDM_TYPE_STRING
		public const string WMDM_COMPOSER = "WMDM/Composer"; //WMDM_TYPE_STRING
		public const string WMDM_CODEC = "WMDM/Codec"; //WMDM_TYPE_STRING
		public const string WMDM_DRMID = "WMDM/DRMId"; //??

		//audio format info
		public const string WMDM_BITRATE = "WMDM/Bitrate"; //WMDM_TYPE_DWORD
		public const string WMDM_BITRATE_TYPE = "WMDM/BitRateType"; //WMDM_TYPE_DWORD
		public const string WMDM_SAMPLE_RATE = "WMDM/SampleRate"; //WMDM_TYPE_DWORD
		public const string WMDM_NUM_CHANNELS = "WMDM/NumChannels"; //WMDM_TYPE_DWORD
		public const string WMDM_BLOCK_ALIGNMENT = "WMDM/BlockAlignment"; //WMDM_TYPE_DWORD
		public const string WMDM_AUDIO_BIT_DEPTH = "WMDM/AudioBitDepth"; //WMDM_TYPE_DWORD

		//video format info
		public const string WMDM_TOTAL_BITRATE = "WMDM/TotalBitrate"; //WMDM_TYPE_DWORD
		public const string WMDM_VIDEO_BITRATE = "WMDM/VideoBitrate"; //WMDM_TYPE_DWORD
		public const string WMDM_FRAME_RATE = "WMDM/FrameRate"; //WMDM_TYPE_DWORD
		public const string WMDM_SCAN_TYPE = "WMDM/ScanType"; //WMDM_TYPE_DWORD
		public const string WMDM_KEYFRAME_DISTANCE = "WMDM/KeyFrameDistance"; //WMDM_TYPE_DWORD
		public const string WMDM_BUFFER_SIZE = "WMDM/BufferSize"; //WMDM_TYPE_DWORD
		public const string WMDM_QUALITY_SETTING = "WMDM/QualitySetting"; //WMDM_TYPE_QWORD

		///////////////////
		public const string WMDM_DURATION = "WMDM/Duration"; //WMDM_TYPE_QWORD
		public const string WMDM_ALBUM_ART = "WMDM/AlbumArt"; //WMDM_TYPE_STRING
		public const string WMDM_BUY_NOW = "WMDM/BuyNow"; //WMDM_TYPE_BOOL
		public const string WMDM_NONCONSUMABLE = "WMDM/NonConsumable"; //WMDM_TYPE_BOOL
		public const string WMDM_MEDIA_CLASS_PRIMARY_ID = "WMDM/MediaClassPrimaryID"; //WMDM_TYPE_STRING
		public const string WMDM_MEDIA_CLASS_SECONDARY_ID = "WMDM/MediaClassSecondaryID"; //WMDM_TYPE_STRING
		public const string WMDM_USER_EFFECTIVE_RATING = "WMDM/UserEffectiveRating"; //WMDM_TYPE_DWORD
		public const string WMDM_USER_RATING = "WMDM/UserRating"; //WMDM_TYPE_DWORD
		public const string WMDM_USER_RATING_ON_DEVICE = "WMDM/UserRatingOnDevice"; //WMDM_TYPE_DWORD
		public const string WMDM_PLAYCOUNT = "WMDM/PlayCount"; //WMDM_TYPE_DWORD
		public const string WMDM_DEVICE_PLAYCOUNT = "WMDM/DevicePlayCount"; //WMDM_TYPE_DWORD
		public const string WMDM_AUTHOR_DATE = "WMDM/AuthorDate"; //WMDM_TYPE_DATETIME
		public const string WMDM_USER_LAST_PLAY_TIME = "WMDM/UserLastPlayTime"; //WMDM_TYPE_DATETIME
		public const string WMDM_SUBTITLE = "WMDM/SubTitle"; //WMDM_TYPE_STRING
		public const string WMDM_SUBTITLE_DESCRIPTION = "WMDM/SubTitleDescription"; //WMDM_TYPE_STRING
		public const string WMDM_MEDIA_CREDITS = "WMDM/MediaCredits"; //WMDM_TYPE_STRING
		public const string WMDM_MEDIA_STATION_NAME = "WMDM/MediaStationName"; //WMDM_TYPE_STRING
		public const string WMDM_MEDIA_ORIGINAL_CHANNEL = "WMDM/MediaOriginalChannel"; //WMDM_TYPE_STRING
		public const string WMDM_MEDIA_ORIGINAL_BROADCAST_DATETIME = "WMDM/MediaOriginalBroadcastDateTime"; //WMDM_TYPE_DATETIME
		public const string WMDM_PROVIDER_COPYRIGHT = "WMDM/ProviderCopyright"; //WMDM_TYPE_STRING
		public const string WMDM_SYNC_ID = "WMDM/SyncID"; //WMDM_TYPE_STRING
		public const string WMDM_PERSISTENT_UNIQUE_ID = "WMDM/PersistentUniqueID"; //WMDM_TYPE_GUID
		public const string WMDM_WIDTH = "WMDM/Width"; //WMDM_TYPE_DWORD
		public const string WMDM_HEIGHT = "WMDM/Height"; //WMDM_TYPE_DWORD
		public const string WMDM_SYNC_TIME = "WMDM/Synctime"; //WMDM_TYPE_DATETIME
		public const string WMDM_PARENTAL_RATING = "WMDM/ParentalRating"; //WMDM_TYPE_STRING
		public const string WMDM_META_GENRE = "WMDM/MetaGenre"; //WMDM_TYPE_STRING
		public const string WMDM_IS_REPEAT = "WMDM/IsRepeat"; //WMDM_TYPE_BOOL

		//device properties
		public const string WMDM_DEVICE_SUPPORTED_PROPERTIES = "WMDM/SupportedDeviceProperties"; //PROPVARIANT = VT_ARRAY | VT_BSTR
		public const string WMDM_DEVICE_FRIENDLY_NAME = "WMDM/DeviceFriendlyName"; //PROPVARIANT = VT_BSTR
		public const string WMDM_DEVICE_SUPPORTED_FORMATS = "WMDM/FormatsSupported"; //PROPVARIANT = VT_ARRAY | VT_UI4
		public const string WMDM_DEVICE_SYNC_RELATIONSHIP_ID = "WMDM/SyncRelationshipID"; //PROPVARIANT = VT_UI4
		public const string WMDM_DEVICE_MODEL_NAME = "WMDM/DeviceModelName"; //PROPVARIANT = VT_BSTR
		public const string WMDM_DEVICE_FIRMWARE_VERSION = "WMDM/DeviceFirmwareVersion"; //PROPVARIANT = VT_BSTR
		public const string WMDM_DEVICE_VENDOR_EXTENSION = "WMDM/DeviceVendorExtension"; //PROPVARIANT = VT_BSTR
		public const string WMDM_DEVICE_PROTOCOL = "WMDM/DeviceProtocol"; //PROPVARIANT = VT_CLSID
		public const string WMDM_DEVICE_SERVICE_PROVIDER_VENDOR = "WMDM/DeviceServiceProviderVendor"; //PROPVARIANT = VT_CLSID

		public static readonly Guid WMDM_DEVICE_PROTOCOL_MTP = new Guid("979E54E5-0AFC-4604-8D93-DC798A4BCF45");
		public static readonly Guid WMDM_DEVICE_PROTOCOL_RAPI = new Guid("2A11ED91-8C8F-41e4-82D1-8386E003561C");
		public static readonly Guid WMDM_DEVICE_PROTOCOL_MSC = new Guid("A4D2C26C-A881-44bb-BD5D-1F703C71F7A9");

		public static readonly Guid WMDM_DEVICE_SERVICE_PROVIDER_MICROSOFT = new Guid("7DE8686D-78EE-43ea-A496-C625AC91CC5D");
	}

/*
 MIDL_DEFINE_GUID(CLSID, CLSID_MediaDevMgr,0x25BAAD81,0x3560,0x11D3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);
 MIDL_DEFINE_GUID(CLSID, CLSID_WMDMDevice,0x807B3CDF,0x357A,0x11d3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);
 MIDL_DEFINE_GUID(CLSID, CLSID_WMDMStorage,0x807B3CE0,0x357A,0x11d3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);
 MIDL_DEFINE_GUID(CLSID, CLSID_WMDMStorageGlobal,0x807B3CE1,0x357A,0x11d3,0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0);
 MIDL_DEFINE_GUID(CLSID, CLSID_WMDMDeviceEnum,0x430E35AF,0x3971,0x11D3,0x84,0x74,0x00,0xC0,0x4F,0x79,0xDB,0xC0);
 MIDL_DEFINE_GUID(CLSID, CLSID_WMDMStorageEnum,0xEB401A3B,0x3AF7,0x11d3,0x84,0x74,0x00,0xC0,0x4F,0x79,0xDB,0xC0);
*/

	[ComImport, CoClass(typeof(WindowsMediaDeviceManagerClass)), Guid("1DCB3A00-33ED-11d3-8470-00C04F79DBC0")]
	public interface WindowsMediaDeviceManager : IWMDeviceManager
	{
	}


	[ComImport, Guid("25BAAD81-3560-11D3-8471-00C04F79DBC0"), ClassInterface(ClassInterfaceType.None), TypeLibType((short)0)]
	public class WindowsMediaDeviceManagerClass : IWMDeviceManager, WindowsMediaDeviceManager
	{
		#region IWMDeviceManager Members

		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		public virtual extern uint GetRevision([Out] out uint pdwRevision);

		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		public virtual extern uint GetDeviceCount([Out] out uint pdwCount);

		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		public virtual extern uint EnumDevices([Out] out IWMDMEnumDevice ppEnumDevice);

		#endregion

/*
		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		public virtual extern uint GetDeviceFromCanonicalName(
			[In,MarshalAs(UnmanagedType.LPWStr)] string pwszCanonicalName,
			[Out] out IWMDMDevice ppDevice);


		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		public virtual extern uint EnumDevices2(
			[Out] out IWMDMEnumDevice ppEnumDevice);

		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		public virtual extern uint Reinitialize();

		[MethodImpl(MethodImplOptions.InternalCall,MethodCodeType=MethodCodeType.Runtime)]
		public virtual extern uint SetDeviceEnumPreference(
			[In] uint dwEnumPref);
*/			
	}
}