

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "proghelp.h"

#define TYPE_FORMAT_STRING_SIZE   3691                              
#define PROC_FORMAT_STRING_SIZE   4243                              
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

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


extern const MIDL_SERVER_INFO IComponentAuthenticate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IComponentAuthenticate_ProxyInfo;


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


extern const MIDL_SERVER_INFO IWMDMProgressHelper_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWMDMProgressHelper_ProxyInfo;


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

	/* Procedure SACAuth */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 16 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProtocolID */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwPass */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbDataIn */

/* 36 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter dwDataInLen */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbDataOut */

/* 48 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pdwDataOutLen */

/* 54 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SACGetProtocols */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x4 ),	/* 4 */
/* 74 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x24 ),	/* 36 */
/* 80 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 82 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppdwProtocols */

/* 90 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter pdwProtocolCount */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddItem */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x3 ),	/* 3 */
/* 116 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0xe ),	/* 14 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 124 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Type */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszTagName */

/* 138 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pValue */

/* 144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter iLength */

/* 150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryByName */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 170 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x3e ),	/* 62 */
/* 176 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 178 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszTagName */

/* 186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 190 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pType */

/* 192 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 196 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pValue */

/* 198 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pcbLength */

/* 204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryByIndex */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x5 ),	/* 5 */
/* 224 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 228 */	NdrFcShort( 0x3e ),	/* 62 */
/* 230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 232 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iIndex */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppwszName */

/* 246 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter pType */

/* 252 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter ppValue */

/* 258 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter pcbLength */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */


	/* Procedure GetItemCount */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwType */


	/* Parameter iCount */

/* 300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPlayLength */


	/* Procedure GetStatus */


	/* Procedure GetCapabilities */


	/* Procedure GetRevision */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x3 ),	/* 3 */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLength */


	/* Parameter pdwStatus */


	/* Parameter pdwCapabilities */


	/* Parameter pdwRevision */

/* 336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCapabilities */


	/* Procedure GetDeviceCount */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x4 ),	/* 4 */
/* 356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwCapabilitiesMask */


	/* Parameter pdwCount */

/* 372 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDevices */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x5 ),	/* 5 */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 408 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceFromCanonicalName */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x6 ),	/* 6 */
/* 428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszCanonicalName */

/* 444 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter ppDevice */

/* 450 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDevices2 */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x7 ),	/* 7 */
/* 470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 486 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */


	/* Procedure Reinitialize */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDeviceEnumPreference */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x9 ),	/* 9 */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEnumPref */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSerialNumber */

/* 564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x4 ),	/* 4 */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	NdrFcShort( 0x18 ),	/* 24 */
/* 576 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSerialNum */

/* 588 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 592 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Parameter abMac */

/* 594 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 598 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalSize */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x5 ),	/* 5 */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x40 ),	/* 64 */
/* 620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwTotalSizeLow */

/* 630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwTotalSizeHigh */

/* 636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalFree */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x6 ),	/* 6 */
/* 656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x40 ),	/* 64 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwFreeLow */

/* 672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwFreeHigh */

/* 678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalBad */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x7 ),	/* 7 */
/* 698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x40 ),	/* 64 */
/* 704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 706 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwBadLow */

/* 714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwBadHigh */

/* 720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastPlayPosition */


	/* Procedure GetStatus */

/* 732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x24 ),	/* 36 */
/* 746 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLastPos */


	/* Parameter pdwStatus */

/* 756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x9 ),	/* 9 */
/* 776 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProgress */

/* 798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 802 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAttributes */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x3 ),	/* 3 */
/* 818 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 840 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 844 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorageGlobals */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppStorageGlobals */

/* 876 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttributes */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x5 ),	/* 5 */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 902 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */

/* 912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 918 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x6 ),	/* 6 */
/* 938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 946 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 954 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 958 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Parameter nMaxChars */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDate */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x7 ),	/* 7 */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x38 ),	/* 56 */
/* 986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDateTimeUTC */

/* 996 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1000 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPowerSource */


	/* Procedure GetSize */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwPowerSource */


	/* Parameter pdwSizeLow */

/* 1032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwPercentRemaining */


	/* Parameter pdwSizeHigh */

/* 1038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRights */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1058 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1060 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1062 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1064 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1066 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppRights */

/* 1074 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1078 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter pnRightsCount */

/* 1080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter abMac */

/* 1086 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1090 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 1092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1094 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStorage */

/* 1098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0xa ),	/* 10 */
/* 1106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1112 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEnumStorage */

/* 1122 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1126 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendOpaqueCommand */

/* 1134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0xb ),	/* 11 */
/* 1142 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1150 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCommand */

/* 1158 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1162 */	NdrFcShort( 0x17c ),	/* Type Offset=380 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorage */

/* 1170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0xc ),	/* 12 */
/* 1178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1184 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1186 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszStorageName */

/* 1194 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1198 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter ppStorage */

/* 1200 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1204 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 1206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjectAttributes2 */


	/* Procedure SetAttributes2 */

/* 1212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0xd ),	/* 13 */
/* 1220 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1222 */	NdrFcShort( 0xbc ),	/* 188 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */


	/* Parameter dwAttributes */

/* 1236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributesEx */


	/* Parameter dwAttributesEx */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */


	/* Parameter pFormat */

/* 1248 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1252 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pVideoFormat */


	/* Parameter pVideoFormat */

/* 1254 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1256 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1258 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Return value */


	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectAttributes2 */


	/* Procedure GetAttributes2 */

/* 1266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0xe ),	/* 14 */
/* 1274 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1276 */	NdrFcShort( 0xac ),	/* 172 */
/* 1278 */	NdrFcShort( 0xec ),	/* 236 */
/* 1280 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1282 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */


	/* Parameter pdwAttributes */

/* 1290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwAttributesEx */


	/* Parameter pdwAttributesEx */

/* 1296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAudioFormat */


	/* Parameter pAudioFormat */

/* 1302 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1304 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1306 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter pVideoFormat */


	/* Parameter pVideoFormat */

/* 1308 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1310 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1312 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Return value */


	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMetadata */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0xf ),	/* 15 */
/* 1328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMetadata */

/* 1344 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	NdrFcShort( 0x1e0 ),	/* Type Offset=480 */

	/* Return value */

/* 1350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMetadata */

/* 1356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1370 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1372 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMetadata */

/* 1380 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1384 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateEmptyMetadataObject */

/* 1392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1406 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1408 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppMetadata */

/* 1416 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1420 */	NdrFcShort( 0x1e0 ),	/* Type Offset=480 */

	/* Return value */

/* 1422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetEnumPreference */

/* 1428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1436 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1438 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1440 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1442 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1444 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMode */

/* 1452 */	NdrFcShort( 0x2018 ),	/* Flags:  in, out, srv alloc size=8 */
/* 1454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1456 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter nViews */

/* 1458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pViews */

/* 1464 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1468 */	NdrFcShort( 0x1f6 ),	/* Type Offset=502 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetReferences */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1484 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1490 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1492 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwRefs */

/* 1500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIWMDMStorage */

/* 1506 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1510 */	NdrFcShort( 0x268 ),	/* Type Offset=616 */

	/* Return value */

/* 1512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetReferences */

/* 1518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1532 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1534 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwRefs */

/* 1542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pppIWMDMStorage */

/* 1548 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1552 */	NdrFcShort( 0x27e ),	/* Type Offset=638 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRightsWithProgress */

/* 1560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1568 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1574 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1576 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIProgressCallback */

/* 1584 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1588 */	NdrFcShort( 0x29c ),	/* Type Offset=668 */

	/* Parameter ppRights */

/* 1590 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1594 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Parameter pnRightsCount */

/* 1596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecifiedMetadata */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1616 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1622 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1624 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cProperties */

/* 1632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppwszPropNames */

/* 1638 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1642 */	NdrFcShort( 0x2ca ),	/* Type Offset=714 */

	/* Parameter ppMetadata */

/* 1644 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1648 */	NdrFcShort( 0x1e0 ),	/* Type Offset=480 */

	/* Return value */

/* 1650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1652 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStorage */

/* 1656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1664 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1666 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1670 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1672 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter findScope */

/* 1680 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1684 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszUniqueID */

/* 1686 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1688 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1690 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter ppStorage */

/* 1692 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1696 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 1698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 1704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1718 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppStorage */

/* 1728 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1732 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginRead */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1756 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */


	/* Procedure BeginWrite */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1784 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectName */

/* 1800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1814 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1816 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1818 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 1824 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1828 */	NdrFcShort( 0x2ee ),	/* Type Offset=750 */

	/* Parameter nMaxChars */

/* 1830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjectName */

/* 1842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1850 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1856 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1858 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 1866 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1870 */	NdrFcShort( 0x2fa ),	/* Type Offset=762 */

	/* Parameter nMaxChars */

/* 1872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1874 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectAttributes */

/* 1884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1892 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1898 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1900 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwAttributes */

/* 1908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 1914 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1918 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */

/* 1920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1922 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjectAttributes */

/* 1926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1942 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwAttributes */

/* 1950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFormat */

/* 1956 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1960 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Return value */

/* 1962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectTotalSize */

/* 1968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1982 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1984 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwSize */

/* 1992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwSizeHigh */

/* 1998 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Seek */


	/* Procedure SetObjectTotalSize */

/* 2010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0xa ),	/* 10 */
/* 2018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2020 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2024 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2026 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */


	/* Parameter dwSize */

/* 2034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nOffset */


	/* Parameter dwSizeHigh */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransferObjectData */

/* 2052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0xb ),	/* 11 */
/* 2060 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2062 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2064 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2066 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2068 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 2076 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2080 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter pdwSize */

/* 2082 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter abMac */

/* 2088 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2092 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 2094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure End */

/* 2100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0xc ),	/* 12 */
/* 2108 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2110 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2114 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phCompletionCode */

/* 2124 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 2126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNewObject */

/* 2130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2134 */	NdrFcShort( 0x316 ),	/* Type Offset=790 */

	/* Return value */

/* 2136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransferObjectDataOnClearChannel */

/* 2142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0xd ),	/* 13 */
/* 2150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2152 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2156 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2158 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 2166 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2170 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Parameter pdwSize */

/* 2172 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin */

/* 2184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2200 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwEstimatedTicks */

/* 2208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPlayLength */


	/* Procedure Progress */

/* 2220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2228 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2234 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2236 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwLength */


	/* Parameter dwTranspiredTicks */

/* 2244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Play */


	/* Procedure Reset */


	/* Procedure End */

/* 2256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2262 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2270 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2272 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 2280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPlayOffset */


	/* Procedure End2 */

/* 2286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2300 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2302 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwOffset */


	/* Parameter hrCompletionCode */

/* 2310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin3 */

/* 2322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2330 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2332 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2336 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2338 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2342 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter EventId */

/* 2346 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2350 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter dwEstimatedTicks */

/* 2352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2354 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 2358 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2360 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2362 */	NdrFcShort( 0x328 ),	/* Type Offset=808 */

	/* Return value */

/* 2364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2366 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Progress3 */

/* 2370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2378 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2380 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2384 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2386 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter EventId */

/* 2394 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2398 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter dwTranspiredTicks */

/* 2400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2402 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 2406 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2408 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2410 */	NdrFcShort( 0x328 ),	/* Type Offset=808 */

	/* Return value */

/* 2412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2414 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure End3 */

/* 2418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2426 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2428 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2432 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2434 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter EventId */

/* 2442 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 2444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2446 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter hrCompletionCode */

/* 2448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2450 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pContext */

/* 2454 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2456 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2458 */	NdrFcShort( 0x328 ),	/* Type Offset=808 */

	/* Return value */

/* 2460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2462 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 2466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2474 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2480 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2482 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 2490 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2494 */	NdrFcShort( 0x330 ),	/* Type Offset=816 */

	/* Parameter nMaxChars */

/* 2496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2498 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManufacturer */

/* 2508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2516 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2522 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2524 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszName */

/* 2532 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2536 */	NdrFcShort( 0x33c ),	/* Type Offset=828 */

	/* Parameter nMaxChars */

/* 2538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2546 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPlayOffset */


	/* Procedure GetVersion */

/* 2550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2564 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2566 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwOffset */


	/* Parameter pdwVersion */

/* 2574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSerialNumber */

/* 2586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2596 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2598 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 2600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSerialNumber */

/* 2610 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 2612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2614 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Parameter abMac */

/* 2616 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2620 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 2622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLongestPlayPosition */


	/* Procedure GetStatus */

/* 2628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2642 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLongestPos */


	/* Parameter pdwStatus */

/* 2652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDeviceIcon */

/* 2664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0xa ),	/* 10 */
/* 2672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hIcon */

/* 2688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStorage */

/* 2700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0xb ),	/* 11 */
/* 2708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2714 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumStorage */

/* 2724 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2728 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatSupport */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0xc ),	/* 12 */
/* 2744 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2750 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2752 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2754 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppFormatEx */

/* 2760 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2764 */	NdrFcShort( 0x344 ),	/* Type Offset=836 */

	/* Parameter pnFormatCount */

/* 2766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pppwszMimeType */

/* 2772 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2776 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter pnMimeTypeCount */

/* 2778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2780 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2786 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendOpaqueCommand */

/* 2790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0xd ),	/* 13 */
/* 2798 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2804 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2806 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCommand */

/* 2814 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	NdrFcShort( 0x17c ),	/* Type Offset=380 */

	/* Return value */

/* 2820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStorage */

/* 2826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0xe ),	/* 14 */
/* 2834 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2840 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2842 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszStorageName */

/* 2850 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2854 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter ppStorage */

/* 2856 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2858 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2860 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatSupport2 */

/* 2868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0xf ),	/* 15 */
/* 2876 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2880 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2882 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 2884 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2886 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */

/* 2892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppAudioFormatEx */

/* 2898 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2902 */	NdrFcShort( 0x38a ),	/* Type Offset=906 */

	/* Parameter pnAudioFormatCount */

/* 2904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2906 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVideoFormatEx */

/* 2910 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2914 */	NdrFcShort( 0x3a8 ),	/* Type Offset=936 */

	/* Parameter pnVideoFormatCount */

/* 2916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2918 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppFileType */

/* 2922 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2924 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2926 */	NdrFcShort( 0x3c0 ),	/* Type Offset=960 */

	/* Parameter pnFileTypeCount */

/* 2928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2930 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2936 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpecifyPropertyPages */

/* 2940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2948 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2954 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2956 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppSpecifyPropPages */

/* 2964 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2968 */	NdrFcShort( 0x3fe ),	/* Type Offset=1022 */

	/* Parameter pppUnknowns */

/* 2970 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2974 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pcUnks */

/* 2976 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCanonicalName */

/* 2988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2996 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3004 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszPnPName */

/* 3012 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3016 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Parameter nMaxChars */

/* 3018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProperty */

/* 3030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x12 ),	/* 18 */
/* 3038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3044 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3046 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3048 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszPropName */

/* 3054 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3058 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pValue */

/* 3060 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3064 */	NdrFcShort( 0xcf6 ),	/* Type Offset=3318 */

	/* Return value */

/* 3066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProperty */

/* 3072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3080 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3088 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszPropName */

/* 3096 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3100 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pValue */

/* 3102 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3106 */	NdrFcShort( 0xcf6 ),	/* Type Offset=3318 */

	/* Return value */

/* 3108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFormatCapability */

/* 3114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3128 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3130 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3132 */	NdrFcShort( 0x110 ),	/* 272 */
/* 3134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter format */

/* 3138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3142 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pFormatSupport */

/* 3144 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3148 */	NdrFcShort( 0xdbe ),	/* Type Offset=3518 */

	/* Return value */

/* 3150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeviceIoControl */

/* 3156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3164 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3166 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3170 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3172 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwIoControlCode */

/* 3180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpInBuffer */

/* 3186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3190 */	NdrFcShort( 0xdd2 ),	/* Type Offset=3538 */

	/* Parameter nInBufferSize */

/* 3192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpOutBuffer */

/* 3198 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3202 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter pnOutBufferSize */

/* 3204 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3206 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3212 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindStorage */

/* 3216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3226 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3230 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter findScope */

/* 3240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3244 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszUniqueID */

/* 3246 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3250 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter ppStorage */

/* 3252 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3256 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 3258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginSession */

/* 3264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3270 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3272 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3274 */	NdrFcShort( 0xe ),	/* 14 */
/* 3276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3278 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3280 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 3288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3292 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pCtx */

/* 3294 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3298 */	NdrFcShort( 0xde2 ),	/* Type Offset=3554 */

	/* Parameter dwSizeCtx */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndSession */

/* 3312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3320 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3322 */	NdrFcShort( 0xe ),	/* 14 */
/* 3324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3328 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 3336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3340 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pCtx */

/* 3342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3346 */	NdrFcShort( 0xde2 ),	/* Type Offset=3554 */

	/* Parameter dwSizeCtx */

/* 3348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 3360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3376 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 3384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppDevice */

/* 3390 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3394 */	NdrFcShort( 0xdea ),	/* Type Offset=3562 */

	/* Parameter pceltFetched */

/* 3396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */


	/* Procedure Skip */

/* 3408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */


	/* Parameter celt */

/* 3432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pceltFetched */


	/* Parameter pceltFetched */

/* 3438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 3450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3464 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3466 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumDevice */

/* 3474 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3478 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Record */

/* 3486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFormat */

/* 3510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3514 */	NdrFcShort( 0xd8 ),	/* Type Offset=216 */

	/* Return value */

/* 3516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Pause */

/* 3522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */

/* 3552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 3582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3590 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3594 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3596 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3598 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 3606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppStorage */

/* 3612 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 3614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3616 */	NdrFcShort( 0xe08 ),	/* Type Offset=3592 */

	/* Parameter pceltFetched */

/* 3618 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 3630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnumStorage */

/* 3654 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3658 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Return value */

/* 3660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert */

/* 3666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3674 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3680 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3682 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFile */

/* 3696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3700 */	NdrFcShort( 0xe1e ),	/* Type Offset=3614 */

	/* Parameter pOperation */

/* 3702 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3706 */	NdrFcShort( 0xe22 ),	/* Type Offset=3618 */

	/* Parameter pProgress */

/* 3708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3712 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter ppNewObject */

/* 3714 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3716 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3718 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 3720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3722 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */

/* 3726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3740 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3742 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProgress */

/* 3756 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3760 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Return value */

/* 3762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Rename */

/* 3768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3774 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3776 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3782 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszNewName */

/* 3798 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3802 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pProgress */

/* 3804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3808 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Return value */

/* 3810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3812 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Read */

/* 3816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3824 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3832 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFile */

/* 3846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3850 */	NdrFcShort( 0xe1e ),	/* Type Offset=3614 */

	/* Parameter pProgress */

/* 3852 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3856 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter pOperation */

/* 3858 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3860 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3862 */	NdrFcShort( 0xe22 ),	/* Type Offset=3618 */

	/* Return value */

/* 3864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3866 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Move */

/* 3870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3878 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3884 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTargetObject */

/* 3900 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3904 */	NdrFcShort( 0x19c ),	/* Type Offset=412 */

	/* Parameter pProgress */

/* 3906 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3910 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Return value */

/* 3912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert2 */

/* 3918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3926 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3932 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3934 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 3942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFileSource */

/* 3948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3952 */	NdrFcShort( 0xe1e ),	/* Type Offset=3614 */

	/* Parameter pwszFileDest */

/* 3954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3958 */	NdrFcShort( 0xe1e ),	/* Type Offset=3614 */

	/* Parameter pOperation */

/* 3960 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3964 */	NdrFcShort( 0xe22 ),	/* Type Offset=3618 */

	/* Parameter pProgress */

/* 3966 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3970 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter pUnknown */

/* 3972 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3976 */	NdrFcShort( 0x316 ),	/* Type Offset=790 */

	/* Parameter ppNewObject */

/* 3978 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 3980 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3982 */	NdrFcShort( 0xe34 ),	/* Type Offset=3636 */

	/* Return value */

/* 3984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3986 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert3 */

/* 3990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3998 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4000 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4004 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 4006 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fuMode */

/* 4014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fuType */

/* 4020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszFileSource */

/* 4026 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4030 */	NdrFcShort( 0xe1e ),	/* Type Offset=3614 */

	/* Parameter pwszFileDest */

/* 4032 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4036 */	NdrFcShort( 0xe1e ),	/* Type Offset=3614 */

	/* Parameter pOperation */

/* 4038 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4042 */	NdrFcShort( 0xe22 ),	/* Type Offset=3618 */

	/* Parameter pProgress */

/* 4044 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4046 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4048 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter pMetaData */

/* 4050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4052 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4054 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter pUnknown */

/* 4056 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4058 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4060 */	NdrFcShort( 0x316 ),	/* Type Offset=790 */

	/* Parameter ppNewObject */

/* 4062 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4064 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4066 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 4068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4070 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTotalLength */

/* 4074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwLength */

/* 4098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRevocationURL */

/* 4110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4118 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4120 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4122 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4124 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4126 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppwszRevocationURL */

/* 4134 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 4136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4138 */	NdrFcShort( 0xe38 ),	/* Type Offset=3640 */

	/* Parameter pdwBufferLen */

/* 4140 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwRevokedBitFlag */

/* 4146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WMDMMessage */

/* 4158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4172 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwMessageType */

/* 4182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszCanonicalName */

/* 4188 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4192 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 4194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNotification */

/* 4200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4208 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4214 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4216 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 4224 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4228 */	NdrFcShort( 0xe60 ),	/* Type Offset=3680 */

	/* Parameter uMsg */

/* 4230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4240 */	0x8,		/* FC_LONG */
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
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 14 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 16 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 20 */	NdrFcShort( 0x2 ),	/* Offset= 2 (22) */
/* 22 */	
			0x13, 0x0,	/* FC_OP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
/* 30 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 32 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 34 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 36 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 38 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 40 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	
			0x13, 0x0,	/* FC_OP */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 56 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 58 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 60 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 62 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 64 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 66 */	
			0x12, 0x0,	/* FC_UP */
/* 68 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (6) */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	
			0x13, 0x0,	/* FC_OP */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 88 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 90 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 92 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 94 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 100 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 102 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (106) */
/* 106 */	
			0x13, 0x0,	/* FC_OP */
/* 108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (110) */
/* 110 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 114 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 118 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 120 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 122 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (126) */
/* 126 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 128 */	NdrFcLong( 0x1dcb3a01 ),	/* 499857921 */
/* 132 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 134 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 136 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 138 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 140 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 142 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 144 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 150 */	NdrFcLong( 0x1dcb3a02 ),	/* 499857922 */
/* 154 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 156 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 158 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 160 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 162 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 164 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 166 */	
			0x11, 0x0,	/* FC_RP */
/* 168 */	NdrFcShort( 0x8 ),	/* Offset= 8 (176) */
/* 170 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 172 */	NdrFcShort( 0x80 ),	/* 128 */
/* 174 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 176 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 178 */	NdrFcShort( 0x8c ),	/* 140 */
/* 180 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 182 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 184 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (170) */
/* 186 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 188 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 194 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 196 */	NdrFcLong( 0x1dcb3a0c ),	/* 499857932 */
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
			0x12, 0x0,	/* FC_UP */
/* 214 */	NdrFcShort( 0x2 ),	/* Offset= 2 (216) */
/* 216 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 218 */	NdrFcShort( 0x14 ),	/* 20 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* Offset= 0 (222) */
/* 224 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 226 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 228 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 230 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 232 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 234 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (238) */
/* 238 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 240 */	NdrFcLong( 0x1dcb3a07 ),	/* 499857927 */
/* 244 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 246 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 248 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 250 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 252 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 254 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 256 */	
			0x11, 0x0,	/* FC_RP */
/* 258 */	NdrFcShort( 0x2 ),	/* Offset= 2 (260) */
/* 260 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 262 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 266 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 268 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (272) */
/* 272 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 274 */	NdrFcShort( 0xc ),	/* 12 */
/* 276 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 278 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 280 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 282 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 284 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 286 */	NdrFcShort( 0x2 ),	/* Offset= 2 (288) */
/* 288 */	
			0x13, 0x0,	/* FC_OP */
/* 290 */	NdrFcShort( 0x12 ),	/* Offset= 18 (308) */
/* 292 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x24 ),	/* 36 */
/* 296 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 298 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 300 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 302 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 304 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (272) */
/* 306 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 308 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 310 */	NdrFcShort( 0x24 ),	/* 36 */
/* 312 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 316 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 318 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 320 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (292) */
/* 322 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 324 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 326 */	NdrFcShort( 0x2 ),	/* Offset= 2 (328) */
/* 328 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 330 */	NdrFcLong( 0x1dcb3a05 ),	/* 499857925 */
/* 334 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 336 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 338 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 340 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 342 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 344 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 346 */	
			0x11, 0x0,	/* FC_RP */
/* 348 */	NdrFcShort( 0x20 ),	/* Offset= 32 (380) */
/* 350 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 352 */	NdrFcShort( 0x10 ),	/* 16 */
/* 354 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 356 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 358 */	0x0,		/* 0 */
			NdrFcShort( 0xff55 ),	/* Offset= -171 (188) */
			0x5b,		/* FC_END */
/* 362 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 364 */	NdrFcShort( 0x14 ),	/* 20 */
/* 366 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 368 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 372 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 374 */	NdrFcShort( 0x10 ),	/* 16 */
/* 376 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 378 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 380 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 382 */	NdrFcShort( 0x2c ),	/* 44 */
/* 384 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 386 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 388 */	NdrFcShort( 0x14 ),	/* 20 */
/* 390 */	NdrFcShort( 0x14 ),	/* 20 */
/* 392 */	0x13, 0x0,	/* FC_OP */
/* 394 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (368) */
/* 396 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 398 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (350) */
			0x8,		/* FC_LONG */
/* 402 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 404 */	0x0,		/* 0 */
			NdrFcShort( 0xffd5 ),	/* Offset= -43 (362) */
			0x5b,		/* FC_END */
/* 408 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 410 */	NdrFcShort( 0x2 ),	/* Offset= 2 (412) */
/* 412 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 414 */	NdrFcLong( 0x1dcb3a06 ),	/* 499857926 */
/* 418 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 420 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 422 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 424 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 426 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 428 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 430 */	
			0x12, 0x0,	/* FC_UP */
/* 432 */	NdrFcShort( 0x1c ),	/* Offset= 28 (460) */
/* 434 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 436 */	NdrFcShort( 0x10 ),	/* 16 */
/* 438 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 440 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 442 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 444 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 446 */	NdrFcShort( 0x28 ),	/* 40 */
/* 448 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 450 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 452 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 454 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 456 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 458 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 460 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 462 */	NdrFcShort( 0x58 ),	/* 88 */
/* 464 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (434) */
/* 468 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 470 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (434) */
/* 472 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 474 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 476 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (444) */
			0x5b,		/* FC_END */
/* 480 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 482 */	NdrFcShort( 0x2 ),	/* Offset= 2 (484) */
/* 484 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 486 */	NdrFcLong( 0xec3b0663 ),	/* -331676061 */
/* 490 */	NdrFcShort( 0x951 ),	/* 2385 */
/* 492 */	NdrFcShort( 0x460a ),	/* 17930 */
/* 494 */	0x9a,		/* 154 */
			0x80,		/* 128 */
/* 496 */	0xd,		/* 13 */
			0xce,		/* 206 */
/* 498 */	0xed,		/* 237 */
			0x3c,		/* 60 */
/* 500 */	0x4,		/* 4 */
			0x3c,		/* 60 */
/* 502 */	
			0x12, 0x0,	/* FC_UP */
/* 504 */	NdrFcShort( 0x42 ),	/* Offset= 66 (570) */
/* 506 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 508 */	NdrFcShort( 0x4 ),	/* 4 */
/* 510 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 512 */	NdrFcShort( 0x4 ),	/* 4 */
/* 514 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 516 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 518 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 520 */	NdrFcShort( 0x4 ),	/* 4 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 532 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 534 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 536 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 538 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 540 */	NdrFcShort( 0xc ),	/* 12 */
/* 542 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 544 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 552 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 554 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 560 */	0x12, 0x0,	/* FC_UP */
/* 562 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (506) */
/* 564 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 566 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 570 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 572 */	NdrFcShort( 0xc ),	/* 12 */
/* 574 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 578 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 580 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 582 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 584 */	NdrFcShort( 0xc ),	/* 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x2 ),	/* 2 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 596 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 602 */	0x12, 0x0,	/* FC_UP */
/* 604 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (506) */
/* 606 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 608 */	0x0,		/* 0 */
			NdrFcShort( 0xffb9 ),	/* Offset= -71 (538) */
			0x5b,		/* FC_END */
/* 612 */	
			0x11, 0x0,	/* FC_RP */
/* 614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (616) */
/* 616 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 624 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 626 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 630 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 632 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (412) */
/* 636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 638 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (642) */
/* 642 */	
			0x13, 0x0,	/* FC_OP */
/* 644 */	NdrFcShort( 0x2 ),	/* Offset= 2 (646) */
/* 646 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 654 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 656 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 660 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 662 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 664 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (412) */
/* 666 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 668 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 670 */	NdrFcLong( 0x21de01cb ),	/* 568197579 */
/* 674 */	NdrFcShort( 0x3bb4 ),	/* 15284 */
/* 676 */	NdrFcShort( 0x4929 ),	/* 18729 */
/* 678 */	0xb2,		/* 178 */
			0x1a,		/* 26 */
/* 680 */	0x17,		/* 23 */
			0xaf,		/* 175 */
/* 682 */	0x3f,		/* 63 */
			0x80,		/* 128 */
/* 684 */	0xf6,		/* 246 */
			0x58,		/* 88 */
/* 686 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (690) */
/* 690 */	
			0x13, 0x0,	/* FC_OP */
/* 692 */	NdrFcShort( 0x2 ),	/* Offset= 2 (694) */
/* 694 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x24 ),	/* 36 */
/* 698 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 702 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 704 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0xfe62 ),	/* Offset= -414 (292) */
/* 708 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 710 */	
			0x11, 0x0,	/* FC_RP */
/* 712 */	NdrFcShort( 0x2 ),	/* Offset= 2 (714) */
/* 714 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 716 */	NdrFcShort( 0x4 ),	/* 4 */
/* 718 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 722 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 724 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 726 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 740 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 742 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 746 */	
			0x11, 0x0,	/* FC_RP */
/* 748 */	NdrFcShort( 0x2 ),	/* Offset= 2 (750) */
/* 750 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 752 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 756 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 758 */	
			0x11, 0x0,	/* FC_RP */
/* 760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (762) */
/* 762 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 764 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 768 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 770 */	
			0x11, 0x0,	/* FC_RP */
/* 772 */	NdrFcShort( 0x2 ),	/* Offset= 2 (774) */
/* 774 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 782 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 784 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 786 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 788 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 790 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 802 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 804 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 806 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 808 */	
			0x12, 0x0,	/* FC_UP */
/* 810 */	NdrFcShort( 0xfe52 ),	/* Offset= -430 (380) */
/* 812 */	
			0x11, 0x0,	/* FC_RP */
/* 814 */	NdrFcShort( 0x2 ),	/* Offset= 2 (816) */
/* 816 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 818 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 822 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 824 */	
			0x11, 0x0,	/* FC_RP */
/* 826 */	NdrFcShort( 0x2 ),	/* Offset= 2 (828) */
/* 828 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 830 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 834 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 836 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 838 */	NdrFcShort( 0x2 ),	/* Offset= 2 (840) */
/* 840 */	
			0x13, 0x0,	/* FC_OP */
/* 842 */	NdrFcShort( 0x2 ),	/* Offset= 2 (844) */
/* 844 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 852 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 854 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 858 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 860 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0xfd7a ),	/* Offset= -646 (216) */
/* 864 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 866 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 868 */	NdrFcShort( 0x2 ),	/* Offset= 2 (870) */
/* 870 */	
			0x13, 0x0,	/* FC_OP */
/* 872 */	NdrFcShort( 0x2 ),	/* Offset= 2 (874) */
/* 874 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 878 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 880 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 882 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 884 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 886 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 900 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 904 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 906 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 908 */	NdrFcShort( 0x2 ),	/* Offset= 2 (910) */
/* 910 */	
			0x13, 0x0,	/* FC_OP */
/* 912 */	NdrFcShort( 0x2 ),	/* Offset= 2 (914) */
/* 914 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 922 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 924 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 928 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 930 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 932 */	NdrFcShort( 0xfd34 ),	/* Offset= -716 (216) */
/* 934 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 936 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 938 */	NdrFcShort( 0x2 ),	/* Offset= 2 (940) */
/* 940 */	
			0x13, 0x0,	/* FC_OP */
/* 942 */	NdrFcShort( 0x2 ),	/* Offset= 2 (944) */
/* 944 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 946 */	NdrFcShort( 0x58 ),	/* 88 */
/* 948 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 950 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 952 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 954 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 956 */	NdrFcShort( 0xfe10 ),	/* Offset= -496 (460) */
/* 958 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 960 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 962 */	NdrFcShort( 0x2 ),	/* Offset= 2 (964) */
/* 964 */	
			0x13, 0x0,	/* FC_OP */
/* 966 */	NdrFcShort( 0x16 ),	/* Offset= 22 (988) */
/* 968 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 972 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 974 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 982 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 984 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 986 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 988 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 994 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 996 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 998 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1000 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1014 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1016 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1018 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (968) */
			0x5b,		/* FC_END */
/* 1022 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1024 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1026) */
/* 1026 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1028 */	NdrFcLong( 0xb196b28b ),	/* -1315523957 */
/* 1032 */	NdrFcShort( 0xbab4 ),	/* -17740 */
/* 1034 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 1036 */	0xb6,		/* 182 */
			0x9c,		/* 156 */
/* 1038 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1040 */	0x0,		/* 0 */
			0x34,		/* 52 */
/* 1042 */	0x1d,		/* 29 */
			0x7,		/* 7 */
/* 1044 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1046 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1048) */
/* 1048 */	
			0x13, 0x0,	/* FC_OP */
/* 1050 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1052) */
/* 1052 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1062 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1066 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1068 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1070 */	NdrFcShort( 0xfee8 ),	/* Offset= -280 (790) */
/* 1072 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1074 */	
			0x11, 0x0,	/* FC_RP */
/* 1076 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1078) */
/* 1078 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 1080 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1082 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1084 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1086 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1088 */	NdrFcShort( 0x8b6 ),	/* Offset= 2230 (3318) */
/* 1090 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x7,		/* FC_USHORT */
/* 1092 */	0x0,		/* Corr desc:  */
			0x59,		/* FC_CALLBACK */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1098 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1100) */
/* 1100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1102 */	NdrFcShort( 0x61 ),	/* 97 */
/* 1104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1108) */
/* 1110 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1114 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1114) */
/* 1116 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1120 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1122 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1126 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 1128 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1132 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1134 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1138 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1140 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1144 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1146 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1150 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1152 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1156 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1158 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1162 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1164 */	NdrFcLong( 0xe ),	/* 14 */
/* 1168 */	NdrFcShort( 0x208 ),	/* Offset= 520 (1688) */
/* 1170 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1174 */	NdrFcShort( 0x202 ),	/* Offset= 514 (1688) */
/* 1176 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1180 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (1688) */
/* 1182 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1186 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 1188 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1192 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1194 */	NdrFcLong( 0xb ),	/* 11 */
/* 1198 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1200 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 1204 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 1206 */	NdrFcLong( 0xa ),	/* 10 */
/* 1210 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1212 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1216 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1688) */
/* 1218 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1222 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 1224 */	NdrFcLong( 0x40 ),	/* 64 */
/* 1228 */	NdrFcShort( 0x1d2 ),	/* Offset= 466 (1694) */
/* 1230 */	NdrFcLong( 0x48 ),	/* 72 */
/* 1234 */	NdrFcShort( 0x1d4 ),	/* Offset= 468 (1702) */
/* 1236 */	NdrFcLong( 0x47 ),	/* 71 */
/* 1240 */	NdrFcShort( 0x1d2 ),	/* Offset= 466 (1706) */
/* 1242 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1246 */	NdrFcShort( 0x20c ),	/* Offset= 524 (1770) */
/* 1248 */	NdrFcLong( 0xfff ),	/* 4095 */
/* 1252 */	NdrFcShort( 0x21c ),	/* Offset= 540 (1792) */
/* 1254 */	NdrFcLong( 0x41 ),	/* 65 */
/* 1258 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1792) */
/* 1260 */	NdrFcLong( 0x46 ),	/* 70 */
/* 1264 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1792) */
/* 1266 */	NdrFcLong( 0x1e ),	/* 30 */
/* 1270 */	NdrFcShort( 0x21e ),	/* Offset= 542 (1812) */
/* 1272 */	NdrFcLong( 0x1f ),	/* 31 */
/* 1276 */	NdrFcShort( 0xfb66 ),	/* Offset= -1178 (98) */
/* 1278 */	NdrFcLong( 0xd ),	/* 13 */
/* 1282 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (790) */
/* 1284 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1288 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1816) */
/* 1290 */	NdrFcLong( 0x42 ),	/* 66 */
/* 1294 */	NdrFcShort( 0x21c ),	/* Offset= 540 (1834) */
/* 1296 */	NdrFcLong( 0x44 ),	/* 68 */
/* 1300 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1834) */
/* 1302 */	NdrFcLong( 0x43 ),	/* 67 */
/* 1306 */	NdrFcShort( 0x222 ),	/* Offset= 546 (1852) */
/* 1308 */	NdrFcLong( 0x45 ),	/* 69 */
/* 1312 */	NdrFcShort( 0x21c ),	/* Offset= 540 (1852) */
/* 1314 */	NdrFcLong( 0x49 ),	/* 73 */
/* 1318 */	NdrFcShort( 0x228 ),	/* Offset= 552 (1870) */
/* 1320 */	NdrFcLong( 0x2010 ),	/* 8208 */
/* 1324 */	NdrFcShort( 0x5c4 ),	/* Offset= 1476 (2800) */
/* 1326 */	NdrFcLong( 0x2011 ),	/* 8209 */
/* 1330 */	NdrFcShort( 0x5be ),	/* Offset= 1470 (2800) */
/* 1332 */	NdrFcLong( 0x2002 ),	/* 8194 */
/* 1336 */	NdrFcShort( 0x5b8 ),	/* Offset= 1464 (2800) */
/* 1338 */	NdrFcLong( 0x2012 ),	/* 8210 */
/* 1342 */	NdrFcShort( 0x5b2 ),	/* Offset= 1458 (2800) */
/* 1344 */	NdrFcLong( 0x2003 ),	/* 8195 */
/* 1348 */	NdrFcShort( 0x5ac ),	/* Offset= 1452 (2800) */
/* 1350 */	NdrFcLong( 0x2013 ),	/* 8211 */
/* 1354 */	NdrFcShort( 0x5a6 ),	/* Offset= 1446 (2800) */
/* 1356 */	NdrFcLong( 0x2016 ),	/* 8214 */
/* 1360 */	NdrFcShort( 0x5a0 ),	/* Offset= 1440 (2800) */
/* 1362 */	NdrFcLong( 0x2017 ),	/* 8215 */
/* 1366 */	NdrFcShort( 0x59a ),	/* Offset= 1434 (2800) */
/* 1368 */	NdrFcLong( 0x2004 ),	/* 8196 */
/* 1372 */	NdrFcShort( 0x594 ),	/* Offset= 1428 (2800) */
/* 1374 */	NdrFcLong( 0x2005 ),	/* 8197 */
/* 1378 */	NdrFcShort( 0x58e ),	/* Offset= 1422 (2800) */
/* 1380 */	NdrFcLong( 0x2006 ),	/* 8198 */
/* 1384 */	NdrFcShort( 0x588 ),	/* Offset= 1416 (2800) */
/* 1386 */	NdrFcLong( 0x2007 ),	/* 8199 */
/* 1390 */	NdrFcShort( 0x582 ),	/* Offset= 1410 (2800) */
/* 1392 */	NdrFcLong( 0x2008 ),	/* 8200 */
/* 1396 */	NdrFcShort( 0x57c ),	/* Offset= 1404 (2800) */
/* 1398 */	NdrFcLong( 0x200b ),	/* 8203 */
/* 1402 */	NdrFcShort( 0x576 ),	/* Offset= 1398 (2800) */
/* 1404 */	NdrFcLong( 0x200e ),	/* 8206 */
/* 1408 */	NdrFcShort( 0x570 ),	/* Offset= 1392 (2800) */
/* 1410 */	NdrFcLong( 0x2009 ),	/* 8201 */
/* 1414 */	NdrFcShort( 0x56a ),	/* Offset= 1386 (2800) */
/* 1416 */	NdrFcLong( 0x200d ),	/* 8205 */
/* 1420 */	NdrFcShort( 0x564 ),	/* Offset= 1380 (2800) */
/* 1422 */	NdrFcLong( 0x200a ),	/* 8202 */
/* 1426 */	NdrFcShort( 0x55e ),	/* Offset= 1374 (2800) */
/* 1428 */	NdrFcLong( 0x200c ),	/* 8204 */
/* 1432 */	NdrFcShort( 0x558 ),	/* Offset= 1368 (2800) */
/* 1434 */	NdrFcLong( 0x1010 ),	/* 4112 */
/* 1438 */	NdrFcShort( 0x568 ),	/* Offset= 1384 (2822) */
/* 1440 */	NdrFcLong( 0x1011 ),	/* 4113 */
/* 1444 */	NdrFcShort( 0x562 ),	/* Offset= 1378 (2822) */
/* 1446 */	NdrFcLong( 0x1002 ),	/* 4098 */
/* 1450 */	NdrFcShort( 0x4d0 ),	/* Offset= 1232 (2682) */
/* 1452 */	NdrFcLong( 0x1012 ),	/* 4114 */
/* 1456 */	NdrFcShort( 0x4ca ),	/* Offset= 1226 (2682) */
/* 1458 */	NdrFcLong( 0x1003 ),	/* 4099 */
/* 1462 */	NdrFcShort( 0x4e4 ),	/* Offset= 1252 (2714) */
/* 1464 */	NdrFcLong( 0x1013 ),	/* 4115 */
/* 1468 */	NdrFcShort( 0x4de ),	/* Offset= 1246 (2714) */
/* 1470 */	NdrFcLong( 0x1014 ),	/* 4116 */
/* 1474 */	NdrFcShort( 0x568 ),	/* Offset= 1384 (2858) */
/* 1476 */	NdrFcLong( 0x1015 ),	/* 4117 */
/* 1480 */	NdrFcShort( 0x562 ),	/* Offset= 1378 (2858) */
/* 1482 */	NdrFcLong( 0x1004 ),	/* 4100 */
/* 1486 */	NdrFcShort( 0x57c ),	/* Offset= 1404 (2890) */
/* 1488 */	NdrFcLong( 0x1005 ),	/* 4101 */
/* 1492 */	NdrFcShort( 0x596 ),	/* Offset= 1430 (2922) */
/* 1494 */	NdrFcLong( 0x100b ),	/* 4107 */
/* 1498 */	NdrFcShort( 0x4a0 ),	/* Offset= 1184 (2682) */
/* 1500 */	NdrFcLong( 0x100a ),	/* 4106 */
/* 1504 */	NdrFcShort( 0x4ba ),	/* Offset= 1210 (2714) */
/* 1506 */	NdrFcLong( 0x1006 ),	/* 4102 */
/* 1510 */	NdrFcShort( 0x544 ),	/* Offset= 1348 (2858) */
/* 1512 */	NdrFcLong( 0x1007 ),	/* 4103 */
/* 1516 */	NdrFcShort( 0x57e ),	/* Offset= 1406 (2922) */
/* 1518 */	NdrFcLong( 0x1040 ),	/* 4160 */
/* 1522 */	NdrFcShort( 0x59c ),	/* Offset= 1436 (2958) */
/* 1524 */	NdrFcLong( 0x1048 ),	/* 4168 */
/* 1528 */	NdrFcShort( 0x5ba ),	/* Offset= 1466 (2994) */
/* 1530 */	NdrFcLong( 0x1047 ),	/* 4167 */
/* 1534 */	NdrFcShort( 0x5ea ),	/* Offset= 1514 (3048) */
/* 1536 */	NdrFcLong( 0x1008 ),	/* 4104 */
/* 1540 */	NdrFcShort( 0x60e ),	/* Offset= 1550 (3090) */
/* 1542 */	NdrFcLong( 0x1fff ),	/* 8191 */
/* 1546 */	NdrFcShort( 0x63e ),	/* Offset= 1598 (3144) */
/* 1548 */	NdrFcLong( 0x101e ),	/* 4126 */
/* 1552 */	NdrFcShort( 0x66c ),	/* Offset= 1644 (3196) */
/* 1554 */	NdrFcLong( 0x101f ),	/* 4127 */
/* 1558 */	NdrFcShort( 0x69a ),	/* Offset= 1690 (3248) */
/* 1560 */	NdrFcLong( 0x100c ),	/* 4108 */
/* 1564 */	NdrFcShort( 0x6be ),	/* Offset= 1726 (3290) */
/* 1566 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1570 */	NdrFcShort( 0x3c0 ),	/* Offset= 960 (2530) */
/* 1572 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 1576 */	NdrFcShort( 0x3ba ),	/* Offset= 954 (2530) */
/* 1578 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 1582 */	NdrFcShort( 0x36e ),	/* Offset= 878 (2460) */
/* 1584 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1588 */	NdrFcShort( 0x368 ),	/* Offset= 872 (2460) */
/* 1590 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 1594 */	NdrFcShort( 0x366 ),	/* Offset= 870 (2464) */
/* 1596 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1600 */	NdrFcShort( 0x360 ),	/* Offset= 864 (2464) */
/* 1602 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1606 */	NdrFcShort( 0x35a ),	/* Offset= 858 (2464) */
/* 1608 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1612 */	NdrFcShort( 0x354 ),	/* Offset= 852 (2464) */
/* 1614 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 1618 */	NdrFcShort( 0x356 ),	/* Offset= 854 (2472) */
/* 1620 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 1624 */	NdrFcShort( 0x354 ),	/* Offset= 852 (2476) */
/* 1626 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 1630 */	NdrFcShort( 0x33e ),	/* Offset= 830 (2460) */
/* 1632 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1636 */	NdrFcShort( 0x37a ),	/* Offset= 890 (2526) */
/* 1638 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 1642 */	NdrFcShort( 0x336 ),	/* Offset= 822 (2464) */
/* 1644 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 1648 */	NdrFcShort( 0x340 ),	/* Offset= 832 (2480) */
/* 1650 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 1654 */	NdrFcShort( 0x336 ),	/* Offset= 822 (2476) */
/* 1656 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 1660 */	NdrFcShort( 0x66e ),	/* Offset= 1646 (3306) */
/* 1662 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 1666 */	NdrFcShort( 0x336 ),	/* Offset= 822 (2488) */
/* 1668 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 1672 */	NdrFcShort( 0x334 ),	/* Offset= 820 (2492) */
/* 1674 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 1678 */	NdrFcShort( 0x660 ),	/* Offset= 1632 (3310) */
/* 1680 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 1684 */	NdrFcShort( 0x65e ),	/* Offset= 1630 (3314) */
/* 1686 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1685) */
/* 1688 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1692 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1694 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1698 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1700 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1702 */	
			0x13, 0x0,	/* FC_OP */
/* 1704 */	NdrFcShort( 0xfab6 ),	/* Offset= -1354 (350) */
/* 1706 */	
			0x13, 0x0,	/* FC_OP */
/* 1708 */	NdrFcShort( 0xe ),	/* Offset= 14 (1722) */
/* 1710 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1714 */	0x10,		/* Corr desc:  field pointer,  */
			0x59,		/* FC_CALLBACK */
/* 1716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1718 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1720 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1722 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1724 */	NdrFcShort( 0xc ),	/* 12 */
/* 1726 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1728 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1734 */	0x13, 0x0,	/* FC_OP */
/* 1736 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1710) */
/* 1738 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1744 */	
			0x13, 0x0,	/* FC_OP */
/* 1746 */	NdrFcShort( 0xe ),	/* Offset= 14 (1760) */
/* 1748 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1750 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1752 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1754 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1756 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1758 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1760 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1764 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1748) */
/* 1766 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1768 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1770 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1778 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1744) */
/* 1780 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1784 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1790 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1792 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1796 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1798 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1804 */	0x13, 0x0,	/* FC_OP */
/* 1806 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1780) */
/* 1808 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1810 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1812 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1814 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1816 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1818 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1828 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1830 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1832 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1834 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1836 */	NdrFcLong( 0xc ),	/* 12 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1846 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1848 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1850 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1852 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1854 */	NdrFcLong( 0xb ),	/* 11 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1864 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1866 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1868 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1870 */	
			0x13, 0x0,	/* FC_OP */
/* 1872 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1874) */
/* 1874 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1876 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0xc ),	/* Offset= 12 (1892) */
/* 1882 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1884 */	NdrFcShort( 0xfa02 ),	/* Offset= -1534 (350) */
/* 1886 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1888 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1834) */
/* 1890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1892 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1894 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1896) */
/* 1896 */	
			0x13, 0x0,	/* FC_OP */
/* 1898 */	NdrFcShort( 0x374 ),	/* Offset= 884 (2782) */
/* 1900 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 1902 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1904 */	NdrFcShort( 0xa ),	/* 10 */
/* 1906 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1910 */	NdrFcShort( 0x5a ),	/* Offset= 90 (2000) */
/* 1912 */	NdrFcLong( 0xd ),	/* 13 */
/* 1916 */	NdrFcShort( 0x7e ),	/* Offset= 126 (2042) */
/* 1918 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1922 */	NdrFcShort( 0x9e ),	/* Offset= 158 (2080) */
/* 1924 */	NdrFcLong( 0xc ),	/* 12 */
/* 1928 */	NdrFcShort( 0x292 ),	/* Offset= 658 (2586) */
/* 1930 */	NdrFcLong( 0x24 ),	/* 36 */
/* 1934 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (2634) */
/* 1936 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 1940 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (2650) */
/* 1942 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1946 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (1792) */
/* 1948 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1952 */	NdrFcShort( 0x2da ),	/* Offset= 730 (2682) */
/* 1954 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1958 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (2714) */
/* 1960 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1964 */	NdrFcShort( 0x30e ),	/* Offset= 782 (2746) */
/* 1966 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1965) */
/* 1968 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1970 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1972 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1978 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1980 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1982 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1992 */	0x13, 0x0,	/* FC_OP */
/* 1994 */	NdrFcShort( 0xff16 ),	/* Offset= -234 (1760) */
/* 1996 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1998 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2000 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2006 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2012 */	0x11, 0x0,	/* FC_RP */
/* 2014 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1968) */
/* 2016 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2018 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2020 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2024 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2030 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2034 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2036 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2038 */	NdrFcShort( 0xfb20 ),	/* Offset= -1248 (790) */
/* 2040 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2042 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2054) */
/* 2050 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2052 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2054 */	
			0x11, 0x0,	/* FC_RP */
/* 2056 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2020) */
/* 2058 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2062 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2068 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2072 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2074 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2076 */	NdrFcShort( 0xfefc ),	/* Offset= -260 (1816) */
/* 2078 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2080 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2092) */
/* 2088 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2090 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2092 */	
			0x11, 0x0,	/* FC_RP */
/* 2094 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2058) */
/* 2096 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2098 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 2100 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2102 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2106) */
/* 2106 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2108 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2110 */	NdrFcLong( 0x14 ),	/* 20 */
/* 2114 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 2116 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2120 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2122 */	NdrFcLong( 0x11 ),	/* 17 */
/* 2126 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 2128 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2132 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 2134 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2138 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 2140 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2144 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 2146 */	NdrFcLong( 0xb ),	/* 11 */
/* 2150 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 2152 */	NdrFcLong( 0xa ),	/* 10 */
/* 2156 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2158 */	NdrFcLong( 0x6 ),	/* 6 */
/* 2162 */	NdrFcShort( 0xfe26 ),	/* Offset= -474 (1688) */
/* 2164 */	NdrFcLong( 0x7 ),	/* 7 */
/* 2168 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 2170 */	NdrFcLong( 0x8 ),	/* 8 */
/* 2174 */	NdrFcShort( 0xfe52 ),	/* Offset= -430 (1744) */
/* 2176 */	NdrFcLong( 0xd ),	/* 13 */
/* 2180 */	NdrFcShort( 0xfa92 ),	/* Offset= -1390 (790) */
/* 2182 */	NdrFcLong( 0x9 ),	/* 9 */
/* 2186 */	NdrFcShort( 0xfe8e ),	/* Offset= -370 (1816) */
/* 2188 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 2192 */	NdrFcShort( 0xca ),	/* Offset= 202 (2394) */
/* 2194 */	NdrFcLong( 0x24 ),	/* 36 */
/* 2198 */	NdrFcShort( 0xcc ),	/* Offset= 204 (2402) */
/* 2200 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 2204 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (2402) */
/* 2206 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 2210 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (2456) */
/* 2212 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 2216 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (2460) */
/* 2218 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 2222 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (2464) */
/* 2224 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 2228 */	NdrFcShort( 0xf0 ),	/* Offset= 240 (2468) */
/* 2230 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 2234 */	NdrFcShort( 0xee ),	/* Offset= 238 (2472) */
/* 2236 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 2240 */	NdrFcShort( 0xec ),	/* Offset= 236 (2476) */
/* 2242 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 2246 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (2460) */
/* 2248 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 2252 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (2464) */
/* 2254 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 2258 */	NdrFcShort( 0xde ),	/* Offset= 222 (2480) */
/* 2260 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 2264 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (2476) */
/* 2266 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 2270 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (2484) */
/* 2272 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 2276 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (2488) */
/* 2278 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 2282 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (2492) */
/* 2284 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 2288 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (2496) */
/* 2290 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 2294 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (2508) */
/* 2296 */	NdrFcLong( 0x10 ),	/* 16 */
/* 2300 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 2302 */	NdrFcLong( 0x12 ),	/* 18 */
/* 2306 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 2308 */	NdrFcLong( 0x13 ),	/* 19 */
/* 2312 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2314 */	NdrFcLong( 0x15 ),	/* 21 */
/* 2318 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 2320 */	NdrFcLong( 0x16 ),	/* 22 */
/* 2324 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2326 */	NdrFcLong( 0x17 ),	/* 23 */
/* 2330 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2332 */	NdrFcLong( 0xe ),	/* 14 */
/* 2336 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (2516) */
/* 2338 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 2342 */	NdrFcShort( 0xb8 ),	/* Offset= 184 (2526) */
/* 2344 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 2348 */	NdrFcShort( 0xb6 ),	/* Offset= 182 (2530) */
/* 2350 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 2354 */	NdrFcShort( 0x6a ),	/* Offset= 106 (2460) */
/* 2356 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 2360 */	NdrFcShort( 0x68 ),	/* Offset= 104 (2464) */
/* 2362 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 2366 */	NdrFcShort( 0x66 ),	/* Offset= 102 (2468) */
/* 2368 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 2372 */	NdrFcShort( 0x5c ),	/* Offset= 92 (2464) */
/* 2374 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 2378 */	NdrFcShort( 0x56 ),	/* Offset= 86 (2464) */
/* 2380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2384) */
/* 2386 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2390 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2390) */
/* 2392 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2391) */
/* 2394 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2398) */
/* 2398 */	
			0x13, 0x0,	/* FC_OP */
/* 2400 */	NdrFcShort( 0x17e ),	/* Offset= 382 (2782) */
/* 2402 */	
			0x13, 0x0,	/* FC_OP */
/* 2404 */	NdrFcShort( 0x20 ),	/* Offset= 32 (2436) */
/* 2406 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2408 */	NdrFcLong( 0x2f ),	/* 47 */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2418 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2420 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2422 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2424 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2428 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2430 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2432 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2434 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2436 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2438 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0xa ),	/* Offset= 10 (2452) */
/* 2444 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2446 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2448 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (2406) */
/* 2450 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2452 */	
			0x13, 0x0,	/* FC_OP */
/* 2454 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2424) */
/* 2456 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2458 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 2460 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2462 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 2464 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2466 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2468 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2470 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 2472 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2474 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 2476 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2478 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 2480 */	
			0x13, 0x0,	/* FC_OP */
/* 2482 */	NdrFcShort( 0xfce6 ),	/* Offset= -794 (1688) */
/* 2484 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2486 */	NdrFcShort( 0xfd1a ),	/* Offset= -742 (1744) */
/* 2488 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2490 */	NdrFcShort( 0xf95c ),	/* Offset= -1700 (790) */
/* 2492 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2494 */	NdrFcShort( 0xfd5a ),	/* Offset= -678 (1816) */
/* 2496 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2498 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2500) */
/* 2500 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2502 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2504) */
/* 2504 */	
			0x13, 0x0,	/* FC_OP */
/* 2506 */	NdrFcShort( 0x114 ),	/* Offset= 276 (2782) */
/* 2508 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 2510 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2512) */
/* 2512 */	
			0x13, 0x0,	/* FC_OP */
/* 2514 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2534) */
/* 2516 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2518 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2520 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 2522 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 2524 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2526 */	
			0x13, 0x0,	/* FC_OP */
/* 2528 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (2516) */
/* 2530 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2532 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2534 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2536 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2540) */
/* 2542 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2544 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2546 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2550 */	NdrFcShort( 0xfe3a ),	/* Offset= -454 (2096) */
/* 2552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2554 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2556 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2558 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2564 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2566 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2568 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	0x13, 0x0,	/* FC_OP */
/* 2580 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2534) */
/* 2582 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2584 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2586 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2598) */
/* 2594 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2598 */	
			0x11, 0x0,	/* FC_RP */
/* 2600 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2554) */
/* 2602 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2604 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2606 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2612 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2614 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2616 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	0x13, 0x0,	/* FC_OP */
/* 2628 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (2436) */
/* 2630 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2634 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2646) */
/* 2642 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2644 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2646 */	
			0x11, 0x0,	/* FC_RP */
/* 2648 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2602) */
/* 2650 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2652 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0xa ),	/* Offset= 10 (2666) */
/* 2658 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2660 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2662 */	NdrFcShort( 0xf6f8 ),	/* Offset= -2312 (350) */
/* 2664 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2666 */	
			0x11, 0x0,	/* FC_RP */
/* 2668 */	NdrFcShort( 0xfd78 ),	/* Offset= -648 (2020) */
/* 2670 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2672 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2674 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2680 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2682 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2686 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2688 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2694 */	0x13, 0x0,	/* FC_OP */
/* 2696 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2670) */
/* 2698 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2700 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2702 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2704 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2706 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2712 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2714 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2718 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2720 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2722 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2724 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2726 */	0x13, 0x0,	/* FC_OP */
/* 2728 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2702) */
/* 2730 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2732 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2734 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2738 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2744 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2746 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2750 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2752 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2758 */	0x13, 0x0,	/* FC_OP */
/* 2760 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2734) */
/* 2762 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2764 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2766 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2770 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 2772 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 2774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2776 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2778 */	NdrFcShort( 0xfbc4 ),	/* Offset= -1084 (1694) */
/* 2780 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2782 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2784 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2786 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2766) */
/* 2788 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2788) */
/* 2790 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2792 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2796 */	NdrFcShort( 0xfc80 ),	/* Offset= -896 (1900) */
/* 2798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2800 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2804 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0xfc6c ),	/* Offset= -916 (1892) */
/* 2810 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2814 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2820 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2822 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2826 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2828 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2834 */	0x13, 0x0,	/* FC_OP */
/* 2836 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2810) */
/* 2838 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2840 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2842 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2846 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2852 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2854 */	NdrFcShort( 0xfb72 ),	/* Offset= -1166 (1688) */
/* 2856 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2858 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2862 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2864 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2866 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2868 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2870 */	0x13, 0x0,	/* FC_OP */
/* 2872 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2842) */
/* 2874 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2876 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2878 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2880 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2882 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2888 */	0xa,		/* FC_FLOAT */
			0x5b,		/* FC_END */
/* 2890 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2894 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2896 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2900 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2902 */	0x13, 0x0,	/* FC_OP */
/* 2904 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2878) */
/* 2906 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2908 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2910 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2914 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2920 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 2922 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2926 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2928 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2934 */	0x13, 0x0,	/* FC_OP */
/* 2936 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2910) */
/* 2938 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2940 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2942 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2946 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2950 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2952 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2954 */	NdrFcShort( 0xfb14 ),	/* Offset= -1260 (1694) */
/* 2956 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2958 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2962 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2964 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2966 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2968 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2970 */	0x13, 0x0,	/* FC_OP */
/* 2972 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2942) */
/* 2974 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2976 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2978 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2980 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2982 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2986 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2988 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2990 */	NdrFcShort( 0xf5b0 ),	/* Offset= -2640 (350) */
/* 2992 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2994 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2998 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3000 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3002 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3004 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3006 */	0x13, 0x0,	/* FC_OP */
/* 3008 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2978) */
/* 3010 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3012 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3014 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3016 */	NdrFcShort( 0xc ),	/* 12 */
/* 3018 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3024 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3026 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3028 */	NdrFcShort( 0xc ),	/* 12 */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3038 */	0x13, 0x0,	/* FC_OP */
/* 3040 */	NdrFcShort( 0xface ),	/* Offset= -1330 (1710) */
/* 3042 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3044 */	0x0,		/* 0 */
			NdrFcShort( 0xfad5 ),	/* Offset= -1323 (1722) */
			0x5b,		/* FC_END */
/* 3048 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3052 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3054 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3056 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3058 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3060 */	0x13, 0x0,	/* FC_OP */
/* 3062 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (3014) */
/* 3064 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3066 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3068 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3078 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3082 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3084 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3086 */	NdrFcShort( 0xfadc ),	/* Offset= -1316 (1770) */
/* 3088 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3090 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3094 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3096 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3098 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3102 */	0x13, 0x0,	/* FC_OP */
/* 3104 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3068) */
/* 3106 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3108 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3110 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3114 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3120 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3122 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3134 */	0x13, 0x0,	/* FC_OP */
/* 3136 */	NdrFcShort( 0xfab4 ),	/* Offset= -1356 (1780) */
/* 3138 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3140 */	0x0,		/* 0 */
			NdrFcShort( 0xfabb ),	/* Offset= -1349 (1792) */
			0x5b,		/* FC_END */
/* 3144 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3148 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3150 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3156 */	0x13, 0x0,	/* FC_OP */
/* 3158 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (3110) */
/* 3160 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3162 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3164 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3168 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3174 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3176 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3178 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3188 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 3190 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 3192 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3196 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3200 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3202 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3206 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3208 */	0x13, 0x0,	/* FC_OP */
/* 3210 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3164) */
/* 3212 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3214 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3216 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 3218 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3220 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3226 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3228 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 3230 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3240 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 3242 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3244 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3248 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3252 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3254 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3256 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3260 */	0x13, 0x0,	/* FC_OP */
/* 3262 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3216) */
/* 3264 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3266 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3268 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3272 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3278 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3282 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3284 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3286 */	NdrFcShort( 0x20 ),	/* Offset= 32 (3318) */
/* 3288 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3290 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3302) */
/* 3298 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3302 */	
			0x13, 0x0,	/* FC_OP */
/* 3304 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3268) */
/* 3306 */	
			0x13, 0x0,	/* FC_OP */
/* 3308 */	NdrFcShort( 0xf9fe ),	/* Offset= -1538 (1770) */
/* 3310 */	
			0x13, 0x0,	/* FC_OP */
/* 3312 */	NdrFcShort( 0xfe00 ),	/* Offset= -512 (2800) */
/* 3314 */	
			0x13, 0x0,	/* FC_OP */
/* 3316 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3318) */
/* 3318 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3320 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3324) */
/* 3326 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 3328 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 3330 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3332 */	NdrFcShort( 0xf73e ),	/* Offset= -2242 (1090) */
/* 3334 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3336 */	
			0x11, 0x0,	/* FC_RP */
/* 3338 */	NdrFcShort( 0xffec ),	/* Offset= -20 (3318) */
/* 3340 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3342 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (3518) */
/* 3344 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 3346 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3348 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3350 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3354) */
/* 3354 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3356 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3362) */
/* 3364 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3368 */	NdrFcShort( 0xa ),	/* Offset= 10 (3378) */
/* 3370 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3374 */	NdrFcShort( 0x30 ),	/* Offset= 48 (3422) */
/* 3376 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3375) */
/* 3378 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3380 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3384) */
/* 3386 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3388 */	NdrFcShort( 0xffba ),	/* Offset= -70 (3318) */
/* 3390 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3392 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (3318) */
/* 3394 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3396 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (3318) */
/* 3398 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3400 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3410 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3414 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3416 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3418 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (3318) */
/* 3420 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3422 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3434) */
/* 3430 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3434 */	
			0x13, 0x0,	/* FC_OP */
/* 3436 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3400) */
/* 3438 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3440 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0xa ),	/* Offset= 10 (3454) */
/* 3446 */	0x36,		/* FC_POINTER */
			0xe,		/* FC_ENUM32 */
/* 3448 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3450 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (3344) */
/* 3452 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3454 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 3456 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3458 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3466 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3468 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3472 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3474 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3476 */	NdrFcShort( 0xffda ),	/* Offset= -38 (3438) */
/* 3478 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3480 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3482 */	NdrFcShort( 0xc ),	/* 12 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3492) */
/* 3488 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3490 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3492 */	
			0x13, 0x0,	/* FC_OP */
/* 3494 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3458) */
/* 3496 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3500 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3506 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3510 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3512 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3514 */	NdrFcShort( 0xffde ),	/* Offset= -34 (3480) */
/* 3516 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3518 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3530) */
/* 3526 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3528 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3530 */	
			0x13, 0x0,	/* FC_OP */
/* 3532 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (3496) */
/* 3534 */	
			0x11, 0x0,	/* FC_RP */
/* 3536 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3538) */
/* 3538 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3542 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3546 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3548 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3550 */	
			0x11, 0x0,	/* FC_RP */
/* 3552 */	NdrFcShort( 0xf28e ),	/* Offset= -3442 (110) */
/* 3554 */	
			0x12, 0x0,	/* FC_UP */
/* 3556 */	NdrFcShort( 0xffee ),	/* Offset= -18 (3538) */
/* 3558 */	
			0x11, 0x0,	/* FC_RP */
/* 3560 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3562) */
/* 3562 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3566 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3570 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3572 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3574 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3576 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3578 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3580 */	NdrFcShort( 0xf298 ),	/* Offset= -3432 (148) */
/* 3582 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3584 */	
			0x11, 0x0,	/* FC_RP */
/* 3586 */	NdrFcShort( 0xf2d6 ),	/* Offset= -3370 (216) */
/* 3588 */	
			0x11, 0x0,	/* FC_RP */
/* 3590 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3592) */
/* 3592 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3596 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3600 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3602 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3606 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3608 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3610 */	NdrFcShort( 0xf382 ),	/* Offset= -3198 (412) */
/* 3612 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3614 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3616 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3618 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 3620 */	NdrFcLong( 0x1dcb3a0b ),	/* 499857931 */
/* 3624 */	NdrFcShort( 0x33ed ),	/* 13293 */
/* 3626 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 3628 */	0x84,		/* 132 */
			0x70,		/* 112 */
/* 3630 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 3632 */	0x4f,		/* 79 */
			0x79,		/* 121 */
/* 3634 */	0xdb,		/* 219 */
			0xc0,		/* 192 */
/* 3636 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 3638 */	NdrFcShort( 0xf366 ),	/* Offset= -3226 (412) */
/* 3640 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3642 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3644) */
/* 3644 */	
			0x13, 0x0,	/* FC_OP */
/* 3646 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3648) */
/* 3648 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 3650 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3654 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3656 */	
			0x12, 0x0,	/* FC_UP */
/* 3658 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3660) */
/* 3660 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 3662 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3664 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3666 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 3670 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3672 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 3676 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3678 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3677) */
/* 3680 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 3682 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3684 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3688 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (3656) */

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
            },
            {
            HWND_UserSize
            ,HWND_UserMarshal
            ,HWND_UserUnmarshal
            ,HWND_UserFree
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



/* Standard interface: __MIDL_itf_proghelp_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IComponentAuthenticate, ver. 0.0,
   GUID={0xA9889C00,0x6D2B,0x11d3,{0x84,0x96,0x00,0xC0,0x4F,0x79,0xDB,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short IComponentAuthenticate_FormatStringOffsetTable[] =
    {
    0,
    66
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


/* Standard interface: __MIDL_itf_proghelp_0262, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWMDMMetaData, ver. 0.0,
   GUID={0xEC3B0663,0x0951,0x460a,{0x9A,0x80,0x0D,0xCE,0xED,0x3C,0x04,0x3C}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMMetaData_FormatStringOffsetTable[] =
    {
    108,
    162,
    216,
    276
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
    312,
    348,
    384
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
    312,
    348,
    384,
    420,
    462,
    498
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
    312,
    348,
    384,
    420,
    462,
    498,
    528
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
    312,
    564,
    606,
    648,
    690,
    732,
    768
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
    810,
    852,
    888,
    930,
    972,
    1008,
    1050,
    1098,
    1134
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
    810,
    852,
    888,
    930,
    972,
    1008,
    1050,
    1098,
    1134,
    1170,
    1212,
    1266
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
    810,
    852,
    888,
    930,
    972,
    1008,
    1050,
    1098,
    1134,
    1170,
    1212,
    1266,
    1320,
    1356,
    1392,
    1428
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
    810,
    852,
    888,
    930,
    972,
    1008,
    1050,
    1098,
    1134,
    1170,
    1212,
    1266,
    1320,
    1356,
    1392,
    1428,
    1476,
    1518,
    1560,
    1608,
    1656,
    1704
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
    1740,
    1770,
    1800,
    1842,
    1884,
    1926,
    1968,
    2010,
    2052,
    2100
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
    1740,
    1770,
    1800,
    1842,
    1884,
    1926,
    1968,
    2010,
    2052,
    2100,
    1212,
    1266
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
    1740,
    1770,
    1800,
    1842,
    1884,
    1926,
    1968,
    2010,
    2052,
    2100,
    2142
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
    2184,
    2220,
    2256
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
    2184,
    2220,
    2256,
    2286
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
    2184,
    2220,
    2256,
    2286,
    2322,
    2370,
    2418
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
    2466,
    2508,
    2550,
    276,
    2586,
    1008,
    2628,
    2664,
    2700,
    2736,
    2790
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
    2466,
    2508,
    2550,
    276,
    2586,
    1008,
    2628,
    2664,
    2700,
    2736,
    2790,
    2826,
    2868,
    2940,
    2988
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
    2466,
    2508,
    2550,
    276,
    2586,
    1008,
    2628,
    2664,
    2700,
    2736,
    2790,
    2826,
    2868,
    2940,
    2988,
    3030,
    3072,
    3114,
    3156,
    3216
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
    3264,
    3312
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
    3360,
    3408,
    2256,
    3450
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
    312,
    348,
    2256,
    3486,
    3522,
    498,
    3552,
    2010
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
    3582,
    3408,
    2256,
    3630
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
    3666,
    3726,
    3768,
    3816,
    3870
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
    3666,
    3726,
    3768,
    3816,
    3870,
    3918
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
    3666,
    3726,
    3768,
    3816,
    3870,
    3918,
    3990
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
    312,
    2220,
    2550,
    2286,
    4074,
    732,
    2628
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
    4110
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
    4158
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


/* Standard interface: __MIDL_itf_proghelp_0301, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWMDMProgressHelper, ver. 0.0,
   GUID={0x1DCB3A10,0x33ED,0x11d3,{0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC5}} */

#pragma code_seg(".orpc")
static const unsigned short IWMDMProgressHelper_FormatStringOffsetTable[] =
    {
    4200,
    1770
    };

static const MIDL_STUBLESS_PROXY_INFO IWMDMProgressHelper_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgressHelper_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWMDMProgressHelper_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWMDMProgressHelper_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IWMDMProgressHelperProxyVtbl = 
{
    &IWMDMProgressHelper_ProxyInfo,
    &IID_IWMDMProgressHelper,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IWMDMProgressHelper::SetNotification */ ,
    (void *) (INT_PTR) -1 /* IWMDMProgressHelper::Cancel */
};

const CInterfaceStubVtbl _IWMDMProgressHelperStubVtbl =
{
    &IID_IWMDMProgressHelper,
    &IWMDMProgressHelper_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IWMDMOperationHelper, ver. 0.0,
   GUID={0x4A382551,0x1E84,0x40ae,{0xB0,0xB0,0x23,0xFA,0x22,0x1B,0x4C,0x6B}} */

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

const CInterfaceProxyVtbl * _proghelp_ProxyVtblList[] = 
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
    ( CInterfaceProxyVtbl *) &_IWMDMProgressHelperProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDevice2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDeviceManager3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorage2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMOperation2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDeviceManager2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMProgress2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMMetaDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDeviceSessionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorageControl3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMOperation3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorageControl2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMNotificationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorage4ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMProgress3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMRevokedProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMStorage3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWMDMDevice3ProxyVtbl,
    0
};

const CInterfaceStubVtbl * _proghelp_StubVtblList[] = 
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
    ( CInterfaceStubVtbl *) &_IWMDMProgressHelperStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDevice2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDeviceManager3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorage2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMOperation2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDeviceManager2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMProgress2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMMetaDataStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDeviceSessionStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorageControl3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMOperation3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorageControl2StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMNotificationStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorage4StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMProgress3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMRevokedStubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMStorage3StubVtbl,
    ( CInterfaceStubVtbl *) &_IWMDMDevice3StubVtbl,
    0
};

PCInterfaceName const _proghelp_InterfaceNamesList[] = 
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
    "IWMDMProgressHelper",
    "IWMDMDevice2",
    "IWMDeviceManager3",
    "IWMDMStorage2",
    "IWMDMOperation2",
    "IWMDeviceManager2",
    "IWMDMProgress2",
    "IWMDMMetaData",
    "IWMDMDeviceSession",
    "IWMDMStorageControl3",
    "IWMDMOperation3",
    "IWMDMStorageControl2",
    "IWMDMNotification",
    "IWMDMStorage4",
    "IWMDMProgress3",
    "IWMDMRevoked",
    "IWMDMStorage3",
    "IWMDMDevice3",
    0
};


#define _proghelp_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _proghelp, pIID, n)

int __stdcall _proghelp_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _proghelp, 30, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _proghelp, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _proghelp, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _proghelp, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _proghelp, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _proghelp, 30, *pIndex )
    
}

const ExtendedProxyFileInfo proghelp_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _proghelp_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _proghelp_StubVtblList,
    (const PCInterfaceName * ) & _proghelp_InterfaceNamesList,
    0, // no delegation
    & _proghelp_IID_Lookup, 
    30,
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

