

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Feb 03 14:03:28 2006
 */
/* Compiler settings for proghelp.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, oldnames, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IComponentAuthenticate,0xA9889C00,0x6D2B,0x11d3,0x84,0x96,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMMetaData,0xEC3B0663,0x0951,0x460a,0x9A,0x80,0x0D,0xCE,0xED,0x3C,0x04,0x3C);


MIDL_DEFINE_GUID(IID, IID_IWMDeviceManager,0x1DCB3A00,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDeviceManager2,0x923E5249,0x8731,0x4c5b,0x9B,0x1C,0xB8,0xB6,0x0B,0x6E,0x46,0xAF);


MIDL_DEFINE_GUID(IID, IID_IWMDeviceManager3,0xaf185c41,0x100d,0x46ed,0xbe,0x2e,0x9c,0xe8,0xc4,0x45,0x94,0xef);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageGlobals,0x1DCB3A07,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage,0x1DCB3A06,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage2,0x1ED5A144,0x5CD5,0x4683,0x9E,0xFF,0x72,0xCB,0xDB,0x2D,0x95,0x33);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage3,0x97717EEA,0x926A,0x464e,0x96,0xA4,0x24,0x7B,0x02,0x16,0x02,0x6E);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorage4,0xc225bac5,0xa03a,0x40b8,0x9a,0x23,0x91,0xcf,0x47,0x8c,0x64,0xa6);


MIDL_DEFINE_GUID(IID, IID_IWMDMOperation,0x1DCB3A0B,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMOperation2,0x33445B48,0x7DF7,0x425c,0xAD,0x8F,0x0F,0xC6,0xD8,0x2F,0x9F,0x75);


MIDL_DEFINE_GUID(IID, IID_IWMDMOperation3,0xd1f9b46a,0x9ca8,0x46d8,0x9d,0x0f,0x1e,0xc9,0xba,0xe5,0x49,0x19);


MIDL_DEFINE_GUID(IID, IID_IWMDMProgress,0x1DCB3A0C,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMProgress2,0x3A43F550,0xB383,0x4e92,0xB0,0x4A,0xE6,0xBB,0xC6,0x60,0xFE,0xFC);


MIDL_DEFINE_GUID(IID, IID_IWMDMProgress3,0x21DE01CB,0x3BB4,0x4929,0xB2,0x1A,0x17,0xAF,0x3F,0x80,0xF6,0x58);


MIDL_DEFINE_GUID(IID, IID_IWMDMDevice,0x1DCB3A02,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMDevice2,0xE34F3D37,0x9D67,0x4fc1,0x92,0x52,0x62,0xD2,0x8B,0x2F,0x8B,0x55);


MIDL_DEFINE_GUID(IID, IID_IWMDMDevice3,0x6c03e4fe,0x05db,0x4dda,0x9e,0x3c,0x06,0x23,0x3a,0x6d,0x5d,0x65);


MIDL_DEFINE_GUID(IID, IID_IWMDMDeviceSession,0x82af0a65,0x9d96,0x412c,0x83,0xe5,0x3c,0x43,0xe4,0xb0,0x6c,0xc7);


MIDL_DEFINE_GUID(IID, IID_IWMDMEnumDevice,0x1DCB3A01,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMDeviceControl,0x1DCB3A04,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMEnumStorage,0x1DCB3A05,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageControl,0x1DCB3A08,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageControl2,0x972C2E88,0xBD6C,0x4125,0x8E,0x09,0x84,0xF8,0x37,0xE6,0x37,0xB6);


MIDL_DEFINE_GUID(IID, IID_IWMDMStorageControl3,0xB3266365,0xD4F3,0x4696,0x8D,0x53,0xBD,0x27,0xEC,0x60,0x99,0x3A);


MIDL_DEFINE_GUID(IID, IID_IWMDMObjectInfo,0x1DCB3A09,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0);


MIDL_DEFINE_GUID(IID, IID_IWMDMRevoked,0xEBECCEDB,0x88EE,0x4e55,0xB6,0xA4,0x8D,0x9F,0x07,0xD6,0x96,0xAA);


MIDL_DEFINE_GUID(IID, IID_IWMDMNotification,0x3F5E95C0,0x0F43,0x4ed4,0x93,0xD2,0xC8,0x9A,0x45,0xD5,0x9B,0x81);


MIDL_DEFINE_GUID(IID, IID_IWMDMProgressHelper,0x1DCB3A10,0x33ED,0x11d3,0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC5);


MIDL_DEFINE_GUID(IID, IID_IWMDMOperationHelper,0x4A382551,0x1E84,0x40ae,0xB0,0xB0,0x23,0xFA,0x22,0x1B,0x4C,0x6B);


MIDL_DEFINE_GUID(IID, LIBID_PROGHELPLib,0x8297A5A5,0x5113,0x11D3,0xB2,0x76,0x00,0xC0,0x4F,0x8E,0xC2,0x21);


MIDL_DEFINE_GUID(CLSID, CLSID_ProgressHelper,0x8297A5B4,0x5113,0x11D3,0xB2,0x76,0x00,0xC0,0x4F,0x8E,0xC2,0x21);


MIDL_DEFINE_GUID(CLSID, CLSID_OperationHelper,0x9FB01A67,0xA11E,0x4653,0x8E,0xD6,0xB5,0xCE,0x73,0xCD,0xA3,0xE3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



