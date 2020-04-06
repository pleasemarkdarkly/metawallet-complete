

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "MsHDSP.h"

#define TYPE_FORMAT_STRING_SIZE   3977                              
#define PROC_FORMAT_STRING_SIZE   6097                              
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMMetaData_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMMetaData_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDeviceManager_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDeviceManager_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDeviceManager2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDeviceManager2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDeviceManager3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDeviceManager3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorageGlobals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorageGlobals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorage2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorage2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorage3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorage3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorage4_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorage4_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMOperation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMOperation_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMOperation2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMOperation2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMOperation3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMOperation3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMProgress_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMProgress_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMProgress2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMProgress2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMProgress3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMProgress3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMDevice_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMDevice_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMDevice2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMDevice2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMDevice3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMDevice3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMDeviceSession_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMDeviceSession_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMEnumDevice_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMEnumDevice_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMDeviceControl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMDeviceControl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMEnumStorage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMEnumStorage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorageControl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorageControl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorageControl2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorageControl2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMStorageControl3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMStorageControl3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMObjectInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMObjectInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMRevoked_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMRevoked_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWMDMNotification_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMNotification_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDServiceProvider_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDServiceProvider_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDServiceProvider2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDServiceProvider2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDServiceProvider3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDServiceProvider3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPEnumDevice_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPEnumDevice_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPDevice_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPDevice_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPDevice2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPDevice2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPDevice3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPDevice3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPDeviceControl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPDeviceControl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPEnumStorage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPEnumStorage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPStorage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPStorage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPStorage2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPStorage2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPStorage3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPStorage3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPStorage4_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPStorage4_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPStorageGlobals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPStorageGlobals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPObjectInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPObjectInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPObject2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPObject2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPDirectTransfer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPDirectTransfer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMDSPRevoked_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMDSPRevoked_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IComponentAuthenticate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IComponentAuthenticate_ProxyInfo;


extern const EXPR_EVAL ExprEvalRoutines[];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure AddItem */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0xe ),	/* 14 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Type */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszTagName */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pValue */

/* 36 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter iLength */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryByName */

/* 54 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x3e ),	/* 62 */
/* 68 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 70 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 72 */	NdrFcShort( 0x1 ),	/* 1 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszTagName */

/* 78 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 80 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 82 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pType */

/* 84 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 86 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 88 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pValue */

/* 90 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pcbLength */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryByIndex */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x5 ),	/* 5 */
/* 116 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0x3e ),	/* 62 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 124 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iIndex */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppwszName */

/* 138 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter pType */

/* 144 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter ppValue */

/* 150 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 154 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter pcbLength */

/* 156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */


	/* Procedure GetType */


	/* Procedure GetItemCount */

/* 168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x6 ),	/* 6 */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x24 ),	/* 36 */
/* 182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwType */


	/* Parameter pdwType */


	/* Parameter iCount */

/* 192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPlayLength */


	/* Procedure GetCapabilities */


	/* Procedure GetDCStatus */


	/* Procedure GetDeviceCount */


	/* Procedure GetPlayLength */


	/* Procedure GetStatus */


	/* Procedure GetCapabilities */


	/* Procedure GetRevision */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x3 ),	/* 3 */
/* 212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLength */


	/* Parameter pdwCapabilities */


	/* Parameter pdwStatus */


	/* Parameter pdwCount */


	/* Parameter pdwLength */


	/* Parameter pdwStatus */


	/* Parameter pdwCapabilities */


	/* Parameter pdwRevision */

/* 228 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCapabilities */


	/* Procedure GetCapabilities */


	/* Procedure GetDeviceCount */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x24 ),	/* 36 */
/* 254 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCapabilitiesMask */


	/* Parameter pdwCapabilitiesMask */


	/* Parameter pdwCount */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDevices */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x5 ),	/* 5 */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 300 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceFromCanonicalName */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszCanonicalName */

/* 336 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppDevice */

/* 342 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDevices2 */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x7 ),	/* 7 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */


	/* Procedure Resume */


	/* Procedure Reinitialize */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDeviceEnumPreference */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x9 ),	/* 9 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEnumPref */

/* 444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSerialNumber */


	/* Procedure GetSerialNumber */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x4 ),	/* 4 */
/* 464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 466 */	NdrFcShort( 0x18 ),	/* 24 */
/* 468 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSerialNum */


	/* Parameter pSerialNum */

/* 480 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter abMac */


	/* Parameter abMac */

/* 486 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */


	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalSize */


	/* Procedure GetTotalSize */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x5 ),	/* 5 */
/* 506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x40 ),	/* 64 */
/* 512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwTotalSizeLow */


	/* Parameter pdwTotalSizeLow */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwTotalSizeHigh */


	/* Parameter pdwTotalSizeHigh */

/* 528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalFree */


	/* Procedure GetTotalFree */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x6 ),	/* 6 */
/* 548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x40 ),	/* 64 */
/* 554 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwFreeLow */


	/* Parameter pdwFreeLow */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwFreeHigh */


	/* Parameter pdwFreeHigh */

/* 570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalBad */


	/* Procedure GetTotalBad */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x7 ),	/* 7 */
/* 590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x40 ),	/* 64 */
/* 596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 598 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwBadLow */


	/* Parameter pdwBadLow */

/* 606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwBadHigh */


	/* Parameter pdwBadHigh */

/* 612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastPlayPosition */


	/* Procedure GetStatus */


	/* Procedure GetLastPlayPosition */


	/* Procedure GetStatus */

/* 624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 638 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 640 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLastPos */


	/* Parameter pdwStatus */


	/* Parameter pdwLastPos */


	/* Parameter pdwStatus */

/* 648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */


	/* Procedure Initialize */

/* 660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x9 ),	/* 9 */
/* 668 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 674 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 676 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */


	/* Parameter fuMode */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProgress */


	/* Parameter pProgress */

/* 690 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 694 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */


	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAttributes */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x3 ),	/* 3 */
/* 710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 732 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorageGlobals */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x4 ),	/* 4 */
/* 752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppStorageGlobals */

/* 768 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 772 */	NdrFcShort( 0xbe ),	/* Type Offset=190 */

	/* Return value */

/* 774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes */

/* 780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x5 ),	/* 5 */
/* 788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 794 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */

/* 804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 810 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 814 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Return value */

/* 816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x6 ),	/* 6 */
/* 830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 836 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 838 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 846 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 850 */	NdrFcShort( 0xd8 ),	/* Type Offset=216 */

	/* Parameter nMaxChars */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDate */


	/* Procedure GetDate */

/* 864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x7 ),	/* 7 */
/* 872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x38 ),	/* 56 */
/* 878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDateTimeUTC */


	/* Parameter pDateTimeUTC */

/* 888 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 892 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */


	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSize */


	/* Procedure GetPowerSource */


	/* Procedure GetPowerSource */


	/* Procedure GetSize */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x40 ),	/* 64 */
/* 914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwSizeLow */


	/* Parameter pdwPowerSource */


	/* Parameter pdwPowerSource */


	/* Parameter pdwSizeLow */

/* 924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwSizeHigh */


	/* Parameter pdwPercentRemaining */


	/* Parameter pdwPercentRemaining */


	/* Parameter pdwSizeHigh */

/* 930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRights */


	/* Procedure GetRights */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x9 ),	/* 9 */
/* 950 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 952 */	NdrFcShort( 0x18 ),	/* 24 */
/* 954 */	NdrFcShort( 0x3c ),	/* 60 */
/* 956 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 958 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppRights */


	/* Parameter ppRights */

/* 966 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter pnRightsCount */


	/* Parameter pnRightsCount */

/* 972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter abMac */


	/* Parameter abMac */

/* 978 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */


	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStorage */

/* 990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0xa ),	/* 10 */
/* 998 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1006 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEnumStorage */

/* 1014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1018 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendOpaqueCommand */

/* 1026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0xb ),	/* 11 */
/* 1034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1040 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1042 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCommand */

/* 1050 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1054 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorage */

/* 1062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0xc ),	/* 12 */
/* 1070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1078 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszStorageName */

/* 1086 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1090 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 1092 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1096 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjectAttributes2 */


	/* Procedure SetAttributes2 */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0xd ),	/* 13 */
/* 1112 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1114 */	NdrFcShort( 0xbc ),	/* 188 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1120 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */


	/* Parameter dwAttributes */

/* 1128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributesEx */


	/* Parameter dwAttributesEx */

/* 1134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */


	/* Parameter pFormat */

/* 1140 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1142 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1144 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter pVideoFormat */


	/* Parameter pVideoFormat */

/* 1146 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1148 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1150 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */


	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectAttributes2 */


	/* Procedure GetAttributes2 */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0xe ),	/* 14 */
/* 1166 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1168 */	NdrFcShort( 0xac ),	/* 172 */
/* 1170 */	NdrFcShort( 0xec ),	/* 236 */
/* 1172 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */


	/* Parameter pdwAttributes */

/* 1182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwAttributesEx */


	/* Parameter pdwAttributesEx */

/* 1188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAudioFormat */


	/* Parameter pAudioFormat */

/* 1194 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1198 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter pVideoFormat */


	/* Parameter pVideoFormat */

/* 1200 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1202 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1204 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */


	/* Return value */

/* 1206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1208 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadata */

/* 1212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0xf ),	/* 15 */
/* 1220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMetadata */

/* 1236 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1240 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 1242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMetadata */

/* 1248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1262 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1264 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMetadata */

/* 1272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1276 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Return value */

/* 1278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateEmptyMetadataObject */

/* 1284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1298 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMetadata */

/* 1308 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1312 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetEnumPreference */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1328 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1330 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1332 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1334 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1336 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMode */

/* 1344 */	NdrFcShort( 0x2018 ),	/* Flags:  in, out, srv alloc size=8 */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter nViews */

/* 1350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pViews */

/* 1356 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1360 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Return value */

/* 1362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1364 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetReferences */

/* 1368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1382 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1384 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwRefs */

/* 1392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIWMDMStorage */

/* 1398 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1402 */	NdrFcShort( 0x23c ),	/* Type Offset=572 */

	/* Return value */

/* 1404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetReferences */

/* 1410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1418 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1424 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1426 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwRefs */

/* 1434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pppIWMDMStorage */

/* 1440 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1444 */	NdrFcShort( 0x252 ),	/* Type Offset=594 */

	/* Return value */

/* 1446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRightsWithProgress */

/* 1452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1460 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1468 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIProgressCallback */

/* 1476 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1480 */	NdrFcShort( 0x270 ),	/* Type Offset=624 */

	/* Parameter ppRights */

/* 1482 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1486 */	NdrFcShort( 0x282 ),	/* Type Offset=642 */

	/* Parameter pnRightsCount */

/* 1488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecifiedMetadata */

/* 1500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1508 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1514 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1516 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cProperties */

/* 1524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppwszPropNames */

/* 1530 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1534 */	NdrFcShort( 0x29e ),	/* Type Offset=670 */

	/* Parameter ppMetadata */

/* 1536 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1540 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 1542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1544 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStorage */

/* 1548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1556 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1558 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter findScope */

/* 1572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1576 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszUniqueID */

/* 1578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1582 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 1584 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1588 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1592 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1610 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppStorage */

/* 1620 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1624 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 1626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginRead */

/* 1632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginWrite */

/* 1662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1676 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1678 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectName */

/* 1692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1706 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1708 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 1716 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1720 */	NdrFcShort( 0x2c2 ),	/* Type Offset=706 */

	/* Parameter nMaxChars */

/* 1722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjectName */

/* 1734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1742 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1748 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1750 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 1758 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	NdrFcShort( 0x2ce ),	/* Type Offset=718 */

	/* Parameter nMaxChars */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectAttributes */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1784 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1790 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */

/* 1800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 1806 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjectAttributes */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 1848 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1852 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectTotalSize */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1868 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwSize */

/* 1884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwSizeHigh */

/* 1890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Seek */


	/* Procedure Seek */


	/* Procedure SetObjectTotalSize */

/* 1902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0xa ),	/* 10 */
/* 1910 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1912 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1916 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1918 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */


	/* Parameter fuMode */


	/* Parameter dwSize */

/* 1926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nOffset */


	/* Parameter nOffset */


	/* Parameter dwSizeHigh */

/* 1932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransferObjectData */

/* 1944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0xb ),	/* 11 */
/* 1952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1954 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1956 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1958 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1960 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 1968 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1972 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter pdwSize */

/* 1974 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter abMac */

/* 1980 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1984 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure End */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0xc ),	/* 12 */
/* 2000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2002 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phCompletionCode */

/* 2016 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNewObject */

/* 2022 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransferObjectDataOnClearChannel */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0xd ),	/* 13 */
/* 2042 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2044 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2046 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2048 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2050 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 2058 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2062 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter pdwSize */

/* 2064 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Open */


	/* Procedure Begin */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */


	/* Parameter dwEstimatedTicks */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPlayLength */


	/* Procedure SetPlayLength */


	/* Procedure Progress */

/* 2112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwLength */


	/* Parameter dwLength */


	/* Parameter dwTranspiredTicks */

/* 2136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Play */


	/* Procedure Reset */


	/* Procedure Reset */


	/* Procedure Play */


	/* Procedure Reset */


	/* Procedure End */

/* 2148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPlayOffset */


	/* Procedure SetDeviceEnumPreference */


	/* Procedure SetPlayOffset */


	/* Procedure End2 */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2186 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2192 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2194 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwOffset */


	/* Parameter dwEnumPref */


	/* Parameter dwOffset */


	/* Parameter hrCompletionCode */

/* 2202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2204 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2210 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin3 */

/* 2214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2222 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2224 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2228 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2230 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter EventId */

/* 2238 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2242 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter dwEstimatedTicks */

/* 2244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2246 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 2250 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2252 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2254 */	NdrFcShort( 0x2fc ),	/* Type Offset=764 */

	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Progress3 */

/* 2262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2270 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2272 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2276 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2278 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter EventId */

/* 2286 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2290 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter dwTranspiredTicks */

/* 2292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2294 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 2298 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2300 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2302 */	NdrFcShort( 0x2fc ),	/* Type Offset=764 */

	/* Return value */

/* 2304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2306 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure End3 */

/* 2310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2318 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2320 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2324 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2326 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter EventId */

/* 2334 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2338 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter hrCompletionCode */

/* 2340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2342 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 2346 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2348 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2350 */	NdrFcShort( 0x2fc ),	/* Type Offset=764 */

	/* Return value */

/* 2352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2354 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 2358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2366 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2372 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2374 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 2382 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2386 */	NdrFcShort( 0x304 ),	/* Type Offset=772 */

	/* Parameter nMaxChars */

/* 2388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2396 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManufacturer */

/* 2400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2408 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2414 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2416 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 2424 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2428 */	NdrFcShort( 0x310 ),	/* Type Offset=784 */

	/* Parameter nMaxChars */

/* 2430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPlayOffset */


	/* Procedure GetVersion */


	/* Procedure GetPlayOffset */


	/* Procedure GetVersion */

/* 2442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2458 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwOffset */


	/* Parameter pdwVersion */


	/* Parameter pdwOffset */


	/* Parameter pdwVersion */

/* 2466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSerialNumber */


	/* Procedure GetSerialNumber */

/* 2478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2486 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2488 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2490 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 2492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2494 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSerialNumber */


	/* Parameter pSerialNumber */

/* 2502 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 2504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2506 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter abMac */


	/* Parameter abMac */

/* 2508 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2512 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */


	/* Return value */

/* 2514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLongestPlayPosition */


	/* Procedure GetStatus */


	/* Procedure GetLongestPlayPosition */


	/* Procedure GetStatus */

/* 2520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLongestPos */


	/* Parameter pdwStatus */


	/* Parameter pdwLongestPos */


	/* Parameter pdwStatus */

/* 2544 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceIcon */


	/* Procedure GetDeviceIcon */

/* 2556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0xa ),	/* 10 */
/* 2564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2570 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2572 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hIcon */


	/* Parameter hIcon */

/* 2580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStorage */

/* 2592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0xb ),	/* 11 */
/* 2600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2608 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumStorage */

/* 2616 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2620 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Return value */

/* 2622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatSupport */


	/* Procedure GetFormatSupport */

/* 2628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0xc ),	/* 12 */
/* 2636 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2642 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2644 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2646 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFormatEx */


	/* Parameter ppFormatEx */

/* 2652 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2656 */	NdrFcShort( 0x318 ),	/* Type Offset=792 */

	/* Parameter pnFormatCount */


	/* Parameter pnFormatCount */

/* 2658 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pppwszMimeType */


	/* Parameter pppwszMimeType */

/* 2664 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2668 */	NdrFcShort( 0x336 ),	/* Type Offset=822 */

	/* Parameter pnMimeTypeCount */


	/* Parameter pnMimeTypeCount */

/* 2670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2672 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2678 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendOpaqueCommand */


	/* Procedure SendOpaqueCommand */

/* 2682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0xd ),	/* 13 */
/* 2690 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2696 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2698 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCommand */


	/* Parameter pCommand */

/* 2706 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2710 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */

	/* Return value */


	/* Return value */

/* 2712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorage */

/* 2718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0xe ),	/* 14 */
/* 2726 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2732 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2734 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszStorageName */

/* 2742 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2744 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2746 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 2748 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2752 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 2754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatSupport2 */


	/* Procedure GetFormatSupport2 */

/* 2760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0xf ),	/* 15 */
/* 2768 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2772 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2774 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 2776 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2778 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */


	/* Parameter dwFlags */

/* 2784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppAudioFormatEx */


	/* Parameter ppAudioFormatEx */

/* 2790 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2794 */	NdrFcShort( 0x35e ),	/* Type Offset=862 */

	/* Parameter pnAudioFormatCount */


	/* Parameter pnAudioFormatCount */

/* 2796 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2798 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVideoFormatEx */


	/* Parameter ppVideoFormatEx */

/* 2802 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2804 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2806 */	NdrFcShort( 0x37c ),	/* Type Offset=892 */

	/* Parameter pnVideoFormatCount */


	/* Parameter pnVideoFormatCount */

/* 2808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2810 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppFileType */


	/* Parameter ppFileType */

/* 2814 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2816 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2818 */	NdrFcShort( 0x394 ),	/* Type Offset=916 */

	/* Parameter pnFileTypeCount */


	/* Parameter pnFileTypeCount */

/* 2820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2822 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecifyPropertyPages */


	/* Procedure GetSpecifyPropertyPages */

/* 2832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2840 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2846 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2848 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppSpecifyPropPages */


	/* Parameter ppSpecifyPropPages */

/* 2856 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2860 */	NdrFcShort( 0x3d2 ),	/* Type Offset=978 */

	/* Parameter pppUnknowns */


	/* Parameter pppUnknowns */

/* 2862 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2866 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Parameter pcUnks */


	/* Parameter pcUnks */

/* 2868 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2876 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCanonicalName */

/* 2880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2888 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2894 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2896 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszPnPName */

/* 2904 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2908 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Parameter nMaxChars */

/* 2910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProperty */


	/* Procedure GetProperty */

/* 2922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2930 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2936 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2938 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2940 */	NdrFcShort( 0x43 ),	/* 67 */
/* 2942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszPropName */


	/* Parameter pwszPropName */

/* 2946 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2950 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pValue */


	/* Parameter pValue */

/* 2952 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2956 */	NdrFcShort( 0xcca ),	/* Type Offset=3274 */

	/* Return value */


	/* Return value */

/* 2958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProperty */


	/* Procedure SetProperty */

/* 2964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2970 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2972 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2978 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2980 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x43 ),	/* 67 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszPropName */


	/* Parameter pwszPropName */

/* 2988 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2992 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pValue */


	/* Parameter pValue */

/* 2994 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2998 */	NdrFcShort( 0xcca ),	/* Type Offset=3274 */

	/* Return value */


	/* Return value */

/* 3000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatCapability */


	/* Procedure GetFormatCapability */

/* 3006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3014 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3020 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3022 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3024 */	NdrFcShort( 0x110 ),	/* 272 */
/* 3026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter format */


	/* Parameter format */

/* 3030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3034 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pFormatSupport */


	/* Parameter pFormatSupport */

/* 3036 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3038 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3040 */	NdrFcShort( 0xd92 ),	/* Type Offset=3474 */

	/* Return value */


	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeviceIoControl */


	/* Procedure DeviceIoControl */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3056 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3058 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3060 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3062 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3064 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwIoControlCode */


	/* Parameter dwIoControlCode */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpInBuffer */


	/* Parameter lpInBuffer */

/* 3078 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3082 */	NdrFcShort( 0xda6 ),	/* Type Offset=3494 */

	/* Parameter nInBufferSize */


	/* Parameter nInBufferSize */

/* 3084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpOutBuffer */


	/* Parameter lpOutBuffer */

/* 3090 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3094 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter pnOutBufferSize */


	/* Parameter pnOutBufferSize */

/* 3096 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3098 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3104 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStorage */

/* 3108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3118 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3122 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter findScope */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3136 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszUniqueID */

/* 3138 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3142 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 3144 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3148 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 3150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginSession */

/* 3156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3164 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3166 */	NdrFcShort( 0xe ),	/* 14 */
/* 3168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3172 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 3180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3184 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pCtx */

/* 3186 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3190 */	NdrFcShort( 0xdb6 ),	/* Type Offset=3510 */

	/* Parameter dwSizeCtx */

/* 3192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndSession */

/* 3204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3212 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3214 */	NdrFcShort( 0xe ),	/* 14 */
/* 3216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3220 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 3228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3232 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pCtx */

/* 3234 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3238 */	NdrFcShort( 0xdb6 ),	/* Type Offset=3510 */

	/* Parameter dwSizeCtx */

/* 3240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 3252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3260 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3264 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3266 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3268 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 3276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppDevice */

/* 3282 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3286 */	NdrFcShort( 0xdbe ),	/* Type Offset=3518 */

	/* Parameter pceltFetched */

/* 3288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3296 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */


	/* Procedure Skip */


	/* Procedure Skip */


	/* Procedure Skip */

/* 3300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3312 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */


	/* Parameter celt */


	/* Parameter celt */


	/* Parameter celt */

/* 3324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pceltFetched */


	/* Parameter pceltFetched */


	/* Parameter pceltFetched */


	/* Parameter pceltFetched */

/* 3330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 3342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 3366 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3370 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 3372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Record */


	/* Procedure Record */

/* 3378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3392 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFormat */


	/* Parameter pFormat */

/* 3402 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3406 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Return value */


	/* Return value */

/* 3408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Pause */


	/* Procedure Pause */

/* 3414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 3438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */


	/* Procedure Stop */

/* 3444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 3468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 3474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3482 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3486 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3488 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3490 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 3498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppStorage */

/* 3504 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3508 */	NdrFcShort( 0xddc ),	/* Type Offset=3548 */

	/* Parameter pceltFetched */

/* 3510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 3522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumStorage */

/* 3546 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3550 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */

	/* Return value */

/* 3552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert */

/* 3558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3566 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3572 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3574 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFile */

/* 3588 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3592 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pOperation */

/* 3594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	NdrFcShort( 0xdf6 ),	/* Type Offset=3574 */

	/* Parameter pProgress */

/* 3600 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3604 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter ppNewObject */

/* 3606 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3610 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 3612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3614 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */

/* 3618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3632 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3634 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProgress */

/* 3648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3652 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 3654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Rename */

/* 3660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3674 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3676 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszNewName */

/* 3690 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3694 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pProgress */

/* 3696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3700 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 3702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Read */

/* 3708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3716 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3722 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFile */

/* 3738 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3742 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pProgress */

/* 3744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3748 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter pOperation */

/* 3750 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3754 */	NdrFcShort( 0xdf6 ),	/* Type Offset=3574 */

	/* Return value */

/* 3756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3758 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Move */

/* 3762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3770 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3776 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3778 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTargetObject */

/* 3792 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3796 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter pProgress */

/* 3798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3802 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 3804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3806 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert2 */

/* 3810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3818 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3824 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFileSource */

/* 3840 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3844 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pwszFileDest */

/* 3846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3850 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pOperation */

/* 3852 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3856 */	NdrFcShort( 0xdf6 ),	/* Type Offset=3574 */

	/* Parameter pProgress */

/* 3858 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3862 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter pUnknown */

/* 3864 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3866 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3868 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Parameter ppNewObject */

/* 3870 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 3872 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3874 */	NdrFcShort( 0xe08 ),	/* Type Offset=3592 */

	/* Return value */

/* 3876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3878 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert3 */

/* 3882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3890 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3892 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3896 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 3898 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fuType */

/* 3912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFileSource */

/* 3918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3922 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pwszFileDest */

/* 3924 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3926 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3928 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pOperation */

/* 3930 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3934 */	NdrFcShort( 0xdf6 ),	/* Type Offset=3574 */

	/* Parameter pProgress */

/* 3936 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3940 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter pMetaData */

/* 3942 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3944 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3946 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Parameter pUnknown */

/* 3948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3950 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3952 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Parameter ppNewObject */

/* 3954 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3956 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3958 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 3960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3962 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalLength */


	/* Procedure GetTotalLength */

/* 3966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3972 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3980 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLength */


	/* Parameter pdwLength */

/* 3990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRevocationURL */

/* 4002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4010 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4012 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4014 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4016 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4018 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppwszRevocationURL */

/* 4026 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 4028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4030 */	NdrFcShort( 0xe0c ),	/* Type Offset=3596 */

	/* Parameter pdwBufferLen */

/* 4032 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwRevokedBitFlag */

/* 4038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4040 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4046 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WMDMMessage */

/* 4050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4064 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4066 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwMessageType */

/* 4074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszCanonicalName */

/* 4080 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4084 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 4086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDevices */

/* 4092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4098 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 4116 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4120 */	NdrFcShort( 0xe1c ),	/* Type Offset=3612 */

	/* Return value */

/* 4122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateDevice */

/* 4128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4134 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4136 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4140 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4142 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4144 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszDevicePath */

/* 4152 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4156 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pdwCount */

/* 4158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pppDeviceArray */

/* 4164 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4168 */	NdrFcShort( 0xe32 ),	/* Type Offset=3634 */

	/* Return value */

/* 4170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 4176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4192 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 4200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppDevice */

/* 4206 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4210 */	NdrFcShort( 0xe66 ),	/* Type Offset=3686 */

	/* Parameter pceltFetched */

/* 4212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4214 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 4224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4238 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 4248 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4252 */	NdrFcShort( 0xe1c ),	/* Type Offset=3612 */

	/* Return value */

/* 4254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 4260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4268 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4274 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4276 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 4284 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4288 */	NdrFcShort( 0xe80 ),	/* Type Offset=3712 */

	/* Parameter nMaxChars */

/* 4290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManufacturer */

/* 4302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4310 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4316 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4318 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 4326 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4330 */	NdrFcShort( 0xe8c ),	/* Type Offset=3724 */

	/* Parameter nMaxChars */

/* 4332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStorage */


	/* Procedure EnumStorage */

/* 4344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0xb ),	/* 11 */
/* 4352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4358 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumStorage */


	/* Parameter ppEnumStorage */

/* 4368 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4372 */	NdrFcShort( 0xe94 ),	/* Type Offset=3732 */

	/* Return value */


	/* Return value */

/* 4374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorage */

/* 4380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0xe ),	/* 14 */
/* 4388 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4394 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszStorageName */

/* 4404 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4408 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 4410 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4414 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 4416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCanonicalName */

/* 4422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4428 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4436 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4438 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszPnPName */

/* 4446 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4450 */	NdrFcShort( 0xec4 ),	/* Type Offset=3780 */

	/* Parameter nMaxChars */

/* 4452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStorage */

/* 4464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4470 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4472 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4474 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4478 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4480 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter findScope */

/* 4488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4492 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszUniqueID */

/* 4494 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4498 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 4500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4504 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 4506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4508 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 4512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4518 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4520 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4524 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4526 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4528 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 4536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppStorage */

/* 4542 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4546 */	NdrFcShort( 0xed0 ),	/* Type Offset=3792 */

	/* Parameter pceltFetched */

/* 4548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4556 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 4560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumStorage */

/* 4584 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4588 */	NdrFcShort( 0xe94 ),	/* Type Offset=3732 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAttributes */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4604 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 4620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 4626 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4630 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Return value */

/* 4632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorageGlobals */

/* 4638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4644 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4652 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4654 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppStorageGlobals */

/* 4662 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4666 */	NdrFcShort( 0xee6 ),	/* Type Offset=3814 */

	/* Return value */

/* 4668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes */

/* 4674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4682 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4688 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4690 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */

/* 4698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 4704 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4708 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Return value */

/* 4710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 4716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4724 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4732 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 4740 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4744 */	NdrFcShort( 0xf04 ),	/* Type Offset=3844 */

	/* Parameter nMaxChars */

/* 4746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStorage */

/* 4758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0xa ),	/* 10 */
/* 4766 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4772 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4774 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 4782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 4788 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4792 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter pwszName */

/* 4794 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4798 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppNewStorage */

/* 4800 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4804 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 4806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4808 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendOpaqueCommand */

/* 4812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0xc ),	/* 12 */
/* 4820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4826 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4828 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCommand */

/* 4836 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 4838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4840 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */

	/* Return value */

/* 4842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorage */

/* 4848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4854 */	NdrFcShort( 0xd ),	/* 13 */
/* 4856 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4862 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszStorageName */

/* 4872 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4876 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 4878 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4882 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 4884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStorage2 */

/* 4890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0xe ),	/* 14 */
/* 4898 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4900 */	NdrFcShort( 0xcc ),	/* 204 */
/* 4902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4904 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 4914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributesEx */

/* 4920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAudioFormat */

/* 4926 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4930 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter pVideoFormat */

/* 4932 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 4934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4936 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Parameter pwszName */

/* 4938 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4940 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4942 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter qwFileSize */

/* 4944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4946 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4948 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppNewStorage */

/* 4950 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4952 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4954 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 4956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4958 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAttributes2 */

/* 4962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0xf ),	/* 15 */
/* 4970 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4972 */	NdrFcShort( 0xbc ),	/* 188 */
/* 4974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4976 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4978 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 4986 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributesEx */

/* 4992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAudioFormat */

/* 4998 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5002 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter pVideoFormat */

/* 5004 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5008 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Return value */

/* 5010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5012 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes2 */

/* 5016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5022 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5024 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0xec ),	/* 236 */
/* 5030 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 5032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */

/* 5040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwAttributesEx */

/* 5046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAudioFormat */

/* 5052 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5056 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter pVideoFormat */

/* 5058 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 5060 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5062 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */

	/* Return value */

/* 5064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5066 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadata */

/* 5070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5084 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5086 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMetadata */

/* 5094 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5098 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Return value */

/* 5100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMetadata */

/* 5106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5112 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5120 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMetadata */

/* 5130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5134 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Return value */

/* 5136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetReferences */

/* 5142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5148 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5156 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5158 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwRefs */

/* 5166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppISPStorage */

/* 5172 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5176 */	NdrFcShort( 0xf14 ),	/* Type Offset=3860 */

	/* Return value */

/* 5178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetReferences */

/* 5184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5190 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5198 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5200 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwRefs */

/* 5208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pppISPStorage */

/* 5214 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5218 */	NdrFcShort( 0xf2a ),	/* Type Offset=3882 */

	/* Return value */

/* 5220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStorageWithMetadata */

/* 5226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5234 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5236 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 5250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszName */

/* 5256 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5260 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pMetadata */

/* 5262 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5266 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Parameter qwFileSize */

/* 5268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5272 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppNewStorage */

/* 5274 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5276 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5278 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 5280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5282 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecifiedMetadata */

/* 5286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5292 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5294 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5300 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5302 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cProperties */

/* 5310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppwszPropNames */

/* 5316 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5320 */	NdrFcShort( 0x29e ),	/* Type Offset=670 */

	/* Parameter pMetadata */

/* 5322 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5326 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Return value */

/* 5328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5330 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStorage */

/* 5334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5342 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5344 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5348 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter findScope */

/* 5358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5362 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszUniqueID */

/* 5364 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5368 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppStorage */

/* 5370 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5374 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 5376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5378 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 5382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5396 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppStorage */

/* 5406 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5410 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 5412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDevice */

/* 5418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0xa ),	/* 10 */
/* 5426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5432 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDevice */

/* 5442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5446 */	NdrFcShort( 0xf48 ),	/* Type Offset=3912 */

	/* Return value */

/* 5448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRootStorage */

/* 5454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0xb ),	/* 11 */
/* 5462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5468 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppRoot */

/* 5478 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5482 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 5484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Read */

/* 5490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5496 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5498 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5500 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5502 */	NdrFcShort( 0x3c ),	/* 60 */
/* 5504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 5506 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 5514 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5518 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter pdwSize */

/* 5520 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter abMac */

/* 5526 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 5528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5530 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 5532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5534 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Write */

/* 5538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5544 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5546 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5548 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5550 */	NdrFcShort( 0x3c ),	/* 60 */
/* 5552 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5554 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 5562 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5566 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter pdwSize */

/* 5568 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter abMac */

/* 5574 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 5576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5578 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 5580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */

/* 5586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5600 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 5610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProgress */

/* 5616 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5620 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 5622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Seek */

/* 5628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5638 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5642 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuFlags */

/* 5652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwOffset */

/* 5658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Rename */

/* 5670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5686 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszNewName */

/* 5694 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5698 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pProgress */

/* 5700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5702 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5704 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 5706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Move */

/* 5712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5718 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5720 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5726 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 5736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProgress */

/* 5742 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5746 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter pTarget */

/* 5748 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5752 */	NdrFcShort( 0xeae ),	/* Type Offset=3758 */

	/* Return value */

/* 5754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 5760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5766 */	NdrFcShort( 0xa ),	/* 10 */
/* 5768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5774 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5776 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 5784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadOnClearChannel */

/* 5790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0xb ),	/* 11 */
/* 5798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5800 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5802 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5804 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5806 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 5814 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5818 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter pdwSize */

/* 5820 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteOnClearChannel */

/* 5832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5838 */	NdrFcShort( 0xc ),	/* 12 */
/* 5840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5842 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5846 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5848 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 5856 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5860 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter pdwSize */

/* 5862 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransferToDevice */

/* 5874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5880 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5882 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5888 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszSourceFilePath */

/* 5898 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5902 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pSourceOperation */

/* 5904 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5908 */	NdrFcShort( 0xdf6 ),	/* Type Offset=3574 */

	/* Parameter fuFlags */

/* 5910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszDestinationName */

/* 5916 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5918 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5920 */	NdrFcShort( 0xdf2 ),	/* Type Offset=3570 */

	/* Parameter pSourceMetaData */

/* 5922 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5924 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5926 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Parameter pTransferProgress */

/* 5928 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5930 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5932 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter ppNewObject */

/* 5934 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5936 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5938 */	NdrFcShort( 0xeaa ),	/* Type Offset=3754 */

	/* Return value */

/* 5940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5942 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRevocationURL */

/* 5946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5952 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5956 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5958 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5960 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5962 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppwszRevocationURL */

/* 5970 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 5972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5974 */	NdrFcShort( 0xf4c ),	/* Type Offset=3916 */

	/* Parameter pdwBufferLen */

/* 5976 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5984 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SACAuth */

/* 5988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5996 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5998 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6000 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6002 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 6004 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProtocolID */

/* 6012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwPass */

/* 6018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbDataIn */

/* 6024 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6028 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwDataInLen */

/* 6030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6032 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbDataOut */

/* 6036 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 6038 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6040 */	NdrFcShort( 0xf60 ),	/* Type Offset=3936 */

	/* Parameter pdwDataOutLen */

/* 6042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6044 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6050 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SACGetProtocols */

/* 6054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6060 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6068 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6070 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppdwProtocols */

/* 6078 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 6080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6082 */	NdrFcShort( 0xf74 ),	/* Type Offset=3956 */

	/* Parameter pdwProtocolCount */

/* 6084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 20 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 24 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x13, 0x0,	/* FC_OP */
/* 32 */	NdrFcShort( 0x2 ),	/* Offset= 2 (34) */
/* 34 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 40 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 42 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 44 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 46 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 48 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 50 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 52 */	NdrFcShort( 0x2 ),	/* Offset= 2 (54) */
/* 54 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 56 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 60 */	NdrFcShort( 0x2 ),	/* Offset= 2 (62) */
/* 62 */	
			0x13, 0x0,	/* FC_OP */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
/* 70 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 72 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 74 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 76 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 78 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 84 */	NdrFcLong( 0x1dcb3a01 ),	/* 499857921 */
/* 88 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 90 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 92 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 94 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 96 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 98 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 100 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 106 */	NdrFcLong( 0x1dcb3a02 ),	/* 499857922 */
/* 110 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 112 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 114 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 116 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 118 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 120 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 122 */	
			0x11, 0x0,	/* FC_RP */
/* 124 */	NdrFcShort( 0x8 ),	/* Offset= 8 (132) */
/* 126 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 128 */	NdrFcShort( 0x80 ),	/* 128 */
/* 130 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 132 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 134 */	NdrFcShort( 0x8c ),	/* 140 */
/* 136 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 138 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 140 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (126) */
/* 142 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 144 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 148 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 150 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 152 */	NdrFcLong( 0x1dcb3a0c ),	/* 499857932 */
/* 156 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 158 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 160 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 162 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 164 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 166 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 168 */	
			0x12, 0x0,	/* FC_UP */
/* 170 */	NdrFcShort( 0x2 ),	/* Offset= 2 (172) */
/* 172 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 174 */	NdrFcShort( 0x14 ),	/* 20 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* Offset= 0 (178) */
/* 180 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 182 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 184 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 186 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 188 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 190 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 192 */	NdrFcShort( 0x2 ),	/* Offset= 2 (194) */
/* 194 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 196 */	NdrFcLong( 0x1dcb3a07 ),	/* 499857927 */
/* 200 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 202 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 204 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 206 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 208 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 210 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 212 */	
			0x11, 0x0,	/* FC_RP */
/* 214 */	NdrFcShort( 0x2 ),	/* Offset= 2 (216) */
/* 216 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 218 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 222 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 224 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (228) */
/* 228 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 230 */	NdrFcShort( 0xc ),	/* 12 */
/* 232 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 234 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 236 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 238 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 240 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x13, 0x0,	/* FC_OP */
/* 246 */	NdrFcShort( 0x12 ),	/* Offset= 18 (264) */
/* 248 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x24 ),	/* 36 */
/* 252 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 254 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 256 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 258 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 260 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (228) */
/* 262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 264 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 266 */	NdrFcShort( 0x24 ),	/* 36 */
/* 268 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 270 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 272 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 274 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 276 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (248) */
/* 278 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 280 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 282 */	NdrFcShort( 0x2 ),	/* Offset= 2 (284) */
/* 284 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 286 */	NdrFcLong( 0x1dcb3a05 ),	/* 499857925 */
/* 290 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 292 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 294 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 296 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 298 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 300 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 302 */	
			0x11, 0x0,	/* FC_RP */
/* 304 */	NdrFcShort( 0x20 ),	/* Offset= 32 (336) */
/* 306 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0x10 ),	/* 16 */
/* 310 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 312 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 314 */	0x0,		/* 0 */
			NdrFcShort( 0xff55 ),	/* Offset= -171 (144) */
			0x5b,		/* FC_END */
/* 318 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 320 */	NdrFcShort( 0x14 ),	/* 20 */
/* 322 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 324 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 328 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 332 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 334 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 336 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 338 */	NdrFcShort( 0x2c ),	/* 44 */
/* 340 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 342 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 344 */	NdrFcShort( 0x14 ),	/* 20 */
/* 346 */	NdrFcShort( 0x14 ),	/* 20 */
/* 348 */	0x13, 0x0,	/* FC_OP */
/* 350 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (324) */
/* 352 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 354 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (306) */
			0x8,		/* FC_LONG */
/* 358 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 360 */	0x0,		/* 0 */
			NdrFcShort( 0xffd5 ),	/* Offset= -43 (318) */
			0x5b,		/* FC_END */
/* 364 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 366 */	NdrFcShort( 0x2 ),	/* Offset= 2 (368) */
/* 368 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 370 */	NdrFcLong( 0x1dcb3a06 ),	/* 499857926 */
/* 374 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 376 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 378 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 380 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 382 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 384 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 386 */	
			0x12, 0x0,	/* FC_UP */
/* 388 */	NdrFcShort( 0x1c ),	/* Offset= 28 (416) */
/* 390 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 394 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 396 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 398 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 400 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 402 */	NdrFcShort( 0x28 ),	/* 40 */
/* 404 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 406 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 408 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 414 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 416 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 418 */	NdrFcShort( 0x58 ),	/* 88 */
/* 420 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 422 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (390) */
/* 424 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 426 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (390) */
/* 428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 430 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 432 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (400) */
			0x5b,		/* FC_END */
/* 436 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 438 */	NdrFcShort( 0x2 ),	/* Offset= 2 (440) */
/* 440 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 442 */	NdrFcLong( 0xec3b0663 ),	/* -331676061 */
/* 446 */	NdrFcShort( 0x951 ),	/* 2385 */
/* 448 */	NdrFcShort( 0x460a ),	/* 17930 */
/* 450 */	0x9a,		/* 154 */
			0x80,		/* 128 */
/* 452 */	0xd,		/* 13 */
			0xce,		/* 206 */
/* 454 */	0xed,		/* 237 */
			0x3c,		/* 60 */
/* 456 */	0x4,		/* 4 */
			0x3c,		/* 60 */
/* 458 */	
			0x12, 0x0,	/* FC_UP */
/* 460 */	NdrFcShort( 0x42 ),	/* Offset= 66 (526) */
/* 462 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 466 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 468 */	NdrFcShort( 0x4 ),	/* 4 */
/* 470 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 472 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 474 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 476 */	NdrFcShort( 0x4 ),	/* 4 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 488 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 490 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 492 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 494 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 496 */	NdrFcShort( 0xc ),	/* 12 */
/* 498 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 508 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 510 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	0x12, 0x0,	/* FC_UP */
/* 518 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (462) */
/* 520 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 526 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0xc ),	/* 12 */
/* 530 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 534 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 536 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 538 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 540 */	NdrFcShort( 0xc ),	/* 12 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x2 ),	/* 2 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 552 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	0x12, 0x0,	/* FC_UP */
/* 560 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (462) */
/* 562 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 564 */	0x0,		/* 0 */
			NdrFcShort( 0xffb9 ),	/* Offset= -71 (494) */
			0x5b,		/* FC_END */
/* 568 */	
			0x11, 0x0,	/* FC_RP */
/* 570 */	NdrFcShort( 0x2 ),	/* Offset= 2 (572) */
/* 572 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 582 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 586 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 588 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 590 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (368) */
/* 592 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 594 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 596 */	NdrFcShort( 0x2 ),	/* Offset= 2 (598) */
/* 598 */	
			0x13, 0x0,	/* FC_OP */
/* 600 */	NdrFcShort( 0x2 ),	/* Offset= 2 (602) */
/* 602 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 610 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 612 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 616 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 618 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 620 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (368) */
/* 622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 624 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 626 */	NdrFcLong( 0x21de01cb ),	/* 568197579 */
/* 630 */	NdrFcShort( 0x3bb4 ),	/* 15284 */
/* 632 */	NdrFcShort( 0x4929 ),	/* 18729 */
/* 634 */	0xb2,		/* 178 */
			0x1a,		/* 26 */
/* 636 */	0x17,		/* 23 */
			0xaf,		/* 175 */
/* 638 */	0x3f,		/* 63 */
			0x80,		/* 128 */
/* 640 */	0xf6,		/* 246 */
			0x58,		/* 88 */
/* 642 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 644 */	NdrFcShort( 0x2 ),	/* Offset= 2 (646) */
/* 646 */	
			0x13, 0x0,	/* FC_OP */
/* 648 */	NdrFcShort( 0x2 ),	/* Offset= 2 (650) */
/* 650 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 654 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 660 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 662 */	NdrFcShort( 0xfe62 ),	/* Offset= -414 (248) */
/* 664 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 666 */	
			0x11, 0x0,	/* FC_RP */
/* 668 */	NdrFcShort( 0x2 ),	/* Offset= 2 (670) */
/* 670 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 672 */	NdrFcShort( 0x4 ),	/* 4 */
/* 674 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 678 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 680 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 682 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 684 */	NdrFcShort( 0x4 ),	/* 4 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 696 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 698 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 700 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 702 */	
			0x11, 0x0,	/* FC_RP */
/* 704 */	NdrFcShort( 0x2 ),	/* Offset= 2 (706) */
/* 706 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 708 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 712 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 714 */	
			0x11, 0x0,	/* FC_RP */
/* 716 */	NdrFcShort( 0x2 ),	/* Offset= 2 (718) */
/* 718 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 720 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 724 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 726 */	
			0x11, 0x0,	/* FC_RP */
/* 728 */	NdrFcShort( 0x2 ),	/* Offset= 2 (730) */
/* 730 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 734 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 738 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 740 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 742 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 744 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 746 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 758 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 760 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 762 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 764 */	
			0x12, 0x0,	/* FC_UP */
/* 766 */	NdrFcShort( 0xfe52 ),	/* Offset= -430 (336) */
/* 768 */	
			0x11, 0x0,	/* FC_RP */
/* 770 */	NdrFcShort( 0x2 ),	/* Offset= 2 (772) */
/* 772 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 774 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 778 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 780 */	
			0x11, 0x0,	/* FC_RP */
/* 782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (784) */
/* 784 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 786 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 792 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 794 */	NdrFcShort( 0x2 ),	/* Offset= 2 (796) */
/* 796 */	
			0x13, 0x0,	/* FC_OP */
/* 798 */	NdrFcShort( 0x2 ),	/* Offset= 2 (800) */
/* 800 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 808 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 810 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 814 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 818 */	NdrFcShort( 0xfd7a ),	/* Offset= -646 (172) */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 824 */	NdrFcShort( 0x2 ),	/* Offset= 2 (826) */
/* 826 */	
			0x13, 0x0,	/* FC_OP */
/* 828 */	NdrFcShort( 0x2 ),	/* Offset= 2 (830) */
/* 830 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 834 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 840 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 842 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 856 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 858 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 860 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 862 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 864 */	NdrFcShort( 0x2 ),	/* Offset= 2 (866) */
/* 866 */	
			0x13, 0x0,	/* FC_OP */
/* 868 */	NdrFcShort( 0x2 ),	/* Offset= 2 (870) */
/* 870 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 878 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 880 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 884 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 886 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 888 */	NdrFcShort( 0xfd34 ),	/* Offset= -716 (172) */
/* 890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 892 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 894 */	NdrFcShort( 0x2 ),	/* Offset= 2 (896) */
/* 896 */	
			0x13, 0x0,	/* FC_OP */
/* 898 */	NdrFcShort( 0x2 ),	/* Offset= 2 (900) */
/* 900 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 902 */	NdrFcShort( 0x58 ),	/* 88 */
/* 904 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 906 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 908 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 910 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 912 */	NdrFcShort( 0xfe10 ),	/* Offset= -496 (416) */
/* 914 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 916 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 918 */	NdrFcShort( 0x2 ),	/* Offset= 2 (920) */
/* 920 */	
			0x13, 0x0,	/* FC_OP */
/* 922 */	NdrFcShort( 0x16 ),	/* Offset= 22 (944) */
/* 924 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 938 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 940 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 942 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 944 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 948 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 950 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 952 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 954 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 970 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 972 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 974 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (924) */
			0x5b,		/* FC_END */
/* 978 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 980 */	NdrFcShort( 0x2 ),	/* Offset= 2 (982) */
/* 982 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 984 */	NdrFcLong( 0xb196b28b ),	/* -1315523957 */
/* 988 */	NdrFcShort( 0xbab4 ),	/* -17740 */
/* 990 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 992 */	0xb6,		/* 182 */
			0x9c,		/* 156 */
/* 994 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 996 */	0x0,		/* 0 */
			0x34,		/* 52 */
/* 998 */	0x1d,		/* 29 */
			0x7,		/* 7 */
/* 1000 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1002 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1004) */
/* 1004 */	
			0x13, 0x0,	/* FC_OP */
/* 1006 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1008) */
/* 1008 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1016 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1018 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1022 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1024 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1026 */	NdrFcShort( 0xfee8 ),	/* Offset= -280 (746) */
/* 1028 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1030 */	
			0x11, 0x0,	/* FC_RP */
/* 1032 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1034) */
/* 1034 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 1036 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1038 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1040 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1042 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1044 */	NdrFcShort( 0x8b6 ),	/* Offset= 2230 (3274) */
/* 1046 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x7,		/* FC_USHORT */
/* 1048 */	0x0,		/* Corr desc:  */
			0x59,		/* FC_CALLBACK */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1054 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1056) */
/* 1056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1058 */	NdrFcShort( 0x61 ),	/* 97 */
/* 1060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1064) */
/* 1066 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1070 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1070) */
/* 1072 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1076 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1078 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1082 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1084 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1088 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1090 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1094 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1096 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1100 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1102 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1106 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1108 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1112 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1114 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1118 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1120 */	NdrFcLong( 0xe ),	/* 14 */
/* 1124 */	NdrFcShort( 0x208 ),	/* Offset= 520 (1644) */
/* 1126 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1130 */	NdrFcShort( 0x202 ),	/* Offset= 514 (1644) */
/* 1132 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1136 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (1644) */
/* 1138 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1142 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 1144 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1148 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1150 */	NdrFcLong( 0xb ),	/* 11 */
/* 1154 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1156 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 1160 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1162 */	NdrFcLong( 0xa ),	/* 10 */
/* 1166 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1168 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1172 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1644) */
/* 1174 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1178 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1180 */	NdrFcLong( 0x40 ),	/* 64 */
/* 1184 */	NdrFcShort( 0x1d2 ),	/* Offset= 466 (1650) */
/* 1186 */	NdrFcLong( 0x48 ),	/* 72 */
/* 1190 */	NdrFcShort( 0x1d4 ),	/* Offset= 468 (1658) */
/* 1192 */	NdrFcLong( 0x47 ),	/* 71 */
/* 1196 */	NdrFcShort( 0x1d2 ),	/* Offset= 466 (1662) */
/* 1198 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1202 */	NdrFcShort( 0x20c ),	/* Offset= 524 (1726) */
/* 1204 */	NdrFcLong( 0xfff ),	/* 4095 */
/* 1208 */	NdrFcShort( 0x21c ),	/* Offset= 540 (1748) */
/* 1210 */	NdrFcLong( 0x41 ),	/* 65 */
/* 1214 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1748) */
/* 1216 */	NdrFcLong( 0x46 ),	/* 70 */
/* 1220 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1748) */
/* 1222 */	NdrFcLong( 0x1e ),	/* 30 */
/* 1226 */	NdrFcShort( 0x21e ),	/* Offset= 542 (1768) */
/* 1228 */	NdrFcLong( 0x1f ),	/* 31 */
/* 1232 */	NdrFcShort( 0xfb66 ),	/* Offset= -1178 (54) */
/* 1234 */	NdrFcLong( 0xd ),	/* 13 */
/* 1238 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (746) */
/* 1240 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1244 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1772) */
/* 1246 */	NdrFcLong( 0x42 ),	/* 66 */
/* 1250 */	NdrFcShort( 0x21c ),	/* Offset= 540 (1790) */
/* 1252 */	NdrFcLong( 0x44 ),	/* 68 */
/* 1256 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1790) */
/* 1258 */	NdrFcLong( 0x43 ),	/* 67 */
/* 1262 */	NdrFcShort( 0x222 ),	/* Offset= 546 (1808) */
/* 1264 */	NdrFcLong( 0x45 ),	/* 69 */
/* 1268 */	NdrFcShort( 0x21c ),	/* Offset= 540 (1808) */
/* 1270 */	NdrFcLong( 0x49 ),	/* 73 */
/* 1274 */	NdrFcShort( 0x228 ),	/* Offset= 552 (1826) */
/* 1276 */	NdrFcLong( 0x2010 ),	/* 8208 */
/* 1280 */	NdrFcShort( 0x5c4 ),	/* Offset= 1476 (2756) */
/* 1282 */	NdrFcLong( 0x2011 ),	/* 8209 */
/* 1286 */	NdrFcShort( 0x5be ),	/* Offset= 1470 (2756) */
/* 1288 */	NdrFcLong( 0x2002 ),	/* 8194 */
/* 1292 */	NdrFcShort( 0x5b8 ),	/* Offset= 1464 (2756) */
/* 1294 */	NdrFcLong( 0x2012 ),	/* 8210 */
/* 1298 */	NdrFcShort( 0x5b2 ),	/* Offset= 1458 (2756) */
/* 1300 */	NdrFcLong( 0x2003 ),	/* 8195 */
/* 1304 */	NdrFcShort( 0x5ac ),	/* Offset= 1452 (2756) */
/* 1306 */	NdrFcLong( 0x2013 ),	/* 8211 */
/* 1310 */	NdrFcShort( 0x5a6 ),	/* Offset= 1446 (2756) */
/* 1312 */	NdrFcLong( 0x2016 ),	/* 8214 */
/* 1316 */	NdrFcShort( 0x5a0 ),	/* Offset= 1440 (2756) */
/* 1318 */	NdrFcLong( 0x2017 ),	/* 8215 */
/* 1322 */	NdrFcShort( 0x59a ),	/* Offset= 1434 (2756) */
/* 1324 */	NdrFcLong( 0x2004 ),	/* 8196 */
/* 1328 */	NdrFcShort( 0x594 ),	/* Offset= 1428 (2756) */
/* 1330 */	NdrFcLong( 0x2005 ),	/* 8197 */
/* 1334 */	NdrFcShort( 0x58e ),	/* Offset= 1422 (2756) */
/* 1336 */	NdrFcLong( 0x2006 ),	/* 8198 */
/* 1340 */	NdrFcShort( 0x588 ),	/* Offset= 1416 (2756) */
/* 1342 */	NdrFcLong( 0x2007 ),	/* 8199 */
/* 1346 */	NdrFcShort( 0x582 ),	/* Offset= 1410 (2756) */
/* 1348 */	NdrFcLong( 0x2008 ),	/* 8200 */
/* 1352 */	NdrFcShort( 0x57c ),	/* Offset= 1404 (2756) */
/* 1354 */	NdrFcLong( 0x200b ),	/* 8203 */
/* 1358 */	NdrFcShort( 0x576 ),	/* Offset= 1398 (2756) */
/* 1360 */	NdrFcLong( 0x200e ),	/* 8206 */
/* 1364 */	NdrFcShort( 0x570 ),	/* Offset= 1392 (2756) */
/* 1366 */	NdrFcLong( 0x2009 ),	/* 8201 */
/* 1370 */	NdrFcShort( 0x56a ),	/* Offset= 1386 (2756) */
/* 1372 */	NdrFcLong( 0x200d ),	/* 8205 */
/* 1376 */	NdrFcShort( 0x564 ),	/* Offset= 1380 (2756) */
/* 1378 */	NdrFcLong( 0x200a ),	/* 8202 */
/* 1382 */	NdrFcShort( 0x55e ),	/* Offset= 1374 (2756) */
/* 1384 */	NdrFcLong( 0x200c ),	/* 8204 */
/* 1388 */	NdrFcShort( 0x558 ),	/* Offset= 1368 (2756) */
/* 1390 */	NdrFcLong( 0x1010 ),	/* 4112 */
/* 1394 */	NdrFcShort( 0x568 ),	/* Offset= 1384 (2778) */
/* 1396 */	NdrFcLong( 0x1011 ),	/* 4113 */
/* 1400 */	NdrFcShort( 0x562 ),	/* Offset= 1378 (2778) */
/* 1402 */	NdrFcLong( 0x1002 ),	/* 4098 */
/* 1406 */	NdrFcShort( 0x4d0 ),	/* Offset= 1232 (2638) */
/* 1408 */	NdrFcLong( 0x1012 ),	/* 4114 */
/* 1412 */	NdrFcShort( 0x4ca ),	/* Offset= 1226 (2638) */
/* 1414 */	NdrFcLong( 0x1003 ),	/* 4099 */
/* 1418 */	NdrFcShort( 0x4e4 ),	/* Offset= 1252 (2670) */
/* 1420 */	NdrFcLong( 0x1013 ),	/* 4115 */
/* 1424 */	NdrFcShort( 0x4de ),	/* Offset= 1246 (2670) */
/* 1426 */	NdrFcLong( 0x1014 ),	/* 4116 */
/* 1430 */	NdrFcShort( 0x568 ),	/* Offset= 1384 (2814) */
/* 1432 */	NdrFcLong( 0x1015 ),	/* 4117 */
/* 1436 */	NdrFcShort( 0x562 ),	/* Offset= 1378 (2814) */
/* 1438 */	NdrFcLong( 0x1004 ),	/* 4100 */
/* 1442 */	NdrFcShort( 0x57c ),	/* Offset= 1404 (2846) */
/* 1444 */	NdrFcLong( 0x1005 ),	/* 4101 */
/* 1448 */	NdrFcShort( 0x596 ),	/* Offset= 1430 (2878) */
/* 1450 */	NdrFcLong( 0x100b ),	/* 4107 */
/* 1454 */	NdrFcShort( 0x4a0 ),	/* Offset= 1184 (2638) */
/* 1456 */	NdrFcLong( 0x100a ),	/* 4106 */
/* 1460 */	NdrFcShort( 0x4ba ),	/* Offset= 1210 (2670) */
/* 1462 */	NdrFcLong( 0x1006 ),	/* 4102 */
/* 1466 */	NdrFcShort( 0x544 ),	/* Offset= 1348 (2814) */
/* 1468 */	NdrFcLong( 0x1007 ),	/* 4103 */
/* 1472 */	NdrFcShort( 0x57e ),	/* Offset= 1406 (2878) */
/* 1474 */	NdrFcLong( 0x1040 ),	/* 4160 */
/* 1478 */	NdrFcShort( 0x59c ),	/* Offset= 1436 (2914) */
/* 1480 */	NdrFcLong( 0x1048 ),	/* 4168 */
/* 1484 */	NdrFcShort( 0x5ba ),	/* Offset= 1466 (2950) */
/* 1486 */	NdrFcLong( 0x1047 ),	/* 4167 */
/* 1490 */	NdrFcShort( 0x5ea ),	/* Offset= 1514 (3004) */
/* 1492 */	NdrFcLong( 0x1008 ),	/* 4104 */
/* 1496 */	NdrFcShort( 0x60e ),	/* Offset= 1550 (3046) */
/* 1498 */	NdrFcLong( 0x1fff ),	/* 8191 */
/* 1502 */	NdrFcShort( 0x63e ),	/* Offset= 1598 (3100) */
/* 1504 */	NdrFcLong( 0x101e ),	/* 4126 */
/* 1508 */	NdrFcShort( 0x66c ),	/* Offset= 1644 (3152) */
/* 1510 */	NdrFcLong( 0x101f ),	/* 4127 */
/* 1514 */	NdrFcShort( 0x69a ),	/* Offset= 1690 (3204) */
/* 1516 */	NdrFcLong( 0x100c ),	/* 4108 */
/* 1520 */	NdrFcShort( 0x6be ),	/* Offset= 1726 (3246) */
/* 1522 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1526 */	NdrFcShort( 0x3c0 ),	/* Offset= 960 (2486) */
/* 1528 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 1532 */	NdrFcShort( 0x3ba ),	/* Offset= 954 (2486) */
/* 1534 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 1538 */	NdrFcShort( 0x36e ),	/* Offset= 878 (2416) */
/* 1540 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1544 */	NdrFcShort( 0x368 ),	/* Offset= 872 (2416) */
/* 1546 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 1550 */	NdrFcShort( 0x366 ),	/* Offset= 870 (2420) */
/* 1552 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1556 */	NdrFcShort( 0x360 ),	/* Offset= 864 (2420) */
/* 1558 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1562 */	NdrFcShort( 0x35a ),	/* Offset= 858 (2420) */
/* 1564 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1568 */	NdrFcShort( 0x354 ),	/* Offset= 852 (2420) */
/* 1570 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 1574 */	NdrFcShort( 0x356 ),	/* Offset= 854 (2428) */
/* 1576 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 1580 */	NdrFcShort( 0x354 ),	/* Offset= 852 (2432) */
/* 1582 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 1586 */	NdrFcShort( 0x33e ),	/* Offset= 830 (2416) */
/* 1588 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1592 */	NdrFcShort( 0x37a ),	/* Offset= 890 (2482) */
/* 1594 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 1598 */	NdrFcShort( 0x336 ),	/* Offset= 822 (2420) */
/* 1600 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 1604 */	NdrFcShort( 0x340 ),	/* Offset= 832 (2436) */
/* 1606 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 1610 */	NdrFcShort( 0x336 ),	/* Offset= 822 (2432) */
/* 1612 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 1616 */	NdrFcShort( 0x66e ),	/* Offset= 1646 (3262) */
/* 1618 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 1622 */	NdrFcShort( 0x336 ),	/* Offset= 822 (2444) */
/* 1624 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 1628 */	NdrFcShort( 0x334 ),	/* Offset= 820 (2448) */
/* 1630 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 1634 */	NdrFcShort( 0x660 ),	/* Offset= 1632 (3266) */
/* 1636 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 1640 */	NdrFcShort( 0x65e ),	/* Offset= 1630 (3270) */
/* 1642 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1641) */
/* 1644 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1648 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1650 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1654 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1656 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1658 */	
			0x13, 0x0,	/* FC_OP */
/* 1660 */	NdrFcShort( 0xfab6 ),	/* Offset= -1354 (306) */
/* 1662 */	
			0x13, 0x0,	/* FC_OP */
/* 1664 */	NdrFcShort( 0xe ),	/* Offset= 14 (1678) */
/* 1666 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1670 */	0x10,		/* Corr desc:  field pointer,  */
			0x59,		/* FC_CALLBACK */
/* 1672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1674 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1676 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1678 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1680 */	NdrFcShort( 0xc ),	/* 12 */
/* 1682 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1684 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1690 */	0x13, 0x0,	/* FC_OP */
/* 1692 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1666) */
/* 1694 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1696 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1700 */	
			0x13, 0x0,	/* FC_OP */
/* 1702 */	NdrFcShort( 0xe ),	/* Offset= 14 (1716) */
/* 1704 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1706 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1708 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1710 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1712 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1714 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1716 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1720 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1704) */
/* 1722 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1724 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1726 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1700) */
/* 1736 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1740 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1746 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1748 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1754 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1758 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1760 */	0x13, 0x0,	/* FC_OP */
/* 1762 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1736) */
/* 1764 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1766 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1768 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1770 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1772 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1774 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1784 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1786 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1788 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1790 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1792 */	NdrFcLong( 0xc ),	/* 12 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1802 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1804 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1806 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1808 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1810 */	NdrFcLong( 0xb ),	/* 11 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1818 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1820 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1822 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1824 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1826 */	
			0x13, 0x0,	/* FC_OP */
/* 1828 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1830) */
/* 1830 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1832 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0xc ),	/* Offset= 12 (1848) */
/* 1838 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1840 */	NdrFcShort( 0xfa02 ),	/* Offset= -1534 (306) */
/* 1842 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1844 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1790) */
/* 1846 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1848 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1850 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1852) */
/* 1852 */	
			0x13, 0x0,	/* FC_OP */
/* 1854 */	NdrFcShort( 0x374 ),	/* Offset= 884 (2738) */
/* 1856 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 1858 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1860 */	NdrFcShort( 0xa ),	/* 10 */
/* 1862 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1866 */	NdrFcShort( 0x5a ),	/* Offset= 90 (1956) */
/* 1868 */	NdrFcLong( 0xd ),	/* 13 */
/* 1872 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1998) */
/* 1874 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1878 */	NdrFcShort( 0x9e ),	/* Offset= 158 (2036) */
/* 1880 */	NdrFcLong( 0xc ),	/* 12 */
/* 1884 */	NdrFcShort( 0x292 ),	/* Offset= 658 (2542) */
/* 1886 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1890 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (2590) */
/* 1892 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 1896 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (2606) */
/* 1898 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1902 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (1748) */
/* 1904 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1908 */	NdrFcShort( 0x2da ),	/* Offset= 730 (2638) */
/* 1910 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1914 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (2670) */
/* 1916 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1920 */	NdrFcShort( 0x30e ),	/* Offset= 782 (2702) */
/* 1922 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1921) */
/* 1924 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1928 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1934 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1936 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	0x13, 0x0,	/* FC_OP */
/* 1950 */	NdrFcShort( 0xff16 ),	/* Offset= -234 (1716) */
/* 1952 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1954 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1956 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1960 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1962 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1966 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1968 */	0x11, 0x0,	/* FC_RP */
/* 1970 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1924) */
/* 1972 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1974 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1976 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1986 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1990 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1992 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1994 */	NdrFcShort( 0xfb20 ),	/* Offset= -1248 (746) */
/* 1996 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1998 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2010) */
/* 2006 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2008 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2010 */	
			0x11, 0x0,	/* FC_RP */
/* 2012 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1976) */
/* 2014 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2024 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2028 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2030 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2032 */	NdrFcShort( 0xfefc ),	/* Offset= -260 (1772) */
/* 2034 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2036 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2048) */
/* 2044 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2046 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2048 */	
			0x11, 0x0,	/* FC_RP */
/* 2050 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2014) */
/* 2052 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2054 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 2056 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2058 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2060 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2062) */
/* 2062 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2064 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2066 */	NdrFcLong( 0x14 ),	/* 20 */
/* 2070 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 2072 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2076 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2078 */	NdrFcLong( 0x11 ),	/* 17 */
/* 2082 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 2084 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2088 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 2090 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2094 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 2096 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2100 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 2102 */	NdrFcLong( 0xb ),	/* 11 */
/* 2106 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 2108 */	NdrFcLong( 0xa ),	/* 10 */
/* 2112 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2114 */	NdrFcLong( 0x6 ),	/* 6 */
/* 2118 */	NdrFcShort( 0xfe26 ),	/* Offset= -474 (1644) */
/* 2120 */	NdrFcLong( 0x7 ),	/* 7 */
/* 2124 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 2126 */	NdrFcLong( 0x8 ),	/* 8 */
/* 2130 */	NdrFcShort( 0xfe52 ),	/* Offset= -430 (1700) */
/* 2132 */	NdrFcLong( 0xd ),	/* 13 */
/* 2136 */	NdrFcShort( 0xfa92 ),	/* Offset= -1390 (746) */
/* 2138 */	NdrFcLong( 0x9 ),	/* 9 */
/* 2142 */	NdrFcShort( 0xfe8e ),	/* Offset= -370 (1772) */
/* 2144 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2148 */	NdrFcShort( 0xca ),	/* Offset= 202 (2350) */
/* 2150 */	NdrFcLong( 0x24 ),	/* 36 */
/* 2154 */	NdrFcShort( 0xcc ),	/* Offset= 204 (2358) */
/* 2156 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 2160 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (2358) */
/* 2162 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 2166 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (2412) */
/* 2168 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 2172 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (2416) */
/* 2174 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 2178 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (2420) */
/* 2180 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 2184 */	NdrFcShort( 0xf0 ),	/* Offset= 240 (2424) */
/* 2186 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 2190 */	NdrFcShort( 0xee ),	/* Offset= 238 (2428) */
/* 2192 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 2196 */	NdrFcShort( 0xec ),	/* Offset= 236 (2432) */
/* 2198 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 2202 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (2416) */
/* 2204 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 2208 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (2420) */
/* 2210 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 2214 */	NdrFcShort( 0xde ),	/* Offset= 222 (2436) */
/* 2216 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 2220 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (2432) */
/* 2222 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 2226 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (2440) */
/* 2228 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 2232 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (2444) */
/* 2234 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 2238 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (2448) */
/* 2240 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 2244 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (2452) */
/* 2246 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 2250 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (2464) */
/* 2252 */	NdrFcLong( 0x10 ),	/* 16 */
/* 2256 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 2258 */	NdrFcLong( 0x12 ),	/* 18 */
/* 2262 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 2264 */	NdrFcLong( 0x13 ),	/* 19 */
/* 2268 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2270 */	NdrFcLong( 0x15 ),	/* 21 */
/* 2274 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 2276 */	NdrFcLong( 0x16 ),	/* 22 */
/* 2280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2282 */	NdrFcLong( 0x17 ),	/* 23 */
/* 2286 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2288 */	NdrFcLong( 0xe ),	/* 14 */
/* 2292 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (2472) */
/* 2294 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 2298 */	NdrFcShort( 0xb8 ),	/* Offset= 184 (2482) */
/* 2300 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 2304 */	NdrFcShort( 0xb6 ),	/* Offset= 182 (2486) */
/* 2306 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 2310 */	NdrFcShort( 0x6a ),	/* Offset= 106 (2416) */
/* 2312 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 2316 */	NdrFcShort( 0x68 ),	/* Offset= 104 (2420) */
/* 2318 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 2322 */	NdrFcShort( 0x66 ),	/* Offset= 102 (2424) */
/* 2324 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 2328 */	NdrFcShort( 0x5c ),	/* Offset= 92 (2420) */
/* 2330 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 2334 */	NdrFcShort( 0x56 ),	/* Offset= 86 (2420) */
/* 2336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2340) */
/* 2342 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2346 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2346) */
/* 2348 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2347) */
/* 2350 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2354) */
/* 2354 */	
			0x13, 0x0,	/* FC_OP */
/* 2356 */	NdrFcShort( 0x17e ),	/* Offset= 382 (2738) */
/* 2358 */	
			0x13, 0x0,	/* FC_OP */
/* 2360 */	NdrFcShort( 0x20 ),	/* Offset= 32 (2392) */
/* 2362 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2364 */	NdrFcLong( 0x2f ),	/* 47 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2376 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2378 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2380 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2384 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2386 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2390 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2392 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2394 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0xa ),	/* Offset= 10 (2408) */
/* 2400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2402 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2404 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (2362) */
/* 2406 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2408 */	
			0x13, 0x0,	/* FC_OP */
/* 2410 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2380) */
/* 2412 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2414 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 2416 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2418 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 2420 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2422 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2424 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2426 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 2428 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2430 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 2432 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2434 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 2436 */	
			0x13, 0x0,	/* FC_OP */
/* 2438 */	NdrFcShort( 0xfce6 ),	/* Offset= -794 (1644) */
/* 2440 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2442 */	NdrFcShort( 0xfd1a ),	/* Offset= -742 (1700) */
/* 2444 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2446 */	NdrFcShort( 0xf95c ),	/* Offset= -1700 (746) */
/* 2448 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2450 */	NdrFcShort( 0xfd5a ),	/* Offset= -678 (1772) */
/* 2452 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2454 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2456) */
/* 2456 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2458 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2460) */
/* 2460 */	
			0x13, 0x0,	/* FC_OP */
/* 2462 */	NdrFcShort( 0x114 ),	/* Offset= 276 (2738) */
/* 2464 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2466 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2468) */
/* 2468 */	
			0x13, 0x0,	/* FC_OP */
/* 2470 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2490) */
/* 2472 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2474 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2476 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 2478 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 2480 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2482 */	
			0x13, 0x0,	/* FC_OP */
/* 2484 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (2472) */
/* 2486 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2488 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2490 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2492 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2496) */
/* 2498 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2500 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2502 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2504 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2506 */	NdrFcShort( 0xfe3a ),	/* Offset= -454 (2052) */
/* 2508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2510 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2512 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2514 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2520 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2522 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2524 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2534 */	0x13, 0x0,	/* FC_OP */
/* 2536 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2490) */
/* 2538 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2540 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2542 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2554) */
/* 2550 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2554 */	
			0x11, 0x0,	/* FC_RP */
/* 2556 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2510) */
/* 2558 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2560 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2562 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2568 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2570 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2572 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	0x13, 0x0,	/* FC_OP */
/* 2584 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (2392) */
/* 2586 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2590 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2602) */
/* 2598 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2600 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2602 */	
			0x11, 0x0,	/* FC_RP */
/* 2604 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2558) */
/* 2606 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2608 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0xa ),	/* Offset= 10 (2622) */
/* 2614 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2616 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2618 */	NdrFcShort( 0xf6f8 ),	/* Offset= -2312 (306) */
/* 2620 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2622 */	
			0x11, 0x0,	/* FC_RP */
/* 2624 */	NdrFcShort( 0xfd78 ),	/* Offset= -648 (1976) */
/* 2626 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2628 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2630 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2636 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2638 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2642 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2644 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2646 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2648 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2650 */	0x13, 0x0,	/* FC_OP */
/* 2652 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2626) */
/* 2654 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2656 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2658 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2660 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2662 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2668 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2670 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2674 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2676 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2678 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2680 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2682 */	0x13, 0x0,	/* FC_OP */
/* 2684 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2658) */
/* 2686 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2688 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2690 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2694 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2700 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2702 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2706 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2708 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2710 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2712 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2714 */	0x13, 0x0,	/* FC_OP */
/* 2716 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2690) */
/* 2718 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2720 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2722 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2726 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 2728 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 2730 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2732 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2734 */	NdrFcShort( 0xfbc4 ),	/* Offset= -1084 (1650) */
/* 2736 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2738 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2740 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2742 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2722) */
/* 2744 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2744) */
/* 2746 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2748 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2750 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2752 */	NdrFcShort( 0xfc80 ),	/* Offset= -896 (1856) */
/* 2754 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2756 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2760 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0xfc6c ),	/* Offset= -916 (1848) */
/* 2766 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2770 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2776 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2778 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2782 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2784 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2786 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2790 */	0x13, 0x0,	/* FC_OP */
/* 2792 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2766) */
/* 2794 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2796 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2798 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2802 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2808 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2810 */	NdrFcShort( 0xfb72 ),	/* Offset= -1166 (1644) */
/* 2812 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2814 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2818 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2820 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2822 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2826 */	0x13, 0x0,	/* FC_OP */
/* 2828 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2798) */
/* 2830 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2832 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2834 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2838 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2844 */	0xa,		/* FC_FLOAT */
			0x5b,		/* FC_END */
/* 2846 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2850 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2852 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2858 */	0x13, 0x0,	/* FC_OP */
/* 2860 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2834) */
/* 2862 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2864 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2866 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2870 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2876 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 2878 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2882 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2884 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2890 */	0x13, 0x0,	/* FC_OP */
/* 2892 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2866) */
/* 2894 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2896 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2898 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2902 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2908 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2910 */	NdrFcShort( 0xfb14 ),	/* Offset= -1260 (1650) */
/* 2912 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2914 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2918 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2920 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2922 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2924 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2926 */	0x13, 0x0,	/* FC_OP */
/* 2928 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2898) */
/* 2930 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2932 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2934 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2936 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2938 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2942 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2944 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2946 */	NdrFcShort( 0xf5b0 ),	/* Offset= -2640 (306) */
/* 2948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2950 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2954 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2956 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2958 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2962 */	0x13, 0x0,	/* FC_OP */
/* 2964 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2934) */
/* 2966 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2968 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2970 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2972 */	NdrFcShort( 0xc ),	/* 12 */
/* 2974 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2980 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2982 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2984 */	NdrFcShort( 0xc ),	/* 12 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2994 */	0x13, 0x0,	/* FC_OP */
/* 2996 */	NdrFcShort( 0xface ),	/* Offset= -1330 (1666) */
/* 2998 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3000 */	0x0,		/* 0 */
			NdrFcShort( 0xfad5 ),	/* Offset= -1323 (1678) */
			0x5b,		/* FC_END */
/* 3004 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3008 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3010 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3012 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3014 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3016 */	0x13, 0x0,	/* FC_OP */
/* 3018 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2970) */
/* 3020 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3022 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3024 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3028 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3034 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3038 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3040 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3042 */	NdrFcShort( 0xfadc ),	/* Offset= -1316 (1726) */
/* 3044 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3046 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3050 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3052 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3054 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3056 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3058 */	0x13, 0x0,	/* FC_OP */
/* 3060 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3024) */
/* 3062 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3064 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3066 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3070 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3076 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3078 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3086 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3088 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3090 */	0x13, 0x0,	/* FC_OP */
/* 3092 */	NdrFcShort( 0xfab4 ),	/* Offset= -1356 (1736) */
/* 3094 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3096 */	0x0,		/* 0 */
			NdrFcShort( 0xfabb ),	/* Offset= -1349 (1748) */
			0x5b,		/* FC_END */
/* 3100 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3104 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3106 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3112 */	0x13, 0x0,	/* FC_OP */
/* 3114 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (3066) */
/* 3116 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3118 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3120 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3124 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3130 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3132 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3134 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3144 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 3146 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 3148 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3152 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3156 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3158 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3164 */	0x13, 0x0,	/* FC_OP */
/* 3166 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3120) */
/* 3168 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3170 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3172 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3176 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3182 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3184 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 3198 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3200 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3204 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3208 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3210 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3212 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3216 */	0x13, 0x0,	/* FC_OP */
/* 3218 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3172) */
/* 3220 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3222 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3224 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3228 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3234 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3238 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3240 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3242 */	NdrFcShort( 0x20 ),	/* Offset= 32 (3274) */
/* 3244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3246 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3258) */
/* 3254 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3256 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3258 */	
			0x13, 0x0,	/* FC_OP */
/* 3260 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3224) */
/* 3262 */	
			0x13, 0x0,	/* FC_OP */
/* 3264 */	NdrFcShort( 0xf9fe ),	/* Offset= -1538 (1726) */
/* 3266 */	
			0x13, 0x0,	/* FC_OP */
/* 3268 */	NdrFcShort( 0xfe00 ),	/* Offset= -512 (2756) */
/* 3270 */	
			0x13, 0x0,	/* FC_OP */
/* 3272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3274) */
/* 3274 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3276 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3280 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3280) */
/* 3282 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 3284 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 3286 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3288 */	NdrFcShort( 0xf73e ),	/* Offset= -2242 (1046) */
/* 3290 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3292 */	
			0x11, 0x0,	/* FC_RP */
/* 3294 */	NdrFcShort( 0xffec ),	/* Offset= -20 (3274) */
/* 3296 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3298 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (3474) */
/* 3300 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 3302 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3304 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3306 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3308 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3310) */
/* 3310 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3312 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3318) */
/* 3320 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3324 */	NdrFcShort( 0xa ),	/* Offset= 10 (3334) */
/* 3326 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3330 */	NdrFcShort( 0x30 ),	/* Offset= 48 (3378) */
/* 3332 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3331) */
/* 3334 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3336 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3340) */
/* 3342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3344 */	NdrFcShort( 0xffba ),	/* Offset= -70 (3274) */
/* 3346 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3348 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (3274) */
/* 3350 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3352 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (3274) */
/* 3354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3356 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3360 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3364 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3366 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3370 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3372 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3374 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (3274) */
/* 3376 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3378 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3390) */
/* 3386 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3388 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3390 */	
			0x13, 0x0,	/* FC_OP */
/* 3392 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3356) */
/* 3394 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3396 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0xa ),	/* Offset= 10 (3410) */
/* 3402 */	0x36,		/* FC_POINTER */
			0xe,		/* FC_ENUM32 */
/* 3404 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3406 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (3300) */
/* 3408 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3410 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 3412 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3414 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3418 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3420 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3422 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3424 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3428 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3430 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3432 */	NdrFcShort( 0xffda ),	/* Offset= -38 (3394) */
/* 3434 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3436 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3438 */	NdrFcShort( 0xc ),	/* 12 */
/* 3440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3442 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3448) */
/* 3444 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3446 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3448 */	
			0x13, 0x0,	/* FC_OP */
/* 3450 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3414) */
/* 3452 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3460 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3462 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3466 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3468 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3470 */	NdrFcShort( 0xffde ),	/* Offset= -34 (3436) */
/* 3472 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3474 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3486) */
/* 3482 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3484 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3486 */	
			0x13, 0x0,	/* FC_OP */
/* 3488 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3452) */
/* 3490 */	
			0x11, 0x0,	/* FC_RP */
/* 3492 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3494) */
/* 3494 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3498 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3502 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3504 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3506 */	
			0x11, 0x0,	/* FC_RP */
/* 3508 */	NdrFcShort( 0xf28e ),	/* Offset= -3442 (66) */
/* 3510 */	
			0x12, 0x0,	/* FC_UP */
/* 3512 */	NdrFcShort( 0xffee ),	/* Offset= -18 (3494) */
/* 3514 */	
			0x11, 0x0,	/* FC_RP */
/* 3516 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3518) */
/* 3518 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3526 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3528 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3532 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3534 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3536 */	NdrFcShort( 0xf298 ),	/* Offset= -3432 (104) */
/* 3538 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3540 */	
			0x11, 0x0,	/* FC_RP */
/* 3542 */	NdrFcShort( 0xf2d6 ),	/* Offset= -3370 (172) */
/* 3544 */	
			0x11, 0x0,	/* FC_RP */
/* 3546 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3548) */
/* 3548 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3556 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3558 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3562 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3564 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3566 */	NdrFcShort( 0xf382 ),	/* Offset= -3198 (368) */
/* 3568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3570 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3572 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3574 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3576 */	NdrFcLong( 0x1dcb3a0b ),	/* 499857931 */
/* 3580 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 3582 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 3584 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 3586 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 3588 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 3590 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 3592 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 3594 */	NdrFcShort( 0xf366 ),	/* Offset= -3226 (368) */
/* 3596 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3598 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3600) */
/* 3600 */	
			0x13, 0x0,	/* FC_OP */
/* 3602 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3604) */
/* 3604 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 3606 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3610 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3612 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3616) */
/* 3616 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3618 */	NdrFcLong( 0x1dcb3a11 ),	/* 499857937 */
/* 3622 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 3624 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 3626 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 3628 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 3630 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 3632 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 3634 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3636 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3638) */
/* 3638 */	
			0x13, 0x0,	/* FC_OP */
/* 3640 */	NdrFcShort( 0x14 ),	/* Offset= 20 (3660) */
/* 3642 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3644 */	NdrFcLong( 0x1dcb3a12 ),	/* 499857938 */
/* 3648 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 3650 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 3652 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 3654 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 3656 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 3658 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 3660 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3668 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3670 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3674 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3676 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3678 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3642) */
/* 3680 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3682 */	
			0x11, 0x0,	/* FC_RP */
/* 3684 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3686) */
/* 3686 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3694 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3696 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3700 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3702 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3704 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (3642) */
/* 3706 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3708 */	
			0x11, 0x0,	/* FC_RP */
/* 3710 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3712) */
/* 3712 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 3714 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3718 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3720 */	
			0x11, 0x0,	/* FC_RP */
/* 3722 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3724) */
/* 3724 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 3726 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3730 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3732 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3734 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3736) */
/* 3736 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3738 */	NdrFcLong( 0x1dcb3a15 ),	/* 499857941 */
/* 3742 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 3744 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 3746 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 3748 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 3750 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 3752 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 3754 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3756 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3758) */
/* 3758 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3760 */	NdrFcLong( 0x1dcb3a16 ),	/* 499857942 */
/* 3764 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 3766 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 3768 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 3770 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 3772 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 3774 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 3776 */	
			0x11, 0x0,	/* FC_RP */
/* 3778 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3780) */
/* 3780 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 3782 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3784 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3786 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3788 */	
			0x11, 0x0,	/* FC_RP */
/* 3790 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3792) */
/* 3792 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3800 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3802 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3804 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3806 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3808 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3810 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (3758) */
/* 3812 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3814 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3816 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3818) */
/* 3818 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3820 */	NdrFcLong( 0x1dcb3a17 ),	/* 499857943 */
/* 3824 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 3826 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 3828 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 3830 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 3832 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 3834 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 3836 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3838 */	NdrFcShort( 0xf1ae ),	/* Offset= -3666 (172) */
/* 3840 */	
			0x11, 0x0,	/* FC_RP */
/* 3842 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3844) */
/* 3844 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 3846 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3850 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3852 */	
			0x11, 0x0,	/* FC_RP */
/* 3854 */	NdrFcShort( 0xf292 ),	/* Offset= -3438 (416) */
/* 3856 */	
			0x11, 0x0,	/* FC_RP */
/* 3858 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3860) */
/* 3860 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3864 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3868 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3870 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3874 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3876 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3878 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (3758) */
/* 3880 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3882 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3884 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3886) */
/* 3886 */	
			0x13, 0x0,	/* FC_OP */
/* 3888 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3890) */
/* 3890 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3894 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3898 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3900 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3904 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3906 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3908 */	NdrFcShort( 0xff6a ),	/* Offset= -150 (3758) */
/* 3910 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3912 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 3914 */	NdrFcShort( 0xfef0 ),	/* Offset= -272 (3642) */
/* 3916 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3918 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3920) */
/* 3920 */	
			0x13, 0x0,	/* FC_OP */
/* 3922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3924) */
/* 3924 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 3926 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3930 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3932 */	
			0x11, 0x0,	/* FC_RP */
/* 3934 */	NdrFcShort( 0xf0ac ),	/* Offset= -3924 (10) */
/* 3936 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3938 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3940) */
/* 3940 */	
			0x13, 0x0,	/* FC_OP */
/* 3942 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3944) */
/* 3944 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3948 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3950 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3952 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3954 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3956 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3958 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3960) */
/* 3960 */	
			0x13, 0x0,	/* FC_OP */
/* 3962 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3964) */
/* 3964 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3966 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3968 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3972 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3974 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };


static void __RPC_USER IWMDMDevice3_PROPVARIANTExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    PROPVARIANT *pS	=	( PROPVARIANT * )(pStubMsg->StackTop - 8);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( ( unsigned short  )pS->vt );
}

static void __RPC_USER IWMDMDevice3_CLIPDATAExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    CLIPDATA *pS	=	( CLIPDATA * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( pS->cbSize - 4 );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IWMDMDevice3_PROPVARIANTExprEval_0000
    ,IWMDMDevice3_CLIPDATAExprEval_0001
    };



/* Standard interface: __MIDL_itf_MsHDSP_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWMDMMetaData, ver. 0.0,
   GUID={0xEC3B0663,0x0951,0x460a,{0x9A,0x80,0x0D,0xCE,0xED,0x3C,0x04,0x3C}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMMetaData_FormatStringOffsetTable[] =
    {
    0,
    54,
    108,
    168
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMMetaData_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMMetaData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMMetaData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMMetaData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWMDMMetaDataProxyVtbl = 
{
    &IWMDMMetaData_ProxyInfo,
    &IID_IWMDMMetaData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMMetaData::AddItem */ ,
    (void *) (INT_PTR) -1 /* IWMDMMetaData::QueryByName */ ,
    (void *) (INT_PTR) -1 /* IWMDMMetaData::QueryByIndex */ ,
    (void *) (INT_PTR) -1 /* IWMDMMetaData::GetItemCount */
};

const CInterfaceStubVtbl _IWMDMMetaDataStubVtbl =
{
    &IID_IWMDMMetaData,
    &IWMDMMetaData_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDeviceManager, ver. 0.0,
   GUID={0x1DCB3A00,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDeviceManager_FormatStringOffsetTable[] =
    {
    204,
    240,
    276
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDeviceManager_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDeviceManager_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDeviceManager_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDeviceManager_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IWMDeviceManagerProxyVtbl = 
{
    &IWMDeviceManager_ProxyInfo,
    &IID_IWMDeviceManager,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::GetRevision */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::GetDeviceCount */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::EnumDevices */
};

const CInterfaceStubVtbl _IWMDeviceManagerStubVtbl =
{
    &IID_IWMDeviceManager,
    &IWMDeviceManager_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDeviceManager2, ver. 0.0,
   GUID={0x923E5249,0x8731,0x4c5b,{0x9B,0x1C,0xB8,0xB6,0x0B,0x6E,0x46,0xAF}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDeviceManager2_FormatStringOffsetTable[] =
    {
    204,
    240,
    276,
    312,
    354,
    390
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDeviceManager2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDeviceManager2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDeviceManager2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDeviceManager2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWMDeviceManager2ProxyVtbl = 
{
    &IWMDeviceManager2_ProxyInfo,
    &IID_IWMDeviceManager2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::GetRevision */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::GetDeviceCount */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::EnumDevices */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager2::GetDeviceFromCanonicalName */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager2::EnumDevices2 */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager2::Reinitialize */
};

const CInterfaceStubVtbl _IWMDeviceManager2StubVtbl =
{
    &IID_IWMDeviceManager2,
    &IWMDeviceManager2_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDeviceManager3, ver. 0.0,
   GUID={0xaf185c41,0x100d,0x46ed,{0xbe,0x2e,0x9c,0xe8,0xc4,0x45,0x94,0xef}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDeviceManager3_FormatStringOffsetTable[] =
    {
    204,
    240,
    276,
    312,
    354,
    390,
    420
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDeviceManager3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDeviceManager3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDeviceManager3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDeviceManager3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWMDeviceManager3ProxyVtbl = 
{
    &IWMDeviceManager3_ProxyInfo,
    &IID_IWMDeviceManager3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::GetRevision */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::GetDeviceCount */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager::EnumDevices */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager2::GetDeviceFromCanonicalName */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager2::EnumDevices2 */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager2::Reinitialize */ ,
    (void *) (INT_PTR) -1 /* IWMDeviceManager3::SetDeviceEnumPreference */
};

const CInterfaceStubVtbl _IWMDeviceManager3StubVtbl =
{
    &IID_IWMDeviceManager3,
    &IWMDeviceManager3_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorageGlobals, ver. 0.0,
   GUID={0x1DCB3A07,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorageGlobals_FormatStringOffsetTable[] =
    {
    204,
    456,
    498,
    540,
    582,
    624,
    660
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorageGlobals_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageGlobals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorageGlobals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageGlobals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWMDMStorageGlobalsProxyVtbl = 
{
    &IWMDMStorageGlobals_ProxyInfo,
    &IID_IWMDMStorageGlobals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorageGlobals::GetCapabilities */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageGlobals::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageGlobals::GetTotalSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageGlobals::GetTotalFree */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageGlobals::GetTotalBad */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageGlobals::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageGlobals::Initialize */
};

const CInterfaceStubVtbl _IWMDMStorageGlobalsStubVtbl =
{
    &IID_IWMDMStorageGlobals,
    &IWMDMStorageGlobals_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorage, ver. 0.0,
   GUID={0x1DCB3A06,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorage_FormatStringOffsetTable[] =
    {
    702,
    744,
    780,
    822,
    864,
    900,
    942,
    990,
    1026
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IWMDMStorageProxyVtbl = 
{
    &IWMDMStorage_ProxyInfo,
    &IID_IWMDMStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SendOpaqueCommand */
};

const CInterfaceStubVtbl _IWMDMStorageStubVtbl =
{
    &IID_IWMDMStorage,
    &IWMDMStorage_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorage2, ver. 0.0,
   GUID={0x1ED5A144,0x5CD5,0x4683,{0x9E,0xFF,0x72,0xCB,0xDB,0x2D,0x95,0x33}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorage2_FormatStringOffsetTable[] =
    {
    702,
    744,
    780,
    822,
    864,
    900,
    942,
    990,
    1026,
    1062,
    1104,
    1158
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorage2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorage2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IWMDMStorage2ProxyVtbl = 
{
    &IWMDMStorage2_ProxyInfo,
    &IID_IWMDMStorage2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::SetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::GetAttributes2 */
};

const CInterfaceStubVtbl _IWMDMStorage2StubVtbl =
{
    &IID_IWMDMStorage2,
    &IWMDMStorage2_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorage3, ver. 0.0,
   GUID={0x97717EEA,0x926A,0x464e,{0x96,0xA4,0x24,0x7B,0x02,0x16,0x02,0x6E}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorage3_FormatStringOffsetTable[] =
    {
    702,
    744,
    780,
    822,
    864,
    900,
    942,
    990,
    1026,
    1062,
    1104,
    1158,
    1212,
    1248,
    1284,
    1320
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorage3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorage3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IWMDMStorage3ProxyVtbl = 
{
    &IWMDMStorage3_ProxyInfo,
    &IID_IWMDMStorage3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::SetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::GetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::GetMetadata */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::SetMetadata */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::CreateEmptyMetadataObject */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::SetEnumPreference */
};

const CInterfaceStubVtbl _IWMDMStorage3StubVtbl =
{
    &IID_IWMDMStorage3,
    &IWMDMStorage3_ServerInfo,
    19,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorage4, ver. 0.0,
   GUID={0xc225bac5,0xa03a,0x40b8,{0x9a,0x23,0x91,0xcf,0x47,0x8c,0x64,0xa6}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorage4_FormatStringOffsetTable[] =
    {
    702,
    744,
    780,
    822,
    864,
    900,
    942,
    990,
    1026,
    1062,
    1104,
    1158,
    1212,
    1248,
    1284,
    1320,
    1368,
    1410,
    1452,
    1500,
    1548,
    1596
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorage4_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage4_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorage4_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorage4_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IWMDMStorage4ProxyVtbl = 
{
    &IWMDMStorage4_ProxyInfo,
    &IID_IWMDMStorage4,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::SetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage2::GetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::GetMetadata */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::SetMetadata */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::CreateEmptyMetadataObject */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage3::SetEnumPreference */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage4::SetReferences */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage4::GetReferences */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage4::GetRightsWithProgress */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage4::GetSpecifiedMetadata */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage4::FindStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorage4::GetParent */
};

const CInterfaceStubVtbl _IWMDMStorage4StubVtbl =
{
    &IID_IWMDMStorage4,
    &IWMDMStorage4_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMOperation, ver. 0.0,
   GUID={0x1DCB3A0B,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMOperation_FormatStringOffsetTable[] =
    {
    1632,
    1662,
    1692,
    1734,
    1776,
    1818,
    1860,
    1902,
    1944,
    1992
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMOperation_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMOperation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMOperation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMOperation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IWMDMOperationProxyVtbl = 
{
    &IWMDMOperation_ProxyInfo,
    &IID_IWMDMOperation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::BeginRead */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::BeginWrite */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectName */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectName */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectTotalSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectTotalSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::TransferObjectData */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::End */
};

const CInterfaceStubVtbl _IWMDMOperationStubVtbl =
{
    &IID_IWMDMOperation,
    &IWMDMOperation_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMOperation2, ver. 0.0,
   GUID={0x33445B48,0x7DF7,0x425c,{0xAD,0x8F,0x0F,0xC6,0xD8,0x2F,0x9F,0x75}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMOperation2_FormatStringOffsetTable[] =
    {
    1632,
    1662,
    1692,
    1734,
    1776,
    1818,
    1860,
    1902,
    1944,
    1992,
    1104,
    1158
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMOperation2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMOperation2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMOperation2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMOperation2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) _IWMDMOperation2ProxyVtbl = 
{
    &IWMDMOperation2_ProxyInfo,
    &IID_IWMDMOperation2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::BeginRead */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::BeginWrite */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectName */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectName */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectTotalSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectTotalSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::TransferObjectData */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::End */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation2::SetObjectAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation2::GetObjectAttributes2 */
};

const CInterfaceStubVtbl _IWMDMOperation2StubVtbl =
{
    &IID_IWMDMOperation2,
    &IWMDMOperation2_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMOperation3, ver. 0.0,
   GUID={0xd1f9b46a,0x9ca8,0x46d8,{0x9d,0x0f,0x1e,0xc9,0xba,0xe5,0x49,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMOperation3_FormatStringOffsetTable[] =
    {
    1632,
    1662,
    1692,
    1734,
    1776,
    1818,
    1860,
    1902,
    1944,
    1992,
    2034
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMOperation3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMOperation3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMOperation3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMOperation3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IWMDMOperation3ProxyVtbl = 
{
    &IWMDMOperation3_ProxyInfo,
    &IID_IWMDMOperation3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::BeginRead */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::BeginWrite */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectName */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectName */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectAttributes */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::GetObjectTotalSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::SetObjectTotalSize */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::TransferObjectData */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation::End */ ,
    (void *) (INT_PTR) -1 /* IWMDMOperation3::TransferObjectDataOnClearChannel */
};

const CInterfaceStubVtbl _IWMDMOperation3StubVtbl =
{
    &IID_IWMDMOperation3,
    &IWMDMOperation3_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMProgress, ver. 0.0,
   GUID={0x1DCB3A0C,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMProgress_FormatStringOffsetTable[] =
    {
    2076,
    2112,
    2148
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMProgress_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgress_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMProgress_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgress_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IWMDMProgressProxyVtbl = 
{
    &IWMDMProgress_ProxyInfo,
    &IID_IWMDMProgress,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::Begin */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::Progress */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::End */
};

const CInterfaceStubVtbl _IWMDMProgressStubVtbl =
{
    &IID_IWMDMProgress,
    &IWMDMProgress_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMProgress2, ver. 0.0,
   GUID={0x3A43F550,0xB383,0x4e92,{0xB0,0x4A,0xE6,0xBB,0xC6,0x60,0xFE,0xFC}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMProgress2_FormatStringOffsetTable[] =
    {
    2076,
    2112,
    2148,
    2178
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMProgress2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgress2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMProgress2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgress2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWMDMProgress2ProxyVtbl = 
{
    &IWMDMProgress2_ProxyInfo,
    &IID_IWMDMProgress2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::Begin */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::Progress */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::End */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress2::End2 */
};

const CInterfaceStubVtbl _IWMDMProgress2StubVtbl =
{
    &IID_IWMDMProgress2,
    &IWMDMProgress2_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMProgress3, ver. 0.0,
   GUID={0x21DE01CB,0x3BB4,0x4929,{0xB2,0x1A,0x17,0xAF,0x3F,0x80,0xF6,0x58}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMProgress3_FormatStringOffsetTable[] =
    {
    2076,
    2112,
    2148,
    2178,
    2214,
    2262,
    2310
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMProgress3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgress3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMProgress3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgress3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWMDMProgress3ProxyVtbl = 
{
    &IWMDMProgress3_ProxyInfo,
    &IID_IWMDMProgress3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::Begin */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::Progress */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress::End */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress2::End2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress3::Begin3 */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress3::Progress3 */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgress3::End3 */
};

const CInterfaceStubVtbl _IWMDMProgress3StubVtbl =
{
    &IID_IWMDMProgress3,
    &IWMDMProgress3_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMDevice, ver. 0.0,
   GUID={0x1DCB3A02,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMDevice_FormatStringOffsetTable[] =
    {
    2358,
    2400,
    2442,
    168,
    2478,
    900,
    2520,
    2556,
    2592,
    2628,
    2682
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMDevice_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMDevice_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IWMDMDeviceProxyVtbl = 
{
    &IWMDMDevice_ProxyInfo,
    &IID_IWMDMDevice,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetName */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetType */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetPowerSource */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetDeviceIcon */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetFormatSupport */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::SendOpaqueCommand */
};

const CInterfaceStubVtbl _IWMDMDeviceStubVtbl =
{
    &IID_IWMDMDevice,
    &IWMDMDevice_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMDevice2, ver. 0.0,
   GUID={0xE34F3D37,0x9D67,0x4fc1,{0x92,0x52,0x62,0xD2,0x8B,0x2F,0x8B,0x55}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMDevice2_FormatStringOffsetTable[] =
    {
    2358,
    2400,
    2442,
    168,
    2478,
    900,
    2520,
    2556,
    2592,
    2628,
    2682,
    2718,
    2760,
    2832,
    2880
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMDevice2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMDevice2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMDevice2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMDevice2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IWMDMDevice2ProxyVtbl = 
{
    &IWMDMDevice2_ProxyInfo,
    &IID_IWMDMDevice2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetName */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetType */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetPowerSource */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetDeviceIcon */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetFormatSupport */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetFormatSupport2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetSpecifyPropertyPages */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetCanonicalName */
};

const CInterfaceStubVtbl _IWMDMDevice2StubVtbl =
{
    &IID_IWMDMDevice2,
    &IWMDMDevice2_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMDevice3, ver. 0.0,
   GUID={0x6c03e4fe,0x05db,0x4dda,{0x9e,0x3c,0x06,0x23,0x3a,0x6d,0x5d,0x65}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMDevice3_FormatStringOffsetTable[] =
    {
    2358,
    2400,
    2442,
    168,
    2478,
    900,
    2520,
    2556,
    2592,
    2628,
    2682,
    2718,
    2760,
    2832,
    2880,
    2922,
    2964,
    3006,
    3048,
    3108
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMDevice3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMDevice3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMDevice3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMDevice3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IWMDMDevice3ProxyVtbl = 
{
    &IWMDMDevice3_ProxyInfo,
    &IID_IWMDMDevice3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetName */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetManufacturer */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetType */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetPowerSource */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetDeviceIcon */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::GetFormatSupport */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetFormatSupport2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetSpecifyPropertyPages */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice2::GetCanonicalName */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice3::GetProperty */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice3::SetProperty */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice3::GetFormatCapability */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice3::DeviceIoControl */ ,
    (void *) (INT_PTR) -1 /* IWMDMDevice3::FindStorage */
};

const CInterfaceStubVtbl _IWMDMDevice3StubVtbl =
{
    &IID_IWMDMDevice3,
    &IWMDMDevice3_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMDeviceSession, ver. 0.0,
   GUID={0x82af0a65,0x9d96,0x412c,{0x83,0xe5,0x3c,0x43,0xe4,0xb0,0x6c,0xc7}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMDeviceSession_FormatStringOffsetTable[] =
    {
    3156,
    3204
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMDeviceSession_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMDeviceSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMDeviceSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMDeviceSession_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IWMDMDeviceSessionProxyVtbl = 
{
    &IWMDMDeviceSession_ProxyInfo,
    &IID_IWMDMDeviceSession,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceSession::BeginSession */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceSession::EndSession */
};

const CInterfaceStubVtbl _IWMDMDeviceSessionStubVtbl =
{
    &IID_IWMDMDeviceSession,
    &IWMDMDeviceSession_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMEnumDevice, ver. 0.0,
   GUID={0x1DCB3A01,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMEnumDevice_FormatStringOffsetTable[] =
    {
    3252,
    3300,
    2148,
    3342
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMEnumDevice_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMEnumDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMEnumDevice_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMEnumDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWMDMEnumDeviceProxyVtbl = 
{
    &IWMDMEnumDevice_ProxyInfo,
    &IID_IWMDMEnumDevice,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMEnumDevice::Next */ ,
    (void *) (INT_PTR) -1 /* IWMDMEnumDevice::Skip */ ,
    (void *) (INT_PTR) -1 /* IWMDMEnumDevice::Reset */ ,
    (void *) (INT_PTR) -1 /* IWMDMEnumDevice::Clone */
};

const CInterfaceStubVtbl _IWMDMEnumDeviceStubVtbl =
{
    &IID_IWMDMEnumDevice,
    &IWMDMEnumDevice_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMDeviceControl, ver. 0.0,
   GUID={0x1DCB3A04,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMDeviceControl_FormatStringOffsetTable[] =
    {
    204,
    240,
    2148,
    3378,
    3414,
    390,
    3444,
    1902
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMDeviceControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMDeviceControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMDeviceControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMDeviceControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IWMDMDeviceControlProxyVtbl = 
{
    &IWMDMDeviceControl_ProxyInfo,
    &IID_IWMDMDeviceControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::GetCapabilities */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::Play */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::Record */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::Pause */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::Resume */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::Stop */ ,
    (void *) (INT_PTR) -1 /* IWMDMDeviceControl::Seek */
};

const CInterfaceStubVtbl _IWMDMDeviceControlStubVtbl =
{
    &IID_IWMDMDeviceControl,
    &IWMDMDeviceControl_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMEnumStorage, ver. 0.0,
   GUID={0x1DCB3A05,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMEnumStorage_FormatStringOffsetTable[] =
    {
    3474,
    3300,
    2148,
    3522
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMEnumStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMEnumStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMEnumStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMEnumStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IWMDMEnumStorageProxyVtbl = 
{
    &IWMDMEnumStorage_ProxyInfo,
    &IID_IWMDMEnumStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMEnumStorage::Next */ ,
    (void *) (INT_PTR) -1 /* IWMDMEnumStorage::Skip */ ,
    (void *) (INT_PTR) -1 /* IWMDMEnumStorage::Reset */ ,
    (void *) (INT_PTR) -1 /* IWMDMEnumStorage::Clone */
};

const CInterfaceStubVtbl _IWMDMEnumStorageStubVtbl =
{
    &IID_IWMDMEnumStorage,
    &IWMDMEnumStorage_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorageControl, ver. 0.0,
   GUID={0x1DCB3A08,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorageControl_FormatStringOffsetTable[] =
    {
    3558,
    3618,
    3660,
    3708,
    3762
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorageControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorageControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWMDMStorageControlProxyVtbl = 
{
    &IWMDMStorageControl_ProxyInfo,
    &IID_IWMDMStorageControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Insert */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Delete */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Rename */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Read */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Move */
};

const CInterfaceStubVtbl _IWMDMStorageControlStubVtbl =
{
    &IID_IWMDMStorageControl,
    &IWMDMStorageControl_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorageControl2, ver. 0.0,
   GUID={0x972C2E88,0xBD6C,0x4125,{0x8E,0x09,0x84,0xF8,0x37,0xE6,0x37,0xB6}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorageControl2_FormatStringOffsetTable[] =
    {
    3558,
    3618,
    3660,
    3708,
    3762,
    3810
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorageControl2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageControl2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorageControl2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageControl2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IWMDMStorageControl2ProxyVtbl = 
{
    &IWMDMStorageControl2_ProxyInfo,
    &IID_IWMDMStorageControl2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Insert */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Delete */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Rename */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Read */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Move */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl2::Insert2 */
};

const CInterfaceStubVtbl _IWMDMStorageControl2StubVtbl =
{
    &IID_IWMDMStorageControl2,
    &IWMDMStorageControl2_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMStorageControl3, ver. 0.0,
   GUID={0xB3266365,0xD4F3,0x4696,{0x8D,0x53,0xBD,0x27,0xEC,0x60,0x99,0x3A}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMStorageControl3_FormatStringOffsetTable[] =
    {
    3558,
    3618,
    3660,
    3708,
    3762,
    3810,
    3882
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMStorageControl3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageControl3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMStorageControl3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMStorageControl3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWMDMStorageControl3ProxyVtbl = 
{
    &IWMDMStorageControl3_ProxyInfo,
    &IID_IWMDMStorageControl3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Insert */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Delete */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Rename */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Read */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl::Move */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl2::Insert2 */ ,
    (void *) (INT_PTR) -1 /* IWMDMStorageControl3::Insert3 */
};

const CInterfaceStubVtbl _IWMDMStorageControl3StubVtbl =
{
    &IID_IWMDMStorageControl3,
    &IWMDMStorageControl3_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMObjectInfo, ver. 0.0,
   GUID={0x1DCB3A09,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMObjectInfo_FormatStringOffsetTable[] =
    {
    204,
    2112,
    2442,
    2178,
    3966,
    624,
    2520
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMObjectInfo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMObjectInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMObjectInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMObjectInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWMDMObjectInfoProxyVtbl = 
{
    &IWMDMObjectInfo_ProxyInfo,
    &IID_IWMDMObjectInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMObjectInfo::GetPlayLength */ ,
    (void *) (INT_PTR) -1 /* IWMDMObjectInfo::SetPlayLength */ ,
    (void *) (INT_PTR) -1 /* IWMDMObjectInfo::GetPlayOffset */ ,
    (void *) (INT_PTR) -1 /* IWMDMObjectInfo::SetPlayOffset */ ,
    (void *) (INT_PTR) -1 /* IWMDMObjectInfo::GetTotalLength */ ,
    (void *) (INT_PTR) -1 /* IWMDMObjectInfo::GetLastPlayPosition */ ,
    (void *) (INT_PTR) -1 /* IWMDMObjectInfo::GetLongestPlayPosition */
};

const CInterfaceStubVtbl _IWMDMObjectInfoStubVtbl =
{
    &IID_IWMDMObjectInfo,
    &IWMDMObjectInfo_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMRevoked, ver. 0.0,
   GUID={0xEBECCEDB,0x88EE,0x4e55,{0xB6,0xA4,0x8D,0x9F,0x07,0xD6,0x96,0xAA}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMRevoked_FormatStringOffsetTable[] =
    {
    4002
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMRevoked_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMRevoked_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMRevoked_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMRevoked_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IWMDMRevokedProxyVtbl = 
{
    &IWMDMRevoked_ProxyInfo,
    &IID_IWMDMRevoked,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMRevoked::GetRevocationURL */
};

const CInterfaceStubVtbl _IWMDMRevokedStubVtbl =
{
    &IID_IWMDMRevoked,
    &IWMDMRevoked_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMNotification, ver. 0.0,
   GUID={0x3F5E95C0,0x0F43,0x4ed4,{0x93,0xD2,0xC8,0x9A,0x45,0xD5,0x9B,0x81}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMNotification_FormatStringOffsetTable[] =
    {
    4050
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMNotification_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMNotification_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMNotification_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMNotification_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IWMDMNotificationProxyVtbl = 
{
    &IWMDMNotification_ProxyInfo,
    &IID_IWMDMNotification,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMNotification::WMDMMessage */
};

const CInterfaceStubVtbl _IWMDMNotificationStubVtbl =
{
    &IID_IWMDMNotification,
    &IWMDMNotification_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_MsHDSP_0300, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IMDServiceProvider, ver. 0.0,
   GUID={0x1DCB3A10,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDServiceProvider_FormatStringOffsetTable[] =
    {
    204,
    4092
    };

static const MIDL_STUBLESS_PROXY_INFO IMDServiceProvider_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDServiceProvider_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDServiceProvider_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDServiceProvider_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IMDServiceProviderProxyVtbl = 
{
    &IMDServiceProvider_ProxyInfo,
    &IID_IMDServiceProvider,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider::GetDeviceCount */ ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider::EnumDevices */
};

const CInterfaceStubVtbl _IMDServiceProviderStubVtbl =
{
    &IID_IMDServiceProvider,
    &IMDServiceProvider_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDServiceProvider2, ver. 0.0,
   GUID={0xB2FA24B7,0xCDA3,0x4694,{0x98,0x62,0x41,0x3A,0xE1,0xA3,0x48,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short IMDServiceProvider2_FormatStringOffsetTable[] =
    {
    204,
    4092,
    4128
    };

static const MIDL_STUBLESS_PROXY_INFO IMDServiceProvider2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDServiceProvider2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDServiceProvider2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDServiceProvider2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IMDServiceProvider2ProxyVtbl = 
{
    &IMDServiceProvider2_ProxyInfo,
    &IID_IMDServiceProvider2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider::GetDeviceCount */ ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider::EnumDevices */ ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider2::CreateDevice */
};

const CInterfaceStubVtbl _IMDServiceProvider2StubVtbl =
{
    &IID_IMDServiceProvider2,
    &IMDServiceProvider2_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDServiceProvider3, ver. 0.0,
   GUID={0x4ed13ef3,0xa971,0x4d19,{0x9f,0x51,0x0e,0x18,0x26,0xb2,0xda,0x57}} */

#pragma code_seg(".orpc")
static const unsigned short IMDServiceProvider3_FormatStringOffsetTable[] =
    {
    204,
    4092,
    4128,
    2178
    };

static const MIDL_STUBLESS_PROXY_INFO IMDServiceProvider3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDServiceProvider3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDServiceProvider3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDServiceProvider3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IMDServiceProvider3ProxyVtbl = 
{
    &IMDServiceProvider3_ProxyInfo,
    &IID_IMDServiceProvider3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider::GetDeviceCount */ ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider::EnumDevices */ ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider2::CreateDevice */ ,
    (void *) (INT_PTR) -1 /* IMDServiceProvider3::SetDeviceEnumPreference */
};

const CInterfaceStubVtbl _IMDServiceProvider3StubVtbl =
{
    &IID_IMDServiceProvider3,
    &IMDServiceProvider3_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPEnumDevice, ver. 0.0,
   GUID={0x1DCB3A11,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPEnumDevice_FormatStringOffsetTable[] =
    {
    4176,
    3300,
    2148,
    4224
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPEnumDevice_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPEnumDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPEnumDevice_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPEnumDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IMDSPEnumDeviceProxyVtbl = 
{
    &IMDSPEnumDevice_ProxyInfo,
    &IID_IMDSPEnumDevice,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPEnumDevice::Next */ ,
    (void *) (INT_PTR) -1 /* IMDSPEnumDevice::Skip */ ,
    (void *) (INT_PTR) -1 /* IMDSPEnumDevice::Reset */ ,
    (void *) (INT_PTR) -1 /* IMDSPEnumDevice::Clone */
};

const CInterfaceStubVtbl _IMDSPEnumDeviceStubVtbl =
{
    &IID_IMDSPEnumDevice,
    &IMDSPEnumDevice_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPDevice, ver. 0.0,
   GUID={0x1DCB3A12,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPDevice_FormatStringOffsetTable[] =
    {
    4260,
    4302,
    2442,
    168,
    2478,
    900,
    2520,
    2556,
    4344,
    2628,
    2682
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPDevice_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPDevice_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IMDSPDeviceProxyVtbl = 
{
    &IMDSPDevice_ProxyInfo,
    &IID_IMDSPDevice,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetName */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetManufacturer */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetType */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetPowerSource */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetDeviceIcon */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetFormatSupport */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::SendOpaqueCommand */
};

const CInterfaceStubVtbl _IMDSPDeviceStubVtbl =
{
    &IID_IMDSPDevice,
    &IMDSPDevice_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPDevice2, ver. 0.0,
   GUID={0x420D16AD,0xC97D,0x4e00,{0x82,0xAA,0x00,0xE9,0xF4,0x33,0x5D,0xDD}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPDevice2_FormatStringOffsetTable[] =
    {
    4260,
    4302,
    2442,
    168,
    2478,
    900,
    2520,
    2556,
    4344,
    2628,
    2682,
    4380,
    2760,
    2832,
    4422
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPDevice2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPDevice2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPDevice2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPDevice2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IMDSPDevice2ProxyVtbl = 
{
    &IMDSPDevice2_ProxyInfo,
    &IID_IMDSPDevice2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetName */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetManufacturer */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetType */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetPowerSource */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetDeviceIcon */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetFormatSupport */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetFormatSupport2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetSpecifyPropertyPages */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetCanonicalName */
};

const CInterfaceStubVtbl _IMDSPDevice2StubVtbl =
{
    &IID_IMDSPDevice2,
    &IMDSPDevice2_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPDevice3, ver. 0.0,
   GUID={0x1a839845,0xfc55,0x487c,{0x97,0x6f,0xee,0x38,0xac,0x0e,0x8c,0x4e}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPDevice3_FormatStringOffsetTable[] =
    {
    4260,
    4302,
    2442,
    168,
    2478,
    900,
    2520,
    2556,
    4344,
    2628,
    2682,
    4380,
    2760,
    2832,
    4422,
    2922,
    2964,
    3006,
    3048,
    4464
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPDevice3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPDevice3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPDevice3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPDevice3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IMDSPDevice3ProxyVtbl = 
{
    &IMDSPDevice3_ProxyInfo,
    &IID_IMDSPDevice3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetName */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetManufacturer */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetVersion */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetType */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetPowerSource */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetDeviceIcon */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::GetFormatSupport */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetFormatSupport2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetSpecifyPropertyPages */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice2::GetCanonicalName */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice3::GetProperty */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice3::SetProperty */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice3::GetFormatCapability */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice3::DeviceIoControl */ ,
    (void *) (INT_PTR) -1 /* IMDSPDevice3::FindStorage */
};

const CInterfaceStubVtbl _IMDSPDevice3StubVtbl =
{
    &IID_IMDSPDevice3,
    &IMDSPDevice3_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPDeviceControl, ver. 0.0,
   GUID={0x1DCB3A14,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPDeviceControl_FormatStringOffsetTable[] =
    {
    204,
    240,
    2148,
    3378,
    3414,
    390,
    3444,
    1902
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPDeviceControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPDeviceControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPDeviceControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPDeviceControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IMDSPDeviceControlProxyVtbl = 
{
    &IMDSPDeviceControl_ProxyInfo,
    &IID_IMDSPDeviceControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::GetDCStatus */ ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::GetCapabilities */ ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::Play */ ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::Record */ ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::Pause */ ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::Resume */ ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::Stop */ ,
    (void *) (INT_PTR) -1 /* IMDSPDeviceControl::Seek */
};

const CInterfaceStubVtbl _IMDSPDeviceControlStubVtbl =
{
    &IID_IMDSPDeviceControl,
    &IMDSPDeviceControl_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPEnumStorage, ver. 0.0,
   GUID={0x1DCB3A15,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPEnumStorage_FormatStringOffsetTable[] =
    {
    4512,
    3300,
    2148,
    4560
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPEnumStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPEnumStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPEnumStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPEnumStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IMDSPEnumStorageProxyVtbl = 
{
    &IMDSPEnumStorage_ProxyInfo,
    &IID_IMDSPEnumStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPEnumStorage::Next */ ,
    (void *) (INT_PTR) -1 /* IMDSPEnumStorage::Skip */ ,
    (void *) (INT_PTR) -1 /* IMDSPEnumStorage::Reset */ ,
    (void *) (INT_PTR) -1 /* IMDSPEnumStorage::Clone */
};

const CInterfaceStubVtbl _IMDSPEnumStorageStubVtbl =
{
    &IID_IMDSPEnumStorage,
    &IMDSPEnumStorage_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPStorage, ver. 0.0,
   GUID={0x1DCB3A16,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPStorage_FormatStringOffsetTable[] =
    {
    4596,
    4638,
    4674,
    4716,
    864,
    900,
    942,
    4758,
    4344,
    4812
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IMDSPStorageProxyVtbl = 
{
    &IMDSPStorage_ProxyInfo,
    &IID_IMDSPStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::CreateStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SendOpaqueCommand */
};

const CInterfaceStubVtbl _IMDSPStorageStubVtbl =
{
    &IID_IMDSPStorage,
    &IMDSPStorage_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPStorage2, ver. 0.0,
   GUID={0x0A5E07A5,0x6454,0x4451,{0x9C,0x36,0x1C,0x6A,0xE7,0xE2,0xB1,0xD6}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPStorage2_FormatStringOffsetTable[] =
    {
    4596,
    4638,
    4674,
    4716,
    864,
    900,
    942,
    4758,
    4344,
    4812,
    4848,
    4890,
    4962,
    5016
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPStorage2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPStorage2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IMDSPStorage2ProxyVtbl = 
{
    &IMDSPStorage2_ProxyInfo,
    &IID_IMDSPStorage2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::CreateStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::CreateStorage2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::SetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::GetAttributes2 */
};

const CInterfaceStubVtbl _IMDSPStorage2StubVtbl =
{
    &IID_IMDSPStorage2,
    &IMDSPStorage2_ServerInfo,
    17,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPStorage3, ver. 0.0,
   GUID={0x6C669867,0x97ED,0x4a67,{0x97,0x06,0x1C,0x55,0x29,0xD2,0xA4,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPStorage3_FormatStringOffsetTable[] =
    {
    4596,
    4638,
    4674,
    4716,
    864,
    900,
    942,
    4758,
    4344,
    4812,
    4848,
    4890,
    4962,
    5016,
    5070,
    5106
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPStorage3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPStorage3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IMDSPStorage3ProxyVtbl = 
{
    &IMDSPStorage3_ProxyInfo,
    &IID_IMDSPStorage3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::CreateStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::CreateStorage2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::SetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::GetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage3::GetMetadata */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage3::SetMetadata */
};

const CInterfaceStubVtbl _IMDSPStorage3StubVtbl =
{
    &IID_IMDSPStorage3,
    &IMDSPStorage3_ServerInfo,
    19,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPStorage4, ver. 0.0,
   GUID={0x3133b2c4,0x515c,0x481b,{0xb1,0xce,0x39,0x32,0x7e,0xcb,0x4f,0x74}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPStorage4_FormatStringOffsetTable[] =
    {
    4596,
    4638,
    4674,
    4716,
    864,
    900,
    942,
    4758,
    4344,
    4812,
    4848,
    4890,
    4962,
    5016,
    5070,
    5106,
    5142,
    5184,
    5226,
    5286,
    5334,
    5382
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPStorage4_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage4_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPStorage4_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorage4_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IMDSPStorage4ProxyVtbl = 
{
    &IMDSPStorage4_ProxyInfo,
    &IID_IMDSPStorage4,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetStorageGlobals */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetAttributes */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetName */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetDate */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetSize */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::GetRights */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::CreateStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::EnumStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage::SendOpaqueCommand */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::GetStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::CreateStorage2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::SetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage2::GetAttributes2 */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage3::GetMetadata */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage3::SetMetadata */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage4::SetReferences */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage4::GetReferences */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage4::CreateStorageWithMetadata */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage4::GetSpecifiedMetadata */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage4::FindStorage */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorage4::GetParent */
};

const CInterfaceStubVtbl _IMDSPStorage4StubVtbl =
{
    &IID_IMDSPStorage4,
    &IMDSPStorage4_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPStorageGlobals, ver. 0.0,
   GUID={0x1DCB3A17,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPStorageGlobals_FormatStringOffsetTable[] =
    {
    204,
    456,
    498,
    540,
    582,
    624,
    660,
    5418,
    5454
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPStorageGlobals_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorageGlobals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPStorageGlobals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPStorageGlobals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IMDSPStorageGlobalsProxyVtbl = 
{
    &IMDSPStorageGlobals_ProxyInfo,
    &IID_IMDSPStorageGlobals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetCapabilities */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetSerialNumber */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetTotalSize */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetTotalFree */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetTotalBad */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetStatus */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::Initialize */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetDevice */ ,
    (void *) (INT_PTR) -1 /* IMDSPStorageGlobals::GetRootStorage */
};

const CInterfaceStubVtbl _IMDSPStorageGlobalsStubVtbl =
{
    &IID_IMDSPStorageGlobals,
    &IMDSPStorageGlobals_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPObjectInfo, ver. 0.0,
   GUID={0x1DCB3A19,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPObjectInfo_FormatStringOffsetTable[] =
    {
    204,
    2112,
    2442,
    2178,
    3966,
    624,
    2520
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPObjectInfo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPObjectInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPObjectInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPObjectInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IMDSPObjectInfoProxyVtbl = 
{
    &IMDSPObjectInfo_ProxyInfo,
    &IID_IMDSPObjectInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPObjectInfo::GetPlayLength */ ,
    (void *) (INT_PTR) -1 /* IMDSPObjectInfo::SetPlayLength */ ,
    (void *) (INT_PTR) -1 /* IMDSPObjectInfo::GetPlayOffset */ ,
    (void *) (INT_PTR) -1 /* IMDSPObjectInfo::SetPlayOffset */ ,
    (void *) (INT_PTR) -1 /* IMDSPObjectInfo::GetTotalLength */ ,
    (void *) (INT_PTR) -1 /* IMDSPObjectInfo::GetLastPlayPosition */ ,
    (void *) (INT_PTR) -1 /* IMDSPObjectInfo::GetLongestPlayPosition */
};

const CInterfaceStubVtbl _IMDSPObjectInfoStubVtbl =
{
    &IID_IMDSPObjectInfo,
    &IMDSPObjectInfo_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPObject, ver. 0.0,
   GUID={0x1DCB3A18,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPObject_FormatStringOffsetTable[] =
    {
    2076,
    5490,
    5538,
    5586,
    5628,
    5670,
    5712,
    5760
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IMDSPObjectProxyVtbl = 
{
    &IMDSPObject_ProxyInfo,
    &IID_IMDSPObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Open */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Read */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Write */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Delete */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Seek */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Rename */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Move */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Close */
};

const CInterfaceStubVtbl _IMDSPObjectStubVtbl =
{
    &IID_IMDSPObject,
    &IMDSPObject_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPObject2, ver. 0.0,
   GUID={0x3f34cd3e,0x5907,0x4341,{0x9a,0xf9,0x97,0xf4,0x18,0x7c,0x3a,0xa5}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPObject2_FormatStringOffsetTable[] =
    {
    2076,
    5490,
    5538,
    5586,
    5628,
    5670,
    5712,
    5760,
    5790,
    5832
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPObject2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPObject2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPObject2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPObject2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IMDSPObject2ProxyVtbl = 
{
    &IMDSPObject2_ProxyInfo,
    &IID_IMDSPObject2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Open */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Read */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Write */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Delete */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Seek */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Rename */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Move */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject::Close */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject2::ReadOnClearChannel */ ,
    (void *) (INT_PTR) -1 /* IMDSPObject2::WriteOnClearChannel */
};

const CInterfaceStubVtbl _IMDSPObject2StubVtbl =
{
    &IID_IMDSPObject2,
    &IMDSPObject2_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPDirectTransfer, ver. 0.0,
   GUID={0xc2fe57a8,0x9304,0x478c,{0x9e,0xe4,0x47,0xe3,0x97,0xb9,0x12,0xd7}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPDirectTransfer_FormatStringOffsetTable[] =
    {
    5874
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPDirectTransfer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPDirectTransfer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPDirectTransfer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPDirectTransfer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IMDSPDirectTransferProxyVtbl = 
{
    &IMDSPDirectTransfer_ProxyInfo,
    &IID_IMDSPDirectTransfer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPDirectTransfer::TransferToDevice */
};

const CInterfaceStubVtbl _IMDSPDirectTransferStubVtbl =
{
    &IID_IMDSPDirectTransfer,
    &IMDSPDirectTransfer_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMDSPRevoked, ver. 0.0,
   GUID={0xA4E8F2D4,0x3F31,0x464d,{0xB5,0x3D,0x4F,0xC3,0x35,0x99,0x81,0x84}} */

#pragma code_seg(".orpc")
static const unsigned short IMDSPRevoked_FormatStringOffsetTable[] =
    {
    5946
    };

static const MIDL_STUBLESS_PROXY_INFO IMDSPRevoked_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMDSPRevoked_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMDSPRevoked_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMDSPRevoked_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IMDSPRevokedProxyVtbl = 
{
    &IMDSPRevoked_ProxyInfo,
    &IID_IMDSPRevoked,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMDSPRevoked::GetRevocationURL */
};

const CInterfaceStubVtbl _IMDSPRevokedStubVtbl =
{
    &IID_IMDSPRevoked,
    &IMDSPRevoked_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_MsHDSP_0319, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IComponentAuthenticate, ver. 0.0,
   GUID={0xA9889C00,0x6D2B,0x11d3,{0x84,0x96,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IComponentAuthenticate_FormatStringOffsetTable[] =
    {
    5988,
    6054
    };

static const MIDL_STUBLESS_PROXY_INFO IComponentAuthenticate_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IComponentAuthenticate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IComponentAuthenticate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IComponentAuthenticate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IComponentAuthenticateProxyVtbl = 
{
    &IComponentAuthenticate_ProxyInfo,
    &IID_IComponentAuthenticate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IComponentAuthenticate::SACAuth */ ,
    (void *) (INT_PTR) -1 /* IComponentAuthenticate::SACGetProtocols */
};

const CInterfaceStubVtbl _IComponentAuthenticateStubVtbl =
{
    &IID_IComponentAuthenticate,
    &IComponentAuthenticate_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x600016e, /* MIDL Version 6.0.366 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0   /* Reserved5 */
    };

const CInterfaceProxyVtbl * _MsHDSP_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWMDeviceManagerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IComponentAuthenticateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMEnumDeviceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDeviceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDeviceControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMEnumStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorageGlobalsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorageControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMObjectInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMOperationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMProgressProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDServiceProviderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPEnumDeviceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPDeviceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPDeviceControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPEnumStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPStorageGlobalsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPObjectInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDevice2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPObject2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDeviceManager3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorage2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPDevice3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMOperation2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDeviceManager2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMProgress2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMMetaDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDeviceSessionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorageControl3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPStorage3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMOperation3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorageControl2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPStorage2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPDirectTransferProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPDevice2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDServiceProvider2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMNotificationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPStorage4ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorage4ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMProgress3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDSPRevokedProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMRevokedProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorage3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMDServiceProvider3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDevice3ProxyVtbl,
    0
};

const CInterfaceStubVtbl * _MsHDSP_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWMDeviceManagerStubVtbl,
    ( CInterfaceStubVtbl *) &_IComponentAuthenticateStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMEnumDeviceStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDeviceStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDeviceControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMEnumStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorageGlobalsStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorageControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMObjectInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMOperationStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMProgressStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDServiceProviderStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPEnumDeviceStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPDeviceStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPDeviceControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPEnumStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPStorageGlobalsStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPObjectInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDevice2StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPObject2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDeviceManager3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorage2StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPDevice3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMOperation2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDeviceManager2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMProgress2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMMetaDataStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDeviceSessionStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorageControl3StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPStorage3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMOperation3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorageControl2StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPStorage2StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPDirectTransferStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPDevice2StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDServiceProvider2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMNotificationStubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPStorage4StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorage4StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMProgress3StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDSPRevokedStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMRevokedStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorage3StubVtbl,
    ( CInterfaceStubVtbl *) &_IMDServiceProvider3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDevice3StubVtbl,
    0
};

PCInterfaceName const _MsHDSP_InterfaceNamesList[] = 
{
    "IWMDeviceManager",
    "IComponentAuthenticate",
    "IWMDMEnumDevice",
    "IWMDMDevice",
    "IWMDMDeviceControl",
    "IWMDMEnumStorage",
    "IWMDMStorage",
    "IWMDMStorageGlobals",
    "IWMDMStorageControl",
    "IWMDMObjectInfo",
    "IWMDMOperation",
    "IWMDMProgress",
    "IMDServiceProvider",
    "IMDSPEnumDevice",
    "IMDSPDevice",
    "IMDSPDeviceControl",
    "IMDSPEnumStorage",
    "IMDSPStorage",
    "IMDSPStorageGlobals",
    "IMDSPObject",
    "IMDSPObjectInfo",
    "IWMDMDevice2",
    "IMDSPObject2",
    "IWMDeviceManager3",
    "IWMDMStorage2",
    "IMDSPDevice3",
    "IWMDMOperation2",
    "IWMDeviceManager2",
    "IWMDMProgress2",
    "IWMDMMetaData",
    "IWMDMDeviceSession",
    "IWMDMStorageControl3",
    "IMDSPStorage3",
    "IWMDMOperation3",
    "IWMDMStorageControl2",
    "IMDSPStorage2",
    "IMDSPDirectTransfer",
    "IMDSPDevice2",
    "IMDServiceProvider2",
    "IWMDMNotification",
    "IMDSPStorage4",
    "IWMDMStorage4",
    "IWMDMProgress3",
    "IMDSPRevoked",
    "IWMDMRevoked",
    "IWMDMStorage3",
    "IMDServiceProvider3",
    "IWMDMDevice3",
    0
};


#define _MsHDSP_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _MsHDSP, pIID, n)

int __stdcall _MsHDSP_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _MsHDSP, 48, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _MsHDSP, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _MsHDSP, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _MsHDSP, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _MsHDSP, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _MsHDSP, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _MsHDSP, 48, *pIndex )
    
}

const ExtendedProxyFileInfo MsHDSP_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _MsHDSP_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _MsHDSP_StubVtblList,
    (const PCInterfaceName * ) & _MsHDSP_InterfaceNamesList,
    0, // no delegation
    & _MsHDSP_IID_Lookup, 
    48,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

