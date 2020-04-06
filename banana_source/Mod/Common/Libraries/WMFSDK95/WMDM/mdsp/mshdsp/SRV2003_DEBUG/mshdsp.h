

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Feb 03 14:03:33 2006
 */
/* Compiler settings for MsHDSP.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, oldnames, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __MsHDSP_h__
#define __MsHDSP_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMDMMetaData_FWD_DEFINED__
#define __IWMDMMetaData_FWD_DEFINED__
typedef interface IWMDMMetaData IWMDMMetaData;
#endif 	/* __IWMDMMetaData_FWD_DEFINED__ */


#ifndef __IWMDeviceManager_FWD_DEFINED__
#define __IWMDeviceManager_FWD_DEFINED__
typedef interface IWMDeviceManager IWMDeviceManager;
#endif 	/* __IWMDeviceManager_FWD_DEFINED__ */


#ifndef __IWMDeviceManager2_FWD_DEFINED__
#define __IWMDeviceManager2_FWD_DEFINED__
typedef interface IWMDeviceManager2 IWMDeviceManager2;
#endif 	/* __IWMDeviceManager2_FWD_DEFINED__ */


#ifndef __IWMDeviceManager3_FWD_DEFINED__
#define __IWMDeviceManager3_FWD_DEFINED__
typedef interface IWMDeviceManager3 IWMDeviceManager3;
#endif 	/* __IWMDeviceManager3_FWD_DEFINED__ */


#ifndef __IWMDMStorageGlobals_FWD_DEFINED__
#define __IWMDMStorageGlobals_FWD_DEFINED__
typedef interface IWMDMStorageGlobals IWMDMStorageGlobals;
#endif 	/* __IWMDMStorageGlobals_FWD_DEFINED__ */


#ifndef __IWMDMStorage_FWD_DEFINED__
#define __IWMDMStorage_FWD_DEFINED__
typedef interface IWMDMStorage IWMDMStorage;
#endif 	/* __IWMDMStorage_FWD_DEFINED__ */


#ifndef __IWMDMStorage2_FWD_DEFINED__
#define __IWMDMStorage2_FWD_DEFINED__
typedef interface IWMDMStorage2 IWMDMStorage2;
#endif 	/* __IWMDMStorage2_FWD_DEFINED__ */


#ifndef __IWMDMStorage3_FWD_DEFINED__
#define __IWMDMStorage3_FWD_DEFINED__
typedef interface IWMDMStorage3 IWMDMStorage3;
#endif 	/* __IWMDMStorage3_FWD_DEFINED__ */


#ifndef __IWMDMStorage4_FWD_DEFINED__
#define __IWMDMStorage4_FWD_DEFINED__
typedef interface IWMDMStorage4 IWMDMStorage4;
#endif 	/* __IWMDMStorage4_FWD_DEFINED__ */


#ifndef __IWMDMOperation_FWD_DEFINED__
#define __IWMDMOperation_FWD_DEFINED__
typedef interface IWMDMOperation IWMDMOperation;
#endif 	/* __IWMDMOperation_FWD_DEFINED__ */


#ifndef __IWMDMOperation2_FWD_DEFINED__
#define __IWMDMOperation2_FWD_DEFINED__
typedef interface IWMDMOperation2 IWMDMOperation2;
#endif 	/* __IWMDMOperation2_FWD_DEFINED__ */


#ifndef __IWMDMOperation3_FWD_DEFINED__
#define __IWMDMOperation3_FWD_DEFINED__
typedef interface IWMDMOperation3 IWMDMOperation3;
#endif 	/* __IWMDMOperation3_FWD_DEFINED__ */


#ifndef __IWMDMProgress_FWD_DEFINED__
#define __IWMDMProgress_FWD_DEFINED__
typedef interface IWMDMProgress IWMDMProgress;
#endif 	/* __IWMDMProgress_FWD_DEFINED__ */


#ifndef __IWMDMProgress2_FWD_DEFINED__
#define __IWMDMProgress2_FWD_DEFINED__
typedef interface IWMDMProgress2 IWMDMProgress2;
#endif 	/* __IWMDMProgress2_FWD_DEFINED__ */


#ifndef __IWMDMProgress3_FWD_DEFINED__
#define __IWMDMProgress3_FWD_DEFINED__
typedef interface IWMDMProgress3 IWMDMProgress3;
#endif 	/* __IWMDMProgress3_FWD_DEFINED__ */


#ifndef __IWMDMDevice_FWD_DEFINED__
#define __IWMDMDevice_FWD_DEFINED__
typedef interface IWMDMDevice IWMDMDevice;
#endif 	/* __IWMDMDevice_FWD_DEFINED__ */


#ifndef __IWMDMDevice2_FWD_DEFINED__
#define __IWMDMDevice2_FWD_DEFINED__
typedef interface IWMDMDevice2 IWMDMDevice2;
#endif 	/* __IWMDMDevice2_FWD_DEFINED__ */


#ifndef __IWMDMDevice3_FWD_DEFINED__
#define __IWMDMDevice3_FWD_DEFINED__
typedef interface IWMDMDevice3 IWMDMDevice3;
#endif 	/* __IWMDMDevice3_FWD_DEFINED__ */


#ifndef __IWMDMDeviceSession_FWD_DEFINED__
#define __IWMDMDeviceSession_FWD_DEFINED__
typedef interface IWMDMDeviceSession IWMDMDeviceSession;
#endif 	/* __IWMDMDeviceSession_FWD_DEFINED__ */


#ifndef __IWMDMEnumDevice_FWD_DEFINED__
#define __IWMDMEnumDevice_FWD_DEFINED__
typedef interface IWMDMEnumDevice IWMDMEnumDevice;
#endif 	/* __IWMDMEnumDevice_FWD_DEFINED__ */


#ifndef __IWMDMDeviceControl_FWD_DEFINED__
#define __IWMDMDeviceControl_FWD_DEFINED__
typedef interface IWMDMDeviceControl IWMDMDeviceControl;
#endif 	/* __IWMDMDeviceControl_FWD_DEFINED__ */


#ifndef __IWMDMEnumStorage_FWD_DEFINED__
#define __IWMDMEnumStorage_FWD_DEFINED__
typedef interface IWMDMEnumStorage IWMDMEnumStorage;
#endif 	/* __IWMDMEnumStorage_FWD_DEFINED__ */


#ifndef __IWMDMStorageControl_FWD_DEFINED__
#define __IWMDMStorageControl_FWD_DEFINED__
typedef interface IWMDMStorageControl IWMDMStorageControl;
#endif 	/* __IWMDMStorageControl_FWD_DEFINED__ */


#ifndef __IWMDMStorageControl2_FWD_DEFINED__
#define __IWMDMStorageControl2_FWD_DEFINED__
typedef interface IWMDMStorageControl2 IWMDMStorageControl2;
#endif 	/* __IWMDMStorageControl2_FWD_DEFINED__ */


#ifndef __IWMDMStorageControl3_FWD_DEFINED__
#define __IWMDMStorageControl3_FWD_DEFINED__
typedef interface IWMDMStorageControl3 IWMDMStorageControl3;
#endif 	/* __IWMDMStorageControl3_FWD_DEFINED__ */


#ifndef __IWMDMObjectInfo_FWD_DEFINED__
#define __IWMDMObjectInfo_FWD_DEFINED__
typedef interface IWMDMObjectInfo IWMDMObjectInfo;
#endif 	/* __IWMDMObjectInfo_FWD_DEFINED__ */


#ifndef __IWMDMRevoked_FWD_DEFINED__
#define __IWMDMRevoked_FWD_DEFINED__
typedef interface IWMDMRevoked IWMDMRevoked;
#endif 	/* __IWMDMRevoked_FWD_DEFINED__ */


#ifndef __IWMDMNotification_FWD_DEFINED__
#define __IWMDMNotification_FWD_DEFINED__
typedef interface IWMDMNotification IWMDMNotification;
#endif 	/* __IWMDMNotification_FWD_DEFINED__ */


#ifndef __IMDServiceProvider_FWD_DEFINED__
#define __IMDServiceProvider_FWD_DEFINED__
typedef interface IMDServiceProvider IMDServiceProvider;
#endif 	/* __IMDServiceProvider_FWD_DEFINED__ */


#ifndef __IMDServiceProvider2_FWD_DEFINED__
#define __IMDServiceProvider2_FWD_DEFINED__
typedef interface IMDServiceProvider2 IMDServiceProvider2;
#endif 	/* __IMDServiceProvider2_FWD_DEFINED__ */


#ifndef __IMDServiceProvider3_FWD_DEFINED__
#define __IMDServiceProvider3_FWD_DEFINED__
typedef interface IMDServiceProvider3 IMDServiceProvider3;
#endif 	/* __IMDServiceProvider3_FWD_DEFINED__ */


#ifndef __IMDSPEnumDevice_FWD_DEFINED__
#define __IMDSPEnumDevice_FWD_DEFINED__
typedef interface IMDSPEnumDevice IMDSPEnumDevice;
#endif 	/* __IMDSPEnumDevice_FWD_DEFINED__ */


#ifndef __IMDSPDevice_FWD_DEFINED__
#define __IMDSPDevice_FWD_DEFINED__
typedef interface IMDSPDevice IMDSPDevice;
#endif 	/* __IMDSPDevice_FWD_DEFINED__ */


#ifndef __IMDSPDevice2_FWD_DEFINED__
#define __IMDSPDevice2_FWD_DEFINED__
typedef interface IMDSPDevice2 IMDSPDevice2;
#endif 	/* __IMDSPDevice2_FWD_DEFINED__ */


#ifndef __IMDSPDevice3_FWD_DEFINED__
#define __IMDSPDevice3_FWD_DEFINED__
typedef interface IMDSPDevice3 IMDSPDevice3;
#endif 	/* __IMDSPDevice3_FWD_DEFINED__ */


#ifndef __IMDSPDeviceControl_FWD_DEFINED__
#define __IMDSPDeviceControl_FWD_DEFINED__
typedef interface IMDSPDeviceControl IMDSPDeviceControl;
#endif 	/* __IMDSPDeviceControl_FWD_DEFINED__ */


#ifndef __IMDSPEnumStorage_FWD_DEFINED__
#define __IMDSPEnumStorage_FWD_DEFINED__
typedef interface IMDSPEnumStorage IMDSPEnumStorage;
#endif 	/* __IMDSPEnumStorage_FWD_DEFINED__ */


#ifndef __IMDSPStorage_FWD_DEFINED__
#define __IMDSPStorage_FWD_DEFINED__
typedef interface IMDSPStorage IMDSPStorage;
#endif 	/* __IMDSPStorage_FWD_DEFINED__ */


#ifndef __IMDSPStorage2_FWD_DEFINED__
#define __IMDSPStorage2_FWD_DEFINED__
typedef interface IMDSPStorage2 IMDSPStorage2;
#endif 	/* __IMDSPStorage2_FWD_DEFINED__ */


#ifndef __IMDSPStorage3_FWD_DEFINED__
#define __IMDSPStorage3_FWD_DEFINED__
typedef interface IMDSPStorage3 IMDSPStorage3;
#endif 	/* __IMDSPStorage3_FWD_DEFINED__ */


#ifndef __IMDSPStorage4_FWD_DEFINED__
#define __IMDSPStorage4_FWD_DEFINED__
typedef interface IMDSPStorage4 IMDSPStorage4;
#endif 	/* __IMDSPStorage4_FWD_DEFINED__ */


#ifndef __IMDSPStorageGlobals_FWD_DEFINED__
#define __IMDSPStorageGlobals_FWD_DEFINED__
typedef interface IMDSPStorageGlobals IMDSPStorageGlobals;
#endif 	/* __IMDSPStorageGlobals_FWD_DEFINED__ */


#ifndef __IMDSPObjectInfo_FWD_DEFINED__
#define __IMDSPObjectInfo_FWD_DEFINED__
typedef interface IMDSPObjectInfo IMDSPObjectInfo;
#endif 	/* __IMDSPObjectInfo_FWD_DEFINED__ */


#ifndef __IMDSPObject_FWD_DEFINED__
#define __IMDSPObject_FWD_DEFINED__
typedef interface IMDSPObject IMDSPObject;
#endif 	/* __IMDSPObject_FWD_DEFINED__ */


#ifndef __IMDSPObject2_FWD_DEFINED__
#define __IMDSPObject2_FWD_DEFINED__
typedef interface IMDSPObject2 IMDSPObject2;
#endif 	/* __IMDSPObject2_FWD_DEFINED__ */


#ifndef __IMDSPDirectTransfer_FWD_DEFINED__
#define __IMDSPDirectTransfer_FWD_DEFINED__
typedef interface IMDSPDirectTransfer IMDSPDirectTransfer;
#endif 	/* __IMDSPDirectTransfer_FWD_DEFINED__ */


#ifndef __IMDSPRevoked_FWD_DEFINED__
#define __IMDSPRevoked_FWD_DEFINED__
typedef interface IMDSPRevoked IMDSPRevoked;
#endif 	/* __IMDSPRevoked_FWD_DEFINED__ */


#ifndef __IComponentAuthenticate_FWD_DEFINED__
#define __IComponentAuthenticate_FWD_DEFINED__
typedef interface IComponentAuthenticate IComponentAuthenticate;
#endif 	/* __IComponentAuthenticate_FWD_DEFINED__ */


#ifndef __MDServiceProvider_FWD_DEFINED__
#define __MDServiceProvider_FWD_DEFINED__

#ifdef __cplusplus
typedef class MDServiceProvider MDServiceProvider;
#else
typedef struct MDServiceProvider MDServiceProvider;
#endif /* __cplusplus */

#endif 	/* __MDServiceProvider_FWD_DEFINED__ */


#ifndef __MDSPEnumDevice_FWD_DEFINED__
#define __MDSPEnumDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class MDSPEnumDevice MDSPEnumDevice;
#else
typedef struct MDSPEnumDevice MDSPEnumDevice;
#endif /* __cplusplus */

#endif 	/* __MDSPEnumDevice_FWD_DEFINED__ */


#ifndef __MDSPDevice_FWD_DEFINED__
#define __MDSPDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class MDSPDevice MDSPDevice;
#else
typedef struct MDSPDevice MDSPDevice;
#endif /* __cplusplus */

#endif 	/* __MDSPDevice_FWD_DEFINED__ */


#ifndef __MDSPEnumStorage_FWD_DEFINED__
#define __MDSPEnumStorage_FWD_DEFINED__

#ifdef __cplusplus
typedef class MDSPEnumStorage MDSPEnumStorage;
#else
typedef struct MDSPEnumStorage MDSPEnumStorage;
#endif /* __cplusplus */

#endif 	/* __MDSPEnumStorage_FWD_DEFINED__ */


#ifndef __MDSPStorage_FWD_DEFINED__
#define __MDSPStorage_FWD_DEFINED__

#ifdef __cplusplus
typedef class MDSPStorage MDSPStorage;
#else
typedef struct MDSPStorage MDSPStorage;
#endif /* __cplusplus */

#endif 	/* __MDSPStorage_FWD_DEFINED__ */


#ifndef __MDSPStorageGlobals_FWD_DEFINED__
#define __MDSPStorageGlobals_FWD_DEFINED__

#ifdef __cplusplus
typedef class MDSPStorageGlobals MDSPStorageGlobals;
#else
typedef struct MDSPStorageGlobals MDSPStorageGlobals;
#endif /* __cplusplus */

#endif 	/* __MDSPStorageGlobals_FWD_DEFINED__ */


#ifndef __HDSPPropPage_FWD_DEFINED__
#define __HDSPPropPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class HDSPPropPage HDSPPropPage;
#else
typedef struct HDSPPropPage HDSPPropPage;
#endif /* __cplusplus */

#endif 	/* __HDSPPropPage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_MsHDSP_0000 */
/* [local] */ 

#ifndef _DEFINE_WMDM_DEVICE_PROTOCOL_MTP
#define _DEFINE_WMDM_DEVICE_PROTOCOL_MTP
// {979E54E5-0AFC-4604-8D93-DC798A4BCF45}
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_MTP,
0x979e54e5, 0xafc, 0x4604, 0x8d, 0x93, 0xdc, 0x79, 0x8a, 0x4b, 0xcf, 0x45);
#endif
#ifndef _DEFINE_WMDM_DEVICE_PROTOCOL_RAPI
#define _DEFINE_WMDM_DEVICE_PROTOCOL_RAPI
// {2A11ED91-8C8F-41e4-82D1-8386E003561C}
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_RAPI,
0x2a11ed91, 0x8c8f, 0x41e4, 0x82, 0xd1, 0x83, 0x86, 0xe0, 0x3, 0x56, 0x1c);
#endif
#ifndef _DEFINE_WMDM_DEVICE_PROTOCOL_MSC
#define _DEFINE_WMDM_DEVICE_PROTOCOL_MSC
// {A4D2C26C-A881-44bb-BD5D-1F703C71F7A9}
DEFINE_GUID(WMDM_DEVICE_PROTOCOL_MSC,
0xa4d2c26c, 0xa881, 0x44bb, 0xbd, 0x5d, 0x1f, 0x70, 0x3c, 0x71, 0xf7, 0xa9);
#endif
#ifndef _DEFINE_WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT
#define _DEFINE_WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT
// {7DE8686D-78EE-43ea-A496-C625AC91CC5D}
DEFINE_GUID(WMDM_SERVICE_PROVIDER_VENDOR_MICROSOFT,
0x7de8686d, 0x78ee, 0x43ea, 0xa4, 0x96, 0xc6, 0x25, 0xac, 0x91, 0xcc, 0x5d);
#endif
typedef 
enum tagWMDM_TAG_DATATYPE
    {	WMDM_TYPE_DWORD	= 0,
	WMDM_TYPE_STRING	= 1,
	WMDM_TYPE_BINARY	= 2,
	WMDM_TYPE_BOOL	= 3,
	WMDM_TYPE_QWORD	= 4,
	WMDM_TYPE_WORD	= 5,
	WMDM_TYPE_GUID	= 6,
	WMDM_TYPE_DATE	= 7
    } 	WMDM_TAG_DATATYPE;

typedef 
enum tagWMDM_SESSION_TYPE
    {	WMDM_SESSION_NONE	= 0,
	WMDM_SESSION_TRANSFER_TO_DEVICE	= 0x1,
	WMDM_SESSION_TRANSFER_FROM_DEVICE	= 0x10,
	WMDM_SESSION_DELETE	= 0x100,
	WMDM_SESSION_CUSTOM	= 0x1000
    } 	WMDM_SESSION_TYPE;

typedef struct _tWAVEFORMATEX
    {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
    } 	_WAVEFORMATEX;

typedef struct _tagBITMAPINFOHEADER
    {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
    } 	_BITMAPINFOHEADER;

typedef struct _tagVIDEOINFOHEADER
    {
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    LONGLONG AvgTimePerFrame;
    _BITMAPINFOHEADER bmiHeader;
    } 	_VIDEOINFOHEADER;

typedef struct _tagWMFILECAPABILITIES
    {
    LPWSTR pwszMimeType;
    DWORD dwReserved;
    } 	WMFILECAPABILITIES;

typedef struct __OPAQUECOMMAND
    {
    GUID guidCommand;
    DWORD dwDataLen;
    /* [size_is] */ BYTE *pData;
    BYTE abMAC[ 20 ];
    } 	OPAQUECOMMAND;

#define	WMDMID_LENGTH	( 128 )

typedef struct __WMDMID
    {
    UINT cbSize;
    DWORD dwVendorID;
    BYTE pID[ 128 ];
    UINT SerialNumberLength;
    } 	WMDMID;

typedef struct __WMDMID *PWMDMID;

typedef struct _WMDMDATETIME
    {
    WORD wYear;
    WORD wMonth;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    } 	WMDMDATETIME;

typedef struct _WMDMDATETIME *PWMDMDATETIME;

typedef struct __WMDMRIGHTS
    {
    UINT cbSize;
    DWORD dwContentType;
    DWORD fuFlags;
    DWORD fuRights;
    DWORD dwAppSec;
    DWORD dwPlaybackCount;
    WMDMDATETIME ExpirationDate;
    } 	WMDMRIGHTS;

typedef struct __WMDMRIGHTS *PWMDMRIGHTS;

typedef struct __WMDMMetadataView
    {
    /* [string] */ WCHAR *pwszViewName;
    UINT nDepth;
    /* [size_is][string] */ WCHAR **ppwszTags;
    } 	WMDMMetadataView;

typedef 
enum tagWMDM_STORAGE_ENUM_MODE
    {	ENUM_MODE_RAW	= 0,
	ENUM_MODE_USE_DEVICE_PREF	= ENUM_MODE_RAW + 1,
	ENUM_MODE_METADATA_VIEWS	= ENUM_MODE_USE_DEVICE_PREF + 1
    } 	WMDM_STORAGE_ENUM_MODE;

typedef /* [v1_enum] */ 
enum tagWMDM_FORMATCODE
    {	WMDM_FORMATCODE_NOTUSED	= 0,
	WMDM_FORMATCODE_ALLIMAGES	= 0xffffffff,
	WMDM_FORMATCODE_UNDEFINED	= 0x3000,
	WMDM_FORMATCODE_ASSOCIATION	= 0x3001,
	WMDM_FORMATCODE_SCRIPT	= 0x3002,
	WMDM_FORMATCODE_EXECUTABLE	= 0x3003,
	WMDM_FORMATCODE_TEXT	= 0x3004,
	WMDM_FORMATCODE_HTML	= 0x3005,
	WMDM_FORMATCODE_DPOF	= 0x3006,
	WMDM_FORMATCODE_AIFF	= 0x3007,
	WMDM_FORMATCODE_WAVE	= 0x3008,
	WMDM_FORMATCODE_MP3	= 0x3009,
	WMDM_FORMATCODE_AVI	= 0x300a,
	WMDM_FORMATCODE_MPEG	= 0x300b,
	WMDM_FORMATCODE_ASF	= 0x300c,
	WMDM_FORMATCODE_RESERVED_FIRST	= 0x300d,
	WMDM_FORMATCODE_RESERVED_LAST	= 0x37ff,
	WMDM_FORMATCODE_IMAGE_UNDEFINED	= 0x3800,
	WMDM_FORMATCODE_IMAGE_EXIF	= 0x3801,
	WMDM_FORMATCODE_IMAGE_TIFFEP	= 0x3802,
	WMDM_FORMATCODE_IMAGE_FLASHPIX	= 0x3803,
	WMDM_FORMATCODE_IMAGE_BMP	= 0x3804,
	WMDM_FORMATCODE_IMAGE_CIFF	= 0x3805,
	WMDM_FORMATCODE_IMAGE_GIF	= 0x3807,
	WMDM_FORMATCODE_IMAGE_JFIF	= 0x3808,
	WMDM_FORMATCODE_IMAGE_PCD	= 0x3809,
	WMDM_FORMATCODE_IMAGE_PICT	= 0x380a,
	WMDM_FORMATCODE_IMAGE_PNG	= 0x380b,
	WMDM_FORMATCODE_IMAGE_TIFF	= 0x380d,
	WMDM_FORMATCODE_IMAGE_TIFFIT	= 0x380e,
	WMDM_FORMATCODE_IMAGE_JP2	= 0x380f,
	WMDM_FORMATCODE_IMAGE_JPX	= 0x3810,
	WMDM_FORMATCODE_IMAGE_RESERVED_FIRST	= 0x3811,
	WMDM_FORMATCODE_IMAGE_RESERVED_LAST	= 0x3fff,
	WMDM_FORMATCODE_UNDEFINEDFIRMWARE	= 0xb802,
	WMDM_FORMATCODE_WINDOWSIMAGEFORMAT	= 0xb881,
	WMDM_FORMATCODE_UNDEFINEDAUDIO	= 0xb900,
	WMDM_FORMATCODE_WMA	= 0xb901,
	WMDM_FORMATCODE_UNDEFINEDVIDEO	= 0xb980,
	WMDM_FORMATCODE_WMV	= 0xb981,
	WMDM_FORMATCODE_UNDEFINEDCOLLECTION	= 0xba00,
	WMDM_FORMATCODE_ABSTRACTMULTIMEDIAALBUM	= 0xba01,
	WMDM_FORMATCODE_ABSTRACTIMAGEALBUM	= 0xba02,
	WMDM_FORMATCODE_ABSTRACTAUDIOALBUM	= 0xba03,
	WMDM_FORMATCODE_ABSTRACTVIDEOALBUM	= 0xba04,
	WMDM_FORMATCODE_ABSTRACTAUDIOVIDEOPLAYLIST	= 0xba05,
	WMDM_FORMATCODE_ABSTRACTCONTACTGROUP	= 0xba06,
	WMDM_FORMATCODE_ABSTRACTMESSAGEFOLDER	= 0xba07,
	WMDM_FORMATCODE_ABSTRACTCHAPTEREDPRODUCTION	= 0xba08,
	WMDM_FORMATCODE_WPLPLAYLIST	= 0xba10,
	WMDM_FORMATCODE_M3UPLAYLIST	= 0xba11,
	WMDM_FORMATCODE_MPLPLAYLIST	= 0xba12,
	WMDM_FORMATCODE_ASXPLAYLIST	= 0xba13,
	WMDM_FORMATCODE_PLSPLAYLIST	= 0xba14,
	WMDM_FORMATCODE_UNDEFINEDDOCUMENT	= 0xba80,
	WMDM_FORMATCODE_ABSTRACTDOCUMENT	= 0xba81,
	WMDM_FORMATCODE_UNDEFINEDMESSAGE	= 0xbb00,
	WMDM_FORMATCODE_ABSTRACTMESSAGE	= 0xbb01,
	WMDM_FORMATCODE_UNDEFINEDCONTACT	= 0xbb80,
	WMDM_FORMATCODE_ABSTRACTCONTACT	= 0xbb81,
	WMDM_FORMATCODE_VCARD2	= 0xbb82,
	WMDM_FORMATCODE_VCARD3	= 0xbb83,
	WMDM_FORMATCODE_UNDEFINEDCALENDARITEM	= 0xbe00,
	WMDM_FORMATCODE_ABSTRACTCALENDARITEM	= 0xbe01,
	WMDM_FORMATCODE_VCALENDAR1	= 0xbe02,
	WMDM_FORMATCODE_UNDEFINEDWINDOWSEXECUTABLE	= 0xbe80
    } 	WMDM_FORMATCODE;

typedef /* [v1_enum] */ 
enum _WMDM_ENUM_PROP_VALID_VALUES_FORM
    {	WMDM_ENUM_PROP_VALID_VALUES_ANY	= 0,
	WMDM_ENUM_PROP_VALID_VALUES_RANGE	= WMDM_ENUM_PROP_VALID_VALUES_ANY + 1,
	WMDM_ENUM_PROP_VALID_VALUES_ENUM	= WMDM_ENUM_PROP_VALID_VALUES_RANGE + 1
    } 	WMDM_ENUM_PROP_VALID_VALUES_FORM;

typedef struct _WMDM_PROP_VALUES_RANGE
    {
    PROPVARIANT rangeMin;
    PROPVARIANT rangeMax;
    PROPVARIANT rangeStep;
    } 	WMDM_PROP_VALUES_RANGE;

typedef struct _WMDM_PROP_VALUES_ENUM
    {
    UINT cEnumValues;
    /* [size_is] */ PROPVARIANT *pValues;
    } 	WMDM_PROP_VALUES_ENUM;

typedef struct _WMDM_PROP_DESC
    {
    LPWSTR pwszPropName;
    WMDM_ENUM_PROP_VALID_VALUES_FORM ValidValuesForm;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()] */  /* Empty union arm */ 
        /* [case()] */ WMDM_PROP_VALUES_RANGE ValidValuesRange;
        /* [case()] */ WMDM_PROP_VALUES_ENUM EnumeratedValidValues;
        } 	ValidValues;
    } 	WMDM_PROP_DESC;

typedef struct _WMDM_PROP_CONFIG
    {
    UINT nPreference;
    UINT nPropDesc;
    /* [size_is] */ WMDM_PROP_DESC *pPropDesc;
    } 	WMDM_PROP_CONFIG;

typedef struct _WMDM_FORMAT_CAPABILITY
    {
    UINT nPropConfig;
    /* [size_is] */ WMDM_PROP_CONFIG *pConfigs;
    } 	WMDM_FORMAT_CAPABILITY;

#define	WMDM_MAC_LENGTH	( 8 )

typedef 
enum tagWMDM_FIND_SCOPE
    {	WMDM_FIND_SCOPE_GLOBAL	= 0,
	WMDM_FIND_SCOPE_IMMEDIATE_CHILDREN	= WMDM_FIND_SCOPE_GLOBAL + 1
    } 	WMDM_FIND_SCOPE;

// WMDM HRESULTS
//
//Success codes
//
#define WMDM_S_NOT_ALL_PROPERTIES_APPLIED       0x00045001L
#define WMDM_S_NOT_ALL_PROPERTIES_RETRIEVED     0x00045002L
//
//Error codes
//
#define WMDM_E_BUSY                             0x80045000L
#define WMDM_E_INTERFACEDEAD                    0x80045001L
#define WMDM_E_INVALIDTYPE                      0x80045002L
#define WMDM_E_PROCESSFAILED                    0x80045003L
#define WMDM_E_NOTSUPPORTED                     0x80045004L
#define WMDM_E_NOTCERTIFIED                     0x80045005L
#define WMDM_E_NORIGHTS                         0x80045006L
#define WMDM_E_CALL_OUT_OF_SEQUENCE             0x80045007L
#define WMDM_E_BUFFERTOOSMALL                   0x80045008L
#define WMDM_E_MOREDATA                         0x80045009L
#define WMDM_E_MAC_CHECK_FAILED                 0x8004500AL
#define WMDM_E_USER_CANCELLED                   0x8004500BL
#define WMDM_E_SDMI_TRIGGER                     0x8004500CL
#define WMDM_E_SDMI_NOMORECOPIES                0x8004500DL
#define WMDM_E_REVOKED                          0x8004500EL
#define WMDM_E_LICENSE_NOTEXIST                 0x8004500FL
#define WMDM_E_INCORRECT_APPSEC                 0x80045010L
#define WMDM_E_INCORRECT_RIGHTS                 0x80045011L
#define WMDM_E_LICENSE_EXPIRED                  0x80045012L
#define WMDM_E_CANTOPEN_PMSN_SERVICE_PIPE       0x80045013L
#define WMDM_E_TOO_MANY_SESSIONS                0x80045013L
// Revocation Flags
#define WMDM_WMDM_REVOKED                       0x00000001
#define WMDM_APP_REVOKED                        0x00000002
#define WMDM_SP_REVOKED                         0x00000004
#define WMDM_SCP_REVOKED                        0x00000008
// GetFormatSupport2 Flags
#define WMDM_GET_FORMAT_SUPPORT_AUDIO           0x00000001
#define WMDM_GET_FORMAT_SUPPORT_VIDEO           0x00000002
#define WMDM_GET_FORMAT_SUPPORT_FILE            0x00000004
// MDMRIGHTS Flags
#define WMDM_RIGHTS_PLAYBACKCOUNT               0x00000001
#define WMDM_RIGHTS_EXPIRATIONDATE              0x00000002
#define WMDM_RIGHTS_GROUPID                     0x00000004
#define WMDM_RIGHTS_FREESERIALIDS               0x00000008
#define WMDM_RIGHTS_NAMEDSERIALIDS              0x00000010
// Device Type Flags
#define WMDM_DEVICE_TYPE_PLAYBACK               0x00000001
#define WMDM_DEVICE_TYPE_RECORD                 0x00000002
#define WMDM_DEVICE_TYPE_DECODE                 0x00000004
#define WMDM_DEVICE_TYPE_ENCODE                 0x00000008
#define WMDM_DEVICE_TYPE_STORAGE                0x00000010
#define WMDM_DEVICE_TYPE_VIRTUAL                0x00000020
#define WMDM_DEVICE_TYPE_SDMI                   0x00000040
#define WMDM_DEVICE_TYPE_NONSDMI                0x00000080
#define WMDM_DEVICE_TYPE_NONREENTRANT           0x00000100
#define WMDM_DEVICE_TYPE_FILELISTRESYNC         0x00000200
#define WMDM_DEVICE_TYPE_VIEW_PREF_METADATAVIEW 0x00000400
// Device Power Source Flags
#define WMDM_POWER_CAP_BATTERY                  0x00000001
#define WMDM_POWER_CAP_EXTERNAL                 0x00000002
#define WMDM_POWER_IS_BATTERY                   0x00000004
#define WMDM_POWER_IS_EXTERNAL                  0x00000008
#define WMDM_POWER_PERCENT_AVAILABLE            0x00000010
// Device Status Flags
#define WMDM_STATUS_READY                       0x00000001
#define WMDM_STATUS_BUSY                        0x00000002
#define WMDM_STATUS_DEVICE_NOTPRESENT           0x00000004
#define WMDM_STATUS_DEVICECONTROL_PLAYING       0x00000008
#define WMDM_STATUS_DEVICECONTROL_RECORDING     0x00000010
#define WMDM_STATUS_DEVICECONTROL_PAUSED        0x00000020
#define WMDM_STATUS_DEVICECONTROL_REMOTE        0x00000040
#define WMDM_STATUS_DEVICECONTROL_STREAM        0x00000080
#define WMDM_STATUS_STORAGE_NOTPRESENT          0x00000100
#define WMDM_STATUS_STORAGE_INITIALIZING        0x00000200
#define WMDM_STATUS_STORAGE_BROKEN              0x00000400
#define WMDM_STATUS_STORAGE_NOTSUPPORTED        0x00000800
#define WMDM_STATUS_STORAGE_UNFORMATTED         0x00001000
#define WMDM_STATUS_STORAGECONTROL_INSERTING    0x00002000
#define WMDM_STATUS_STORAGECONTROL_DELETING     0x00004000
#define WMDM_STATUS_STORAGECONTROL_APPENDING    0x00008000
#define WMDM_STATUS_STORAGECONTROL_MOVING       0x00010000
#define WMDM_STATUS_STORAGECONTROL_READING      0x00020000
// Device Capabilities Flags
#define WMDM_DEVICECAP_CANPLAY                  0x00000001
#define WMDM_DEVICECAP_CANSTREAMPLAY            0x00000002
#define WMDM_DEVICECAP_CANRECORD                0x00000004
#define WMDM_DEVICECAP_CANSTREAMRECORD          0x00000008
#define WMDM_DEVICECAP_CANPAUSE                 0x00000010
#define WMDM_DEVICECAP_CANRESUME                0x00000020
#define WMDM_DEVICECAP_CANSTOP                  0x00000040
#define WMDM_DEVICECAP_CANSEEK                  0x00000080
#define WMDM_DEVICECAP_HASSECURECLOCK           0x00000100
// WMDM Seek Flags
#define WMDM_SEEK_REMOTECONTROL                 0x00000001
#define WMDM_SEEK_STREAMINGAUDIO                0x00000002
// Storage Attributes Flags
#define WMDM_STORAGE_ATTR_FILESYSTEM            0x00000001
#define WMDM_STORAGE_ATTR_REMOVABLE             0x00000002
#define WMDM_STORAGE_ATTR_NONREMOVABLE          0x00000004
#define WMDM_FILE_ATTR_FOLDER                   0x00000008
#define WMDM_FILE_ATTR_LINK                     0x00000010
#define WMDM_FILE_ATTR_FILE                     0x00000020
#define WMDM_FILE_ATTR_VIDEO                    0x00000040
#define WMDM_STORAGE_ATTR_CANEDITMETADATA       0x00000080
#define WMDM_STORAGE_ATTR_FOLDERS               0x00000100
#define WMDM_FILE_ATTR_AUDIO                    0x00001000
#define WMDM_FILE_ATTR_DATA                     0x00002000
#define WMDM_FILE_ATTR_CANPLAY                  0x00004000
#define WMDM_FILE_ATTR_CANDELETE                0x00008000
#define WMDM_FILE_ATTR_CANMOVE                  0x00010000
#define WMDM_FILE_ATTR_CANRENAME                0x00020000
#define WMDM_FILE_ATTR_CANREAD                  0x00040000
#define WMDM_FILE_ATTR_MUSIC                    0x00080000
#define WMDM_FILE_CREATE_OVERWRITE              0x00100000
#define WMDM_FILE_ATTR_AUDIOBOOK                0x00200000
#define WMDM_FILE_ATTR_HIDDEN                   0x00400000
#define WMDM_FILE_ATTR_SYSTEM                   0x00800000
#define WMDM_FILE_ATTR_READONLY                 0x01000000
#define WMDM_STORAGE_ATTR_HAS_FOLDERS           0x02000000
#define WMDM_STORAGE_ATTR_HAS_FILES             0x04000000
#define WMDM_STORAGE_IS_DEFAULT                 0x08000000
#define WMDM_STORAGE_CONTAINS_DEFAULT           0x10000000
#define WMDM_STORAGE_ATTR_VIRTUAL               0x20000000
// Storage Capabilities Flags
#define WMDM_STORAGECAP_FOLDERSINROOT           0x00000001
#define WMDM_STORAGECAP_FILESINROOT             0x00000002
#define WMDM_STORAGECAP_FOLDERSINFOLDERS        0x00000004
#define WMDM_STORAGECAP_FILESINFOLDERS          0x00000008
#define WMDM_STORAGECAP_FOLDERLIMITEXISTS       0x00000010
#define WMDM_STORAGECAP_FILELIMITEXISTS         0x00000020
#define WMDM_STORAGECAP_NOT_INITIALIZABLE       0x00000040
// WMDM Mode Flags
#define WMDM_MODE_BLOCK                         0x00000001
#define WMDM_MODE_THREAD                        0x00000002
#define WMDM_CONTENT_FILE                       0x00000004
#define WMDM_CONTENT_FOLDER                     0x00000008
#define WMDM_CONTENT_OPERATIONINTERFACE         0x00000010
#define WMDM_MODE_QUERY                         0x00000020
#define WMDM_MODE_PROGRESS                      0x00000040
#define WMDM_MODE_TRANSFER_PROTECTED            0x00000080
#define WMDM_MODE_TRANSFER_UNPROTECTED          0x00000100
#define WMDM_STORAGECONTROL_INSERTBEFORE        0x00000200
#define WMDM_STORAGECONTROL_INSERTAFTER         0x00000400
#define WMDM_STORAGECONTROL_INSERTINTO          0x00000800
#define WMDM_MODE_RECURSIVE                     0x00001000
// WMDM Rights Flags
// NON_SDMI = !SDMI_PROTECTED
// SDMI = SDMI_VALIDATED
#define WMDM_RIGHTS_PLAY_ON_PC                  0x00000001
#define WMDM_RIGHTS_COPY_TO_NON_SDMI_DEVICE     0x00000002
#define WMDM_RIGHTS_COPY_TO_CD                  0x00000008
#define WMDM_RIGHTS_COPY_TO_SDMI_DEVICE         0x00000010
// WMDM Seek Flags
#define WMDM_SEEK_BEGIN                         0x00000001
#define WMDM_SEEK_CURRENT                       0x00000002
#define WMDM_SEEK_END                           0x00000008
// WMDM Device Enumeration Flags
#define DO_NOT_VIRTUALIZE_STORAGES_AS_DEVICES   0x00000001
#define ALLOW_OUTOFBAND_NOTIFICATION            0x00000002

enum WMDMMessage
    {	WMDM_MSG_DEVICE_ARRIVAL	= 0,
	WMDM_MSG_DEVICE_REMOVAL	= WMDM_MSG_DEVICE_ARRIVAL + 1,
	WMDM_MSG_MEDIA_ARRIVAL	= WMDM_MSG_DEVICE_REMOVAL + 1,
	WMDM_MSG_MEDIA_REMOVAL	= WMDM_MSG_MEDIA_ARRIVAL + 1
    } ;














extern RPC_IF_HANDLE __MIDL_itf_MsHDSP_0000_ClientIfHandle;
extern RPC_IF_HANDLE __MIDL_itf_MsHDSP_0000_ServerIfHandle;

#ifndef __IWMDMMetaData_INTERFACE_DEFINED__
#define __IWMDMMetaData_INTERFACE_DEFINED__

/* interface IWMDMMetaData */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMMetaData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC3B0663-0951-460a-9A80-0DCEED3C043C")
    IWMDMMetaData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddItem( 
            /* [in] */ WMDM_TAG_DATATYPE Type,
            /* [string][in] */ LPCWSTR pwszTagName,
            /* [unique][size_is][in] */ BYTE *pValue,
            /* [in] */ UINT iLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryByName( 
            /* [string][in] */ LPCWSTR pwszTagName,
            /* [out] */ WMDM_TAG_DATATYPE *pType,
            /* [size_is][size_is][out] */ BYTE **pValue,
            /* [out] */ UINT *pcbLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryByIndex( 
            /* [in] */ UINT iIndex,
            /* [string][out] */ WCHAR **ppwszName,
            /* [out] */ WMDM_TAG_DATATYPE *pType,
            /* [size_is][size_is][out] */ BYTE **ppValue,
            /* [out] */ UINT *pcbLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemCount( 
            /* [out] */ UINT *iCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMMetaDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMMetaData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMMetaData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMMetaData * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddItem )( 
            IWMDMMetaData * This,
            /* [in] */ WMDM_TAG_DATATYPE Type,
            /* [string][in] */ LPCWSTR pwszTagName,
            /* [unique][size_is][in] */ BYTE *pValue,
            /* [in] */ UINT iLength);
        
        HRESULT ( STDMETHODCALLTYPE *QueryByName )( 
            IWMDMMetaData * This,
            /* [string][in] */ LPCWSTR pwszTagName,
            /* [out] */ WMDM_TAG_DATATYPE *pType,
            /* [size_is][size_is][out] */ BYTE **pValue,
            /* [out] */ UINT *pcbLength);
        
        HRESULT ( STDMETHODCALLTYPE *QueryByIndex )( 
            IWMDMMetaData * This,
            /* [in] */ UINT iIndex,
            /* [string][out] */ WCHAR **ppwszName,
            /* [out] */ WMDM_TAG_DATATYPE *pType,
            /* [size_is][size_is][out] */ BYTE **ppValue,
            /* [out] */ UINT *pcbLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemCount )( 
            IWMDMMetaData * This,
            /* [out] */ UINT *iCount);
        
        END_INTERFACE
    } IWMDMMetaDataVtbl;

    interface IWMDMMetaData
    {
        CONST_VTBL struct IWMDMMetaDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMMetaData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMMetaData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMMetaData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMMetaData_AddItem(This,Type,pwszTagName,pValue,iLength)	\
    (This)->lpVtbl -> AddItem(This,Type,pwszTagName,pValue,iLength)

#define IWMDMMetaData_QueryByName(This,pwszTagName,pType,pValue,pcbLength)	\
    (This)->lpVtbl -> QueryByName(This,pwszTagName,pType,pValue,pcbLength)

#define IWMDMMetaData_QueryByIndex(This,iIndex,ppwszName,pType,ppValue,pcbLength)	\
    (This)->lpVtbl -> QueryByIndex(This,iIndex,ppwszName,pType,ppValue,pcbLength)

#define IWMDMMetaData_GetItemCount(This,iCount)	\
    (This)->lpVtbl -> GetItemCount(This,iCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMMetaData_AddItem_Proxy( 
    IWMDMMetaData * This,
    /* [in] */ WMDM_TAG_DATATYPE Type,
    /* [string][in] */ LPCWSTR pwszTagName,
    /* [unique][size_is][in] */ BYTE *pValue,
    /* [in] */ UINT iLength);


void __RPC_STUB IWMDMMetaData_AddItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMMetaData_QueryByName_Proxy( 
    IWMDMMetaData * This,
    /* [string][in] */ LPCWSTR pwszTagName,
    /* [out] */ WMDM_TAG_DATATYPE *pType,
    /* [size_is][size_is][out] */ BYTE **pValue,
    /* [out] */ UINT *pcbLength);


void __RPC_STUB IWMDMMetaData_QueryByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMMetaData_QueryByIndex_Proxy( 
    IWMDMMetaData * This,
    /* [in] */ UINT iIndex,
    /* [string][out] */ WCHAR **ppwszName,
    /* [out] */ WMDM_TAG_DATATYPE *pType,
    /* [size_is][size_is][out] */ BYTE **ppValue,
    /* [out] */ UINT *pcbLength);


void __RPC_STUB IWMDMMetaData_QueryByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMMetaData_GetItemCount_Proxy( 
    IWMDMMetaData * This,
    /* [out] */ UINT *iCount);


void __RPC_STUB IWMDMMetaData_GetItemCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMMetaData_INTERFACE_DEFINED__ */


#ifndef __IWMDeviceManager_INTERFACE_DEFINED__
#define __IWMDeviceManager_INTERFACE_DEFINED__

/* interface IWMDeviceManager */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDeviceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A00-33ED-11d3-8470-00C04F79DBC0")
    IWMDeviceManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRevision( 
            /* [out] */ DWORD *pdwRevision) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceCount( 
            /* [out] */ DWORD *pdwCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumDevices( 
            /* [out] */ IWMDMEnumDevice **ppEnumDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDeviceManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDeviceManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDeviceManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDeviceManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRevision )( 
            IWMDeviceManager * This,
            /* [out] */ DWORD *pdwRevision);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IWMDeviceManager * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )( 
            IWMDeviceManager * This,
            /* [out] */ IWMDMEnumDevice **ppEnumDevice);
        
        END_INTERFACE
    } IWMDeviceManagerVtbl;

    interface IWMDeviceManager
    {
        CONST_VTBL struct IWMDeviceManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDeviceManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDeviceManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDeviceManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDeviceManager_GetRevision(This,pdwRevision)	\
    (This)->lpVtbl -> GetRevision(This,pdwRevision)

#define IWMDeviceManager_GetDeviceCount(This,pdwCount)	\
    (This)->lpVtbl -> GetDeviceCount(This,pdwCount)

#define IWMDeviceManager_EnumDevices(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices(This,ppEnumDevice)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDeviceManager_GetRevision_Proxy( 
    IWMDeviceManager * This,
    /* [out] */ DWORD *pdwRevision);


void __RPC_STUB IWMDeviceManager_GetRevision_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDeviceManager_GetDeviceCount_Proxy( 
    IWMDeviceManager * This,
    /* [out] */ DWORD *pdwCount);


void __RPC_STUB IWMDeviceManager_GetDeviceCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDeviceManager_EnumDevices_Proxy( 
    IWMDeviceManager * This,
    /* [out] */ IWMDMEnumDevice **ppEnumDevice);


void __RPC_STUB IWMDeviceManager_EnumDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDeviceManager_INTERFACE_DEFINED__ */


#ifndef __IWMDeviceManager2_INTERFACE_DEFINED__
#define __IWMDeviceManager2_INTERFACE_DEFINED__

/* interface IWMDeviceManager2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDeviceManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("923E5249-8731-4c5b-9B1C-B8B60B6E46AF")
    IWMDeviceManager2 : public IWMDeviceManager
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDeviceFromCanonicalName( 
            /* [string][in] */ LPCWSTR pwszCanonicalName,
            /* [out] */ IWMDMDevice **ppDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumDevices2( 
            /* [out] */ IWMDMEnumDevice **ppEnumDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reinitialize( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDeviceManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDeviceManager2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDeviceManager2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDeviceManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRevision )( 
            IWMDeviceManager2 * This,
            /* [out] */ DWORD *pdwRevision);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IWMDeviceManager2 * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )( 
            IWMDeviceManager2 * This,
            /* [out] */ IWMDMEnumDevice **ppEnumDevice);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceFromCanonicalName )( 
            IWMDeviceManager2 * This,
            /* [string][in] */ LPCWSTR pwszCanonicalName,
            /* [out] */ IWMDMDevice **ppDevice);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices2 )( 
            IWMDeviceManager2 * This,
            /* [out] */ IWMDMEnumDevice **ppEnumDevice);
        
        HRESULT ( STDMETHODCALLTYPE *Reinitialize )( 
            IWMDeviceManager2 * This);
        
        END_INTERFACE
    } IWMDeviceManager2Vtbl;

    interface IWMDeviceManager2
    {
        CONST_VTBL struct IWMDeviceManager2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDeviceManager2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDeviceManager2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDeviceManager2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDeviceManager2_GetRevision(This,pdwRevision)	\
    (This)->lpVtbl -> GetRevision(This,pdwRevision)

#define IWMDeviceManager2_GetDeviceCount(This,pdwCount)	\
    (This)->lpVtbl -> GetDeviceCount(This,pdwCount)

#define IWMDeviceManager2_EnumDevices(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices(This,ppEnumDevice)


#define IWMDeviceManager2_GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice)	\
    (This)->lpVtbl -> GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice)

#define IWMDeviceManager2_EnumDevices2(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices2(This,ppEnumDevice)

#define IWMDeviceManager2_Reinitialize(This)	\
    (This)->lpVtbl -> Reinitialize(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDeviceManager2_GetDeviceFromCanonicalName_Proxy( 
    IWMDeviceManager2 * This,
    /* [string][in] */ LPCWSTR pwszCanonicalName,
    /* [out] */ IWMDMDevice **ppDevice);


void __RPC_STUB IWMDeviceManager2_GetDeviceFromCanonicalName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDeviceManager2_EnumDevices2_Proxy( 
    IWMDeviceManager2 * This,
    /* [out] */ IWMDMEnumDevice **ppEnumDevice);


void __RPC_STUB IWMDeviceManager2_EnumDevices2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDeviceManager2_Reinitialize_Proxy( 
    IWMDeviceManager2 * This);


void __RPC_STUB IWMDeviceManager2_Reinitialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDeviceManager2_INTERFACE_DEFINED__ */


#ifndef __IWMDeviceManager3_INTERFACE_DEFINED__
#define __IWMDeviceManager3_INTERFACE_DEFINED__

/* interface IWMDeviceManager3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDeviceManager3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("af185c41-100d-46ed-be2e-9ce8c44594ef")
    IWMDeviceManager3 : public IWMDeviceManager2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDeviceEnumPreference( 
            /* [in] */ DWORD dwEnumPref) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDeviceManager3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDeviceManager3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDeviceManager3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDeviceManager3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRevision )( 
            IWMDeviceManager3 * This,
            /* [out] */ DWORD *pdwRevision);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IWMDeviceManager3 * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )( 
            IWMDeviceManager3 * This,
            /* [out] */ IWMDMEnumDevice **ppEnumDevice);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceFromCanonicalName )( 
            IWMDeviceManager3 * This,
            /* [string][in] */ LPCWSTR pwszCanonicalName,
            /* [out] */ IWMDMDevice **ppDevice);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices2 )( 
            IWMDeviceManager3 * This,
            /* [out] */ IWMDMEnumDevice **ppEnumDevice);
        
        HRESULT ( STDMETHODCALLTYPE *Reinitialize )( 
            IWMDeviceManager3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDeviceEnumPreference )( 
            IWMDeviceManager3 * This,
            /* [in] */ DWORD dwEnumPref);
        
        END_INTERFACE
    } IWMDeviceManager3Vtbl;

    interface IWMDeviceManager3
    {
        CONST_VTBL struct IWMDeviceManager3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDeviceManager3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDeviceManager3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDeviceManager3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDeviceManager3_GetRevision(This,pdwRevision)	\
    (This)->lpVtbl -> GetRevision(This,pdwRevision)

#define IWMDeviceManager3_GetDeviceCount(This,pdwCount)	\
    (This)->lpVtbl -> GetDeviceCount(This,pdwCount)

#define IWMDeviceManager3_EnumDevices(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices(This,ppEnumDevice)


#define IWMDeviceManager3_GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice)	\
    (This)->lpVtbl -> GetDeviceFromCanonicalName(This,pwszCanonicalName,ppDevice)

#define IWMDeviceManager3_EnumDevices2(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices2(This,ppEnumDevice)

#define IWMDeviceManager3_Reinitialize(This)	\
    (This)->lpVtbl -> Reinitialize(This)


#define IWMDeviceManager3_SetDeviceEnumPreference(This,dwEnumPref)	\
    (This)->lpVtbl -> SetDeviceEnumPreference(This,dwEnumPref)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDeviceManager3_SetDeviceEnumPreference_Proxy( 
    IWMDeviceManager3 * This,
    /* [in] */ DWORD dwEnumPref);


void __RPC_STUB IWMDeviceManager3_SetDeviceEnumPreference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDeviceManager3_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorageGlobals_INTERFACE_DEFINED__
#define __IWMDMStorageGlobals_INTERFACE_DEFINED__

/* interface IWMDMStorageGlobals */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorageGlobals;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A07-33ED-11d3-8470-00C04F79DBC0")
    IWMDMStorageGlobals : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [out] */ DWORD *pdwCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSerialNumber( 
            /* [out] */ PWMDMID pSerialNum,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalSize( 
            /* [out] */ DWORD *pdwTotalSizeLow,
            /* [out] */ DWORD *pdwTotalSizeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalFree( 
            /* [out] */ DWORD *pdwFreeLow,
            /* [out] */ DWORD *pdwFreeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalBad( 
            /* [out] */ DWORD *pdwBadLow,
            /* [out] */ DWORD *pdwBadHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ DWORD *pdwStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorageGlobalsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorageGlobals * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorageGlobals * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorageGlobals * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IWMDMStorageGlobals * This,
            /* [out] */ DWORD *pdwCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IWMDMStorageGlobals * This,
            /* [out] */ PWMDMID pSerialNum,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalSize )( 
            IWMDMStorageGlobals * This,
            /* [out] */ DWORD *pdwTotalSizeLow,
            /* [out] */ DWORD *pdwTotalSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalFree )( 
            IWMDMStorageGlobals * This,
            /* [out] */ DWORD *pdwFreeLow,
            /* [out] */ DWORD *pdwFreeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalBad )( 
            IWMDMStorageGlobals * This,
            /* [out] */ DWORD *pdwBadLow,
            /* [out] */ DWORD *pdwBadHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWMDMStorageGlobals * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWMDMStorageGlobals * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress);
        
        END_INTERFACE
    } IWMDMStorageGlobalsVtbl;

    interface IWMDMStorageGlobals
    {
        CONST_VTBL struct IWMDMStorageGlobalsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorageGlobals_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorageGlobals_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorageGlobals_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorageGlobals_GetCapabilities(This,pdwCapabilities)	\
    (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities)

#define IWMDMStorageGlobals_GetSerialNumber(This,pSerialNum,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNum,abMac)

#define IWMDMStorageGlobals_GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh)	\
    (This)->lpVtbl -> GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh)

#define IWMDMStorageGlobals_GetTotalFree(This,pdwFreeLow,pdwFreeHigh)	\
    (This)->lpVtbl -> GetTotalFree(This,pdwFreeLow,pdwFreeHigh)

#define IWMDMStorageGlobals_GetTotalBad(This,pdwBadLow,pdwBadHigh)	\
    (This)->lpVtbl -> GetTotalBad(This,pdwBadLow,pdwBadHigh)

#define IWMDMStorageGlobals_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IWMDMStorageGlobals_Initialize(This,fuMode,pProgress)	\
    (This)->lpVtbl -> Initialize(This,fuMode,pProgress)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorageGlobals_GetCapabilities_Proxy( 
    IWMDMStorageGlobals * This,
    /* [out] */ DWORD *pdwCapabilities);


void __RPC_STUB IWMDMStorageGlobals_GetCapabilities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageGlobals_GetSerialNumber_Proxy( 
    IWMDMStorageGlobals * This,
    /* [out] */ PWMDMID pSerialNum,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IWMDMStorageGlobals_GetSerialNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageGlobals_GetTotalSize_Proxy( 
    IWMDMStorageGlobals * This,
    /* [out] */ DWORD *pdwTotalSizeLow,
    /* [out] */ DWORD *pdwTotalSizeHigh);


void __RPC_STUB IWMDMStorageGlobals_GetTotalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageGlobals_GetTotalFree_Proxy( 
    IWMDMStorageGlobals * This,
    /* [out] */ DWORD *pdwFreeLow,
    /* [out] */ DWORD *pdwFreeHigh);


void __RPC_STUB IWMDMStorageGlobals_GetTotalFree_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageGlobals_GetTotalBad_Proxy( 
    IWMDMStorageGlobals * This,
    /* [out] */ DWORD *pdwBadLow,
    /* [out] */ DWORD *pdwBadHigh);


void __RPC_STUB IWMDMStorageGlobals_GetTotalBad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageGlobals_GetStatus_Proxy( 
    IWMDMStorageGlobals * This,
    /* [out] */ DWORD *pdwStatus);


void __RPC_STUB IWMDMStorageGlobals_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageGlobals_Initialize_Proxy( 
    IWMDMStorageGlobals * This,
    /* [in] */ UINT fuMode,
    /* [in] */ IWMDMProgress *pProgress);


void __RPC_STUB IWMDMStorageGlobals_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorageGlobals_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorage_INTERFACE_DEFINED__
#define __IWMDMStorage_INTERFACE_DEFINED__

/* interface IWMDMStorage */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A06-33ED-11d3-8470-00C04F79DBC0")
    IWMDMStorage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAttributes( 
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStorageGlobals( 
            /* [out] */ IWMDMStorageGlobals **ppStorageGlobals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDate( 
            /* [out] */ PWMDMDATETIME pDateTimeUTC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRights( 
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStorage( 
            /* [out] */ IWMDMEnumStorage **pEnumStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendOpaqueCommand( 
            /* [out][in] */ OPAQUECOMMAND *pCommand) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IWMDMStorage * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IWMDMStorage * This,
            /* [out] */ IWMDMStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IWMDMStorage * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMDMStorage * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IWMDMStorage * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWMDMStorage * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IWMDMStorage * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IWMDMStorage * This,
            /* [out] */ IWMDMEnumStorage **pEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IWMDMStorage * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        END_INTERFACE
    } IWMDMStorageVtbl;

    interface IWMDMStorage
    {
        CONST_VTBL struct IWMDMStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorage_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IWMDMStorage_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IWMDMStorage_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IWMDMStorage_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IWMDMStorage_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IWMDMStorage_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IWMDMStorage_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IWMDMStorage_EnumStorage(This,pEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,pEnumStorage)

#define IWMDMStorage_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorage_SetAttributes_Proxy( 
    IWMDMStorage * This,
    /* [in] */ DWORD dwAttributes,
    /* [unique][in] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IWMDMStorage_SetAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_GetStorageGlobals_Proxy( 
    IWMDMStorage * This,
    /* [out] */ IWMDMStorageGlobals **ppStorageGlobals);


void __RPC_STUB IWMDMStorage_GetStorageGlobals_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_GetAttributes_Proxy( 
    IWMDMStorage * This,
    /* [out] */ DWORD *pdwAttributes,
    /* [unique][out][in] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IWMDMStorage_GetAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_GetName_Proxy( 
    IWMDMStorage * This,
    /* [size_is][string][out] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IWMDMStorage_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_GetDate_Proxy( 
    IWMDMStorage * This,
    /* [out] */ PWMDMDATETIME pDateTimeUTC);


void __RPC_STUB IWMDMStorage_GetDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_GetSize_Proxy( 
    IWMDMStorage * This,
    /* [out] */ DWORD *pdwSizeLow,
    /* [out] */ DWORD *pdwSizeHigh);


void __RPC_STUB IWMDMStorage_GetSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_GetRights_Proxy( 
    IWMDMStorage * This,
    /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
    /* [out] */ UINT *pnRightsCount,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IWMDMStorage_GetRights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_EnumStorage_Proxy( 
    IWMDMStorage * This,
    /* [out] */ IWMDMEnumStorage **pEnumStorage);


void __RPC_STUB IWMDMStorage_EnumStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage_SendOpaqueCommand_Proxy( 
    IWMDMStorage * This,
    /* [out][in] */ OPAQUECOMMAND *pCommand);


void __RPC_STUB IWMDMStorage_SendOpaqueCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorage_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorage2_INTERFACE_DEFINED__
#define __IWMDMStorage2_INTERFACE_DEFINED__

/* interface IWMDMStorage2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1ED5A144-5CD5-4683-9EFF-72CBDB2D9533")
    IWMDMStorage2 : public IWMDMStorage
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStorage( 
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IWMDMStorage **ppStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAttributes2( 
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes2( 
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorage2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorage2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorage2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorage2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IWMDMStorage2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IWMDMStorage2 * This,
            /* [out] */ IWMDMStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IWMDMStorage2 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMDMStorage2 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IWMDMStorage2 * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWMDMStorage2 * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IWMDMStorage2 * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IWMDMStorage2 * This,
            /* [out] */ IWMDMEnumStorage **pEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IWMDMStorage2 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IWMDMStorage2 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IWMDMStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )( 
            IWMDMStorage2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )( 
            IWMDMStorage2 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        END_INTERFACE
    } IWMDMStorage2Vtbl;

    interface IWMDMStorage2
    {
        CONST_VTBL struct IWMDMStorage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorage2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorage2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorage2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorage2_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IWMDMStorage2_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IWMDMStorage2_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IWMDMStorage2_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IWMDMStorage2_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IWMDMStorage2_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IWMDMStorage2_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IWMDMStorage2_EnumStorage(This,pEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,pEnumStorage)

#define IWMDMStorage2_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IWMDMStorage2_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IWMDMStorage2_SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)	\
    (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)

#define IWMDMStorage2_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorage2_GetStorage_Proxy( 
    IWMDMStorage2 * This,
    /* [string][in] */ LPCWSTR pszStorageName,
    /* [out] */ IWMDMStorage **ppStorage);


void __RPC_STUB IWMDMStorage2_GetStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage2_SetAttributes2_Proxy( 
    IWMDMStorage2 * This,
    /* [in] */ DWORD dwAttributes,
    /* [in] */ DWORD dwAttributesEx,
    /* [unique][in] */ _WAVEFORMATEX *pFormat,
    /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat);


void __RPC_STUB IWMDMStorage2_SetAttributes2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage2_GetAttributes2_Proxy( 
    IWMDMStorage2 * This,
    /* [out] */ DWORD *pdwAttributes,
    /* [out] */ DWORD *pdwAttributesEx,
    /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
    /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat);


void __RPC_STUB IWMDMStorage2_GetAttributes2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorage2_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorage3_INTERFACE_DEFINED__
#define __IWMDMStorage3_INTERFACE_DEFINED__

/* interface IWMDMStorage3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorage3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97717EEA-926A-464e-96A4-247B0216026E")
    IWMDMStorage3 : public IWMDMStorage2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMetadata( 
            /* [out] */ IWMDMMetaData **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMetadata( 
            /* [in] */ IWMDMMetaData *pMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEmptyMetadataObject( 
            /* [out] */ IWMDMMetaData **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnumPreference( 
            /* [out][in] */ WMDM_STORAGE_ENUM_MODE *pMode,
            /* [in] */ DWORD nViews,
            /* [unique][size_is][in] */ WMDMMetadataView *pViews) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorage3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorage3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorage3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorage3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IWMDMStorage3 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IWMDMStorage3 * This,
            /* [out] */ IWMDMStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IWMDMStorage3 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMDMStorage3 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IWMDMStorage3 * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWMDMStorage3 * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IWMDMStorage3 * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IWMDMStorage3 * This,
            /* [out] */ IWMDMEnumStorage **pEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IWMDMStorage3 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IWMDMStorage3 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IWMDMStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )( 
            IWMDMStorage3 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )( 
            IWMDMStorage3 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            IWMDMStorage3 * This,
            /* [out] */ IWMDMMetaData **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )( 
            IWMDMStorage3 * This,
            /* [in] */ IWMDMMetaData *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEmptyMetadataObject )( 
            IWMDMStorage3 * This,
            /* [out] */ IWMDMMetaData **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnumPreference )( 
            IWMDMStorage3 * This,
            /* [out][in] */ WMDM_STORAGE_ENUM_MODE *pMode,
            /* [in] */ DWORD nViews,
            /* [unique][size_is][in] */ WMDMMetadataView *pViews);
        
        END_INTERFACE
    } IWMDMStorage3Vtbl;

    interface IWMDMStorage3
    {
        CONST_VTBL struct IWMDMStorage3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorage3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorage3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorage3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorage3_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IWMDMStorage3_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IWMDMStorage3_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IWMDMStorage3_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IWMDMStorage3_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IWMDMStorage3_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IWMDMStorage3_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IWMDMStorage3_EnumStorage(This,pEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,pEnumStorage)

#define IWMDMStorage3_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IWMDMStorage3_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IWMDMStorage3_SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)	\
    (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)

#define IWMDMStorage3_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)


#define IWMDMStorage3_GetMetadata(This,ppMetadata)	\
    (This)->lpVtbl -> GetMetadata(This,ppMetadata)

#define IWMDMStorage3_SetMetadata(This,pMetadata)	\
    (This)->lpVtbl -> SetMetadata(This,pMetadata)

#define IWMDMStorage3_CreateEmptyMetadataObject(This,ppMetadata)	\
    (This)->lpVtbl -> CreateEmptyMetadataObject(This,ppMetadata)

#define IWMDMStorage3_SetEnumPreference(This,pMode,nViews,pViews)	\
    (This)->lpVtbl -> SetEnumPreference(This,pMode,nViews,pViews)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorage3_GetMetadata_Proxy( 
    IWMDMStorage3 * This,
    /* [out] */ IWMDMMetaData **ppMetadata);


void __RPC_STUB IWMDMStorage3_GetMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage3_SetMetadata_Proxy( 
    IWMDMStorage3 * This,
    /* [in] */ IWMDMMetaData *pMetadata);


void __RPC_STUB IWMDMStorage3_SetMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage3_CreateEmptyMetadataObject_Proxy( 
    IWMDMStorage3 * This,
    /* [out] */ IWMDMMetaData **ppMetadata);


void __RPC_STUB IWMDMStorage3_CreateEmptyMetadataObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage3_SetEnumPreference_Proxy( 
    IWMDMStorage3 * This,
    /* [out][in] */ WMDM_STORAGE_ENUM_MODE *pMode,
    /* [in] */ DWORD nViews,
    /* [unique][size_is][in] */ WMDMMetadataView *pViews);


void __RPC_STUB IWMDMStorage3_SetEnumPreference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorage3_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorage4_INTERFACE_DEFINED__
#define __IWMDMStorage4_INTERFACE_DEFINED__

/* interface IWMDMStorage4 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorage4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c225bac5-a03a-40b8-9a23-91cf478c64a6")
    IWMDMStorage4 : public IWMDMStorage3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetReferences( 
            /* [in] */ DWORD dwRefs,
            /* [size_is][in] */ IWMDMStorage **ppIWMDMStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReferences( 
            /* [out] */ DWORD *pdwRefs,
            /* [size_is][size_is][out] */ IWMDMStorage ***pppIWMDMStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRightsWithProgress( 
            /* [in] */ IWMDMProgress3 *pIProgressCallback,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpecifiedMetadata( 
            /* [in] */ DWORD cProperties,
            /* [size_is][in] */ LPCWSTR *ppwszPropNames,
            /* [out] */ IWMDMMetaData **ppMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindStorage( 
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IWMDMStorage **ppStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ IWMDMStorage **ppStorage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorage4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorage4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorage4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IWMDMStorage4 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IWMDMStorage4 * This,
            /* [out] */ IWMDMStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IWMDMStorage4 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMDMStorage4 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IWMDMStorage4 * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IWMDMStorage4 * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IWMDMStorage4 * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IWMDMStorage4 * This,
            /* [out] */ IWMDMEnumStorage **pEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IWMDMStorage4 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IWMDMStorage4 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IWMDMStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )( 
            IWMDMStorage4 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )( 
            IWMDMStorage4 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            IWMDMStorage4 * This,
            /* [out] */ IWMDMMetaData **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )( 
            IWMDMStorage4 * This,
            /* [in] */ IWMDMMetaData *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEmptyMetadataObject )( 
            IWMDMStorage4 * This,
            /* [out] */ IWMDMMetaData **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnumPreference )( 
            IWMDMStorage4 * This,
            /* [out][in] */ WMDM_STORAGE_ENUM_MODE *pMode,
            /* [in] */ DWORD nViews,
            /* [unique][size_is][in] */ WMDMMetadataView *pViews);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferences )( 
            IWMDMStorage4 * This,
            /* [in] */ DWORD dwRefs,
            /* [size_is][in] */ IWMDMStorage **ppIWMDMStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetReferences )( 
            IWMDMStorage4 * This,
            /* [out] */ DWORD *pdwRefs,
            /* [size_is][size_is][out] */ IWMDMStorage ***pppIWMDMStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetRightsWithProgress )( 
            IWMDMStorage4 * This,
            /* [in] */ IWMDMProgress3 *pIProgressCallback,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecifiedMetadata )( 
            IWMDMStorage4 * This,
            /* [in] */ DWORD cProperties,
            /* [size_is][in] */ LPCWSTR *ppwszPropNames,
            /* [out] */ IWMDMMetaData **ppMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *FindStorage )( 
            IWMDMStorage4 * This,
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IWMDMStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IWMDMStorage4 * This,
            /* [out] */ IWMDMStorage **ppStorage);
        
        END_INTERFACE
    } IWMDMStorage4Vtbl;

    interface IWMDMStorage4
    {
        CONST_VTBL struct IWMDMStorage4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorage4_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorage4_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorage4_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorage4_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IWMDMStorage4_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IWMDMStorage4_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IWMDMStorage4_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IWMDMStorage4_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IWMDMStorage4_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IWMDMStorage4_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IWMDMStorage4_EnumStorage(This,pEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,pEnumStorage)

#define IWMDMStorage4_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IWMDMStorage4_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IWMDMStorage4_SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)	\
    (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)

#define IWMDMStorage4_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)


#define IWMDMStorage4_GetMetadata(This,ppMetadata)	\
    (This)->lpVtbl -> GetMetadata(This,ppMetadata)

#define IWMDMStorage4_SetMetadata(This,pMetadata)	\
    (This)->lpVtbl -> SetMetadata(This,pMetadata)

#define IWMDMStorage4_CreateEmptyMetadataObject(This,ppMetadata)	\
    (This)->lpVtbl -> CreateEmptyMetadataObject(This,ppMetadata)

#define IWMDMStorage4_SetEnumPreference(This,pMode,nViews,pViews)	\
    (This)->lpVtbl -> SetEnumPreference(This,pMode,nViews,pViews)


#define IWMDMStorage4_SetReferences(This,dwRefs,ppIWMDMStorage)	\
    (This)->lpVtbl -> SetReferences(This,dwRefs,ppIWMDMStorage)

#define IWMDMStorage4_GetReferences(This,pdwRefs,pppIWMDMStorage)	\
    (This)->lpVtbl -> GetReferences(This,pdwRefs,pppIWMDMStorage)

#define IWMDMStorage4_GetRightsWithProgress(This,pIProgressCallback,ppRights,pnRightsCount)	\
    (This)->lpVtbl -> GetRightsWithProgress(This,pIProgressCallback,ppRights,pnRightsCount)

#define IWMDMStorage4_GetSpecifiedMetadata(This,cProperties,ppwszPropNames,ppMetadata)	\
    (This)->lpVtbl -> GetSpecifiedMetadata(This,cProperties,ppwszPropNames,ppMetadata)

#define IWMDMStorage4_FindStorage(This,findScope,pwszUniqueID,ppStorage)	\
    (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage)

#define IWMDMStorage4_GetParent(This,ppStorage)	\
    (This)->lpVtbl -> GetParent(This,ppStorage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorage4_SetReferences_Proxy( 
    IWMDMStorage4 * This,
    /* [in] */ DWORD dwRefs,
    /* [size_is][in] */ IWMDMStorage **ppIWMDMStorage);


void __RPC_STUB IWMDMStorage4_SetReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage4_GetReferences_Proxy( 
    IWMDMStorage4 * This,
    /* [out] */ DWORD *pdwRefs,
    /* [size_is][size_is][out] */ IWMDMStorage ***pppIWMDMStorage);


void __RPC_STUB IWMDMStorage4_GetReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage4_GetRightsWithProgress_Proxy( 
    IWMDMStorage4 * This,
    /* [in] */ IWMDMProgress3 *pIProgressCallback,
    /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
    /* [out] */ UINT *pnRightsCount);


void __RPC_STUB IWMDMStorage4_GetRightsWithProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage4_GetSpecifiedMetadata_Proxy( 
    IWMDMStorage4 * This,
    /* [in] */ DWORD cProperties,
    /* [size_is][in] */ LPCWSTR *ppwszPropNames,
    /* [out] */ IWMDMMetaData **ppMetadata);


void __RPC_STUB IWMDMStorage4_GetSpecifiedMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage4_FindStorage_Proxy( 
    IWMDMStorage4 * This,
    /* [in] */ WMDM_FIND_SCOPE findScope,
    /* [in] */ LPCWSTR pwszUniqueID,
    /* [out] */ IWMDMStorage **ppStorage);


void __RPC_STUB IWMDMStorage4_FindStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorage4_GetParent_Proxy( 
    IWMDMStorage4 * This,
    /* [out] */ IWMDMStorage **ppStorage);


void __RPC_STUB IWMDMStorage4_GetParent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorage4_INTERFACE_DEFINED__ */


#ifndef __IWMDMOperation_INTERFACE_DEFINED__
#define __IWMDMOperation_INTERFACE_DEFINED__

/* interface IWMDMOperation */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A0B-33ED-11d3-8470-00C04F79DBC0")
    IWMDMOperation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRead( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginWrite( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectName( 
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetObjectName( 
            /* [size_is][string][in] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectAttributes( 
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetObjectAttributes( 
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectTotalSize( 
            /* [out] */ DWORD *pdwSize,
            /* [out] */ DWORD *pdwSizeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetObjectTotalSize( 
            /* [in] */ DWORD dwSize,
            /* [in] */ DWORD dwSizeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TransferObjectData( 
            /* [size_is][out][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE End( 
            /* [in] */ HRESULT *phCompletionCode,
            /* [in] */ IUnknown *pNewObject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMOperation * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginRead )( 
            IWMDMOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginWrite )( 
            IWMDMOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectName )( 
            IWMDMOperation * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectName )( 
            IWMDMOperation * This,
            /* [size_is][string][in] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes )( 
            IWMDMOperation * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes )( 
            IWMDMOperation * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectTotalSize )( 
            IWMDMOperation * This,
            /* [out] */ DWORD *pdwSize,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectTotalSize )( 
            IWMDMOperation * This,
            /* [in] */ DWORD dwSize,
            /* [in] */ DWORD dwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *TransferObjectData )( 
            IWMDMOperation * This,
            /* [size_is][out][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IWMDMOperation * This,
            /* [in] */ HRESULT *phCompletionCode,
            /* [in] */ IUnknown *pNewObject);
        
        END_INTERFACE
    } IWMDMOperationVtbl;

    interface IWMDMOperation
    {
        CONST_VTBL struct IWMDMOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMOperation_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMOperation_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMOperation_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMOperation_BeginRead(This)	\
    (This)->lpVtbl -> BeginRead(This)

#define IWMDMOperation_BeginWrite(This)	\
    (This)->lpVtbl -> BeginWrite(This)

#define IWMDMOperation_GetObjectName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars)

#define IWMDMOperation_SetObjectName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars)

#define IWMDMOperation_GetObjectAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat)

#define IWMDMOperation_SetObjectAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat)

#define IWMDMOperation_GetObjectTotalSize(This,pdwSize,pdwSizeHigh)	\
    (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh)

#define IWMDMOperation_SetObjectTotalSize(This,dwSize,dwSizeHigh)	\
    (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh)

#define IWMDMOperation_TransferObjectData(This,pData,pdwSize,abMac)	\
    (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac)

#define IWMDMOperation_End(This,phCompletionCode,pNewObject)	\
    (This)->lpVtbl -> End(This,phCompletionCode,pNewObject)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMOperation_BeginRead_Proxy( 
    IWMDMOperation * This);


void __RPC_STUB IWMDMOperation_BeginRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_BeginWrite_Proxy( 
    IWMDMOperation * This);


void __RPC_STUB IWMDMOperation_BeginWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_GetObjectName_Proxy( 
    IWMDMOperation * This,
    /* [size_is][string][out] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IWMDMOperation_GetObjectName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_SetObjectName_Proxy( 
    IWMDMOperation * This,
    /* [size_is][string][in] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IWMDMOperation_SetObjectName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_GetObjectAttributes_Proxy( 
    IWMDMOperation * This,
    /* [out] */ DWORD *pdwAttributes,
    /* [unique][out][in] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IWMDMOperation_GetObjectAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_SetObjectAttributes_Proxy( 
    IWMDMOperation * This,
    /* [in] */ DWORD dwAttributes,
    /* [unique][in] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IWMDMOperation_SetObjectAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_GetObjectTotalSize_Proxy( 
    IWMDMOperation * This,
    /* [out] */ DWORD *pdwSize,
    /* [out] */ DWORD *pdwSizeHigh);


void __RPC_STUB IWMDMOperation_GetObjectTotalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_SetObjectTotalSize_Proxy( 
    IWMDMOperation * This,
    /* [in] */ DWORD dwSize,
    /* [in] */ DWORD dwSizeHigh);


void __RPC_STUB IWMDMOperation_SetObjectTotalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_TransferObjectData_Proxy( 
    IWMDMOperation * This,
    /* [size_is][out][in] */ BYTE *pData,
    /* [out][in] */ DWORD *pdwSize,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IWMDMOperation_TransferObjectData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation_End_Proxy( 
    IWMDMOperation * This,
    /* [in] */ HRESULT *phCompletionCode,
    /* [in] */ IUnknown *pNewObject);


void __RPC_STUB IWMDMOperation_End_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMOperation_INTERFACE_DEFINED__ */


#ifndef __IWMDMOperation2_INTERFACE_DEFINED__
#define __IWMDMOperation2_INTERFACE_DEFINED__

/* interface IWMDMOperation2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMOperation2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33445B48-7DF7-425c-AD8F-0FC6D82F9F75")
    IWMDMOperation2 : public IWMDMOperation
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetObjectAttributes2( 
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectAttributes2( 
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMOperation2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMOperation2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMOperation2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMOperation2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginRead )( 
            IWMDMOperation2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginWrite )( 
            IWMDMOperation2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectName )( 
            IWMDMOperation2 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectName )( 
            IWMDMOperation2 * This,
            /* [size_is][string][in] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes )( 
            IWMDMOperation2 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes )( 
            IWMDMOperation2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectTotalSize )( 
            IWMDMOperation2 * This,
            /* [out] */ DWORD *pdwSize,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectTotalSize )( 
            IWMDMOperation2 * This,
            /* [in] */ DWORD dwSize,
            /* [in] */ DWORD dwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *TransferObjectData )( 
            IWMDMOperation2 * This,
            /* [size_is][out][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IWMDMOperation2 * This,
            /* [in] */ HRESULT *phCompletionCode,
            /* [in] */ IUnknown *pNewObject);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes2 )( 
            IWMDMOperation2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes2 )( 
            IWMDMOperation2 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        END_INTERFACE
    } IWMDMOperation2Vtbl;

    interface IWMDMOperation2
    {
        CONST_VTBL struct IWMDMOperation2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMOperation2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMOperation2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMOperation2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMOperation2_BeginRead(This)	\
    (This)->lpVtbl -> BeginRead(This)

#define IWMDMOperation2_BeginWrite(This)	\
    (This)->lpVtbl -> BeginWrite(This)

#define IWMDMOperation2_GetObjectName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars)

#define IWMDMOperation2_SetObjectName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars)

#define IWMDMOperation2_GetObjectAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat)

#define IWMDMOperation2_SetObjectAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat)

#define IWMDMOperation2_GetObjectTotalSize(This,pdwSize,pdwSizeHigh)	\
    (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh)

#define IWMDMOperation2_SetObjectTotalSize(This,dwSize,dwSizeHigh)	\
    (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh)

#define IWMDMOperation2_TransferObjectData(This,pData,pdwSize,abMac)	\
    (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac)

#define IWMDMOperation2_End(This,phCompletionCode,pNewObject)	\
    (This)->lpVtbl -> End(This,phCompletionCode,pNewObject)


#define IWMDMOperation2_SetObjectAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)	\
    (This)->lpVtbl -> SetObjectAttributes2(This,dwAttributes,dwAttributesEx,pFormat,pVideoFormat)

#define IWMDMOperation2_GetObjectAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> GetObjectAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMOperation2_SetObjectAttributes2_Proxy( 
    IWMDMOperation2 * This,
    /* [in] */ DWORD dwAttributes,
    /* [in] */ DWORD dwAttributesEx,
    /* [unique][in] */ _WAVEFORMATEX *pFormat,
    /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat);


void __RPC_STUB IWMDMOperation2_SetObjectAttributes2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperation2_GetObjectAttributes2_Proxy( 
    IWMDMOperation2 * This,
    /* [out] */ DWORD *pdwAttributes,
    /* [out] */ DWORD *pdwAttributesEx,
    /* [unique][out][in] */ _WAVEFORMATEX *pAudioFormat,
    /* [unique][out][in] */ _VIDEOINFOHEADER *pVideoFormat);


void __RPC_STUB IWMDMOperation2_GetObjectAttributes2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMOperation2_INTERFACE_DEFINED__ */


#ifndef __IWMDMOperation3_INTERFACE_DEFINED__
#define __IWMDMOperation3_INTERFACE_DEFINED__

/* interface IWMDMOperation3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMOperation3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d1f9b46a-9ca8-46d8-9d0f-1ec9bae54919")
    IWMDMOperation3 : public IWMDMOperation
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TransferObjectDataOnClearChannel( 
            /* [size_is][out][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMOperation3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMOperation3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMOperation3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMOperation3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginRead )( 
            IWMDMOperation3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginWrite )( 
            IWMDMOperation3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectName )( 
            IWMDMOperation3 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectName )( 
            IWMDMOperation3 * This,
            /* [size_is][string][in] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectAttributes )( 
            IWMDMOperation3 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [unique][out][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectAttributes )( 
            IWMDMOperation3 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectTotalSize )( 
            IWMDMOperation3 * This,
            /* [out] */ DWORD *pdwSize,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *SetObjectTotalSize )( 
            IWMDMOperation3 * This,
            /* [in] */ DWORD dwSize,
            /* [in] */ DWORD dwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *TransferObjectData )( 
            IWMDMOperation3 * This,
            /* [size_is][out][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IWMDMOperation3 * This,
            /* [in] */ HRESULT *phCompletionCode,
            /* [in] */ IUnknown *pNewObject);
        
        HRESULT ( STDMETHODCALLTYPE *TransferObjectDataOnClearChannel )( 
            IWMDMOperation3 * This,
            /* [size_is][out][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize);
        
        END_INTERFACE
    } IWMDMOperation3Vtbl;

    interface IWMDMOperation3
    {
        CONST_VTBL struct IWMDMOperation3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMOperation3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMOperation3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMOperation3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMOperation3_BeginRead(This)	\
    (This)->lpVtbl -> BeginRead(This)

#define IWMDMOperation3_BeginWrite(This)	\
    (This)->lpVtbl -> BeginWrite(This)

#define IWMDMOperation3_GetObjectName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetObjectName(This,pwszName,nMaxChars)

#define IWMDMOperation3_SetObjectName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> SetObjectName(This,pwszName,nMaxChars)

#define IWMDMOperation3_GetObjectAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetObjectAttributes(This,pdwAttributes,pFormat)

#define IWMDMOperation3_SetObjectAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetObjectAttributes(This,dwAttributes,pFormat)

#define IWMDMOperation3_GetObjectTotalSize(This,pdwSize,pdwSizeHigh)	\
    (This)->lpVtbl -> GetObjectTotalSize(This,pdwSize,pdwSizeHigh)

#define IWMDMOperation3_SetObjectTotalSize(This,dwSize,dwSizeHigh)	\
    (This)->lpVtbl -> SetObjectTotalSize(This,dwSize,dwSizeHigh)

#define IWMDMOperation3_TransferObjectData(This,pData,pdwSize,abMac)	\
    (This)->lpVtbl -> TransferObjectData(This,pData,pdwSize,abMac)

#define IWMDMOperation3_End(This,phCompletionCode,pNewObject)	\
    (This)->lpVtbl -> End(This,phCompletionCode,pNewObject)


#define IWMDMOperation3_TransferObjectDataOnClearChannel(This,pData,pdwSize)	\
    (This)->lpVtbl -> TransferObjectDataOnClearChannel(This,pData,pdwSize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMOperation3_TransferObjectDataOnClearChannel_Proxy( 
    IWMDMOperation3 * This,
    /* [size_is][out][in] */ BYTE *pData,
    /* [out][in] */ DWORD *pdwSize);


void __RPC_STUB IWMDMOperation3_TransferObjectDataOnClearChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMOperation3_INTERFACE_DEFINED__ */


#ifndef __IWMDMProgress_INTERFACE_DEFINED__
#define __IWMDMProgress_INTERFACE_DEFINED__

/* interface IWMDMProgress */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A0C-33ED-11d3-8470-00C04F79DBC0")
    IWMDMProgress : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Begin( 
            /* [in] */ DWORD dwEstimatedTicks) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Progress( 
            /* [in] */ DWORD dwTranspiredTicks) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE End( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMProgress * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *Begin )( 
            IWMDMProgress * This,
            /* [in] */ DWORD dwEstimatedTicks);
        
        HRESULT ( STDMETHODCALLTYPE *Progress )( 
            IWMDMProgress * This,
            /* [in] */ DWORD dwTranspiredTicks);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IWMDMProgress * This);
        
        END_INTERFACE
    } IWMDMProgressVtbl;

    interface IWMDMProgress
    {
        CONST_VTBL struct IWMDMProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMProgress_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMProgress_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMProgress_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMProgress_Begin(This,dwEstimatedTicks)	\
    (This)->lpVtbl -> Begin(This,dwEstimatedTicks)

#define IWMDMProgress_Progress(This,dwTranspiredTicks)	\
    (This)->lpVtbl -> Progress(This,dwTranspiredTicks)

#define IWMDMProgress_End(This)	\
    (This)->lpVtbl -> End(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMProgress_Begin_Proxy( 
    IWMDMProgress * This,
    /* [in] */ DWORD dwEstimatedTicks);


void __RPC_STUB IWMDMProgress_Begin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMProgress_Progress_Proxy( 
    IWMDMProgress * This,
    /* [in] */ DWORD dwTranspiredTicks);


void __RPC_STUB IWMDMProgress_Progress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMProgress_End_Proxy( 
    IWMDMProgress * This);


void __RPC_STUB IWMDMProgress_End_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMProgress_INTERFACE_DEFINED__ */


#ifndef __IWMDMProgress2_INTERFACE_DEFINED__
#define __IWMDMProgress2_INTERFACE_DEFINED__

/* interface IWMDMProgress2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMProgress2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A43F550-B383-4e92-B04A-E6BBC660FEFC")
    IWMDMProgress2 : public IWMDMProgress
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE End2( 
            /* [in] */ HRESULT hrCompletionCode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMProgress2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMProgress2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMProgress2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMProgress2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Begin )( 
            IWMDMProgress2 * This,
            /* [in] */ DWORD dwEstimatedTicks);
        
        HRESULT ( STDMETHODCALLTYPE *Progress )( 
            IWMDMProgress2 * This,
            /* [in] */ DWORD dwTranspiredTicks);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IWMDMProgress2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *End2 )( 
            IWMDMProgress2 * This,
            /* [in] */ HRESULT hrCompletionCode);
        
        END_INTERFACE
    } IWMDMProgress2Vtbl;

    interface IWMDMProgress2
    {
        CONST_VTBL struct IWMDMProgress2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMProgress2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMProgress2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMProgress2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMProgress2_Begin(This,dwEstimatedTicks)	\
    (This)->lpVtbl -> Begin(This,dwEstimatedTicks)

#define IWMDMProgress2_Progress(This,dwTranspiredTicks)	\
    (This)->lpVtbl -> Progress(This,dwTranspiredTicks)

#define IWMDMProgress2_End(This)	\
    (This)->lpVtbl -> End(This)


#define IWMDMProgress2_End2(This,hrCompletionCode)	\
    (This)->lpVtbl -> End2(This,hrCompletionCode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMProgress2_End2_Proxy( 
    IWMDMProgress2 * This,
    /* [in] */ HRESULT hrCompletionCode);


void __RPC_STUB IWMDMProgress2_End2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMProgress2_INTERFACE_DEFINED__ */


#ifndef __IWMDMProgress3_INTERFACE_DEFINED__
#define __IWMDMProgress3_INTERFACE_DEFINED__

/* interface IWMDMProgress3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMProgress3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21DE01CB-3BB4-4929-B21A-17AF3F80F658")
    IWMDMProgress3 : public IWMDMProgress2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Begin3( 
            /* [in] */ GUID EventId,
            /* [in] */ DWORD dwEstimatedTicks,
            /* [unique][out][in] */ OPAQUECOMMAND *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Progress3( 
            /* [in] */ GUID EventId,
            /* [in] */ DWORD dwTranspiredTicks,
            /* [unique][out][in] */ OPAQUECOMMAND *pContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE End3( 
            /* [in] */ GUID EventId,
            /* [in] */ HRESULT hrCompletionCode,
            /* [unique][out][in] */ OPAQUECOMMAND *pContext) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMProgress3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMProgress3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMProgress3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMProgress3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Begin )( 
            IWMDMProgress3 * This,
            /* [in] */ DWORD dwEstimatedTicks);
        
        HRESULT ( STDMETHODCALLTYPE *Progress )( 
            IWMDMProgress3 * This,
            /* [in] */ DWORD dwTranspiredTicks);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IWMDMProgress3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *End2 )( 
            IWMDMProgress3 * This,
            /* [in] */ HRESULT hrCompletionCode);
        
        HRESULT ( STDMETHODCALLTYPE *Begin3 )( 
            IWMDMProgress3 * This,
            /* [in] */ GUID EventId,
            /* [in] */ DWORD dwEstimatedTicks,
            /* [unique][out][in] */ OPAQUECOMMAND *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *Progress3 )( 
            IWMDMProgress3 * This,
            /* [in] */ GUID EventId,
            /* [in] */ DWORD dwTranspiredTicks,
            /* [unique][out][in] */ OPAQUECOMMAND *pContext);
        
        HRESULT ( STDMETHODCALLTYPE *End3 )( 
            IWMDMProgress3 * This,
            /* [in] */ GUID EventId,
            /* [in] */ HRESULT hrCompletionCode,
            /* [unique][out][in] */ OPAQUECOMMAND *pContext);
        
        END_INTERFACE
    } IWMDMProgress3Vtbl;

    interface IWMDMProgress3
    {
        CONST_VTBL struct IWMDMProgress3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMProgress3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMProgress3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMProgress3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMProgress3_Begin(This,dwEstimatedTicks)	\
    (This)->lpVtbl -> Begin(This,dwEstimatedTicks)

#define IWMDMProgress3_Progress(This,dwTranspiredTicks)	\
    (This)->lpVtbl -> Progress(This,dwTranspiredTicks)

#define IWMDMProgress3_End(This)	\
    (This)->lpVtbl -> End(This)


#define IWMDMProgress3_End2(This,hrCompletionCode)	\
    (This)->lpVtbl -> End2(This,hrCompletionCode)


#define IWMDMProgress3_Begin3(This,EventId,dwEstimatedTicks,pContext)	\
    (This)->lpVtbl -> Begin3(This,EventId,dwEstimatedTicks,pContext)

#define IWMDMProgress3_Progress3(This,EventId,dwTranspiredTicks,pContext)	\
    (This)->lpVtbl -> Progress3(This,EventId,dwTranspiredTicks,pContext)

#define IWMDMProgress3_End3(This,EventId,hrCompletionCode,pContext)	\
    (This)->lpVtbl -> End3(This,EventId,hrCompletionCode,pContext)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMProgress3_Begin3_Proxy( 
    IWMDMProgress3 * This,
    /* [in] */ GUID EventId,
    /* [in] */ DWORD dwEstimatedTicks,
    /* [unique][out][in] */ OPAQUECOMMAND *pContext);


void __RPC_STUB IWMDMProgress3_Begin3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMProgress3_Progress3_Proxy( 
    IWMDMProgress3 * This,
    /* [in] */ GUID EventId,
    /* [in] */ DWORD dwTranspiredTicks,
    /* [unique][out][in] */ OPAQUECOMMAND *pContext);


void __RPC_STUB IWMDMProgress3_Progress3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMProgress3_End3_Proxy( 
    IWMDMProgress3 * This,
    /* [in] */ GUID EventId,
    /* [in] */ HRESULT hrCompletionCode,
    /* [unique][out][in] */ OPAQUECOMMAND *pContext);


void __RPC_STUB IWMDMProgress3_End3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMProgress3_INTERFACE_DEFINED__ */


#ifndef __IWMDMDevice_INTERFACE_DEFINED__
#define __IWMDMDevice_INTERFACE_DEFINED__

/* interface IWMDMDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A02-33ED-11d3-8470-00C04F79DBC0")
    IWMDMDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManufacturer( 
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [out] */ DWORD *pdwVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ DWORD *pdwType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSerialNumber( 
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPowerSource( 
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ DWORD *pdwStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceIcon( 
            /* [out] */ ULONG *hIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStorage( 
            /* [out] */ IWMDMEnumStorage **ppEnumStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormatSupport( 
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendOpaqueCommand( 
            /* [out][in] */ OPAQUECOMMAND *pCommand) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMDMDevice * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )( 
            IWMDMDevice * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWMDMDevice * This,
            /* [out] */ DWORD *pdwVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IWMDMDevice * This,
            /* [out] */ DWORD *pdwType);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IWMDMDevice * This,
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )( 
            IWMDMDevice * This,
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWMDMDevice * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )( 
            IWMDMDevice * This,
            /* [out] */ ULONG *hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IWMDMDevice * This,
            /* [out] */ IWMDMEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )( 
            IWMDMDevice * This,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IWMDMDevice * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        END_INTERFACE
    } IWMDMDeviceVtbl;

    interface IWMDMDevice
    {
        CONST_VTBL struct IWMDMDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMDevice_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IWMDMDevice_GetManufacturer(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars)

#define IWMDMDevice_GetVersion(This,pdwVersion)	\
    (This)->lpVtbl -> GetVersion(This,pdwVersion)

#define IWMDMDevice_GetType(This,pdwType)	\
    (This)->lpVtbl -> GetType(This,pdwType)

#define IWMDMDevice_GetSerialNumber(This,pSerialNumber,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac)

#define IWMDMDevice_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)	\
    (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)

#define IWMDMDevice_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IWMDMDevice_GetDeviceIcon(This,hIcon)	\
    (This)->lpVtbl -> GetDeviceIcon(This,hIcon)

#define IWMDMDevice_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IWMDMDevice_GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)

#define IWMDMDevice_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMDevice_GetName_Proxy( 
    IWMDMDevice * This,
    /* [size_is][string][out] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IWMDMDevice_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetManufacturer_Proxy( 
    IWMDMDevice * This,
    /* [size_is][string][out] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IWMDMDevice_GetManufacturer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetVersion_Proxy( 
    IWMDMDevice * This,
    /* [out] */ DWORD *pdwVersion);


void __RPC_STUB IWMDMDevice_GetVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetType_Proxy( 
    IWMDMDevice * This,
    /* [out] */ DWORD *pdwType);


void __RPC_STUB IWMDMDevice_GetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetSerialNumber_Proxy( 
    IWMDMDevice * This,
    /* [out] */ PWMDMID pSerialNumber,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IWMDMDevice_GetSerialNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetPowerSource_Proxy( 
    IWMDMDevice * This,
    /* [out] */ DWORD *pdwPowerSource,
    /* [out] */ DWORD *pdwPercentRemaining);


void __RPC_STUB IWMDMDevice_GetPowerSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetStatus_Proxy( 
    IWMDMDevice * This,
    /* [out] */ DWORD *pdwStatus);


void __RPC_STUB IWMDMDevice_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetDeviceIcon_Proxy( 
    IWMDMDevice * This,
    /* [out] */ ULONG *hIcon);


void __RPC_STUB IWMDMDevice_GetDeviceIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_EnumStorage_Proxy( 
    IWMDMDevice * This,
    /* [out] */ IWMDMEnumStorage **ppEnumStorage);


void __RPC_STUB IWMDMDevice_EnumStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_GetFormatSupport_Proxy( 
    IWMDMDevice * This,
    /* [size_is][size_is][out] */ _WAVEFORMATEX **ppFormatEx,
    /* [out] */ UINT *pnFormatCount,
    /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
    /* [out] */ UINT *pnMimeTypeCount);


void __RPC_STUB IWMDMDevice_GetFormatSupport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice_SendOpaqueCommand_Proxy( 
    IWMDMDevice * This,
    /* [out][in] */ OPAQUECOMMAND *pCommand);


void __RPC_STUB IWMDMDevice_SendOpaqueCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMDevice_INTERFACE_DEFINED__ */


#ifndef __IWMDMDevice2_INTERFACE_DEFINED__
#define __IWMDMDevice2_INTERFACE_DEFINED__

/* interface IWMDMDevice2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMDevice2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E34F3D37-9D67-4fc1-9252-62D28B2F8B55")
    IWMDMDevice2 : public IWMDMDevice
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStorage( 
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IWMDMStorage **ppStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormatSupport2( 
            /* [in] */ DWORD dwFlags,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
            /* [ref][out] */ UINT *pnAudioFormatCount,
            /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
            /* [ref][out] */ UINT *pnVideoFormatCount,
            /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
            /* [ref][out] */ UINT *pnFileTypeCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpecifyPropertyPages( 
            /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
            /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
            /* [ref][out] */ ULONG *pcUnks) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalName( 
            /* [size_is][out] */ LPWSTR pwszPnPName,
            /* [in] */ UINT nMaxChars) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMDevice2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMDevice2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMDevice2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMDevice2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMDMDevice2 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )( 
            IWMDMDevice2 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWMDMDevice2 * This,
            /* [out] */ DWORD *pdwVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IWMDMDevice2 * This,
            /* [out] */ DWORD *pdwType);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IWMDMDevice2 * This,
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )( 
            IWMDMDevice2 * This,
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWMDMDevice2 * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )( 
            IWMDMDevice2 * This,
            /* [out] */ ULONG *hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IWMDMDevice2 * This,
            /* [out] */ IWMDMEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )( 
            IWMDMDevice2 * This,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IWMDMDevice2 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IWMDMDevice2 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IWMDMStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )( 
            IWMDMDevice2 * This,
            /* [in] */ DWORD dwFlags,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
            /* [ref][out] */ UINT *pnAudioFormatCount,
            /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
            /* [ref][out] */ UINT *pnVideoFormatCount,
            /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
            /* [ref][out] */ UINT *pnFileTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )( 
            IWMDMDevice2 * This,
            /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
            /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
            /* [ref][out] */ ULONG *pcUnks);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )( 
            IWMDMDevice2 * This,
            /* [size_is][out] */ LPWSTR pwszPnPName,
            /* [in] */ UINT nMaxChars);
        
        END_INTERFACE
    } IWMDMDevice2Vtbl;

    interface IWMDMDevice2
    {
        CONST_VTBL struct IWMDMDevice2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMDevice2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMDevice2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMDevice2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMDevice2_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IWMDMDevice2_GetManufacturer(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars)

#define IWMDMDevice2_GetVersion(This,pdwVersion)	\
    (This)->lpVtbl -> GetVersion(This,pdwVersion)

#define IWMDMDevice2_GetType(This,pdwType)	\
    (This)->lpVtbl -> GetType(This,pdwType)

#define IWMDMDevice2_GetSerialNumber(This,pSerialNumber,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac)

#define IWMDMDevice2_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)	\
    (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)

#define IWMDMDevice2_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IWMDMDevice2_GetDeviceIcon(This,hIcon)	\
    (This)->lpVtbl -> GetDeviceIcon(This,hIcon)

#define IWMDMDevice2_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IWMDMDevice2_GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)

#define IWMDMDevice2_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IWMDMDevice2_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IWMDMDevice2_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)

#define IWMDMDevice2_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)	\
    (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)

#define IWMDMDevice2_GetCanonicalName(This,pwszPnPName,nMaxChars)	\
    (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMDevice2_GetStorage_Proxy( 
    IWMDMDevice2 * This,
    /* [string][in] */ LPCWSTR pszStorageName,
    /* [out] */ IWMDMStorage **ppStorage);


void __RPC_STUB IWMDMDevice2_GetStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice2_GetFormatSupport2_Proxy( 
    IWMDMDevice2 * This,
    /* [in] */ DWORD dwFlags,
    /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
    /* [ref][out] */ UINT *pnAudioFormatCount,
    /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
    /* [ref][out] */ UINT *pnVideoFormatCount,
    /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
    /* [ref][out] */ UINT *pnFileTypeCount);


void __RPC_STUB IWMDMDevice2_GetFormatSupport2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice2_GetSpecifyPropertyPages_Proxy( 
    IWMDMDevice2 * This,
    /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
    /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
    /* [ref][out] */ ULONG *pcUnks);


void __RPC_STUB IWMDMDevice2_GetSpecifyPropertyPages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice2_GetCanonicalName_Proxy( 
    IWMDMDevice2 * This,
    /* [size_is][out] */ LPWSTR pwszPnPName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IWMDMDevice2_GetCanonicalName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMDevice2_INTERFACE_DEFINED__ */


#ifndef __IWMDMDevice3_INTERFACE_DEFINED__
#define __IWMDMDevice3_INTERFACE_DEFINED__

/* interface IWMDMDevice3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMDevice3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6c03e4fe-05db-4dda-9e3c-06233a6d5d65")
    IWMDMDevice3 : public IWMDMDevice2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ LPCWSTR pwszPropName,
            /* [out] */ PROPVARIANT *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ LPCWSTR pwszPropName,
            /* [in] */ const PROPVARIANT *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormatCapability( 
            /* [in] */ WMDM_FORMATCODE format,
            /* [out] */ WMDM_FORMAT_CAPABILITY *pFormatSupport) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeviceIoControl( 
            /* [in] */ DWORD dwIoControlCode,
            /* [size_is][in] */ BYTE *lpInBuffer,
            /* [in] */ DWORD nInBufferSize,
            /* [size_is][out] */ BYTE *lpOutBuffer,
            /* [out][in] */ LPDWORD pnOutBufferSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindStorage( 
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IWMDMStorage **ppStorage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMDevice3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMDevice3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMDevice3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMDMDevice3 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )( 
            IWMDMDevice3 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IWMDMDevice3 * This,
            /* [out] */ DWORD *pdwVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IWMDMDevice3 * This,
            /* [out] */ DWORD *pdwType);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IWMDMDevice3 * This,
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )( 
            IWMDMDevice3 * This,
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWMDMDevice3 * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )( 
            IWMDMDevice3 * This,
            /* [out] */ ULONG *hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IWMDMDevice3 * This,
            /* [out] */ IWMDMEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )( 
            IWMDMDevice3 * This,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IWMDMDevice3 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IWMDMDevice3 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IWMDMStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )( 
            IWMDMDevice3 * This,
            /* [in] */ DWORD dwFlags,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
            /* [ref][out] */ UINT *pnAudioFormatCount,
            /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
            /* [ref][out] */ UINT *pnVideoFormatCount,
            /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
            /* [ref][out] */ UINT *pnFileTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )( 
            IWMDMDevice3 * This,
            /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
            /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
            /* [ref][out] */ ULONG *pcUnks);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )( 
            IWMDMDevice3 * This,
            /* [size_is][out] */ LPWSTR pwszPnPName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IWMDMDevice3 * This,
            /* [in] */ LPCWSTR pwszPropName,
            /* [out] */ PROPVARIANT *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IWMDMDevice3 * This,
            /* [in] */ LPCWSTR pwszPropName,
            /* [in] */ const PROPVARIANT *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatCapability )( 
            IWMDMDevice3 * This,
            /* [in] */ WMDM_FORMATCODE format,
            /* [out] */ WMDM_FORMAT_CAPABILITY *pFormatSupport);
        
        HRESULT ( STDMETHODCALLTYPE *DeviceIoControl )( 
            IWMDMDevice3 * This,
            /* [in] */ DWORD dwIoControlCode,
            /* [size_is][in] */ BYTE *lpInBuffer,
            /* [in] */ DWORD nInBufferSize,
            /* [size_is][out] */ BYTE *lpOutBuffer,
            /* [out][in] */ LPDWORD pnOutBufferSize);
        
        HRESULT ( STDMETHODCALLTYPE *FindStorage )( 
            IWMDMDevice3 * This,
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IWMDMStorage **ppStorage);
        
        END_INTERFACE
    } IWMDMDevice3Vtbl;

    interface IWMDMDevice3
    {
        CONST_VTBL struct IWMDMDevice3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMDevice3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMDevice3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMDevice3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMDevice3_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IWMDMDevice3_GetManufacturer(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars)

#define IWMDMDevice3_GetVersion(This,pdwVersion)	\
    (This)->lpVtbl -> GetVersion(This,pdwVersion)

#define IWMDMDevice3_GetType(This,pdwType)	\
    (This)->lpVtbl -> GetType(This,pdwType)

#define IWMDMDevice3_GetSerialNumber(This,pSerialNumber,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac)

#define IWMDMDevice3_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)	\
    (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)

#define IWMDMDevice3_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IWMDMDevice3_GetDeviceIcon(This,hIcon)	\
    (This)->lpVtbl -> GetDeviceIcon(This,hIcon)

#define IWMDMDevice3_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IWMDMDevice3_GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport(This,ppFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)

#define IWMDMDevice3_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IWMDMDevice3_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IWMDMDevice3_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)

#define IWMDMDevice3_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)	\
    (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)

#define IWMDMDevice3_GetCanonicalName(This,pwszPnPName,nMaxChars)	\
    (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars)


#define IWMDMDevice3_GetProperty(This,pwszPropName,pValue)	\
    (This)->lpVtbl -> GetProperty(This,pwszPropName,pValue)

#define IWMDMDevice3_SetProperty(This,pwszPropName,pValue)	\
    (This)->lpVtbl -> SetProperty(This,pwszPropName,pValue)

#define IWMDMDevice3_GetFormatCapability(This,format,pFormatSupport)	\
    (This)->lpVtbl -> GetFormatCapability(This,format,pFormatSupport)

#define IWMDMDevice3_DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize)	\
    (This)->lpVtbl -> DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize)

#define IWMDMDevice3_FindStorage(This,findScope,pwszUniqueID,ppStorage)	\
    (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMDevice3_GetProperty_Proxy( 
    IWMDMDevice3 * This,
    /* [in] */ LPCWSTR pwszPropName,
    /* [out] */ PROPVARIANT *pValue);


void __RPC_STUB IWMDMDevice3_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice3_SetProperty_Proxy( 
    IWMDMDevice3 * This,
    /* [in] */ LPCWSTR pwszPropName,
    /* [in] */ const PROPVARIANT *pValue);


void __RPC_STUB IWMDMDevice3_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice3_GetFormatCapability_Proxy( 
    IWMDMDevice3 * This,
    /* [in] */ WMDM_FORMATCODE format,
    /* [out] */ WMDM_FORMAT_CAPABILITY *pFormatSupport);


void __RPC_STUB IWMDMDevice3_GetFormatCapability_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice3_DeviceIoControl_Proxy( 
    IWMDMDevice3 * This,
    /* [in] */ DWORD dwIoControlCode,
    /* [size_is][in] */ BYTE *lpInBuffer,
    /* [in] */ DWORD nInBufferSize,
    /* [size_is][out] */ BYTE *lpOutBuffer,
    /* [out][in] */ LPDWORD pnOutBufferSize);


void __RPC_STUB IWMDMDevice3_DeviceIoControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDevice3_FindStorage_Proxy( 
    IWMDMDevice3 * This,
    /* [in] */ WMDM_FIND_SCOPE findScope,
    /* [in] */ LPCWSTR pwszUniqueID,
    /* [out] */ IWMDMStorage **ppStorage);


void __RPC_STUB IWMDMDevice3_FindStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMDevice3_INTERFACE_DEFINED__ */


#ifndef __IWMDMDeviceSession_INTERFACE_DEFINED__
#define __IWMDMDeviceSession_INTERFACE_DEFINED__

/* interface IWMDMDeviceSession */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMDeviceSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("82af0a65-9d96-412c-83e5-3c43e4b06cc7")
    IWMDMDeviceSession : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginSession( 
            /* [in] */ WMDM_SESSION_TYPE type,
            /* [unique][size_is][in] */ BYTE *pCtx,
            /* [in] */ DWORD dwSizeCtx) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSession( 
            /* [in] */ WMDM_SESSION_TYPE type,
            /* [unique][size_is][in] */ BYTE *pCtx,
            /* [in] */ DWORD dwSizeCtx) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMDeviceSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMDeviceSession * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMDeviceSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMDeviceSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSession )( 
            IWMDMDeviceSession * This,
            /* [in] */ WMDM_SESSION_TYPE type,
            /* [unique][size_is][in] */ BYTE *pCtx,
            /* [in] */ DWORD dwSizeCtx);
        
        HRESULT ( STDMETHODCALLTYPE *EndSession )( 
            IWMDMDeviceSession * This,
            /* [in] */ WMDM_SESSION_TYPE type,
            /* [unique][size_is][in] */ BYTE *pCtx,
            /* [in] */ DWORD dwSizeCtx);
        
        END_INTERFACE
    } IWMDMDeviceSessionVtbl;

    interface IWMDMDeviceSession
    {
        CONST_VTBL struct IWMDMDeviceSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMDeviceSession_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMDeviceSession_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMDeviceSession_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMDeviceSession_BeginSession(This,type,pCtx,dwSizeCtx)	\
    (This)->lpVtbl -> BeginSession(This,type,pCtx,dwSizeCtx)

#define IWMDMDeviceSession_EndSession(This,type,pCtx,dwSizeCtx)	\
    (This)->lpVtbl -> EndSession(This,type,pCtx,dwSizeCtx)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMDeviceSession_BeginSession_Proxy( 
    IWMDMDeviceSession * This,
    /* [in] */ WMDM_SESSION_TYPE type,
    /* [unique][size_is][in] */ BYTE *pCtx,
    /* [in] */ DWORD dwSizeCtx);


void __RPC_STUB IWMDMDeviceSession_BeginSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceSession_EndSession_Proxy( 
    IWMDMDeviceSession * This,
    /* [in] */ WMDM_SESSION_TYPE type,
    /* [unique][size_is][in] */ BYTE *pCtx,
    /* [in] */ DWORD dwSizeCtx);


void __RPC_STUB IWMDMDeviceSession_EndSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMDeviceSession_INTERFACE_DEFINED__ */


#ifndef __IWMDMEnumDevice_INTERFACE_DEFINED__
#define __IWMDMEnumDevice_INTERFACE_DEFINED__

/* interface IWMDMEnumDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMEnumDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A01-33ED-11d3-8470-00C04F79DBC0")
    IWMDMEnumDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IWMDMDevice **ppDevice,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IWMDMEnumDevice **ppEnumDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMEnumDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMEnumDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMEnumDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMEnumDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IWMDMEnumDevice * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IWMDMDevice **ppDevice,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IWMDMEnumDevice * This,
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWMDMEnumDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IWMDMEnumDevice * This,
            /* [out] */ IWMDMEnumDevice **ppEnumDevice);
        
        END_INTERFACE
    } IWMDMEnumDeviceVtbl;

    interface IWMDMEnumDevice
    {
        CONST_VTBL struct IWMDMEnumDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMEnumDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMEnumDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMEnumDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMEnumDevice_Next(This,celt,ppDevice,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppDevice,pceltFetched)

#define IWMDMEnumDevice_Skip(This,celt,pceltFetched)	\
    (This)->lpVtbl -> Skip(This,celt,pceltFetched)

#define IWMDMEnumDevice_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IWMDMEnumDevice_Clone(This,ppEnumDevice)	\
    (This)->lpVtbl -> Clone(This,ppEnumDevice)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMEnumDevice_Next_Proxy( 
    IWMDMEnumDevice * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IWMDMDevice **ppDevice,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IWMDMEnumDevice_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMEnumDevice_Skip_Proxy( 
    IWMDMEnumDevice * This,
    /* [in] */ ULONG celt,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IWMDMEnumDevice_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMEnumDevice_Reset_Proxy( 
    IWMDMEnumDevice * This);


void __RPC_STUB IWMDMEnumDevice_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMEnumDevice_Clone_Proxy( 
    IWMDMEnumDevice * This,
    /* [out] */ IWMDMEnumDevice **ppEnumDevice);


void __RPC_STUB IWMDMEnumDevice_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMEnumDevice_INTERFACE_DEFINED__ */


#ifndef __IWMDMDeviceControl_INTERFACE_DEFINED__
#define __IWMDMDeviceControl_INTERFACE_DEFINED__

/* interface IWMDMDeviceControl */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMDeviceControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A04-33ED-11d3-8470-00C04F79DBC0")
    IWMDMDeviceControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ DWORD *pdwStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [out] */ DWORD *pdwCapabilitiesMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Play( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Record( 
            /* [in] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Seek( 
            /* [in] */ UINT fuMode,
            /* [in] */ int nOffset) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMDeviceControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMDeviceControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMDeviceControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWMDMDeviceControl * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IWMDMDeviceControl * This,
            /* [out] */ DWORD *pdwCapabilitiesMask);
        
        HRESULT ( STDMETHODCALLTYPE *Play )( 
            IWMDMDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Record )( 
            IWMDMDeviceControl * This,
            /* [in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IWMDMDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IWMDMDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IWMDMDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IWMDMDeviceControl * This,
            /* [in] */ UINT fuMode,
            /* [in] */ int nOffset);
        
        END_INTERFACE
    } IWMDMDeviceControlVtbl;

    interface IWMDMDeviceControl
    {
        CONST_VTBL struct IWMDMDeviceControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMDeviceControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMDeviceControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMDeviceControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMDeviceControl_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IWMDMDeviceControl_GetCapabilities(This,pdwCapabilitiesMask)	\
    (This)->lpVtbl -> GetCapabilities(This,pdwCapabilitiesMask)

#define IWMDMDeviceControl_Play(This)	\
    (This)->lpVtbl -> Play(This)

#define IWMDMDeviceControl_Record(This,pFormat)	\
    (This)->lpVtbl -> Record(This,pFormat)

#define IWMDMDeviceControl_Pause(This)	\
    (This)->lpVtbl -> Pause(This)

#define IWMDMDeviceControl_Resume(This)	\
    (This)->lpVtbl -> Resume(This)

#define IWMDMDeviceControl_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#define IWMDMDeviceControl_Seek(This,fuMode,nOffset)	\
    (This)->lpVtbl -> Seek(This,fuMode,nOffset)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_GetStatus_Proxy( 
    IWMDMDeviceControl * This,
    /* [out] */ DWORD *pdwStatus);


void __RPC_STUB IWMDMDeviceControl_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_GetCapabilities_Proxy( 
    IWMDMDeviceControl * This,
    /* [out] */ DWORD *pdwCapabilitiesMask);


void __RPC_STUB IWMDMDeviceControl_GetCapabilities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_Play_Proxy( 
    IWMDMDeviceControl * This);


void __RPC_STUB IWMDMDeviceControl_Play_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_Record_Proxy( 
    IWMDMDeviceControl * This,
    /* [in] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IWMDMDeviceControl_Record_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_Pause_Proxy( 
    IWMDMDeviceControl * This);


void __RPC_STUB IWMDMDeviceControl_Pause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_Resume_Proxy( 
    IWMDMDeviceControl * This);


void __RPC_STUB IWMDMDeviceControl_Resume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_Stop_Proxy( 
    IWMDMDeviceControl * This);


void __RPC_STUB IWMDMDeviceControl_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMDeviceControl_Seek_Proxy( 
    IWMDMDeviceControl * This,
    /* [in] */ UINT fuMode,
    /* [in] */ int nOffset);


void __RPC_STUB IWMDMDeviceControl_Seek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMDeviceControl_INTERFACE_DEFINED__ */


#ifndef __IWMDMEnumStorage_INTERFACE_DEFINED__
#define __IWMDMEnumStorage_INTERFACE_DEFINED__

/* interface IWMDMEnumStorage */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMEnumStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A05-33ED-11d3-8470-00C04F79DBC0")
    IWMDMEnumStorage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IWMDMStorage **ppStorage,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IWMDMEnumStorage **ppEnumStorage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMEnumStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMEnumStorage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMEnumStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMEnumStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IWMDMEnumStorage * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IWMDMStorage **ppStorage,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IWMDMEnumStorage * This,
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWMDMEnumStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IWMDMEnumStorage * This,
            /* [out] */ IWMDMEnumStorage **ppEnumStorage);
        
        END_INTERFACE
    } IWMDMEnumStorageVtbl;

    interface IWMDMEnumStorage
    {
        CONST_VTBL struct IWMDMEnumStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMEnumStorage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMEnumStorage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMEnumStorage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMEnumStorage_Next(This,celt,ppStorage,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppStorage,pceltFetched)

#define IWMDMEnumStorage_Skip(This,celt,pceltFetched)	\
    (This)->lpVtbl -> Skip(This,celt,pceltFetched)

#define IWMDMEnumStorage_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IWMDMEnumStorage_Clone(This,ppEnumStorage)	\
    (This)->lpVtbl -> Clone(This,ppEnumStorage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMEnumStorage_Next_Proxy( 
    IWMDMEnumStorage * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IWMDMStorage **ppStorage,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IWMDMEnumStorage_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMEnumStorage_Skip_Proxy( 
    IWMDMEnumStorage * This,
    /* [in] */ ULONG celt,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IWMDMEnumStorage_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMEnumStorage_Reset_Proxy( 
    IWMDMEnumStorage * This);


void __RPC_STUB IWMDMEnumStorage_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMEnumStorage_Clone_Proxy( 
    IWMDMEnumStorage * This,
    /* [out] */ IWMDMEnumStorage **ppEnumStorage);


void __RPC_STUB IWMDMEnumStorage_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMEnumStorage_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorageControl_INTERFACE_DEFINED__
#define __IWMDMStorageControl_INTERFACE_DEFINED__

/* interface IWMDMStorageControl */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorageControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A08-33ED-11d3-8470-00C04F79DBC0")
    IWMDMStorageControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [out] */ IWMDMStorage **ppNewObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ UINT fuMode,
            /* [in] */ LPWSTR pwszNewName,
            /* [in] */ IWMDMProgress *pProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Read( 
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IWMDMOperation *pOperation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMStorage *pTargetObject,
            /* [in] */ IWMDMProgress *pProgress) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorageControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorageControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorageControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorageControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IWMDMStorageControl * This,
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [out] */ IWMDMStorage **ppNewObject);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IWMDMStorageControl * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Rename )( 
            IWMDMStorageControl * This,
            /* [in] */ UINT fuMode,
            /* [in] */ LPWSTR pwszNewName,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Read )( 
            IWMDMStorageControl * This,
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IWMDMOperation *pOperation);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IWMDMStorageControl * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMStorage *pTargetObject,
            /* [in] */ IWMDMProgress *pProgress);
        
        END_INTERFACE
    } IWMDMStorageControlVtbl;

    interface IWMDMStorageControl
    {
        CONST_VTBL struct IWMDMStorageControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorageControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorageControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorageControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorageControl_Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject)	\
    (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject)

#define IWMDMStorageControl_Delete(This,fuMode,pProgress)	\
    (This)->lpVtbl -> Delete(This,fuMode,pProgress)

#define IWMDMStorageControl_Rename(This,fuMode,pwszNewName,pProgress)	\
    (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress)

#define IWMDMStorageControl_Read(This,fuMode,pwszFile,pProgress,pOperation)	\
    (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation)

#define IWMDMStorageControl_Move(This,fuMode,pTargetObject,pProgress)	\
    (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorageControl_Insert_Proxy( 
    IWMDMStorageControl * This,
    /* [in] */ UINT fuMode,
    /* [unique][in] */ LPWSTR pwszFile,
    /* [in] */ IWMDMOperation *pOperation,
    /* [in] */ IWMDMProgress *pProgress,
    /* [out] */ IWMDMStorage **ppNewObject);


void __RPC_STUB IWMDMStorageControl_Insert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageControl_Delete_Proxy( 
    IWMDMStorageControl * This,
    /* [in] */ UINT fuMode,
    /* [in] */ IWMDMProgress *pProgress);


void __RPC_STUB IWMDMStorageControl_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageControl_Rename_Proxy( 
    IWMDMStorageControl * This,
    /* [in] */ UINT fuMode,
    /* [in] */ LPWSTR pwszNewName,
    /* [in] */ IWMDMProgress *pProgress);


void __RPC_STUB IWMDMStorageControl_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageControl_Read_Proxy( 
    IWMDMStorageControl * This,
    /* [in] */ UINT fuMode,
    /* [unique][in] */ LPWSTR pwszFile,
    /* [in] */ IWMDMProgress *pProgress,
    /* [in] */ IWMDMOperation *pOperation);


void __RPC_STUB IWMDMStorageControl_Read_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMStorageControl_Move_Proxy( 
    IWMDMStorageControl * This,
    /* [in] */ UINT fuMode,
    /* [in] */ IWMDMStorage *pTargetObject,
    /* [in] */ IWMDMProgress *pProgress);


void __RPC_STUB IWMDMStorageControl_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorageControl_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorageControl2_INTERFACE_DEFINED__
#define __IWMDMStorageControl2_INTERFACE_DEFINED__

/* interface IWMDMStorageControl2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorageControl2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("972C2E88-BD6C-4125-8E09-84F837E637B6")
    IWMDMStorageControl2 : public IWMDMStorageControl
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Insert2( 
            /* [in] */ UINT fuMode,
            /* [string][unique][in] */ LPWSTR pwszFileSource,
            /* [string][unique][in] */ LPWSTR pwszFileDest,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IUnknown *pUnknown,
            /* [unique][out][in] */ IWMDMStorage **ppNewObject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorageControl2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorageControl2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorageControl2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorageControl2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IWMDMStorageControl2 * This,
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [out] */ IWMDMStorage **ppNewObject);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IWMDMStorageControl2 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Rename )( 
            IWMDMStorageControl2 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ LPWSTR pwszNewName,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Read )( 
            IWMDMStorageControl2 * This,
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IWMDMOperation *pOperation);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IWMDMStorageControl2 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMStorage *pTargetObject,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Insert2 )( 
            IWMDMStorageControl2 * This,
            /* [in] */ UINT fuMode,
            /* [string][unique][in] */ LPWSTR pwszFileSource,
            /* [string][unique][in] */ LPWSTR pwszFileDest,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IUnknown *pUnknown,
            /* [unique][out][in] */ IWMDMStorage **ppNewObject);
        
        END_INTERFACE
    } IWMDMStorageControl2Vtbl;

    interface IWMDMStorageControl2
    {
        CONST_VTBL struct IWMDMStorageControl2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorageControl2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorageControl2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorageControl2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorageControl2_Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject)	\
    (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject)

#define IWMDMStorageControl2_Delete(This,fuMode,pProgress)	\
    (This)->lpVtbl -> Delete(This,fuMode,pProgress)

#define IWMDMStorageControl2_Rename(This,fuMode,pwszNewName,pProgress)	\
    (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress)

#define IWMDMStorageControl2_Read(This,fuMode,pwszFile,pProgress,pOperation)	\
    (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation)

#define IWMDMStorageControl2_Move(This,fuMode,pTargetObject,pProgress)	\
    (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress)


#define IWMDMStorageControl2_Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject)	\
    (This)->lpVtbl -> Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorageControl2_Insert2_Proxy( 
    IWMDMStorageControl2 * This,
    /* [in] */ UINT fuMode,
    /* [string][unique][in] */ LPWSTR pwszFileSource,
    /* [string][unique][in] */ LPWSTR pwszFileDest,
    /* [in] */ IWMDMOperation *pOperation,
    /* [in] */ IWMDMProgress *pProgress,
    /* [in] */ IUnknown *pUnknown,
    /* [unique][out][in] */ IWMDMStorage **ppNewObject);


void __RPC_STUB IWMDMStorageControl2_Insert2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorageControl2_INTERFACE_DEFINED__ */


#ifndef __IWMDMStorageControl3_INTERFACE_DEFINED__
#define __IWMDMStorageControl3_INTERFACE_DEFINED__

/* interface IWMDMStorageControl3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMStorageControl3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3266365-D4F3-4696-8D53-BD27EC60993A")
    IWMDMStorageControl3 : public IWMDMStorageControl2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Insert3( 
            /* [in] */ UINT fuMode,
            /* [in] */ UINT fuType,
            /* [string][unique][in] */ LPWSTR pwszFileSource,
            /* [string][unique][in] */ LPWSTR pwszFileDest,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IWMDMMetaData *pMetaData,
            /* [in] */ IUnknown *pUnknown,
            /* [out] */ IWMDMStorage **ppNewObject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMStorageControl3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMStorageControl3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMStorageControl3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMStorageControl3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IWMDMStorageControl3 * This,
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [out] */ IWMDMStorage **ppNewObject);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IWMDMStorageControl3 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Rename )( 
            IWMDMStorageControl3 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ LPWSTR pwszNewName,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Read )( 
            IWMDMStorageControl3 * This,
            /* [in] */ UINT fuMode,
            /* [unique][in] */ LPWSTR pwszFile,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IWMDMOperation *pOperation);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IWMDMStorageControl3 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMStorage *pTargetObject,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Insert2 )( 
            IWMDMStorageControl3 * This,
            /* [in] */ UINT fuMode,
            /* [string][unique][in] */ LPWSTR pwszFileSource,
            /* [string][unique][in] */ LPWSTR pwszFileDest,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IUnknown *pUnknown,
            /* [unique][out][in] */ IWMDMStorage **ppNewObject);
        
        HRESULT ( STDMETHODCALLTYPE *Insert3 )( 
            IWMDMStorageControl3 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ UINT fuType,
            /* [string][unique][in] */ LPWSTR pwszFileSource,
            /* [string][unique][in] */ LPWSTR pwszFileDest,
            /* [in] */ IWMDMOperation *pOperation,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IWMDMMetaData *pMetaData,
            /* [in] */ IUnknown *pUnknown,
            /* [out] */ IWMDMStorage **ppNewObject);
        
        END_INTERFACE
    } IWMDMStorageControl3Vtbl;

    interface IWMDMStorageControl3
    {
        CONST_VTBL struct IWMDMStorageControl3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMStorageControl3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMStorageControl3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMStorageControl3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMStorageControl3_Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject)	\
    (This)->lpVtbl -> Insert(This,fuMode,pwszFile,pOperation,pProgress,ppNewObject)

#define IWMDMStorageControl3_Delete(This,fuMode,pProgress)	\
    (This)->lpVtbl -> Delete(This,fuMode,pProgress)

#define IWMDMStorageControl3_Rename(This,fuMode,pwszNewName,pProgress)	\
    (This)->lpVtbl -> Rename(This,fuMode,pwszNewName,pProgress)

#define IWMDMStorageControl3_Read(This,fuMode,pwszFile,pProgress,pOperation)	\
    (This)->lpVtbl -> Read(This,fuMode,pwszFile,pProgress,pOperation)

#define IWMDMStorageControl3_Move(This,fuMode,pTargetObject,pProgress)	\
    (This)->lpVtbl -> Move(This,fuMode,pTargetObject,pProgress)


#define IWMDMStorageControl3_Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject)	\
    (This)->lpVtbl -> Insert2(This,fuMode,pwszFileSource,pwszFileDest,pOperation,pProgress,pUnknown,ppNewObject)


#define IWMDMStorageControl3_Insert3(This,fuMode,fuType,pwszFileSource,pwszFileDest,pOperation,pProgress,pMetaData,pUnknown,ppNewObject)	\
    (This)->lpVtbl -> Insert3(This,fuMode,fuType,pwszFileSource,pwszFileDest,pOperation,pProgress,pMetaData,pUnknown,ppNewObject)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMStorageControl3_Insert3_Proxy( 
    IWMDMStorageControl3 * This,
    /* [in] */ UINT fuMode,
    /* [in] */ UINT fuType,
    /* [string][unique][in] */ LPWSTR pwszFileSource,
    /* [string][unique][in] */ LPWSTR pwszFileDest,
    /* [in] */ IWMDMOperation *pOperation,
    /* [in] */ IWMDMProgress *pProgress,
    /* [in] */ IWMDMMetaData *pMetaData,
    /* [in] */ IUnknown *pUnknown,
    /* [out] */ IWMDMStorage **ppNewObject);


void __RPC_STUB IWMDMStorageControl3_Insert3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMStorageControl3_INTERFACE_DEFINED__ */


#ifndef __IWMDMObjectInfo_INTERFACE_DEFINED__
#define __IWMDMObjectInfo_INTERFACE_DEFINED__

/* interface IWMDMObjectInfo */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMObjectInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A09-33ED-11d3-8470-00C04F79DBC0")
    IWMDMObjectInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPlayLength( 
            /* [out] */ DWORD *pdwLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPlayLength( 
            /* [in] */ DWORD dwLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPlayOffset( 
            /* [out] */ DWORD *pdwOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPlayOffset( 
            /* [in] */ DWORD dwOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalLength( 
            /* [out] */ DWORD *pdwLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastPlayPosition( 
            /* [out] */ DWORD *pdwLastPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLongestPlayPosition( 
            /* [out] */ DWORD *pdwLongestPos) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMObjectInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMObjectInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMObjectInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMObjectInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlayLength )( 
            IWMDMObjectInfo * This,
            /* [out] */ DWORD *pdwLength);
        
        HRESULT ( STDMETHODCALLTYPE *SetPlayLength )( 
            IWMDMObjectInfo * This,
            /* [in] */ DWORD dwLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlayOffset )( 
            IWMDMObjectInfo * This,
            /* [out] */ DWORD *pdwOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetPlayOffset )( 
            IWMDMObjectInfo * This,
            /* [in] */ DWORD dwOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalLength )( 
            IWMDMObjectInfo * This,
            /* [out] */ DWORD *pdwLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastPlayPosition )( 
            IWMDMObjectInfo * This,
            /* [out] */ DWORD *pdwLastPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetLongestPlayPosition )( 
            IWMDMObjectInfo * This,
            /* [out] */ DWORD *pdwLongestPos);
        
        END_INTERFACE
    } IWMDMObjectInfoVtbl;

    interface IWMDMObjectInfo
    {
        CONST_VTBL struct IWMDMObjectInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMObjectInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMObjectInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMObjectInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMObjectInfo_GetPlayLength(This,pdwLength)	\
    (This)->lpVtbl -> GetPlayLength(This,pdwLength)

#define IWMDMObjectInfo_SetPlayLength(This,dwLength)	\
    (This)->lpVtbl -> SetPlayLength(This,dwLength)

#define IWMDMObjectInfo_GetPlayOffset(This,pdwOffset)	\
    (This)->lpVtbl -> GetPlayOffset(This,pdwOffset)

#define IWMDMObjectInfo_SetPlayOffset(This,dwOffset)	\
    (This)->lpVtbl -> SetPlayOffset(This,dwOffset)

#define IWMDMObjectInfo_GetTotalLength(This,pdwLength)	\
    (This)->lpVtbl -> GetTotalLength(This,pdwLength)

#define IWMDMObjectInfo_GetLastPlayPosition(This,pdwLastPos)	\
    (This)->lpVtbl -> GetLastPlayPosition(This,pdwLastPos)

#define IWMDMObjectInfo_GetLongestPlayPosition(This,pdwLongestPos)	\
    (This)->lpVtbl -> GetLongestPlayPosition(This,pdwLongestPos)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMObjectInfo_GetPlayLength_Proxy( 
    IWMDMObjectInfo * This,
    /* [out] */ DWORD *pdwLength);


void __RPC_STUB IWMDMObjectInfo_GetPlayLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMObjectInfo_SetPlayLength_Proxy( 
    IWMDMObjectInfo * This,
    /* [in] */ DWORD dwLength);


void __RPC_STUB IWMDMObjectInfo_SetPlayLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMObjectInfo_GetPlayOffset_Proxy( 
    IWMDMObjectInfo * This,
    /* [out] */ DWORD *pdwOffset);


void __RPC_STUB IWMDMObjectInfo_GetPlayOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMObjectInfo_SetPlayOffset_Proxy( 
    IWMDMObjectInfo * This,
    /* [in] */ DWORD dwOffset);


void __RPC_STUB IWMDMObjectInfo_SetPlayOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMObjectInfo_GetTotalLength_Proxy( 
    IWMDMObjectInfo * This,
    /* [out] */ DWORD *pdwLength);


void __RPC_STUB IWMDMObjectInfo_GetTotalLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMObjectInfo_GetLastPlayPosition_Proxy( 
    IWMDMObjectInfo * This,
    /* [out] */ DWORD *pdwLastPos);


void __RPC_STUB IWMDMObjectInfo_GetLastPlayPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMObjectInfo_GetLongestPlayPosition_Proxy( 
    IWMDMObjectInfo * This,
    /* [out] */ DWORD *pdwLongestPos);


void __RPC_STUB IWMDMObjectInfo_GetLongestPlayPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMObjectInfo_INTERFACE_DEFINED__ */


#ifndef __IWMDMRevoked_INTERFACE_DEFINED__
#define __IWMDMRevoked_INTERFACE_DEFINED__

/* interface IWMDMRevoked */
/* [ref][uuid][object] */ 


EXTERN_C const IID IID_IWMDMRevoked;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBECCEDB-88EE-4e55-B6A4-8D9F07D696AA")
    IWMDMRevoked : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRevocationURL( 
            /* [size_is][size_is][string][out][in] */ LPWSTR *ppwszRevocationURL,
            /* [out][in] */ DWORD *pdwBufferLen,
            /* [out] */ DWORD *pdwRevokedBitFlag) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMRevokedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMRevoked * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMRevoked * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMRevoked * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRevocationURL )( 
            IWMDMRevoked * This,
            /* [size_is][size_is][string][out][in] */ LPWSTR *ppwszRevocationURL,
            /* [out][in] */ DWORD *pdwBufferLen,
            /* [out] */ DWORD *pdwRevokedBitFlag);
        
        END_INTERFACE
    } IWMDMRevokedVtbl;

    interface IWMDMRevoked
    {
        CONST_VTBL struct IWMDMRevokedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMRevoked_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMRevoked_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMRevoked_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMRevoked_GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen,pdwRevokedBitFlag)	\
    (This)->lpVtbl -> GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen,pdwRevokedBitFlag)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMRevoked_GetRevocationURL_Proxy( 
    IWMDMRevoked * This,
    /* [size_is][size_is][string][out][in] */ LPWSTR *ppwszRevocationURL,
    /* [out][in] */ DWORD *pdwBufferLen,
    /* [out] */ DWORD *pdwRevokedBitFlag);


void __RPC_STUB IWMDMRevoked_GetRevocationURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMRevoked_INTERFACE_DEFINED__ */


#ifndef __IWMDMNotification_INTERFACE_DEFINED__
#define __IWMDMNotification_INTERFACE_DEFINED__

/* interface IWMDMNotification */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F5E95C0-0F43-4ed4-93D2-C89A45D59B81")
    IWMDMNotification : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE WMDMMessage( 
            /* [in] */ DWORD dwMessageType,
            /* [string][in] */ LPCWSTR pwszCanonicalName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMNotification * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMNotification * This);
        
        HRESULT ( STDMETHODCALLTYPE *WMDMMessage )( 
            IWMDMNotification * This,
            /* [in] */ DWORD dwMessageType,
            /* [string][in] */ LPCWSTR pwszCanonicalName);
        
        END_INTERFACE
    } IWMDMNotificationVtbl;

    interface IWMDMNotification
    {
        CONST_VTBL struct IWMDMNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMNotification_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMNotification_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMNotification_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMNotification_WMDMMessage(This,dwMessageType,pwszCanonicalName)	\
    (This)->lpVtbl -> WMDMMessage(This,dwMessageType,pwszCanonicalName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMNotification_WMDMMessage_Proxy( 
    IWMDMNotification * This,
    /* [in] */ DWORD dwMessageType,
    /* [string][in] */ LPCWSTR pwszCanonicalName);


void __RPC_STUB IWMDMNotification_WMDMMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMNotification_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MsHDSP_0300 */
/* [local] */ 

// WMDM constants for wellknown meta-data tags
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMFileName = L"WMDM/FileName";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMFormatCode = L"WMDM/FormatCode";
//Type: WMDMDATETIME, WMDM_TAG_DATATYPE: WMDM_TYPE_DATETIME
static const WCHAR *g_wszWMDMLastModifiedDate = L"WMDM/LastModifiedDate";
//Type: WMDMDATETIME, WMDM_TAG_DATATYPE: WMDM_TYPE_DATETIME
static const WCHAR *g_wszWMDMFileCreationDate = L"WMDM/FileCreationDate";
//Type: QWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_QWORD
static const WCHAR *g_wszWMDMFileSize = L"WMDM/FileSize";
//Type: QWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_QWORD
static const WCHAR *g_wszWMDMFileAttributes = L"WMDM/FileAttributes";
//Format code: WAVE Format
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszAudioWAVECodec = L"WMDM/AudioWAVECodec";
//Format code: FOURCC code 
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszVideoFourCCCodec = L"WMDM/VideoFourCCCodec";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMTitle = L"WMDM/Title";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMAuthor = L"WMDM/Author";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMDescription = L"WMDM/Description";
//Type: BOOL, WMDM_TAG_DATATYPE: WMDM_TYPE_BOOL
static const WCHAR *g_wszWMDMIsProtected = L"WMDM/IsProtected";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMAlbumTitle = L"WMDM/AlbumTitle";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMAlbumArtist = L"WMDM/AlbumArtist";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMTrack = L"WMDM/Track";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMGenre = L"WMDM/Genre";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMTrackMood = L"WMDM/TrackMood";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMAlbumCoverFormat = L"WMDM/AlbumCoverFormat";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMAlbumCoverSize = L"WMDM/AlbumCoverSize";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMAlbumCoverHeight = L"WMDM/AlbumCoverHeight";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMAlbumCoverWidth = L"WMDM/AlbumCoverWidth";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMAlbumCoverDuration = L"WMDM/AlbumCoverDuration";
//Type: BYTE*, WMDM_TAG_DATATYPE: WMDM_TYPE_BINARY
static const WCHAR *g_wszWMDMAlbumCoverData = L"WMDM/AlbumCoverData";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMYear = L"WMDM/Year";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMComposer = L"WMDM/Composer";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMCodec = L"WMDM/Codec";
static const WCHAR *g_wszWMDMDRMId = L"WMDM/DRMId";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMBitrate = L"WMDM/Bitrate";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMBitRateType = L"WMDM/BitRateType";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMSampleRate = L"WMDM/SampleRate";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMNumChannels = L"WMDM/NumChannels";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMBlockAlignment = L"WMDM/BlockAlignment";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMAudioBitDepth = L"WMDM/AudioBitDepth";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMTotalBitrate = L"WMDM/TotalBitrate";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMVideoBitrate = L"WMDM/VideoBitrate";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMFrameRate = L"WMDM/FrameRate";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMScanType = L"WMDM/ScanType";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMKeyFrameDistance = L"WMDM/KeyFrameDistance";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMBufferSize = L"WMDM/BufferSize";
//Type: QWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_QWORD
static const WCHAR *g_wszWMDMQualitySetting = L"WMDM/QualitySetting";
//Type: QWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_QWORD
static const WCHAR *g_wszWMDMDuration = L"WMDM/Duration";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMAlbumArt = L"WMDM/AlbumArt";
//Type: BOOL, WMDM_TAG_DATATYPE: WMDM_TYPE_BOOL
static const WCHAR *g_wszWMDMBuyNow = L"WMDM/BuyNow";
//Type: BOOL, WMDM_TAG_DATATYPE: WMDM_TYPE_BOOL
static const WCHAR *g_wszWMDMNonConsumable = L"WMDM/NonConsumable";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMediaClassPrimaryID = L"WMDM/MediaClassPrimaryID";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMMediaClassSecondaryID = L"WMDM/MediaClassSecondaryID";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMUserEffectiveRating = L"WMDM/UserEffectiveRating";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMUserRating = L"WMDM/UserRating";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMUserRatingOnDevice = L"WMDM/UserRatingOnDevice";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMPlayCount = L"WMDM/PlayCount";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMDevicePlayCount = L"WMDM/DevicePlayCount";
//Type: WMDMDATETIME, WMDM_TAG_DATATYPE: WMDM_TYPE_DATETIME
static const WCHAR *g_wszWMDMAuthorDate = L"WMDM/AuthorDate";
//Type: WMDMDATETIME, WMDM_TAG_DATATYPE: WMDM_TYPE_DATETIME
static const WCHAR *g_wszWMDMUserLastPlayTime = L"WMDM/UserLastPlayTime";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMSubTitle = L"WMDM/SubTitle";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMSubTitleDescription = L"WMDM/SubTitleDescription";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMMediaCredits = L"WMDM/MediaCredits";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMMediaStationName = L"WMDM/MediaStationName";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMMediaOriginalChannel = L"WMDM/MediaOriginalChannel";
//Type: WMDMDATETIME, WMDM_TAG_DATATYPE: WMDM_TYPE_DATETIME
static const WCHAR *g_wszWMDMMediaOriginalBroadcastDateTime = L"WMDM/MediaOriginalBroadcastDateTime";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMProviderCopyright = L"WMDM/ProviderCopyright";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMSyncID = L"WMDM/SyncID";
//Type: GUID, WMDM_TAG_DATATYPE: WMDM_TYPE_GUID
static const WCHAR *g_wszWMDMPersistentUniqueID = L"WMDM/PersistentUniqueID";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMWidth = L"WMDM/Width";
//Type: DWORD, WMDM_TAG_DATATYPE: WMDM_TYPE_DWORD
static const WCHAR *g_wszWMDMHeight = L"WMDM/Height";
//Type: WMDMDATETIME, WMDM_TAG_DATATYPE: WMDM_TYPE_DATETIME
static const WCHAR *g_wszWMDMSyncTime = L"WMDM/SyncTime";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMParentalRating = L"WMDM/ParentalRating";
//Type: LPCWSTR, WMDM_TAG_DATATYPE: WMDM_TYPE_STRING
static const WCHAR *g_wszWMDMMetaGenre = L"WMDM/MetaGenre";
//Type: BOOL, WMDM_TAG_DATATYPE: WMDM_TYPE_BOOL
static const WCHAR *g_wszWMDMIsRepeat = L"WMDM/IsRepeat";
// Device properties
//PROPVARIANT vt = VT_BSTR | VT_ARRAY
static const WCHAR *g_wszWMDMSupportedDeviceProperties = L"WMDM/SupportedDeviceProperties";
//PROPVARIANT vt = VT_BSTR
static const WCHAR *g_wszWMDMDeviceFriendlyName = L"WMDM/DeviceFriendlyName";
//PROPVARIANT vt = VT_UI4 | VT_ARRAY
static const WCHAR *g_wszWMDMFormatsSupported = L"WMDM/FormatsSupported";
//PROPVARIANT vt = VT_UI4
static const WCHAR *g_wszWMDMSyncRelationshipID = L"WMDM/SyncRelationshipID";
//PROPVARIANT vt = VT_BSTR
static const WCHAR *g_wszWMDMDeviceModelName = L"WMDM/DeviceModelName";
//PROPVARIANT vt = VT_BSTR
static const WCHAR *g_wszWMDMDeviceFirmwareVersion = L"WMDM/DeviceFirmwareVersion";
//PROPVARIANT vt = VT_BSTR
static const WCHAR *g_wszWMDMDeviceVendorExtension = L"WMDM/DeviceVendorExtension";
//PROPVARIANT vt = VT_CLSID
static const WCHAR *g_wszWMDMDeviceProtocol = L"WMDM/DeviceProtocol";
//PROPVARIANT vt = VT_CLSID
static const WCHAR *g_wszWMDMDeviceServiceProviderVendor = L"WMDM/DeviceServiceProviderVendor";
#define CCH_WMDM_PROPNAME(sz) (sizeof(sz)/sizeof(sz[0]))
union WMDMDetermineMaxPropStringLen {
WCHAR sz001[CCH_WMDM_PROPNAME(L"WMDM/DeviceFirmwareVersion")];
WCHAR sz002[CCH_WMDM_PROPNAME(L"WMDM/SupportedDeviceProperties")];
WCHAR sz003[CCH_WMDM_PROPNAME(L"WMDM/FileName")];
WCHAR sz004[CCH_WMDM_PROPNAME(L"WMDM/FormatCode")];
WCHAR sz005[CCH_WMDM_PROPNAME(L"WMDM/LastModifiedDate")];
WCHAR sz006[CCH_WMDM_PROPNAME(L"WMDM/FileSize")];
WCHAR sz007[CCH_WMDM_PROPNAME(L"WMDM/FileAttributes")];
WCHAR sz008[CCH_WMDM_PROPNAME(L"WMDM/AudioWAVECodec")];
WCHAR sz009[CCH_WMDM_PROPNAME(L"WMDM/VideoFourCCCodec")];
WCHAR sz010[CCH_WMDM_PROPNAME(L"WMDM/Title")];
WCHAR sz011[CCH_WMDM_PROPNAME(L"WMDM/Author")];
WCHAR sz012[CCH_WMDM_PROPNAME(L"WMDM/Description")];
WCHAR sz013[CCH_WMDM_PROPNAME(L"WMDM/IsProtected")];
WCHAR sz014[CCH_WMDM_PROPNAME(L"WMDM/AlbumTitle")];
WCHAR sz015[CCH_WMDM_PROPNAME(L"WMDM/AlbumArtist")];
WCHAR sz016[CCH_WMDM_PROPNAME(L"WMDM/Track")];
WCHAR sz017[CCH_WMDM_PROPNAME(L"WMDM/Genre")];
WCHAR sz018[CCH_WMDM_PROPNAME(L"WMDM/TrackMood")];
WCHAR sz019[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverFormat")];
WCHAR sz020[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverSize")];
WCHAR sz021[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverHeight")];
WCHAR sz022[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverWidth")];
WCHAR sz023[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverDuration")];
WCHAR sz024[CCH_WMDM_PROPNAME(L"WMDM/AlbumCoverData")];
WCHAR sz025[CCH_WMDM_PROPNAME(L"WMDM/Year")];
WCHAR sz026[CCH_WMDM_PROPNAME(L"WMDM/Composer")];
WCHAR sz027[CCH_WMDM_PROPNAME(L"WMDM/Codec")];
WCHAR sz028[CCH_WMDM_PROPNAME(L"WMDM/DRMId")];
WCHAR sz029[CCH_WMDM_PROPNAME(L"WMDM/Bitrate")];
WCHAR sz030[CCH_WMDM_PROPNAME(L"WMDM/BitRateType")];
WCHAR sz031[CCH_WMDM_PROPNAME(L"WMDM/SampleRate")];
WCHAR sz032[CCH_WMDM_PROPNAME(L"WMDM/NumChannels")];
WCHAR sz033[CCH_WMDM_PROPNAME(L"WMDM/BlockAlignment")];
WCHAR sz034[CCH_WMDM_PROPNAME(L"WMDM/AudioBitDepth")];
WCHAR sz035[CCH_WMDM_PROPNAME(L"WMDM/TotalBitrate")];
WCHAR sz036[CCH_WMDM_PROPNAME(L"WMDM/VideoBitrate")];
WCHAR sz037[CCH_WMDM_PROPNAME(L"WMDM/FrameRate")];
WCHAR sz041[CCH_WMDM_PROPNAME(L"WMDM/ScanType")];
WCHAR sz043[CCH_WMDM_PROPNAME(L"WMDM/KeyFrameDistance")];
WCHAR sz044[CCH_WMDM_PROPNAME(L"WMDM/BufferSize")];
WCHAR sz045[CCH_WMDM_PROPNAME(L"WMDM/QualitySetting")];
WCHAR sz046[CCH_WMDM_PROPNAME(L"WMDM/Duration")];
WCHAR sz047[CCH_WMDM_PROPNAME(L"WMDM/AlbumArt")];
WCHAR sz048[CCH_WMDM_PROPNAME(L"WMDM/BuyNow")];
WCHAR sz049[CCH_WMDM_PROPNAME(L"WMDM/MediaClassPrimaryID")];
WCHAR sz050[CCH_WMDM_PROPNAME(L"WMDM/MediaClassSecondayID")];
WCHAR sz051[CCH_WMDM_PROPNAME(L"WMDM/UserEffectiveRating")];
WCHAR sz052[CCH_WMDM_PROPNAME(L"WMDM/UserRating")];
WCHAR sz053[CCH_WMDM_PROPNAME(L"WMDM/UserRatingOnDevice")];
WCHAR sz054[CCH_WMDM_PROPNAME(L"WMDM/PlayCount")];
WCHAR sz055[CCH_WMDM_PROPNAME(L"WMDM/DevicePlayCount")];
WCHAR sz056[CCH_WMDM_PROPNAME(L"WMDM/AuthorDate")];
WCHAR sz057[CCH_WMDM_PROPNAME(L"WMDM/UserLastPlayTime")];
WCHAR sz058[CCH_WMDM_PROPNAME(L"WMDM/SubTitle")];
WCHAR sz059[CCH_WMDM_PROPNAME(L"WMDM/SubTitleDescription")];
WCHAR sz060[CCH_WMDM_PROPNAME(L"WMDM/MediaCredits")];
WCHAR sz061[CCH_WMDM_PROPNAME(L"WMDM/MediaStationName")];
WCHAR sz062[CCH_WMDM_PROPNAME(L"WMDM/MediaOriginalChannel")];
WCHAR sz063[CCH_WMDM_PROPNAME(L"WMDM/MediaOriginalBroadcastDateTime")];
WCHAR sz064[CCH_WMDM_PROPNAME(L"WMDM/ProviderCopyright")];
WCHAR sz065[CCH_WMDM_PROPNAME(L"WMDM/SyncID")];
WCHAR sz066[CCH_WMDM_PROPNAME(L"WMDM/PersistentUniqueID")];
WCHAR sz067[CCH_WMDM_PROPNAME(L"WMDM/Width")];
WCHAR sz068[CCH_WMDM_PROPNAME(L"WMDM/Height")];
WCHAR sz069[CCH_WMDM_PROPNAME(L"WMDM/SyncTime")];
WCHAR sz070[CCH_WMDM_PROPNAME(L"WMDM/ParentalRating")];
WCHAR sz071[CCH_WMDM_PROPNAME(L"WMDM/MetaGenre")];
WCHAR sz072[CCH_WMDM_PROPNAME(L"WMDM/IsRepeat")];
WCHAR sz073[CCH_WMDM_PROPNAME(L"WMDM/SupportedDeviceProperties")];
WCHAR sz074[CCH_WMDM_PROPNAME(L"WMDM/DeviceFriendlyName")];
WCHAR sz075[CCH_WMDM_PROPNAME(L"WMDM/FormatsSupported")];
WCHAR sz076[CCH_WMDM_PROPNAME(L"WMDM/SyncRelationshipID")];
WCHAR sz077[CCH_WMDM_PROPNAME(L"WMDM/DeviceModelName")];
WCHAR sz078[CCH_WMDM_PROPNAME(L"WMDM/DeviceFirmwareVersion")];
WCHAR sz079[CCH_WMDM_PROPNAME(L"WMDM/DeviceVendorExtension")];
WCHAR sz080[CCH_WMDM_PROPNAME(L"WMDM/DeviceProtocol")];
WCHAR sz081[CCH_WMDM_PROPNAME(L"WMDM/DeviceServiceProviderVendor")];
};
#define WMDM_MAXLEN_PROPERTYNAME (sizeof(WMDMDetermineMaxPropStringLen)/sizeof(WCHAR))
// Open Mode Flags
#define MDSP_READ                               0x00000001
#define MDSP_WRITE                              0x00000002
// Seek Flags
#define MDSP_SEEK_BOF                           0x00000001
#define MDSP_SEEK_CUR                           0x00000002
#define MDSP_SEEK_EOF                           0x00000004











extern RPC_IF_HANDLE __MIDL_itf_MsHDSP_0300_ClientIfHandle;
extern RPC_IF_HANDLE __MIDL_itf_MsHDSP_0300_ServerIfHandle;

#ifndef __IMDServiceProvider_INTERFACE_DEFINED__
#define __IMDServiceProvider_INTERFACE_DEFINED__

/* interface IMDServiceProvider */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDServiceProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A10-33ED-11d3-8470-00C04F79DBC0")
    IMDServiceProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDeviceCount( 
            /* [out] */ DWORD *pdwCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumDevices( 
            /* [out] */ IMDSPEnumDevice **ppEnumDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDServiceProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDServiceProvider * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDServiceProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDServiceProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IMDServiceProvider * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )( 
            IMDServiceProvider * This,
            /* [out] */ IMDSPEnumDevice **ppEnumDevice);
        
        END_INTERFACE
    } IMDServiceProviderVtbl;

    interface IMDServiceProvider
    {
        CONST_VTBL struct IMDServiceProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDServiceProvider_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDServiceProvider_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDServiceProvider_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDServiceProvider_GetDeviceCount(This,pdwCount)	\
    (This)->lpVtbl -> GetDeviceCount(This,pdwCount)

#define IMDServiceProvider_EnumDevices(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices(This,ppEnumDevice)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDServiceProvider_GetDeviceCount_Proxy( 
    IMDServiceProvider * This,
    /* [out] */ DWORD *pdwCount);


void __RPC_STUB IMDServiceProvider_GetDeviceCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDServiceProvider_EnumDevices_Proxy( 
    IMDServiceProvider * This,
    /* [out] */ IMDSPEnumDevice **ppEnumDevice);


void __RPC_STUB IMDServiceProvider_EnumDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDServiceProvider_INTERFACE_DEFINED__ */


#ifndef __IMDServiceProvider2_INTERFACE_DEFINED__
#define __IMDServiceProvider2_INTERFACE_DEFINED__

/* interface IMDServiceProvider2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDServiceProvider2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B2FA24B7-CDA3-4694-9862-413AE1A34819")
    IMDServiceProvider2 : public IMDServiceProvider
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateDevice( 
            /* [string][in] */ LPCWSTR pwszDevicePath,
            /* [out] */ DWORD *pdwCount,
            /* [size_is][size_is][out] */ IMDSPDevice ***pppDeviceArray) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDServiceProvider2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDServiceProvider2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDServiceProvider2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDServiceProvider2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IMDServiceProvider2 * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )( 
            IMDServiceProvider2 * This,
            /* [out] */ IMDSPEnumDevice **ppEnumDevice);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDevice )( 
            IMDServiceProvider2 * This,
            /* [string][in] */ LPCWSTR pwszDevicePath,
            /* [out] */ DWORD *pdwCount,
            /* [size_is][size_is][out] */ IMDSPDevice ***pppDeviceArray);
        
        END_INTERFACE
    } IMDServiceProvider2Vtbl;

    interface IMDServiceProvider2
    {
        CONST_VTBL struct IMDServiceProvider2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDServiceProvider2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDServiceProvider2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDServiceProvider2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDServiceProvider2_GetDeviceCount(This,pdwCount)	\
    (This)->lpVtbl -> GetDeviceCount(This,pdwCount)

#define IMDServiceProvider2_EnumDevices(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices(This,ppEnumDevice)


#define IMDServiceProvider2_CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray)	\
    (This)->lpVtbl -> CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDServiceProvider2_CreateDevice_Proxy( 
    IMDServiceProvider2 * This,
    /* [string][in] */ LPCWSTR pwszDevicePath,
    /* [out] */ DWORD *pdwCount,
    /* [size_is][size_is][out] */ IMDSPDevice ***pppDeviceArray);


void __RPC_STUB IMDServiceProvider2_CreateDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDServiceProvider2_INTERFACE_DEFINED__ */


#ifndef __IMDServiceProvider3_INTERFACE_DEFINED__
#define __IMDServiceProvider3_INTERFACE_DEFINED__

/* interface IMDServiceProvider3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDServiceProvider3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4ed13ef3-a971-4d19-9f51-0e1826b2da57")
    IMDServiceProvider3 : public IMDServiceProvider2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDeviceEnumPreference( 
            /* [in] */ DWORD dwEnumPref) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDServiceProvider3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDServiceProvider3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDServiceProvider3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDServiceProvider3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCount )( 
            IMDServiceProvider3 * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDevices )( 
            IMDServiceProvider3 * This,
            /* [out] */ IMDSPEnumDevice **ppEnumDevice);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDevice )( 
            IMDServiceProvider3 * This,
            /* [string][in] */ LPCWSTR pwszDevicePath,
            /* [out] */ DWORD *pdwCount,
            /* [size_is][size_is][out] */ IMDSPDevice ***pppDeviceArray);
        
        HRESULT ( STDMETHODCALLTYPE *SetDeviceEnumPreference )( 
            IMDServiceProvider3 * This,
            /* [in] */ DWORD dwEnumPref);
        
        END_INTERFACE
    } IMDServiceProvider3Vtbl;

    interface IMDServiceProvider3
    {
        CONST_VTBL struct IMDServiceProvider3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDServiceProvider3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDServiceProvider3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDServiceProvider3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDServiceProvider3_GetDeviceCount(This,pdwCount)	\
    (This)->lpVtbl -> GetDeviceCount(This,pdwCount)

#define IMDServiceProvider3_EnumDevices(This,ppEnumDevice)	\
    (This)->lpVtbl -> EnumDevices(This,ppEnumDevice)


#define IMDServiceProvider3_CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray)	\
    (This)->lpVtbl -> CreateDevice(This,pwszDevicePath,pdwCount,pppDeviceArray)


#define IMDServiceProvider3_SetDeviceEnumPreference(This,dwEnumPref)	\
    (This)->lpVtbl -> SetDeviceEnumPreference(This,dwEnumPref)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDServiceProvider3_SetDeviceEnumPreference_Proxy( 
    IMDServiceProvider3 * This,
    /* [in] */ DWORD dwEnumPref);


void __RPC_STUB IMDServiceProvider3_SetDeviceEnumPreference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDServiceProvider3_INTERFACE_DEFINED__ */


#ifndef __IMDSPEnumDevice_INTERFACE_DEFINED__
#define __IMDSPEnumDevice_INTERFACE_DEFINED__

/* interface IMDSPEnumDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPEnumDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A11-33ED-11d3-8470-00C04F79DBC0")
    IMDSPEnumDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IMDSPDevice **ppDevice,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMDSPEnumDevice **ppEnumDevice) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPEnumDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPEnumDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPEnumDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPEnumDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IMDSPEnumDevice * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IMDSPDevice **ppDevice,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IMDSPEnumDevice * This,
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IMDSPEnumDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IMDSPEnumDevice * This,
            /* [out] */ IMDSPEnumDevice **ppEnumDevice);
        
        END_INTERFACE
    } IMDSPEnumDeviceVtbl;

    interface IMDSPEnumDevice
    {
        CONST_VTBL struct IMDSPEnumDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPEnumDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPEnumDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPEnumDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPEnumDevice_Next(This,celt,ppDevice,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppDevice,pceltFetched)

#define IMDSPEnumDevice_Skip(This,celt,pceltFetched)	\
    (This)->lpVtbl -> Skip(This,celt,pceltFetched)

#define IMDSPEnumDevice_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IMDSPEnumDevice_Clone(This,ppEnumDevice)	\
    (This)->lpVtbl -> Clone(This,ppEnumDevice)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPEnumDevice_Next_Proxy( 
    IMDSPEnumDevice * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IMDSPDevice **ppDevice,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IMDSPEnumDevice_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPEnumDevice_Skip_Proxy( 
    IMDSPEnumDevice * This,
    /* [in] */ ULONG celt,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IMDSPEnumDevice_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPEnumDevice_Reset_Proxy( 
    IMDSPEnumDevice * This);


void __RPC_STUB IMDSPEnumDevice_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPEnumDevice_Clone_Proxy( 
    IMDSPEnumDevice * This,
    /* [out] */ IMDSPEnumDevice **ppEnumDevice);


void __RPC_STUB IMDSPEnumDevice_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPEnumDevice_INTERFACE_DEFINED__ */


#ifndef __IMDSPDevice_INTERFACE_DEFINED__
#define __IMDSPDevice_INTERFACE_DEFINED__

/* interface IMDSPDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A12-33ED-11d3-8470-00C04F79DBC0")
    IMDSPDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManufacturer( 
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [out] */ DWORD *pdwVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ DWORD *pdwType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSerialNumber( 
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPowerSource( 
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ DWORD *pdwStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceIcon( 
            /* [out] */ ULONG *hIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStorage( 
            /* [out] */ IMDSPEnumStorage **ppEnumStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormatSupport( 
            /* [size_is][size_is][out] */ _WAVEFORMATEX **pFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendOpaqueCommand( 
            /* [out][in] */ OPAQUECOMMAND *pCommand) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IMDSPDevice * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )( 
            IMDSPDevice * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IMDSPDevice * This,
            /* [out] */ DWORD *pdwVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IMDSPDevice * This,
            /* [out] */ DWORD *pdwType);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IMDSPDevice * This,
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )( 
            IMDSPDevice * This,
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IMDSPDevice * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )( 
            IMDSPDevice * This,
            /* [out] */ ULONG *hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IMDSPDevice * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )( 
            IMDSPDevice * This,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **pFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IMDSPDevice * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        END_INTERFACE
    } IMDSPDeviceVtbl;

    interface IMDSPDevice
    {
        CONST_VTBL struct IMDSPDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPDevice_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IMDSPDevice_GetManufacturer(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars)

#define IMDSPDevice_GetVersion(This,pdwVersion)	\
    (This)->lpVtbl -> GetVersion(This,pdwVersion)

#define IMDSPDevice_GetType(This,pdwType)	\
    (This)->lpVtbl -> GetType(This,pdwType)

#define IMDSPDevice_GetSerialNumber(This,pSerialNumber,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac)

#define IMDSPDevice_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)	\
    (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)

#define IMDSPDevice_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IMDSPDevice_GetDeviceIcon(This,hIcon)	\
    (This)->lpVtbl -> GetDeviceIcon(This,hIcon)

#define IMDSPDevice_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IMDSPDevice_GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)

#define IMDSPDevice_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPDevice_GetName_Proxy( 
    IMDSPDevice * This,
    /* [size_is][string][out] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IMDSPDevice_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetManufacturer_Proxy( 
    IMDSPDevice * This,
    /* [size_is][string][out] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IMDSPDevice_GetManufacturer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetVersion_Proxy( 
    IMDSPDevice * This,
    /* [out] */ DWORD *pdwVersion);


void __RPC_STUB IMDSPDevice_GetVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetType_Proxy( 
    IMDSPDevice * This,
    /* [out] */ DWORD *pdwType);


void __RPC_STUB IMDSPDevice_GetType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetSerialNumber_Proxy( 
    IMDSPDevice * This,
    /* [out] */ PWMDMID pSerialNumber,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IMDSPDevice_GetSerialNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetPowerSource_Proxy( 
    IMDSPDevice * This,
    /* [out] */ DWORD *pdwPowerSource,
    /* [out] */ DWORD *pdwPercentRemaining);


void __RPC_STUB IMDSPDevice_GetPowerSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetStatus_Proxy( 
    IMDSPDevice * This,
    /* [out] */ DWORD *pdwStatus);


void __RPC_STUB IMDSPDevice_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetDeviceIcon_Proxy( 
    IMDSPDevice * This,
    /* [out] */ ULONG *hIcon);


void __RPC_STUB IMDSPDevice_GetDeviceIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_EnumStorage_Proxy( 
    IMDSPDevice * This,
    /* [out] */ IMDSPEnumStorage **ppEnumStorage);


void __RPC_STUB IMDSPDevice_EnumStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_GetFormatSupport_Proxy( 
    IMDSPDevice * This,
    /* [size_is][size_is][out] */ _WAVEFORMATEX **pFormatEx,
    /* [out] */ UINT *pnFormatCount,
    /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
    /* [out] */ UINT *pnMimeTypeCount);


void __RPC_STUB IMDSPDevice_GetFormatSupport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice_SendOpaqueCommand_Proxy( 
    IMDSPDevice * This,
    /* [out][in] */ OPAQUECOMMAND *pCommand);


void __RPC_STUB IMDSPDevice_SendOpaqueCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPDevice_INTERFACE_DEFINED__ */


#ifndef __IMDSPDevice2_INTERFACE_DEFINED__
#define __IMDSPDevice2_INTERFACE_DEFINED__

/* interface IMDSPDevice2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPDevice2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("420D16AD-C97D-4e00-82AA-00E9F4335DDD")
    IMDSPDevice2 : public IMDSPDevice
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStorage( 
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IMDSPStorage **ppStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormatSupport2( 
            /* [in] */ DWORD dwFlags,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
            /* [ref][out] */ UINT *pnAudioFormatCount,
            /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
            /* [ref][out] */ UINT *pnVideoFormatCount,
            /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
            /* [ref][out] */ UINT *pnFileTypeCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpecifyPropertyPages( 
            /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
            /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
            /* [ref][out] */ ULONG *pcUnks) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalName( 
            /* [size_is][out] */ LPWSTR pwszPnPName,
            /* [in] */ UINT nMaxChars) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPDevice2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPDevice2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPDevice2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPDevice2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IMDSPDevice2 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )( 
            IMDSPDevice2 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IMDSPDevice2 * This,
            /* [out] */ DWORD *pdwVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IMDSPDevice2 * This,
            /* [out] */ DWORD *pdwType);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IMDSPDevice2 * This,
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )( 
            IMDSPDevice2 * This,
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IMDSPDevice2 * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )( 
            IMDSPDevice2 * This,
            /* [out] */ ULONG *hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IMDSPDevice2 * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )( 
            IMDSPDevice2 * This,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **pFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IMDSPDevice2 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IMDSPDevice2 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IMDSPStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )( 
            IMDSPDevice2 * This,
            /* [in] */ DWORD dwFlags,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
            /* [ref][out] */ UINT *pnAudioFormatCount,
            /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
            /* [ref][out] */ UINT *pnVideoFormatCount,
            /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
            /* [ref][out] */ UINT *pnFileTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )( 
            IMDSPDevice2 * This,
            /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
            /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
            /* [ref][out] */ ULONG *pcUnks);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )( 
            IMDSPDevice2 * This,
            /* [size_is][out] */ LPWSTR pwszPnPName,
            /* [in] */ UINT nMaxChars);
        
        END_INTERFACE
    } IMDSPDevice2Vtbl;

    interface IMDSPDevice2
    {
        CONST_VTBL struct IMDSPDevice2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPDevice2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPDevice2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPDevice2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPDevice2_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IMDSPDevice2_GetManufacturer(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars)

#define IMDSPDevice2_GetVersion(This,pdwVersion)	\
    (This)->lpVtbl -> GetVersion(This,pdwVersion)

#define IMDSPDevice2_GetType(This,pdwType)	\
    (This)->lpVtbl -> GetType(This,pdwType)

#define IMDSPDevice2_GetSerialNumber(This,pSerialNumber,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac)

#define IMDSPDevice2_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)	\
    (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)

#define IMDSPDevice2_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IMDSPDevice2_GetDeviceIcon(This,hIcon)	\
    (This)->lpVtbl -> GetDeviceIcon(This,hIcon)

#define IMDSPDevice2_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IMDSPDevice2_GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)

#define IMDSPDevice2_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IMDSPDevice2_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IMDSPDevice2_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)

#define IMDSPDevice2_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)	\
    (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)

#define IMDSPDevice2_GetCanonicalName(This,pwszPnPName,nMaxChars)	\
    (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPDevice2_GetStorage_Proxy( 
    IMDSPDevice2 * This,
    /* [string][in] */ LPCWSTR pszStorageName,
    /* [out] */ IMDSPStorage **ppStorage);


void __RPC_STUB IMDSPDevice2_GetStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice2_GetFormatSupport2_Proxy( 
    IMDSPDevice2 * This,
    /* [in] */ DWORD dwFlags,
    /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
    /* [ref][out] */ UINT *pnAudioFormatCount,
    /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
    /* [ref][out] */ UINT *pnVideoFormatCount,
    /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
    /* [ref][out] */ UINT *pnFileTypeCount);


void __RPC_STUB IMDSPDevice2_GetFormatSupport2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice2_GetSpecifyPropertyPages_Proxy( 
    IMDSPDevice2 * This,
    /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
    /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
    /* [ref][out] */ ULONG *pcUnks);


void __RPC_STUB IMDSPDevice2_GetSpecifyPropertyPages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice2_GetCanonicalName_Proxy( 
    IMDSPDevice2 * This,
    /* [size_is][out] */ LPWSTR pwszPnPName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IMDSPDevice2_GetCanonicalName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPDevice2_INTERFACE_DEFINED__ */


#ifndef __IMDSPDevice3_INTERFACE_DEFINED__
#define __IMDSPDevice3_INTERFACE_DEFINED__

/* interface IMDSPDevice3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPDevice3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1a839845-fc55-487c-976f-ee38ac0e8c4e")
    IMDSPDevice3 : public IMDSPDevice2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ LPCWSTR pwszPropName,
            /* [out] */ PROPVARIANT *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ LPCWSTR pwszPropName,
            /* [in] */ const PROPVARIANT *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFormatCapability( 
            /* [in] */ WMDM_FORMATCODE format,
            /* [out] */ WMDM_FORMAT_CAPABILITY *pFormatSupport) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeviceIoControl( 
            /* [in] */ DWORD dwIoControlCode,
            /* [size_is][in] */ BYTE *lpInBuffer,
            /* [in] */ DWORD nInBufferSize,
            /* [size_is][out] */ BYTE *lpOutBuffer,
            /* [out][in] */ LPDWORD pnOutBufferSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindStorage( 
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IMDSPStorage **ppStorage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPDevice3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPDevice3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPDevice3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPDevice3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IMDSPDevice3 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetManufacturer )( 
            IMDSPDevice3 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IMDSPDevice3 * This,
            /* [out] */ DWORD *pdwVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IMDSPDevice3 * This,
            /* [out] */ DWORD *pdwType);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IMDSPDevice3 * This,
            /* [out] */ PWMDMID pSerialNumber,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerSource )( 
            IMDSPDevice3 * This,
            /* [out] */ DWORD *pdwPowerSource,
            /* [out] */ DWORD *pdwPercentRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IMDSPDevice3 * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceIcon )( 
            IMDSPDevice3 * This,
            /* [out] */ ULONG *hIcon);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IMDSPDevice3 * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport )( 
            IMDSPDevice3 * This,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **pFormatEx,
            /* [out] */ UINT *pnFormatCount,
            /* [size_is][size_is][out] */ LPWSTR **pppwszMimeType,
            /* [out] */ UINT *pnMimeTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IMDSPDevice3 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IMDSPDevice3 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IMDSPStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatSupport2 )( 
            IMDSPDevice3 * This,
            /* [in] */ DWORD dwFlags,
            /* [size_is][size_is][out] */ _WAVEFORMATEX **ppAudioFormatEx,
            /* [ref][out] */ UINT *pnAudioFormatCount,
            /* [size_is][size_is][out] */ _VIDEOINFOHEADER **ppVideoFormatEx,
            /* [ref][out] */ UINT *pnVideoFormatCount,
            /* [size_is][size_is][out] */ WMFILECAPABILITIES **ppFileType,
            /* [ref][out] */ UINT *pnFileTypeCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecifyPropertyPages )( 
            IMDSPDevice3 * This,
            /* [ref][out] */ ISpecifyPropertyPages **ppSpecifyPropPages,
            /* [size_is][size_is][ref][out] */ IUnknown ***pppUnknowns,
            /* [ref][out] */ ULONG *pcUnks);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )( 
            IMDSPDevice3 * This,
            /* [size_is][out] */ LPWSTR pwszPnPName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IMDSPDevice3 * This,
            /* [in] */ LPCWSTR pwszPropName,
            /* [out] */ PROPVARIANT *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IMDSPDevice3 * This,
            /* [in] */ LPCWSTR pwszPropName,
            /* [in] */ const PROPVARIANT *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatCapability )( 
            IMDSPDevice3 * This,
            /* [in] */ WMDM_FORMATCODE format,
            /* [out] */ WMDM_FORMAT_CAPABILITY *pFormatSupport);
        
        HRESULT ( STDMETHODCALLTYPE *DeviceIoControl )( 
            IMDSPDevice3 * This,
            /* [in] */ DWORD dwIoControlCode,
            /* [size_is][in] */ BYTE *lpInBuffer,
            /* [in] */ DWORD nInBufferSize,
            /* [size_is][out] */ BYTE *lpOutBuffer,
            /* [out][in] */ LPDWORD pnOutBufferSize);
        
        HRESULT ( STDMETHODCALLTYPE *FindStorage )( 
            IMDSPDevice3 * This,
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IMDSPStorage **ppStorage);
        
        END_INTERFACE
    } IMDSPDevice3Vtbl;

    interface IMDSPDevice3
    {
        CONST_VTBL struct IMDSPDevice3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPDevice3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPDevice3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPDevice3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPDevice3_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IMDSPDevice3_GetManufacturer(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetManufacturer(This,pwszName,nMaxChars)

#define IMDSPDevice3_GetVersion(This,pdwVersion)	\
    (This)->lpVtbl -> GetVersion(This,pdwVersion)

#define IMDSPDevice3_GetType(This,pdwType)	\
    (This)->lpVtbl -> GetType(This,pdwType)

#define IMDSPDevice3_GetSerialNumber(This,pSerialNumber,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNumber,abMac)

#define IMDSPDevice3_GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)	\
    (This)->lpVtbl -> GetPowerSource(This,pdwPowerSource,pdwPercentRemaining)

#define IMDSPDevice3_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IMDSPDevice3_GetDeviceIcon(This,hIcon)	\
    (This)->lpVtbl -> GetDeviceIcon(This,hIcon)

#define IMDSPDevice3_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IMDSPDevice3_GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport(This,pFormatEx,pnFormatCount,pppwszMimeType,pnMimeTypeCount)

#define IMDSPDevice3_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IMDSPDevice3_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IMDSPDevice3_GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)	\
    (This)->lpVtbl -> GetFormatSupport2(This,dwFlags,ppAudioFormatEx,pnAudioFormatCount,ppVideoFormatEx,pnVideoFormatCount,ppFileType,pnFileTypeCount)

#define IMDSPDevice3_GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)	\
    (This)->lpVtbl -> GetSpecifyPropertyPages(This,ppSpecifyPropPages,pppUnknowns,pcUnks)

#define IMDSPDevice3_GetCanonicalName(This,pwszPnPName,nMaxChars)	\
    (This)->lpVtbl -> GetCanonicalName(This,pwszPnPName,nMaxChars)


#define IMDSPDevice3_GetProperty(This,pwszPropName,pValue)	\
    (This)->lpVtbl -> GetProperty(This,pwszPropName,pValue)

#define IMDSPDevice3_SetProperty(This,pwszPropName,pValue)	\
    (This)->lpVtbl -> SetProperty(This,pwszPropName,pValue)

#define IMDSPDevice3_GetFormatCapability(This,format,pFormatSupport)	\
    (This)->lpVtbl -> GetFormatCapability(This,format,pFormatSupport)

#define IMDSPDevice3_DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize)	\
    (This)->lpVtbl -> DeviceIoControl(This,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,pnOutBufferSize)

#define IMDSPDevice3_FindStorage(This,findScope,pwszUniqueID,ppStorage)	\
    (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPDevice3_GetProperty_Proxy( 
    IMDSPDevice3 * This,
    /* [in] */ LPCWSTR pwszPropName,
    /* [out] */ PROPVARIANT *pValue);


void __RPC_STUB IMDSPDevice3_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice3_SetProperty_Proxy( 
    IMDSPDevice3 * This,
    /* [in] */ LPCWSTR pwszPropName,
    /* [in] */ const PROPVARIANT *pValue);


void __RPC_STUB IMDSPDevice3_SetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice3_GetFormatCapability_Proxy( 
    IMDSPDevice3 * This,
    /* [in] */ WMDM_FORMATCODE format,
    /* [out] */ WMDM_FORMAT_CAPABILITY *pFormatSupport);


void __RPC_STUB IMDSPDevice3_GetFormatCapability_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice3_DeviceIoControl_Proxy( 
    IMDSPDevice3 * This,
    /* [in] */ DWORD dwIoControlCode,
    /* [size_is][in] */ BYTE *lpInBuffer,
    /* [in] */ DWORD nInBufferSize,
    /* [size_is][out] */ BYTE *lpOutBuffer,
    /* [out][in] */ LPDWORD pnOutBufferSize);


void __RPC_STUB IMDSPDevice3_DeviceIoControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDevice3_FindStorage_Proxy( 
    IMDSPDevice3 * This,
    /* [in] */ WMDM_FIND_SCOPE findScope,
    /* [in] */ LPCWSTR pwszUniqueID,
    /* [out] */ IMDSPStorage **ppStorage);


void __RPC_STUB IMDSPDevice3_FindStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPDevice3_INTERFACE_DEFINED__ */


#ifndef __IMDSPDeviceControl_INTERFACE_DEFINED__
#define __IMDSPDeviceControl_INTERFACE_DEFINED__

/* interface IMDSPDeviceControl */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPDeviceControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A14-33ED-11d3-8470-00C04F79DBC0")
    IMDSPDeviceControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDCStatus( 
            /* [out] */ DWORD *pdwStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [out] */ DWORD *pdwCapabilitiesMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Play( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Record( 
            /* [in] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Seek( 
            /* [in] */ UINT fuMode,
            /* [in] */ int nOffset) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPDeviceControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPDeviceControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPDeviceControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDCStatus )( 
            IMDSPDeviceControl * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IMDSPDeviceControl * This,
            /* [out] */ DWORD *pdwCapabilitiesMask);
        
        HRESULT ( STDMETHODCALLTYPE *Play )( 
            IMDSPDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Record )( 
            IMDSPDeviceControl * This,
            /* [in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IMDSPDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IMDSPDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IMDSPDeviceControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IMDSPDeviceControl * This,
            /* [in] */ UINT fuMode,
            /* [in] */ int nOffset);
        
        END_INTERFACE
    } IMDSPDeviceControlVtbl;

    interface IMDSPDeviceControl
    {
        CONST_VTBL struct IMDSPDeviceControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPDeviceControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPDeviceControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPDeviceControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPDeviceControl_GetDCStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetDCStatus(This,pdwStatus)

#define IMDSPDeviceControl_GetCapabilities(This,pdwCapabilitiesMask)	\
    (This)->lpVtbl -> GetCapabilities(This,pdwCapabilitiesMask)

#define IMDSPDeviceControl_Play(This)	\
    (This)->lpVtbl -> Play(This)

#define IMDSPDeviceControl_Record(This,pFormat)	\
    (This)->lpVtbl -> Record(This,pFormat)

#define IMDSPDeviceControl_Pause(This)	\
    (This)->lpVtbl -> Pause(This)

#define IMDSPDeviceControl_Resume(This)	\
    (This)->lpVtbl -> Resume(This)

#define IMDSPDeviceControl_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#define IMDSPDeviceControl_Seek(This,fuMode,nOffset)	\
    (This)->lpVtbl -> Seek(This,fuMode,nOffset)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_GetDCStatus_Proxy( 
    IMDSPDeviceControl * This,
    /* [out] */ DWORD *pdwStatus);


void __RPC_STUB IMDSPDeviceControl_GetDCStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_GetCapabilities_Proxy( 
    IMDSPDeviceControl * This,
    /* [out] */ DWORD *pdwCapabilitiesMask);


void __RPC_STUB IMDSPDeviceControl_GetCapabilities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_Play_Proxy( 
    IMDSPDeviceControl * This);


void __RPC_STUB IMDSPDeviceControl_Play_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_Record_Proxy( 
    IMDSPDeviceControl * This,
    /* [in] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IMDSPDeviceControl_Record_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_Pause_Proxy( 
    IMDSPDeviceControl * This);


void __RPC_STUB IMDSPDeviceControl_Pause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_Resume_Proxy( 
    IMDSPDeviceControl * This);


void __RPC_STUB IMDSPDeviceControl_Resume_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_Stop_Proxy( 
    IMDSPDeviceControl * This);


void __RPC_STUB IMDSPDeviceControl_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPDeviceControl_Seek_Proxy( 
    IMDSPDeviceControl * This,
    /* [in] */ UINT fuMode,
    /* [in] */ int nOffset);


void __RPC_STUB IMDSPDeviceControl_Seek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPDeviceControl_INTERFACE_DEFINED__ */


#ifndef __IMDSPEnumStorage_INTERFACE_DEFINED__
#define __IMDSPEnumStorage_INTERFACE_DEFINED__

/* interface IMDSPEnumStorage */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPEnumStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A15-33ED-11d3-8470-00C04F79DBC0")
    IMDSPEnumStorage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IMDSPStorage **ppStorage,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IMDSPEnumStorage **ppEnumStorage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPEnumStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPEnumStorage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPEnumStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPEnumStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IMDSPEnumStorage * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ IMDSPStorage **ppStorage,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IMDSPEnumStorage * This,
            /* [in] */ ULONG celt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IMDSPEnumStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IMDSPEnumStorage * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        END_INTERFACE
    } IMDSPEnumStorageVtbl;

    interface IMDSPEnumStorage
    {
        CONST_VTBL struct IMDSPEnumStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPEnumStorage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPEnumStorage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPEnumStorage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPEnumStorage_Next(This,celt,ppStorage,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppStorage,pceltFetched)

#define IMDSPEnumStorage_Skip(This,celt,pceltFetched)	\
    (This)->lpVtbl -> Skip(This,celt,pceltFetched)

#define IMDSPEnumStorage_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IMDSPEnumStorage_Clone(This,ppEnumStorage)	\
    (This)->lpVtbl -> Clone(This,ppEnumStorage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPEnumStorage_Next_Proxy( 
    IMDSPEnumStorage * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IMDSPStorage **ppStorage,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IMDSPEnumStorage_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPEnumStorage_Skip_Proxy( 
    IMDSPEnumStorage * This,
    /* [in] */ ULONG celt,
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB IMDSPEnumStorage_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPEnumStorage_Reset_Proxy( 
    IMDSPEnumStorage * This);


void __RPC_STUB IMDSPEnumStorage_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPEnumStorage_Clone_Proxy( 
    IMDSPEnumStorage * This,
    /* [out] */ IMDSPEnumStorage **ppEnumStorage);


void __RPC_STUB IMDSPEnumStorage_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPEnumStorage_INTERFACE_DEFINED__ */


#ifndef __IMDSPStorage_INTERFACE_DEFINED__
#define __IMDSPStorage_INTERFACE_DEFINED__

/* interface IMDSPStorage */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A16-33ED-11d3-8470-00C04F79DBC0")
    IMDSPStorage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAttributes( 
            /* [in] */ DWORD dwAttributes,
            /* [in] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStorageGlobals( 
            /* [out] */ IMDSPStorageGlobals **ppStorageGlobals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ _WAVEFORMATEX *pFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDate( 
            /* [out] */ PWMDMDATETIME pDateTimeUTC) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRights( 
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStorage( 
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [in] */ LPWSTR pwszName,
            /* [out] */ IMDSPStorage **ppNewStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStorage( 
            /* [out] */ IMDSPEnumStorage **ppEnumStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendOpaqueCommand( 
            /* [out][in] */ OPAQUECOMMAND *pCommand) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPStorage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IMDSPStorage * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IMDSPStorage * This,
            /* [out] */ IMDSPStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IMDSPStorage * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IMDSPStorage * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IMDSPStorage * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IMDSPStorage * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IMDSPStorage * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )( 
            IMDSPStorage * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [in] */ LPWSTR pwszName,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IMDSPStorage * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IMDSPStorage * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        END_INTERFACE
    } IMDSPStorageVtbl;

    interface IMDSPStorage
    {
        CONST_VTBL struct IMDSPStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPStorage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPStorage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPStorage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPStorage_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IMDSPStorage_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IMDSPStorage_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IMDSPStorage_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IMDSPStorage_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IMDSPStorage_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IMDSPStorage_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IMDSPStorage_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)

#define IMDSPStorage_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IMDSPStorage_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPStorage_SetAttributes_Proxy( 
    IMDSPStorage * This,
    /* [in] */ DWORD dwAttributes,
    /* [in] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IMDSPStorage_SetAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_GetStorageGlobals_Proxy( 
    IMDSPStorage * This,
    /* [out] */ IMDSPStorageGlobals **ppStorageGlobals);


void __RPC_STUB IMDSPStorage_GetStorageGlobals_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_GetAttributes_Proxy( 
    IMDSPStorage * This,
    /* [out] */ DWORD *pdwAttributes,
    /* [out] */ _WAVEFORMATEX *pFormat);


void __RPC_STUB IMDSPStorage_GetAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_GetName_Proxy( 
    IMDSPStorage * This,
    /* [size_is][string][out] */ LPWSTR pwszName,
    /* [in] */ UINT nMaxChars);


void __RPC_STUB IMDSPStorage_GetName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_GetDate_Proxy( 
    IMDSPStorage * This,
    /* [out] */ PWMDMDATETIME pDateTimeUTC);


void __RPC_STUB IMDSPStorage_GetDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_GetSize_Proxy( 
    IMDSPStorage * This,
    /* [out] */ DWORD *pdwSizeLow,
    /* [out] */ DWORD *pdwSizeHigh);


void __RPC_STUB IMDSPStorage_GetSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_GetRights_Proxy( 
    IMDSPStorage * This,
    /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
    /* [out] */ UINT *pnRightsCount,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IMDSPStorage_GetRights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_CreateStorage_Proxy( 
    IMDSPStorage * This,
    /* [in] */ DWORD dwAttributes,
    /* [unique][in] */ _WAVEFORMATEX *pFormat,
    /* [in] */ LPWSTR pwszName,
    /* [out] */ IMDSPStorage **ppNewStorage);


void __RPC_STUB IMDSPStorage_CreateStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_EnumStorage_Proxy( 
    IMDSPStorage * This,
    /* [out] */ IMDSPEnumStorage **ppEnumStorage);


void __RPC_STUB IMDSPStorage_EnumStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage_SendOpaqueCommand_Proxy( 
    IMDSPStorage * This,
    /* [out][in] */ OPAQUECOMMAND *pCommand);


void __RPC_STUB IMDSPStorage_SendOpaqueCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPStorage_INTERFACE_DEFINED__ */


#ifndef __IMDSPStorage2_INTERFACE_DEFINED__
#define __IMDSPStorage2_INTERFACE_DEFINED__

/* interface IMDSPStorage2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPStorage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0A5E07A5-6454-4451-9C36-1C6AE7E2B1D6")
    IMDSPStorage2 : public IMDSPStorage
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStorage( 
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IMDSPStorage **ppStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStorage2( 
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat,
            /* [in] */ LPWSTR pwszName,
            /* [in] */ ULONGLONG qwFileSize,
            /* [out] */ IMDSPStorage **ppNewStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAttributes2( 
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [in] */ _WAVEFORMATEX *pAudioFormat,
            /* [in] */ _VIDEOINFOHEADER *pVideoFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes2( 
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [out] */ _WAVEFORMATEX *pAudioFormat,
            /* [out] */ _VIDEOINFOHEADER *pVideoFormat) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPStorage2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPStorage2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPStorage2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPStorage2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IMDSPStorage2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IMDSPStorage2 * This,
            /* [out] */ IMDSPStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IMDSPStorage2 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IMDSPStorage2 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IMDSPStorage2 * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IMDSPStorage2 * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IMDSPStorage2 * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )( 
            IMDSPStorage2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [in] */ LPWSTR pwszName,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IMDSPStorage2 * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IMDSPStorage2 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IMDSPStorage2 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IMDSPStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorage2 )( 
            IMDSPStorage2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat,
            /* [in] */ LPWSTR pwszName,
            /* [in] */ ULONGLONG qwFileSize,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )( 
            IMDSPStorage2 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [in] */ _WAVEFORMATEX *pAudioFormat,
            /* [in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )( 
            IMDSPStorage2 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [out] */ _WAVEFORMATEX *pAudioFormat,
            /* [out] */ _VIDEOINFOHEADER *pVideoFormat);
        
        END_INTERFACE
    } IMDSPStorage2Vtbl;

    interface IMDSPStorage2
    {
        CONST_VTBL struct IMDSPStorage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPStorage2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPStorage2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPStorage2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPStorage2_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IMDSPStorage2_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IMDSPStorage2_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IMDSPStorage2_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IMDSPStorage2_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IMDSPStorage2_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IMDSPStorage2_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IMDSPStorage2_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)

#define IMDSPStorage2_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IMDSPStorage2_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IMDSPStorage2_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IMDSPStorage2_CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage)

#define IMDSPStorage2_SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat)

#define IMDSPStorage2_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPStorage2_GetStorage_Proxy( 
    IMDSPStorage2 * This,
    /* [string][in] */ LPCWSTR pszStorageName,
    /* [out] */ IMDSPStorage **ppStorage);


void __RPC_STUB IMDSPStorage2_GetStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage2_CreateStorage2_Proxy( 
    IMDSPStorage2 * This,
    /* [in] */ DWORD dwAttributes,
    /* [in] */ DWORD dwAttributesEx,
    /* [unique][in] */ _WAVEFORMATEX *pAudioFormat,
    /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat,
    /* [in] */ LPWSTR pwszName,
    /* [in] */ ULONGLONG qwFileSize,
    /* [out] */ IMDSPStorage **ppNewStorage);


void __RPC_STUB IMDSPStorage2_CreateStorage2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage2_SetAttributes2_Proxy( 
    IMDSPStorage2 * This,
    /* [in] */ DWORD dwAttributes,
    /* [in] */ DWORD dwAttributesEx,
    /* [in] */ _WAVEFORMATEX *pAudioFormat,
    /* [in] */ _VIDEOINFOHEADER *pVideoFormat);


void __RPC_STUB IMDSPStorage2_SetAttributes2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage2_GetAttributes2_Proxy( 
    IMDSPStorage2 * This,
    /* [out] */ DWORD *pdwAttributes,
    /* [out] */ DWORD *pdwAttributesEx,
    /* [out] */ _WAVEFORMATEX *pAudioFormat,
    /* [out] */ _VIDEOINFOHEADER *pVideoFormat);


void __RPC_STUB IMDSPStorage2_GetAttributes2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPStorage2_INTERFACE_DEFINED__ */


#ifndef __IMDSPStorage3_INTERFACE_DEFINED__
#define __IMDSPStorage3_INTERFACE_DEFINED__

/* interface IMDSPStorage3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPStorage3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C669867-97ED-4a67-9706-1C5529D2A414")
    IMDSPStorage3 : public IMDSPStorage2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMetadata( 
            /* [in] */ IWMDMMetaData *pMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMetadata( 
            /* [in] */ IWMDMMetaData *pMetadata) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPStorage3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPStorage3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPStorage3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPStorage3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IMDSPStorage3 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IMDSPStorage3 * This,
            /* [out] */ IMDSPStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IMDSPStorage3 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IMDSPStorage3 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IMDSPStorage3 * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IMDSPStorage3 * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IMDSPStorage3 * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )( 
            IMDSPStorage3 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [in] */ LPWSTR pwszName,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IMDSPStorage3 * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IMDSPStorage3 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IMDSPStorage3 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IMDSPStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorage2 )( 
            IMDSPStorage3 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat,
            /* [in] */ LPWSTR pwszName,
            /* [in] */ ULONGLONG qwFileSize,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )( 
            IMDSPStorage3 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [in] */ _WAVEFORMATEX *pAudioFormat,
            /* [in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )( 
            IMDSPStorage3 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [out] */ _WAVEFORMATEX *pAudioFormat,
            /* [out] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            IMDSPStorage3 * This,
            /* [in] */ IWMDMMetaData *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )( 
            IMDSPStorage3 * This,
            /* [in] */ IWMDMMetaData *pMetadata);
        
        END_INTERFACE
    } IMDSPStorage3Vtbl;

    interface IMDSPStorage3
    {
        CONST_VTBL struct IMDSPStorage3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPStorage3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPStorage3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPStorage3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPStorage3_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IMDSPStorage3_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IMDSPStorage3_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IMDSPStorage3_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IMDSPStorage3_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IMDSPStorage3_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IMDSPStorage3_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IMDSPStorage3_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)

#define IMDSPStorage3_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IMDSPStorage3_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IMDSPStorage3_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IMDSPStorage3_CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage)

#define IMDSPStorage3_SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat)

#define IMDSPStorage3_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)


#define IMDSPStorage3_GetMetadata(This,pMetadata)	\
    (This)->lpVtbl -> GetMetadata(This,pMetadata)

#define IMDSPStorage3_SetMetadata(This,pMetadata)	\
    (This)->lpVtbl -> SetMetadata(This,pMetadata)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPStorage3_GetMetadata_Proxy( 
    IMDSPStorage3 * This,
    /* [in] */ IWMDMMetaData *pMetadata);


void __RPC_STUB IMDSPStorage3_GetMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage3_SetMetadata_Proxy( 
    IMDSPStorage3 * This,
    /* [in] */ IWMDMMetaData *pMetadata);


void __RPC_STUB IMDSPStorage3_SetMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPStorage3_INTERFACE_DEFINED__ */


#ifndef __IMDSPStorage4_INTERFACE_DEFINED__
#define __IMDSPStorage4_INTERFACE_DEFINED__

/* interface IMDSPStorage4 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPStorage4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3133b2c4-515c-481b-b1ce-39327ecb4f74")
    IMDSPStorage4 : public IMDSPStorage3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetReferences( 
            /* [in] */ DWORD dwRefs,
            /* [size_is][in] */ IMDSPStorage **ppISPStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReferences( 
            /* [out] */ DWORD *pdwRefs,
            /* [size_is][size_is][out] */ IMDSPStorage ***pppISPStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStorageWithMetadata( 
            /* [in] */ DWORD dwAttributes,
            /* [in] */ LPCWSTR pwszName,
            /* [in] */ IWMDMMetaData *pMetadata,
            /* [in] */ ULONGLONG qwFileSize,
            /* [out] */ IMDSPStorage **ppNewStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpecifiedMetadata( 
            /* [in] */ DWORD cProperties,
            /* [size_is][in] */ LPCWSTR *ppwszPropNames,
            /* [in] */ IWMDMMetaData *pMetadata) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindStorage( 
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IMDSPStorage **ppStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ IMDSPStorage **ppStorage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPStorage4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPStorage4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPStorage4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPStorage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes )( 
            IMDSPStorage4 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageGlobals )( 
            IMDSPStorage4 * This,
            /* [out] */ IMDSPStorageGlobals **ppStorageGlobals);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IMDSPStorage4 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ _WAVEFORMATEX *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IMDSPStorage4 * This,
            /* [size_is][string][out] */ LPWSTR pwszName,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IMDSPStorage4 * This,
            /* [out] */ PWMDMDATETIME pDateTimeUTC);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IMDSPStorage4 * This,
            /* [out] */ DWORD *pdwSizeLow,
            /* [out] */ DWORD *pdwSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetRights )( 
            IMDSPStorage4 * This,
            /* [size_is][size_is][out] */ PWMDMRIGHTS *ppRights,
            /* [out] */ UINT *pnRightsCount,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )( 
            IMDSPStorage4 * This,
            /* [in] */ DWORD dwAttributes,
            /* [unique][in] */ _WAVEFORMATEX *pFormat,
            /* [in] */ LPWSTR pwszName,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStorage )( 
            IMDSPStorage4 * This,
            /* [out] */ IMDSPEnumStorage **ppEnumStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SendOpaqueCommand )( 
            IMDSPStorage4 * This,
            /* [out][in] */ OPAQUECOMMAND *pCommand);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorage )( 
            IMDSPStorage4 * This,
            /* [string][in] */ LPCWSTR pszStorageName,
            /* [out] */ IMDSPStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorage2 )( 
            IMDSPStorage4 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [unique][in] */ _WAVEFORMATEX *pAudioFormat,
            /* [unique][in] */ _VIDEOINFOHEADER *pVideoFormat,
            /* [in] */ LPWSTR pwszName,
            /* [in] */ ULONGLONG qwFileSize,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttributes2 )( 
            IMDSPStorage4 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ DWORD dwAttributesEx,
            /* [in] */ _WAVEFORMATEX *pAudioFormat,
            /* [in] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes2 )( 
            IMDSPStorage4 * This,
            /* [out] */ DWORD *pdwAttributes,
            /* [out] */ DWORD *pdwAttributesEx,
            /* [out] */ _WAVEFORMATEX *pAudioFormat,
            /* [out] */ _VIDEOINFOHEADER *pVideoFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            IMDSPStorage4 * This,
            /* [in] */ IWMDMMetaData *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )( 
            IMDSPStorage4 * This,
            /* [in] */ IWMDMMetaData *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferences )( 
            IMDSPStorage4 * This,
            /* [in] */ DWORD dwRefs,
            /* [size_is][in] */ IMDSPStorage **ppISPStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetReferences )( 
            IMDSPStorage4 * This,
            /* [out] */ DWORD *pdwRefs,
            /* [size_is][size_is][out] */ IMDSPStorage ***pppISPStorage);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStorageWithMetadata )( 
            IMDSPStorage4 * This,
            /* [in] */ DWORD dwAttributes,
            /* [in] */ LPCWSTR pwszName,
            /* [in] */ IWMDMMetaData *pMetadata,
            /* [in] */ ULONGLONG qwFileSize,
            /* [out] */ IMDSPStorage **ppNewStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpecifiedMetadata )( 
            IMDSPStorage4 * This,
            /* [in] */ DWORD cProperties,
            /* [size_is][in] */ LPCWSTR *ppwszPropNames,
            /* [in] */ IWMDMMetaData *pMetadata);
        
        HRESULT ( STDMETHODCALLTYPE *FindStorage )( 
            IMDSPStorage4 * This,
            /* [in] */ WMDM_FIND_SCOPE findScope,
            /* [in] */ LPCWSTR pwszUniqueID,
            /* [out] */ IMDSPStorage **ppStorage);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMDSPStorage4 * This,
            /* [out] */ IMDSPStorage **ppStorage);
        
        END_INTERFACE
    } IMDSPStorage4Vtbl;

    interface IMDSPStorage4
    {
        CONST_VTBL struct IMDSPStorage4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPStorage4_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPStorage4_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPStorage4_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPStorage4_SetAttributes(This,dwAttributes,pFormat)	\
    (This)->lpVtbl -> SetAttributes(This,dwAttributes,pFormat)

#define IMDSPStorage4_GetStorageGlobals(This,ppStorageGlobals)	\
    (This)->lpVtbl -> GetStorageGlobals(This,ppStorageGlobals)

#define IMDSPStorage4_GetAttributes(This,pdwAttributes,pFormat)	\
    (This)->lpVtbl -> GetAttributes(This,pdwAttributes,pFormat)

#define IMDSPStorage4_GetName(This,pwszName,nMaxChars)	\
    (This)->lpVtbl -> GetName(This,pwszName,nMaxChars)

#define IMDSPStorage4_GetDate(This,pDateTimeUTC)	\
    (This)->lpVtbl -> GetDate(This,pDateTimeUTC)

#define IMDSPStorage4_GetSize(This,pdwSizeLow,pdwSizeHigh)	\
    (This)->lpVtbl -> GetSize(This,pdwSizeLow,pdwSizeHigh)

#define IMDSPStorage4_GetRights(This,ppRights,pnRightsCount,abMac)	\
    (This)->lpVtbl -> GetRights(This,ppRights,pnRightsCount,abMac)

#define IMDSPStorage4_CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorage(This,dwAttributes,pFormat,pwszName,ppNewStorage)

#define IMDSPStorage4_EnumStorage(This,ppEnumStorage)	\
    (This)->lpVtbl -> EnumStorage(This,ppEnumStorage)

#define IMDSPStorage4_SendOpaqueCommand(This,pCommand)	\
    (This)->lpVtbl -> SendOpaqueCommand(This,pCommand)


#define IMDSPStorage4_GetStorage(This,pszStorageName,ppStorage)	\
    (This)->lpVtbl -> GetStorage(This,pszStorageName,ppStorage)

#define IMDSPStorage4_CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorage2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat,pwszName,qwFileSize,ppNewStorage)

#define IMDSPStorage4_SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> SetAttributes2(This,dwAttributes,dwAttributesEx,pAudioFormat,pVideoFormat)

#define IMDSPStorage4_GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)	\
    (This)->lpVtbl -> GetAttributes2(This,pdwAttributes,pdwAttributesEx,pAudioFormat,pVideoFormat)


#define IMDSPStorage4_GetMetadata(This,pMetadata)	\
    (This)->lpVtbl -> GetMetadata(This,pMetadata)

#define IMDSPStorage4_SetMetadata(This,pMetadata)	\
    (This)->lpVtbl -> SetMetadata(This,pMetadata)


#define IMDSPStorage4_SetReferences(This,dwRefs,ppISPStorage)	\
    (This)->lpVtbl -> SetReferences(This,dwRefs,ppISPStorage)

#define IMDSPStorage4_GetReferences(This,pdwRefs,pppISPStorage)	\
    (This)->lpVtbl -> GetReferences(This,pdwRefs,pppISPStorage)

#define IMDSPStorage4_CreateStorageWithMetadata(This,dwAttributes,pwszName,pMetadata,qwFileSize,ppNewStorage)	\
    (This)->lpVtbl -> CreateStorageWithMetadata(This,dwAttributes,pwszName,pMetadata,qwFileSize,ppNewStorage)

#define IMDSPStorage4_GetSpecifiedMetadata(This,cProperties,ppwszPropNames,pMetadata)	\
    (This)->lpVtbl -> GetSpecifiedMetadata(This,cProperties,ppwszPropNames,pMetadata)

#define IMDSPStorage4_FindStorage(This,findScope,pwszUniqueID,ppStorage)	\
    (This)->lpVtbl -> FindStorage(This,findScope,pwszUniqueID,ppStorage)

#define IMDSPStorage4_GetParent(This,ppStorage)	\
    (This)->lpVtbl -> GetParent(This,ppStorage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPStorage4_SetReferences_Proxy( 
    IMDSPStorage4 * This,
    /* [in] */ DWORD dwRefs,
    /* [size_is][in] */ IMDSPStorage **ppISPStorage);


void __RPC_STUB IMDSPStorage4_SetReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage4_GetReferences_Proxy( 
    IMDSPStorage4 * This,
    /* [out] */ DWORD *pdwRefs,
    /* [size_is][size_is][out] */ IMDSPStorage ***pppISPStorage);


void __RPC_STUB IMDSPStorage4_GetReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage4_CreateStorageWithMetadata_Proxy( 
    IMDSPStorage4 * This,
    /* [in] */ DWORD dwAttributes,
    /* [in] */ LPCWSTR pwszName,
    /* [in] */ IWMDMMetaData *pMetadata,
    /* [in] */ ULONGLONG qwFileSize,
    /* [out] */ IMDSPStorage **ppNewStorage);


void __RPC_STUB IMDSPStorage4_CreateStorageWithMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage4_GetSpecifiedMetadata_Proxy( 
    IMDSPStorage4 * This,
    /* [in] */ DWORD cProperties,
    /* [size_is][in] */ LPCWSTR *ppwszPropNames,
    /* [in] */ IWMDMMetaData *pMetadata);


void __RPC_STUB IMDSPStorage4_GetSpecifiedMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage4_FindStorage_Proxy( 
    IMDSPStorage4 * This,
    /* [in] */ WMDM_FIND_SCOPE findScope,
    /* [in] */ LPCWSTR pwszUniqueID,
    /* [out] */ IMDSPStorage **ppStorage);


void __RPC_STUB IMDSPStorage4_FindStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorage4_GetParent_Proxy( 
    IMDSPStorage4 * This,
    /* [out] */ IMDSPStorage **ppStorage);


void __RPC_STUB IMDSPStorage4_GetParent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPStorage4_INTERFACE_DEFINED__ */


#ifndef __IMDSPStorageGlobals_INTERFACE_DEFINED__
#define __IMDSPStorageGlobals_INTERFACE_DEFINED__

/* interface IMDSPStorageGlobals */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPStorageGlobals;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A17-33ED-11d3-8470-00C04F79DBC0")
    IMDSPStorageGlobals : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [out] */ DWORD *pdwCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSerialNumber( 
            /* [out] */ PWMDMID pSerialNum,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalSize( 
            /* [out] */ DWORD *pdwTotalSizeLow,
            /* [out] */ DWORD *pdwTotalSizeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalFree( 
            /* [out] */ DWORD *pdwFreeLow,
            /* [out] */ DWORD *pdwFreeHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalBad( 
            /* [out] */ DWORD *pdwBadLow,
            /* [out] */ DWORD *pdwBadHigh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ DWORD *pdwStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDevice( 
            /* [out] */ IMDSPDevice **ppDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootStorage( 
            /* [out] */ IMDSPStorage **ppRoot) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPStorageGlobalsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPStorageGlobals * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPStorageGlobals * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPStorageGlobals * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IMDSPStorageGlobals * This,
            /* [out] */ DWORD *pdwCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetSerialNumber )( 
            IMDSPStorageGlobals * This,
            /* [out] */ PWMDMID pSerialNum,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalSize )( 
            IMDSPStorageGlobals * This,
            /* [out] */ DWORD *pdwTotalSizeLow,
            /* [out] */ DWORD *pdwTotalSizeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalFree )( 
            IMDSPStorageGlobals * This,
            /* [out] */ DWORD *pdwFreeLow,
            /* [out] */ DWORD *pdwFreeHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalBad )( 
            IMDSPStorageGlobals * This,
            /* [out] */ DWORD *pdwBadLow,
            /* [out] */ DWORD *pdwBadHigh);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IMDSPStorageGlobals * This,
            /* [out] */ DWORD *pdwStatus);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IMDSPStorageGlobals * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *GetDevice )( 
            IMDSPStorageGlobals * This,
            /* [out] */ IMDSPDevice **ppDevice);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootStorage )( 
            IMDSPStorageGlobals * This,
            /* [out] */ IMDSPStorage **ppRoot);
        
        END_INTERFACE
    } IMDSPStorageGlobalsVtbl;

    interface IMDSPStorageGlobals
    {
        CONST_VTBL struct IMDSPStorageGlobalsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPStorageGlobals_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPStorageGlobals_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPStorageGlobals_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPStorageGlobals_GetCapabilities(This,pdwCapabilities)	\
    (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities)

#define IMDSPStorageGlobals_GetSerialNumber(This,pSerialNum,abMac)	\
    (This)->lpVtbl -> GetSerialNumber(This,pSerialNum,abMac)

#define IMDSPStorageGlobals_GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh)	\
    (This)->lpVtbl -> GetTotalSize(This,pdwTotalSizeLow,pdwTotalSizeHigh)

#define IMDSPStorageGlobals_GetTotalFree(This,pdwFreeLow,pdwFreeHigh)	\
    (This)->lpVtbl -> GetTotalFree(This,pdwFreeLow,pdwFreeHigh)

#define IMDSPStorageGlobals_GetTotalBad(This,pdwBadLow,pdwBadHigh)	\
    (This)->lpVtbl -> GetTotalBad(This,pdwBadLow,pdwBadHigh)

#define IMDSPStorageGlobals_GetStatus(This,pdwStatus)	\
    (This)->lpVtbl -> GetStatus(This,pdwStatus)

#define IMDSPStorageGlobals_Initialize(This,fuMode,pProgress)	\
    (This)->lpVtbl -> Initialize(This,fuMode,pProgress)

#define IMDSPStorageGlobals_GetDevice(This,ppDevice)	\
    (This)->lpVtbl -> GetDevice(This,ppDevice)

#define IMDSPStorageGlobals_GetRootStorage(This,ppRoot)	\
    (This)->lpVtbl -> GetRootStorage(This,ppRoot)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetCapabilities_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ DWORD *pdwCapabilities);


void __RPC_STUB IMDSPStorageGlobals_GetCapabilities_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetSerialNumber_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ PWMDMID pSerialNum,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IMDSPStorageGlobals_GetSerialNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetTotalSize_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ DWORD *pdwTotalSizeLow,
    /* [out] */ DWORD *pdwTotalSizeHigh);


void __RPC_STUB IMDSPStorageGlobals_GetTotalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetTotalFree_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ DWORD *pdwFreeLow,
    /* [out] */ DWORD *pdwFreeHigh);


void __RPC_STUB IMDSPStorageGlobals_GetTotalFree_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetTotalBad_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ DWORD *pdwBadLow,
    /* [out] */ DWORD *pdwBadHigh);


void __RPC_STUB IMDSPStorageGlobals_GetTotalBad_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetStatus_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ DWORD *pdwStatus);


void __RPC_STUB IMDSPStorageGlobals_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_Initialize_Proxy( 
    IMDSPStorageGlobals * This,
    /* [in] */ UINT fuMode,
    /* [in] */ IWMDMProgress *pProgress);


void __RPC_STUB IMDSPStorageGlobals_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetDevice_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ IMDSPDevice **ppDevice);


void __RPC_STUB IMDSPStorageGlobals_GetDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPStorageGlobals_GetRootStorage_Proxy( 
    IMDSPStorageGlobals * This,
    /* [out] */ IMDSPStorage **ppRoot);


void __RPC_STUB IMDSPStorageGlobals_GetRootStorage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPStorageGlobals_INTERFACE_DEFINED__ */


#ifndef __IMDSPObjectInfo_INTERFACE_DEFINED__
#define __IMDSPObjectInfo_INTERFACE_DEFINED__

/* interface IMDSPObjectInfo */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPObjectInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A19-33ED-11d3-8470-00C04F79DBC0")
    IMDSPObjectInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPlayLength( 
            /* [out] */ DWORD *pdwLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPlayLength( 
            /* [in] */ DWORD dwLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPlayOffset( 
            /* [out] */ DWORD *pdwOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPlayOffset( 
            /* [in] */ DWORD dwOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTotalLength( 
            /* [out] */ DWORD *pdwLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastPlayPosition( 
            /* [out] */ DWORD *pdwLastPos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLongestPlayPosition( 
            /* [out] */ DWORD *pdwLongestPos) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPObjectInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPObjectInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPObjectInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPObjectInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlayLength )( 
            IMDSPObjectInfo * This,
            /* [out] */ DWORD *pdwLength);
        
        HRESULT ( STDMETHODCALLTYPE *SetPlayLength )( 
            IMDSPObjectInfo * This,
            /* [in] */ DWORD dwLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlayOffset )( 
            IMDSPObjectInfo * This,
            /* [out] */ DWORD *pdwOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetPlayOffset )( 
            IMDSPObjectInfo * This,
            /* [in] */ DWORD dwOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetTotalLength )( 
            IMDSPObjectInfo * This,
            /* [out] */ DWORD *pdwLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastPlayPosition )( 
            IMDSPObjectInfo * This,
            /* [out] */ DWORD *pdwLastPos);
        
        HRESULT ( STDMETHODCALLTYPE *GetLongestPlayPosition )( 
            IMDSPObjectInfo * This,
            /* [out] */ DWORD *pdwLongestPos);
        
        END_INTERFACE
    } IMDSPObjectInfoVtbl;

    interface IMDSPObjectInfo
    {
        CONST_VTBL struct IMDSPObjectInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPObjectInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPObjectInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPObjectInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPObjectInfo_GetPlayLength(This,pdwLength)	\
    (This)->lpVtbl -> GetPlayLength(This,pdwLength)

#define IMDSPObjectInfo_SetPlayLength(This,dwLength)	\
    (This)->lpVtbl -> SetPlayLength(This,dwLength)

#define IMDSPObjectInfo_GetPlayOffset(This,pdwOffset)	\
    (This)->lpVtbl -> GetPlayOffset(This,pdwOffset)

#define IMDSPObjectInfo_SetPlayOffset(This,dwOffset)	\
    (This)->lpVtbl -> SetPlayOffset(This,dwOffset)

#define IMDSPObjectInfo_GetTotalLength(This,pdwLength)	\
    (This)->lpVtbl -> GetTotalLength(This,pdwLength)

#define IMDSPObjectInfo_GetLastPlayPosition(This,pdwLastPos)	\
    (This)->lpVtbl -> GetLastPlayPosition(This,pdwLastPos)

#define IMDSPObjectInfo_GetLongestPlayPosition(This,pdwLongestPos)	\
    (This)->lpVtbl -> GetLongestPlayPosition(This,pdwLongestPos)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPObjectInfo_GetPlayLength_Proxy( 
    IMDSPObjectInfo * This,
    /* [out] */ DWORD *pdwLength);


void __RPC_STUB IMDSPObjectInfo_GetPlayLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObjectInfo_SetPlayLength_Proxy( 
    IMDSPObjectInfo * This,
    /* [in] */ DWORD dwLength);


void __RPC_STUB IMDSPObjectInfo_SetPlayLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObjectInfo_GetPlayOffset_Proxy( 
    IMDSPObjectInfo * This,
    /* [out] */ DWORD *pdwOffset);


void __RPC_STUB IMDSPObjectInfo_GetPlayOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObjectInfo_SetPlayOffset_Proxy( 
    IMDSPObjectInfo * This,
    /* [in] */ DWORD dwOffset);


void __RPC_STUB IMDSPObjectInfo_SetPlayOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObjectInfo_GetTotalLength_Proxy( 
    IMDSPObjectInfo * This,
    /* [out] */ DWORD *pdwLength);


void __RPC_STUB IMDSPObjectInfo_GetTotalLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObjectInfo_GetLastPlayPosition_Proxy( 
    IMDSPObjectInfo * This,
    /* [out] */ DWORD *pdwLastPos);


void __RPC_STUB IMDSPObjectInfo_GetLastPlayPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObjectInfo_GetLongestPlayPosition_Proxy( 
    IMDSPObjectInfo * This,
    /* [out] */ DWORD *pdwLongestPos);


void __RPC_STUB IMDSPObjectInfo_GetLongestPlayPosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPObjectInfo_INTERFACE_DEFINED__ */


#ifndef __IMDSPObject_INTERFACE_DEFINED__
#define __IMDSPObject_INTERFACE_DEFINED__

/* interface IMDSPObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A18-33ED-11d3-8470-00C04F79DBC0")
    IMDSPObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ UINT fuMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Read( 
            /* [size_is][out] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Write( 
            /* [size_is][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Seek( 
            /* [in] */ UINT fuFlags,
            /* [in] */ DWORD dwOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rename( 
            /* [in] */ LPWSTR pwszNewName,
            /* [in] */ IWMDMProgress *pProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IMDSPStorage *pTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPObject * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMDSPObject * This,
            /* [in] */ UINT fuMode);
        
        HRESULT ( STDMETHODCALLTYPE *Read )( 
            IMDSPObject * This,
            /* [size_is][out] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *Write )( 
            IMDSPObject * This,
            /* [size_is][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMDSPObject * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IMDSPObject * This,
            /* [in] */ UINT fuFlags,
            /* [in] */ DWORD dwOffset);
        
        HRESULT ( STDMETHODCALLTYPE *Rename )( 
            IMDSPObject * This,
            /* [in] */ LPWSTR pwszNewName,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IMDSPObject * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IMDSPStorage *pTarget);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMDSPObject * This);
        
        END_INTERFACE
    } IMDSPObjectVtbl;

    interface IMDSPObject
    {
        CONST_VTBL struct IMDSPObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPObject_Open(This,fuMode)	\
    (This)->lpVtbl -> Open(This,fuMode)

#define IMDSPObject_Read(This,pData,pdwSize,abMac)	\
    (This)->lpVtbl -> Read(This,pData,pdwSize,abMac)

#define IMDSPObject_Write(This,pData,pdwSize,abMac)	\
    (This)->lpVtbl -> Write(This,pData,pdwSize,abMac)

#define IMDSPObject_Delete(This,fuMode,pProgress)	\
    (This)->lpVtbl -> Delete(This,fuMode,pProgress)

#define IMDSPObject_Seek(This,fuFlags,dwOffset)	\
    (This)->lpVtbl -> Seek(This,fuFlags,dwOffset)

#define IMDSPObject_Rename(This,pwszNewName,pProgress)	\
    (This)->lpVtbl -> Rename(This,pwszNewName,pProgress)

#define IMDSPObject_Move(This,fuMode,pProgress,pTarget)	\
    (This)->lpVtbl -> Move(This,fuMode,pProgress,pTarget)

#define IMDSPObject_Close(This)	\
    (This)->lpVtbl -> Close(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPObject_Open_Proxy( 
    IMDSPObject * This,
    /* [in] */ UINT fuMode);


void __RPC_STUB IMDSPObject_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject_Read_Proxy( 
    IMDSPObject * This,
    /* [size_is][out] */ BYTE *pData,
    /* [out][in] */ DWORD *pdwSize,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IMDSPObject_Read_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject_Write_Proxy( 
    IMDSPObject * This,
    /* [size_is][in] */ BYTE *pData,
    /* [out][in] */ DWORD *pdwSize,
    /* [out][in] */ BYTE abMac[ 8 ]);


void __RPC_STUB IMDSPObject_Write_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject_Delete_Proxy( 
    IMDSPObject * This,
    /* [in] */ UINT fuMode,
    /* [in] */ IWMDMProgress *pProgress);


void __RPC_STUB IMDSPObject_Delete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject_Seek_Proxy( 
    IMDSPObject * This,
    /* [in] */ UINT fuFlags,
    /* [in] */ DWORD dwOffset);


void __RPC_STUB IMDSPObject_Seek_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject_Rename_Proxy( 
    IMDSPObject * This,
    /* [in] */ LPWSTR pwszNewName,
    /* [in] */ IWMDMProgress *pProgress);


void __RPC_STUB IMDSPObject_Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject_Move_Proxy( 
    IMDSPObject * This,
    /* [in] */ UINT fuMode,
    /* [in] */ IWMDMProgress *pProgress,
    /* [in] */ IMDSPStorage *pTarget);


void __RPC_STUB IMDSPObject_Move_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject_Close_Proxy( 
    IMDSPObject * This);


void __RPC_STUB IMDSPObject_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPObject_INTERFACE_DEFINED__ */


#ifndef __IMDSPObject2_INTERFACE_DEFINED__
#define __IMDSPObject2_INTERFACE_DEFINED__

/* interface IMDSPObject2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3f34cd3e-5907-4341-9af9-97f4187c3aa5")
    IMDSPObject2 : public IMDSPObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadOnClearChannel( 
            /* [size_is][out] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteOnClearChannel( 
            /* [size_is][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPObject2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPObject2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPObject2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMDSPObject2 * This,
            /* [in] */ UINT fuMode);
        
        HRESULT ( STDMETHODCALLTYPE *Read )( 
            IMDSPObject2 * This,
            /* [size_is][out] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *Write )( 
            IMDSPObject2 * This,
            /* [size_is][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize,
            /* [out][in] */ BYTE abMac[ 8 ]);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMDSPObject2 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IMDSPObject2 * This,
            /* [in] */ UINT fuFlags,
            /* [in] */ DWORD dwOffset);
        
        HRESULT ( STDMETHODCALLTYPE *Rename )( 
            IMDSPObject2 * This,
            /* [in] */ LPWSTR pwszNewName,
            /* [in] */ IWMDMProgress *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IMDSPObject2 * This,
            /* [in] */ UINT fuMode,
            /* [in] */ IWMDMProgress *pProgress,
            /* [in] */ IMDSPStorage *pTarget);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMDSPObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReadOnClearChannel )( 
            IMDSPObject2 * This,
            /* [size_is][out] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize);
        
        HRESULT ( STDMETHODCALLTYPE *WriteOnClearChannel )( 
            IMDSPObject2 * This,
            /* [size_is][in] */ BYTE *pData,
            /* [out][in] */ DWORD *pdwSize);
        
        END_INTERFACE
    } IMDSPObject2Vtbl;

    interface IMDSPObject2
    {
        CONST_VTBL struct IMDSPObject2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPObject2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPObject2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPObject2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPObject2_Open(This,fuMode)	\
    (This)->lpVtbl -> Open(This,fuMode)

#define IMDSPObject2_Read(This,pData,pdwSize,abMac)	\
    (This)->lpVtbl -> Read(This,pData,pdwSize,abMac)

#define IMDSPObject2_Write(This,pData,pdwSize,abMac)	\
    (This)->lpVtbl -> Write(This,pData,pdwSize,abMac)

#define IMDSPObject2_Delete(This,fuMode,pProgress)	\
    (This)->lpVtbl -> Delete(This,fuMode,pProgress)

#define IMDSPObject2_Seek(This,fuFlags,dwOffset)	\
    (This)->lpVtbl -> Seek(This,fuFlags,dwOffset)

#define IMDSPObject2_Rename(This,pwszNewName,pProgress)	\
    (This)->lpVtbl -> Rename(This,pwszNewName,pProgress)

#define IMDSPObject2_Move(This,fuMode,pProgress,pTarget)	\
    (This)->lpVtbl -> Move(This,fuMode,pProgress,pTarget)

#define IMDSPObject2_Close(This)	\
    (This)->lpVtbl -> Close(This)


#define IMDSPObject2_ReadOnClearChannel(This,pData,pdwSize)	\
    (This)->lpVtbl -> ReadOnClearChannel(This,pData,pdwSize)

#define IMDSPObject2_WriteOnClearChannel(This,pData,pdwSize)	\
    (This)->lpVtbl -> WriteOnClearChannel(This,pData,pdwSize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPObject2_ReadOnClearChannel_Proxy( 
    IMDSPObject2 * This,
    /* [size_is][out] */ BYTE *pData,
    /* [out][in] */ DWORD *pdwSize);


void __RPC_STUB IMDSPObject2_ReadOnClearChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IMDSPObject2_WriteOnClearChannel_Proxy( 
    IMDSPObject2 * This,
    /* [size_is][in] */ BYTE *pData,
    /* [out][in] */ DWORD *pdwSize);


void __RPC_STUB IMDSPObject2_WriteOnClearChannel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPObject2_INTERFACE_DEFINED__ */


#ifndef __IMDSPDirectTransfer_INTERFACE_DEFINED__
#define __IMDSPDirectTransfer_INTERFACE_DEFINED__

/* interface IMDSPDirectTransfer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPDirectTransfer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c2fe57a8-9304-478c-9ee4-47e397b912d7")
    IMDSPDirectTransfer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TransferToDevice( 
            /* [string][unique][in] */ LPCWSTR pwszSourceFilePath,
            /* [in] */ IWMDMOperation *pSourceOperation,
            /* [in] */ UINT fuFlags,
            /* [string][unique][in] */ LPWSTR pwszDestinationName,
            /* [in] */ IWMDMMetaData *pSourceMetaData,
            /* [in] */ IWMDMProgress *pTransferProgress,
            /* [out] */ IMDSPStorage **ppNewObject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPDirectTransferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPDirectTransfer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPDirectTransfer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPDirectTransfer * This);
        
        HRESULT ( STDMETHODCALLTYPE *TransferToDevice )( 
            IMDSPDirectTransfer * This,
            /* [string][unique][in] */ LPCWSTR pwszSourceFilePath,
            /* [in] */ IWMDMOperation *pSourceOperation,
            /* [in] */ UINT fuFlags,
            /* [string][unique][in] */ LPWSTR pwszDestinationName,
            /* [in] */ IWMDMMetaData *pSourceMetaData,
            /* [in] */ IWMDMProgress *pTransferProgress,
            /* [out] */ IMDSPStorage **ppNewObject);
        
        END_INTERFACE
    } IMDSPDirectTransferVtbl;

    interface IMDSPDirectTransfer
    {
        CONST_VTBL struct IMDSPDirectTransferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPDirectTransfer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPDirectTransfer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPDirectTransfer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPDirectTransfer_TransferToDevice(This,pwszSourceFilePath,pSourceOperation,fuFlags,pwszDestinationName,pSourceMetaData,pTransferProgress,ppNewObject)	\
    (This)->lpVtbl -> TransferToDevice(This,pwszSourceFilePath,pSourceOperation,fuFlags,pwszDestinationName,pSourceMetaData,pTransferProgress,ppNewObject)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPDirectTransfer_TransferToDevice_Proxy( 
    IMDSPDirectTransfer * This,
    /* [string][unique][in] */ LPCWSTR pwszSourceFilePath,
    /* [in] */ IWMDMOperation *pSourceOperation,
    /* [in] */ UINT fuFlags,
    /* [string][unique][in] */ LPWSTR pwszDestinationName,
    /* [in] */ IWMDMMetaData *pSourceMetaData,
    /* [in] */ IWMDMProgress *pTransferProgress,
    /* [out] */ IMDSPStorage **ppNewObject);


void __RPC_STUB IMDSPDirectTransfer_TransferToDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPDirectTransfer_INTERFACE_DEFINED__ */


#ifndef __IMDSPRevoked_INTERFACE_DEFINED__
#define __IMDSPRevoked_INTERFACE_DEFINED__

/* interface IMDSPRevoked */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMDSPRevoked;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4E8F2D4-3F31-464d-B53D-4FC335998184")
    IMDSPRevoked : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRevocationURL( 
            /* [size_is][size_is][string][out][in] */ LPWSTR *ppwszRevocationURL,
            /* [out][in] */ DWORD *pdwBufferLen) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMDSPRevokedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMDSPRevoked * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMDSPRevoked * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMDSPRevoked * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRevocationURL )( 
            IMDSPRevoked * This,
            /* [size_is][size_is][string][out][in] */ LPWSTR *ppwszRevocationURL,
            /* [out][in] */ DWORD *pdwBufferLen);
        
        END_INTERFACE
    } IMDSPRevokedVtbl;

    interface IMDSPRevoked
    {
        CONST_VTBL struct IMDSPRevokedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMDSPRevoked_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMDSPRevoked_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMDSPRevoked_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMDSPRevoked_GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen)	\
    (This)->lpVtbl -> GetRevocationURL(This,ppwszRevocationURL,pdwBufferLen)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IMDSPRevoked_GetRevocationURL_Proxy( 
    IMDSPRevoked * This,
    /* [size_is][size_is][string][out][in] */ LPWSTR *ppwszRevocationURL,
    /* [out][in] */ DWORD *pdwBufferLen);


void __RPC_STUB IMDSPRevoked_GetRevocationURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMDSPRevoked_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MsHDSP_0319 */
/* [local] */ 

#define SAC_MAC_LEN 8


extern RPC_IF_HANDLE __MIDL_itf_MsHDSP_0319_ClientIfHandle;
extern RPC_IF_HANDLE __MIDL_itf_MsHDSP_0319_ServerIfHandle;

#ifndef __IComponentAuthenticate_INTERFACE_DEFINED__
#define __IComponentAuthenticate_INTERFACE_DEFINED__

/* interface IComponentAuthenticate */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IComponentAuthenticate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9889C00-6D2B-11d3-8496-00C04F79DBC0")
    IComponentAuthenticate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SACAuth( 
            /* [in] */ DWORD dwProtocolID,
            /* [in] */ DWORD dwPass,
            /* [size_is][in] */ BYTE *pbDataIn,
            /* [in] */ DWORD dwDataInLen,
            /* [size_is][size_is][out] */ BYTE **ppbDataOut,
            /* [out] */ DWORD *pdwDataOutLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SACGetProtocols( 
            /* [size_is][size_is][out] */ DWORD **ppdwProtocols,
            /* [out] */ DWORD *pdwProtocolCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComponentAuthenticateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComponentAuthenticate * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComponentAuthenticate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComponentAuthenticate * This);
        
        HRESULT ( STDMETHODCALLTYPE *SACAuth )( 
            IComponentAuthenticate * This,
            /* [in] */ DWORD dwProtocolID,
            /* [in] */ DWORD dwPass,
            /* [size_is][in] */ BYTE *pbDataIn,
            /* [in] */ DWORD dwDataInLen,
            /* [size_is][size_is][out] */ BYTE **ppbDataOut,
            /* [out] */ DWORD *pdwDataOutLen);
        
        HRESULT ( STDMETHODCALLTYPE *SACGetProtocols )( 
            IComponentAuthenticate * This,
            /* [size_is][size_is][out] */ DWORD **ppdwProtocols,
            /* [out] */ DWORD *pdwProtocolCount);
        
        END_INTERFACE
    } IComponentAuthenticateVtbl;

    interface IComponentAuthenticate
    {
        CONST_VTBL struct IComponentAuthenticateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComponentAuthenticate_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IComponentAuthenticate_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IComponentAuthenticate_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IComponentAuthenticate_SACAuth(This,dwProtocolID,dwPass,pbDataIn,dwDataInLen,ppbDataOut,pdwDataOutLen)	\
    (This)->lpVtbl -> SACAuth(This,dwProtocolID,dwPass,pbDataIn,dwDataInLen,ppbDataOut,pdwDataOutLen)

#define IComponentAuthenticate_SACGetProtocols(This,ppdwProtocols,pdwProtocolCount)	\
    (This)->lpVtbl -> SACGetProtocols(This,ppdwProtocols,pdwProtocolCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IComponentAuthenticate_SACAuth_Proxy( 
    IComponentAuthenticate * This,
    /* [in] */ DWORD dwProtocolID,
    /* [in] */ DWORD dwPass,
    /* [size_is][in] */ BYTE *pbDataIn,
    /* [in] */ DWORD dwDataInLen,
    /* [size_is][size_is][out] */ BYTE **ppbDataOut,
    /* [out] */ DWORD *pdwDataOutLen);


void __RPC_STUB IComponentAuthenticate_SACAuth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IComponentAuthenticate_SACGetProtocols_Proxy( 
    IComponentAuthenticate * This,
    /* [size_is][size_is][out] */ DWORD **ppdwProtocols,
    /* [out] */ DWORD *pdwProtocolCount);


void __RPC_STUB IComponentAuthenticate_SACGetProtocols_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IComponentAuthenticate_INTERFACE_DEFINED__ */



#ifndef __MDSPLib_LIBRARY_DEFINED__
#define __MDSPLib_LIBRARY_DEFINED__

/* library MDSPLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MDSPLib;

EXTERN_C const CLSID CLSID_MDServiceProvider;

#ifdef __cplusplus

class DECLSPEC_UUID("896E73F0-3851-11D3-AA54-00C04FD22F8C")
MDServiceProvider;
#endif

EXTERN_C const CLSID CLSID_MDSPEnumDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("896E742A-3851-11D3-AA54-00C04FD22F8C")
MDSPEnumDevice;
#endif

EXTERN_C const CLSID CLSID_MDSPDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("896E742C-3851-11D3-AA54-00C04FD22F8C")
MDSPDevice;
#endif

EXTERN_C const CLSID CLSID_MDSPEnumStorage;

#ifdef __cplusplus

class DECLSPEC_UUID("896E7430-3851-11D3-AA54-00C04FD22F8C")
MDSPEnumStorage;
#endif

EXTERN_C const CLSID CLSID_MDSPStorage;

#ifdef __cplusplus

class DECLSPEC_UUID("896E7432-3851-11D3-AA54-00C04FD22F8C")
MDSPStorage;
#endif

EXTERN_C const CLSID CLSID_MDSPStorageGlobals;

#ifdef __cplusplus

class DECLSPEC_UUID("896E7434-3851-11D3-AA54-00C04FD22F8C")
MDSPStorageGlobals;
#endif

EXTERN_C const CLSID CLSID_HDSPPropPage;

#ifdef __cplusplus

class DECLSPEC_UUID("0B785C4A-8E74-4db2-87A7-2D5BF9C6E55C")
HDSPPropPage;
#endif
#endif /* __MDSPLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


