//*****************************************************************************
//
// Microsoft Windows Media
// Copyright ( C) Microsoft Corporation. All rights reserved.
//
// FileName:            WMFSDKFunction.cs
//
// Abstract:            Wrapper used by managed-code samples.
//
//*****************************************************************************


using System;
using System.Runtime.InteropServices;

namespace WMFSDKWrapper
{
	public class WMFSDKFunctions
	{
		[DllImport("WMVCore.dll", EntryPoint="WMCreateEditor",  SetLastError=true,
			 CharSet=CharSet.Unicode, ExactSpelling=true,
			 CallingConvention=CallingConvention.StdCall)]
		public static extern uint WMCreateEditor(
			[Out, MarshalAs(UnmanagedType.Interface)]	out IWMMetadataEditor  ppMetadataEditor );

        [DllImport("WMVCore.dll", EntryPoint = "WMCreateReader", SetLastError = true,
             CharSet = CharSet.Unicode, ExactSpelling = true,
             CallingConvention = CallingConvention.StdCall)]
        public static extern uint WMCreateReader(
          [In, MarshalAs(UnmanagedType.Interface)]      object pUnkReserved,
          [In]                                          uint dwRights,
          [Out, MarshalAs(UnmanagedType.Interface)]     out IWMReader ppReader );

        public WMFSDKFunctions()
		{
			//
			// TODO: Add constructor logic here
			//
		}
	}

	[Guid("96406BD9-2B2B-11d3-B36B-00C04F6108FF"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMMetadataEditor 
	{
		uint Open(	[In,MarshalAs(UnmanagedType.LPWStr)] string pwszFilename );
		uint Close();
		uint Flush();

	}

	[Guid("15CC68E3-27CC-4ecd-B222-3F5D02D80BD5"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMHeaderInfo3 
	{
		uint GetAttributeCount( 
			[In]									ushort wStreamNum,
			[Out]									out ushort pcAttributes );
	        
		uint GetAttributeByIndex( 
			[In]									ushort wIndex,
			[Out,In]								ref ushort pwStreamNum,
			[Out, MarshalAs(UnmanagedType.LPWStr)]	string pwszName,
			[Out,In]								ref ushort pcchNameLen,
			[Out]									out WMT_ATTR_DATATYPE pType,
			[Out, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
			[Out,In]								ref ushort pcbLength );
	        
		uint GetAttributeByName( 
			[Out,In]								ref ushort pwStreamNum,
			[Out,MarshalAs(UnmanagedType.LPWStr)]	string pszName,
			[Out]									out WMT_ATTR_DATATYPE pType,
			[Out, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
			[Out,In]								ref ushort pcbLength );
	        
		uint SetAttribute( 
			[In]									ushort wStreamNum,
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pszName,
			[In]									WMT_ATTR_DATATYPE Type,
			[In, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
			[In]									ushort cbLength );
	        
		uint GetMarkerCount( 
			[Out]									out ushort pcMarkers );
	        
		uint GetMarker( 
			[In]									ushort wIndex,
			[Out, MarshalAs(UnmanagedType.LPWStr)]	string pwszMarkerName,
			[Out,In]								ref ushort pcchMarkerNameLen,
			[Out]									out ulong pcnsMarkerTime);
	        
		uint AddMarker( 
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pwszMarkerName,
			[In]									ulong cnsMarkerTime );
	        
		uint RemoveMarker( 
			[In]									ushort wIndex );
	        
		uint GetScriptCount( 
			[Out]									out ushort pcScripts );
	        
		uint GetScript( 
			[In]									ushort wIndex,
			[Out,MarshalAs(UnmanagedType.LPWStr)]	string pwszType,
			[Out, In]								ref ushort pcchTypeLen,
			[Out,MarshalAs(UnmanagedType.LPWStr)]	string pwszCommand,
			[Out,In]								ref ushort pcchCommandLen,
			[Out]									out ulong pcnsScriptTime );
	        
		uint AddScript( 
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pwszType,
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pwszCommand,
			[In]									ulong cnsScriptTime );
	        
		uint RemoveScript( 
			[In]									ushort wIndex );  
 
		uint GetCodecInfoCount( 
			[Out]									out uint pcCodecInfos );
	        
		uint GetCodecInfo( 
			[In]									uint wIndex,
			[Out,In]								ref ushort pcchName,
			[Out,MarshalAs(UnmanagedType.LPWStr)]	string pwszName,
			[Out,In]								ref ushort pcchDescription,
			[Out,MarshalAs(UnmanagedType.LPWStr)]	string pwszDescription,
			[Out]									out WMT_CODEC_INFO_TYPE pCodecType,
			[Out,In]								ref ushort pcbCodecInfo,
			[Out, MarshalAs(UnmanagedType.LPArray)]	byte[] pbCodecInfo );

		uint GetAttributeCountEx( 
			[In]									ushort wStreamNum,
			[Out]									out ushort pcAttributes );
	        
		uint GetAttributeIndices( 
			[In]									ushort wStreamNum,
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pwszName,
			[In]									ref ushort pwLangIndex,
			[Out, MarshalAs(UnmanagedType.LPArray)] ushort[] pwIndices,
			[Out,In]								ref ushort pwCount );
				        
		uint GetAttributeByIndexEx( 
			[In]									ushort wStreamNum,
			[In]									ushort wIndex,
			[Out,MarshalAs(UnmanagedType.LPWStr)]	string pwszName,
			[Out,In]								ref ushort pwNameLen,
			[Out]									out WMT_ATTR_DATATYPE pType,
			[Out]									out ushort pwLangIndex,
			[Out, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
			[Out,In]								ref uint pdwDataLength );
									
		uint ModifyAttribute( 
			[In]									ushort wStreamNum,
			[In]									ushort wIndex,
			[In]									WMT_ATTR_DATATYPE Type,
			[In]									ushort wLangIndex,			
			[In, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
			[In]									uint dwLength );
	        
		uint AddAttribute( 
			[In]									ushort wStreamNum,
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pszName,
			[Out]									out ushort pwIndex,
			[In]									WMT_ATTR_DATATYPE Type,
			[In]									ushort wLangIndex,			
			[In, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
			[In]									uint dwLength );
	        
		uint  DeleteAttribute( 
			[In]									ushort wStreamNum,
			[In]									ushort wIndex );

		uint AddCodecInfo( 
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pszName,
			[In,MarshalAs(UnmanagedType.LPWStr)]	string pwszDescription,
			[In]									WMT_CODEC_INFO_TYPE codecType,
			[In]									ushort cbCodecInfo,
		    [In, MarshalAs(UnmanagedType.LPArray)]	byte[] pbCodecInfo );
	}

    [Guid("96406BD7-2B2B-11d3-B36B-00C04F6108FF"),
    InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IWMOutputMediaProps
    {
        uint GetStreamGroupName(
            [Out, MarshalAs(UnmanagedType.LPWStr)]	string pszName,
            [In, Out]								ref ushort pcchName);

        uint GetConnectionName(
            [Out, MarshalAs(UnmanagedType.LPWStr)]	string pszName,
            [In, Out]								ref ushort pcchName);

        uint GetMediaType(
            [Out, MarshalAs(UnmanagedType.LPStruct)] out WM_MEDIA_TYPE pType,
            [In, Out]								 ref uint pcbType);

        uint GetType(
            [Out, MarshalAs(UnmanagedType.LPStruct)] out Guid pguidType);

        uint SetMediaType(
            [Out, MarshalAs(UnmanagedType.LPStruct)] out WM_MEDIA_TYPE pType);
    }

    [Guid("E1CD3524-03D7-11d2-9EED-006097D2D7CF"),
    InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface INSSBuffer
    {
        uint GetBuffer(
            [Out, MarshalAs(UnmanagedType.LPArray)]	out byte[] ppdwBuffer );

        uint GetBufferAndLength(
            [Out, MarshalAs(UnmanagedType.LPArray)]	out byte[] ppdwBuffer,
            [Out]                                   out uint pdwLength );

        uint GetLength(
            [Out]                                   out uint pdwLength );

        uint GetMaxLength(
            [Out]                                   out uint pdwLength );

        uint SetLength(
            [In]                                    uint dwLength );
    }

    [Guid("96406BD8-2B2B-11d3-B36B-00C04F6108FF"),
    InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IWMReaderCallback
    {
        uint OnSample(
            [In]                                    uint dwOutputNum,
            [In]                                    ulong cnsSampleTime,
            [In]                                    ulong cnsSampleDuration,
            [In]                                    uint dwFlags,
            [In, MarshalAs(UnmanagedType.Interface)] INSSBuffer pSample,
            [In, MarshalAs(UnmanagedType.U4)]       uint pvContext);

        uint OnStatus(
            [In]                                    WMT_STATUS Status,
            [In]                                    uint hr,
            [In]									WMT_ATTR_DATATYPE dwType,
   			[In, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
            [In, MarshalAs(UnmanagedType.U4)]       uint pvContext );
    }

    [Guid("96406BD6-2B2B-11d3-B36B-00C04F6108FF"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMReader 
	{
        uint Close();

        uint GetOutputCount(
			[Out]									out uint pdwIndex );

        uint GetOutputFormat(
            [In]									uint dwOutputNumber,
            [In]                                    uint dwFormatNumber,
            [Out, MarshalAs(UnmanagedType.Interface)] out IWMOutputMediaProps ppProps );

        uint GetOutputFormatCount(
            [In]                                    uint dwOutputNumber,
            [Out]                                   out uint pcFormats );

        uint GetOutputProps(
            [In]                                    uint dwOutputNum,
            [Out, MarshalAs(UnmanagedType.Interface)] out IWMOutputMediaProps ppOutput );

        uint Open(
			[In, MarshalAs(UnmanagedType.LPWStr)]	string pwszURL,
            [In, MarshalAs(UnmanagedType.Interface)] IWMReaderCallback pCallback,
            [In, MarshalAs(UnmanagedType.U4)]       uint pvContext );

        uint Pause();
        uint Resume();
        uint SetOutputProps(
            [In]                                    uint dwOutputNum,
            [In, MarshalAs(UnmanagedType.Interface)] IWMOutputMediaProps pOutput );

        uint Start(
            [In]                                    ulong cnsStart,
            [In]                                    ulong cnsDuration,
            [In]                                    float fRate,
            [In, MarshalAs(UnmanagedType.U4)]       uint pvContext );

        uint Stop();
    }

    [Guid("D2827540-3EE7-432c-B14C-DC17F085D3B3"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]	
	public interface IWMDRMReader 
	{
        uint AcquireLicense(
            [In]                                    uint  dwFlags );

        uint CancelIndividualization();
        uint CancelLicenseAcquisition();
        uint CancelMonitorLicenseAcquisition();
        uint GetDRMProperty(
            [In,MarshalAs(UnmanagedType.LPWStr)]	string pwstrName,
            [Out]                                   out WMT_ATTR_DATATYPE pdwType,
  			[Out, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
            [Out]                                   out ushort pcbLength );

        uint Individualize(
            [In]                                    uint dwFlags );

        uint MonitorLicenseAcquisition();

        uint SetDRMProperty(
            [In,MarshalAs(UnmanagedType.LPWStr)]	string pwstrName,
            [In]                                    WMT_ATTR_DATATYPE  dwType,
  			[In, MarshalAs(UnmanagedType.LPArray)]	byte[] pValue,
            [In]                                    ushort cbLength );
    }

    public enum WMT_STATUS
    {
        WMT_ERROR                       = 0,
        WMT_OPENED                      = 1,
        WMT_BUFFERING_START             = 2,
        WMT_BUFFERING_STOP              = 3,
        WMT_EOF                         = 4,
        WMT_END_OF_FILE                 = 4,
        WMT_END_OF_SEGMENT              = 5,
        WMT_END_OF_STREAMING            = 6,
        WMT_LOCATING                    = 7,
        WMT_CONNECTING                  = 8,
        WMT_NO_RIGHTS                   = 9,
        WMT_MISSING_CODEC               = 10,
        WMT_STARTED                     = 11,
        WMT_STOPPED                     = 12,
        WMT_CLOSED                      = 13,
        WMT_STRIDING                    = 14,
        WMT_TIMER                       = 15,
        WMT_INDEX_PROGRESS              = 16,
        WMT_SAVEAS_START                = 17,
        WMT_SAVEAS_STOP                 = 18,
        WMT_NEW_SOURCEFLAGS             = 19,
        WMT_NEW_METADATA                = 20,
        WMT_BACKUPRESTORE_BEGIN         = 21,
        WMT_SOURCE_SWITCH               = 22,
        WMT_ACQUIRE_LICENSE             = 23,
        WMT_INDIVIDUALIZE               = 24,
        WMT_NEEDS_INDIVIDUALIZATION     = 25,
        WMT_NO_RIGHTS_EX                = 26,
        WMT_BACKUPRESTORE_END           = 27,
        WMT_BACKUPRESTORE_CONNECTING    = 28,
        WMT_BACKUPRESTORE_DISCONNECTING = 29,
        WMT_ERROR_WITHURL               = 30,
        WMT_RESTRICTED_LICENSE          = 31,
        WMT_CLIENT_CONNECT              = 32,
        WMT_CLIENT_DISCONNECT           = 33,
        WMT_NATIVE_OUTPUT_PROPS_CHANGED = 34,
        WMT_RECONNECT_START             = 35,
        WMT_RECONNECT_END               = 36,
        WMT_CLIENT_CONNECT_EX           = 37,
        WMT_CLIENT_DISCONNECT_EX        = 38,
        WMT_SET_FEC_SPAN                = 39,
        WMT_PREROLL_READY               = 40,
        WMT_PREROLL_COMPLETE            = 41,
        WMT_CLIENT_PROPERTIES           = 42,
        WMT_LICENSEURL_SIGNATURE_STATE  = 43,
        WMT_INIT_PLAYLIST_BURN          = 44,
        WMT_TRANSCRYPTOR_INIT           = 45,
        WMT_TRANSCRYPTOR_SEEKED         = 46,
        WMT_TRANSCRYPTOR_READ           = 47,
        WMT_TRANSCRYPTOR_CLOSED         = 48,
        WMT_PROXIMITY_RESULT            = 49,
        WMT_PROXIMITY_COMPLETED         = 50
    }

    public struct WM_MEDIA_TYPE
    {
        public Guid  majortype;
        public Guid  subtype;
        public bool  bFixedSizeSamples;
        public bool  bTemporalCompression;
        public ulong  lSampleSize;
        public Guid  formattype;
        public uint pUnk; //TODO: IUnknown* pUnk;
        public ulong  cbFormat;
        public byte[] pbFormat; //TODO [size_is(cbFormat)] BYTE  *pbFormat;
    }

    public enum WMT_ATTR_DATATYPE
	{
		WMT_TYPE_DWORD   = 0,
		WMT_TYPE_STRING  = 1,
		WMT_TYPE_BINARY  = 2,
		WMT_TYPE_BOOL    = 3,
		WMT_TYPE_QWORD   = 4,
		WMT_TYPE_WORD    = 5,
		WMT_TYPE_GUID    = 6,
	}

	public enum WMT_CODEC_INFO_TYPE
	{
		WMT_CODECINFO_AUDIO   = 0,
		WMT_CODECINFO_VIDEO   = 1,
		WMT_CODECINFO_UNKNOWN = 0xffffff
	}

    public enum WMT_RIGHTS
    {
        WMT_RIGHT_PLAYBACK                = 0x00000001,
        WMT_RIGHT_COPY_TO_NON_SDMI_DEVICE = 0x00000002,
        WMT_RIGHT_COPY_TO_CD              = 0x00000008,
        WMT_RIGHT_COPY_TO_SDMI_DEVICE     = 0x00000010,
        WMT_RIGHT_ONE_TIME                = 0x00000020,
        WMT_RIGHT_SAVE_STREAM_PROTECTED   = 0x00000040,
        WMT_RIGHT_COPY                    = 0x00000080,
        WMT_RIGHT_COLLABORATIVE_PLAY      = 0x00000100,
        WMT_RIGHT_SDMI_TRIGGER            = 0x00010000,
        WMT_RIGHT_SDMI_NOMORECOPIES       = 0x00020000
    }

}
