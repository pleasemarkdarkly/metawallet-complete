

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for wmrmobjs.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
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

#ifndef __wmrmobjs_h__
#define __wmrmobjs_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMRMProtect_FWD_DEFINED__
#define __IWMRMProtect_FWD_DEFINED__
typedef interface IWMRMProtect IWMRMProtect;
#endif 	/* __IWMRMProtect_FWD_DEFINED__ */


#ifndef __IWMRMHeader_FWD_DEFINED__
#define __IWMRMHeader_FWD_DEFINED__
typedef interface IWMRMHeader IWMRMHeader;
#endif 	/* __IWMRMHeader_FWD_DEFINED__ */


#ifndef __IWMRMHeader2_FWD_DEFINED__
#define __IWMRMHeader2_FWD_DEFINED__
typedef interface IWMRMHeader2 IWMRMHeader2;
#endif 	/* __IWMRMHeader2_FWD_DEFINED__ */


#ifndef __IWMRMCoding_FWD_DEFINED__
#define __IWMRMCoding_FWD_DEFINED__
typedef interface IWMRMCoding IWMRMCoding;
#endif 	/* __IWMRMCoding_FWD_DEFINED__ */


#ifndef __IWMRMKeys_FWD_DEFINED__
#define __IWMRMKeys_FWD_DEFINED__
typedef interface IWMRMKeys IWMRMKeys;
#endif 	/* __IWMRMKeys_FWD_DEFINED__ */


#ifndef __IWMRMKeys2_FWD_DEFINED__
#define __IWMRMKeys2_FWD_DEFINED__
typedef interface IWMRMKeys2 IWMRMKeys2;
#endif 	/* __IWMRMKeys2_FWD_DEFINED__ */


#ifndef __IWMRMLicenseStateData_FWD_DEFINED__
#define __IWMRMLicenseStateData_FWD_DEFINED__
typedef interface IWMRMLicenseStateData IWMRMLicenseStateData;
#endif 	/* __IWMRMLicenseStateData_FWD_DEFINED__ */


#ifndef __IWMRMUplink_FWD_DEFINED__
#define __IWMRMUplink_FWD_DEFINED__
typedef interface IWMRMUplink IWMRMUplink;
#endif 	/* __IWMRMUplink_FWD_DEFINED__ */


#ifndef __IWMRMUplinkCollection_FWD_DEFINED__
#define __IWMRMUplinkCollection_FWD_DEFINED__
typedef interface IWMRMUplinkCollection IWMRMUplinkCollection;
#endif 	/* __IWMRMUplinkCollection_FWD_DEFINED__ */


#ifndef __IWMRMChallenge_FWD_DEFINED__
#define __IWMRMChallenge_FWD_DEFINED__
typedef interface IWMRMChallenge IWMRMChallenge;
#endif 	/* __IWMRMChallenge_FWD_DEFINED__ */


#ifndef __IWMRMChallenge2_FWD_DEFINED__
#define __IWMRMChallenge2_FWD_DEFINED__
typedef interface IWMRMChallenge2 IWMRMChallenge2;
#endif 	/* __IWMRMChallenge2_FWD_DEFINED__ */


#ifndef __IWMRMChallenge3_FWD_DEFINED__
#define __IWMRMChallenge3_FWD_DEFINED__
typedef interface IWMRMChallenge3 IWMRMChallenge3;
#endif 	/* __IWMRMChallenge3_FWD_DEFINED__ */


#ifndef __IWMRMLicGen_FWD_DEFINED__
#define __IWMRMLicGen_FWD_DEFINED__
typedef interface IWMRMLicGen IWMRMLicGen;
#endif 	/* __IWMRMLicGen_FWD_DEFINED__ */


#ifndef __IWMRMLicGen2_FWD_DEFINED__
#define __IWMRMLicGen2_FWD_DEFINED__
typedef interface IWMRMLicGen2 IWMRMLicGen2;
#endif 	/* __IWMRMLicGen2_FWD_DEFINED__ */


#ifndef __IWMRMLicGen3_FWD_DEFINED__
#define __IWMRMLicGen3_FWD_DEFINED__
typedef interface IWMRMLicGen3 IWMRMLicGen3;
#endif 	/* __IWMRMLicGen3_FWD_DEFINED__ */


#ifndef __IWMRMRights_FWD_DEFINED__
#define __IWMRMRights_FWD_DEFINED__
typedef interface IWMRMRights IWMRMRights;
#endif 	/* __IWMRMRights_FWD_DEFINED__ */


#ifndef __IWMRMRights2_FWD_DEFINED__
#define __IWMRMRights2_FWD_DEFINED__
typedef interface IWMRMRights2 IWMRMRights2;
#endif 	/* __IWMRMRights2_FWD_DEFINED__ */


#ifndef __IWMRMRights3_FWD_DEFINED__
#define __IWMRMRights3_FWD_DEFINED__
typedef interface IWMRMRights3 IWMRMRights3;
#endif 	/* __IWMRMRights3_FWD_DEFINED__ */


#ifndef __IWMRMResponse_FWD_DEFINED__
#define __IWMRMResponse_FWD_DEFINED__
typedef interface IWMRMResponse IWMRMResponse;
#endif 	/* __IWMRMResponse_FWD_DEFINED__ */


#ifndef __IWMRMTools_FWD_DEFINED__
#define __IWMRMTools_FWD_DEFINED__
typedef interface IWMRMTools IWMRMTools;
#endif 	/* __IWMRMTools_FWD_DEFINED__ */


#ifndef __IWMRMHeaderSigning_FWD_DEFINED__
#define __IWMRMHeaderSigning_FWD_DEFINED__
typedef interface IWMRMHeaderSigning IWMRMHeaderSigning;
#endif 	/* __IWMRMHeaderSigning_FWD_DEFINED__ */


#ifndef __IWMRMMetering_FWD_DEFINED__
#define __IWMRMMetering_FWD_DEFINED__
typedef interface IWMRMMetering IWMRMMetering;
#endif 	/* __IWMRMMetering_FWD_DEFINED__ */


#ifndef __IWMRMMeteringData_FWD_DEFINED__
#define __IWMRMMeteringData_FWD_DEFINED__
typedef interface IWMRMMeteringData IWMRMMeteringData;
#endif 	/* __IWMRMMeteringData_FWD_DEFINED__ */


#ifndef __IWMRMMeteringContentCollection_FWD_DEFINED__
#define __IWMRMMeteringContentCollection_FWD_DEFINED__
typedef interface IWMRMMeteringContentCollection IWMRMMeteringContentCollection;
#endif 	/* __IWMRMMeteringContentCollection_FWD_DEFINED__ */


#ifndef __IWMRMMeteringContent_FWD_DEFINED__
#define __IWMRMMeteringContent_FWD_DEFINED__
typedef interface IWMRMMeteringContent IWMRMMeteringContent;
#endif 	/* __IWMRMMeteringContent_FWD_DEFINED__ */


#ifndef __IWMRMMeteringActionCollection_FWD_DEFINED__
#define __IWMRMMeteringActionCollection_FWD_DEFINED__
typedef interface IWMRMMeteringActionCollection IWMRMMeteringActionCollection;
#endif 	/* __IWMRMMeteringActionCollection_FWD_DEFINED__ */


#ifndef __IWMRMMeteringAction_FWD_DEFINED__
#define __IWMRMMeteringAction_FWD_DEFINED__
typedef interface IWMRMMeteringAction IWMRMMeteringAction;
#endif 	/* __IWMRMMeteringAction_FWD_DEFINED__ */


#ifndef __IWMRMRestrictions_FWD_DEFINED__
#define __IWMRMRestrictions_FWD_DEFINED__
typedef interface IWMRMRestrictions IWMRMRestrictions;
#endif 	/* __IWMRMRestrictions_FWD_DEFINED__ */


#ifndef __IWMRMLicenseRevocationAcknowledger_FWD_DEFINED__
#define __IWMRMLicenseRevocationAcknowledger_FWD_DEFINED__
typedef interface IWMRMLicenseRevocationAcknowledger IWMRMLicenseRevocationAcknowledger;
#endif 	/* __IWMRMLicenseRevocationAcknowledger_FWD_DEFINED__ */


#ifndef __IWMRMLicenseRevocationChallenge_FWD_DEFINED__
#define __IWMRMLicenseRevocationChallenge_FWD_DEFINED__
typedef interface IWMRMLicenseRevocationChallenge IWMRMLicenseRevocationChallenge;
#endif 	/* __IWMRMLicenseRevocationChallenge_FWD_DEFINED__ */


#ifndef __IWMRMLicenseRevocationResponse_FWD_DEFINED__
#define __IWMRMLicenseRevocationResponse_FWD_DEFINED__
typedef interface IWMRMLicenseRevocationResponse IWMRMLicenseRevocationResponse;
#endif 	/* __IWMRMLicenseRevocationResponse_FWD_DEFINED__ */


#ifndef __WMRMProtect_FWD_DEFINED__
#define __WMRMProtect_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMProtect WMRMProtect;
#else
typedef struct WMRMProtect WMRMProtect;
#endif /* __cplusplus */

#endif 	/* __WMRMProtect_FWD_DEFINED__ */


#ifndef __WMRMHeader_FWD_DEFINED__
#define __WMRMHeader_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMHeader WMRMHeader;
#else
typedef struct WMRMHeader WMRMHeader;
#endif /* __cplusplus */

#endif 	/* __WMRMHeader_FWD_DEFINED__ */


#ifndef __WMRMCoding_FWD_DEFINED__
#define __WMRMCoding_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMCoding WMRMCoding;
#else
typedef struct WMRMCoding WMRMCoding;
#endif /* __cplusplus */

#endif 	/* __WMRMCoding_FWD_DEFINED__ */


#ifndef __WMRMKeys_FWD_DEFINED__
#define __WMRMKeys_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMKeys WMRMKeys;
#else
typedef struct WMRMKeys WMRMKeys;
#endif /* __cplusplus */

#endif 	/* __WMRMKeys_FWD_DEFINED__ */


#ifndef __WMRMChallenge_FWD_DEFINED__
#define __WMRMChallenge_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMChallenge WMRMChallenge;
#else
typedef struct WMRMChallenge WMRMChallenge;
#endif /* __cplusplus */

#endif 	/* __WMRMChallenge_FWD_DEFINED__ */


#ifndef __WMRMLicGen_FWD_DEFINED__
#define __WMRMLicGen_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMLicGen WMRMLicGen;
#else
typedef struct WMRMLicGen WMRMLicGen;
#endif /* __cplusplus */

#endif 	/* __WMRMLicGen_FWD_DEFINED__ */


#ifndef __WMRMRights_FWD_DEFINED__
#define __WMRMRights_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMRights WMRMRights;
#else
typedef struct WMRMRights WMRMRights;
#endif /* __cplusplus */

#endif 	/* __WMRMRights_FWD_DEFINED__ */


#ifndef __WMRMResponse_FWD_DEFINED__
#define __WMRMResponse_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMResponse WMRMResponse;
#else
typedef struct WMRMResponse WMRMResponse;
#endif /* __cplusplus */

#endif 	/* __WMRMResponse_FWD_DEFINED__ */


#ifndef __WMRMTools_FWD_DEFINED__
#define __WMRMTools_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMTools WMRMTools;
#else
typedef struct WMRMTools WMRMTools;
#endif /* __cplusplus */

#endif 	/* __WMRMTools_FWD_DEFINED__ */


#ifndef __WMRMMetering_FWD_DEFINED__
#define __WMRMMetering_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMMetering WMRMMetering;
#else
typedef struct WMRMMetering WMRMMetering;
#endif /* __cplusplus */

#endif 	/* __WMRMMetering_FWD_DEFINED__ */


#ifndef __WMRMRestrictions_FWD_DEFINED__
#define __WMRMRestrictions_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMRestrictions WMRMRestrictions;
#else
typedef struct WMRMRestrictions WMRMRestrictions;
#endif /* __cplusplus */

#endif 	/* __WMRMRestrictions_FWD_DEFINED__ */


#ifndef __WMRMLicenseRevocationAcknowledger_FWD_DEFINED__
#define __WMRMLicenseRevocationAcknowledger_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMLicenseRevocationAcknowledger WMRMLicenseRevocationAcknowledger;
#else
typedef struct WMRMLicenseRevocationAcknowledger WMRMLicenseRevocationAcknowledger;
#endif /* __cplusplus */

#endif 	/* __WMRMLicenseRevocationAcknowledger_FWD_DEFINED__ */


#ifndef __WMRMLicenseRevocationChallenge_FWD_DEFINED__
#define __WMRMLicenseRevocationChallenge_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMLicenseRevocationChallenge WMRMLicenseRevocationChallenge;
#else
typedef struct WMRMLicenseRevocationChallenge WMRMLicenseRevocationChallenge;
#endif /* __cplusplus */

#endif 	/* __WMRMLicenseRevocationChallenge_FWD_DEFINED__ */


#ifndef __WMRMLicenseRevocationResponse_FWD_DEFINED__
#define __WMRMLicenseRevocationResponse_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMRMLicenseRevocationResponse WMRMLicenseRevocationResponse;
#else
typedef struct WMRMLicenseRevocationResponse WMRMLicenseRevocationResponse;
#endif /* __cplusplus */

#endif 	/* __WMRMLicenseRevocationResponse_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_wmrmobjs_0000 */
/* [local] */ 

//=========================================================================
//
// Microsoft Windows Media Technologies
// Copyright (C) Microsoft Corporation.  All Rights Reserved.
//
//=========================================================================
///////////////////////////////////////////////////////////////////////////
//
// These are the valid cert types for IWMRMKeys2::GetCertificate
//
static const WCHAR g_wszLSHeaderSigningCert[]  = L"LSHeaderSigningCert";
static const WCHAR g_wszLSLicenseSigningCert[] = L"LSLicenseSigningCert";
static const WCHAR g_wszLSRootCert[]           = L"LSRootCert";
//
///////////////////////////////////////////////////////////////////////////






typedef 
enum WMRM_RESTRICTION_TYPE
    {	WMRM_UNCOMPRESSEDDIGITALVIDEO	= 0x1,
	WMRM_COMPRESSEDDIGITALVIDEO	= 0x2,
	WMRM_ANALOGVIDEO	= 0x3,
	WMRM_COMPRESSEDDIGITALAUDIO	= 0x4,
	WMRM_UNCOMPRESSEDDIGITALAUDIO	= 0x5,
	WMRM_COPY	= 0x6
    } 	WMRM_RESTRICTION_TYPE;

typedef 
enum WMRM_LICENSE_STATE_CATEGORY
    {	WMRM_LICENSE_STATE_NORIGHT	= 0,
	WMRM_LICENSE_STATE_UNLIM	= WMRM_LICENSE_STATE_NORIGHT + 1,
	WMRM_LICENSE_STATE_COUNT	= WMRM_LICENSE_STATE_UNLIM + 1,
	WMRM_LICENSE_STATE_FROM	= WMRM_LICENSE_STATE_COUNT + 1,
	WMRM_LICENSE_STATE_UNTIL	= WMRM_LICENSE_STATE_FROM + 1,
	WMRM_LICENSE_STATE_FROM_UNTIL	= WMRM_LICENSE_STATE_UNTIL + 1,
	WMRM_LICENSE_STATE_COUNT_FROM	= WMRM_LICENSE_STATE_FROM_UNTIL + 1,
	WMRM_LICENSE_STATE_COUNT_UNTIL	= WMRM_LICENSE_STATE_COUNT_FROM + 1,
	WMRM_LICENSE_STATE_COUNT_FROM_UNTIL	= WMRM_LICENSE_STATE_COUNT_UNTIL + 1,
	WMRM_LICENSE_STATE_EXPIRATION_AFTER_FIRSTUSE	= WMRM_LICENSE_STATE_COUNT_FROM_UNTIL + 1
    } 	WMRM_LICENSE_STATE_CATEGORY;



extern RPC_IF_HANDLE __MIDL_itf_wmrmobjs_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmrmobjs_0000_v0_0_s_ifspec;

#ifndef __IWMRMProtect_INTERFACE_DEFINED__
#define __IWMRMProtect_INTERFACE_DEFINED__

/* interface IWMRMProtect */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMProtect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B888AAC-5761-4201-959E-62B9EA9406C4")
    IWMRMProtect : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InputFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InputFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_V1LicenseAcqURL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_V1LicenseAcqURL( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Key( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Header( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Header( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProtectFile( 
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteFile( 
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_V1KeyID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_V1KeyID( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMProtectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMProtect * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMProtect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMProtect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMProtect * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMProtect * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMProtect * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMProtect * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputFile )( 
            IWMRMProtect * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputFile )( 
            IWMRMProtect * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_V1LicenseAcqURL )( 
            IWMRMProtect * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_V1LicenseAcqURL )( 
            IWMRMProtect * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )( 
            IWMRMProtect * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Key )( 
            IWMRMProtect * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            IWMRMProtect * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Header )( 
            IWMRMProtect * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProtectFile )( 
            IWMRMProtect * This,
            /* [in] */ BSTR bstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteFile )( 
            IWMRMProtect * This,
            /* [in] */ BSTR bstrFileName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_V1KeyID )( 
            IWMRMProtect * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_V1KeyID )( 
            IWMRMProtect * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IWMRMProtectVtbl;

    interface IWMRMProtect
    {
        CONST_VTBL struct IWMRMProtectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMProtect_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMProtect_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMProtect_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMProtect_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMProtect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMProtect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMProtect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMProtect_get_InputFile(This,pVal)	\
    (This)->lpVtbl -> get_InputFile(This,pVal)

#define IWMRMProtect_put_InputFile(This,newVal)	\
    (This)->lpVtbl -> put_InputFile(This,newVal)

#define IWMRMProtect_get_V1LicenseAcqURL(This,pVal)	\
    (This)->lpVtbl -> get_V1LicenseAcqURL(This,pVal)

#define IWMRMProtect_put_V1LicenseAcqURL(This,newVal)	\
    (This)->lpVtbl -> put_V1LicenseAcqURL(This,newVal)

#define IWMRMProtect_get_Key(This,pVal)	\
    (This)->lpVtbl -> get_Key(This,pVal)

#define IWMRMProtect_put_Key(This,newVal)	\
    (This)->lpVtbl -> put_Key(This,newVal)

#define IWMRMProtect_get_Header(This,pVal)	\
    (This)->lpVtbl -> get_Header(This,pVal)

#define IWMRMProtect_put_Header(This,newVal)	\
    (This)->lpVtbl -> put_Header(This,newVal)

#define IWMRMProtect_ProtectFile(This,bstrFileName)	\
    (This)->lpVtbl -> ProtectFile(This,bstrFileName)

#define IWMRMProtect_WriteFile(This,bstrFileName)	\
    (This)->lpVtbl -> WriteFile(This,bstrFileName)

#define IWMRMProtect_get_V1KeyID(This,pVal)	\
    (This)->lpVtbl -> get_V1KeyID(This,pVal)

#define IWMRMProtect_put_V1KeyID(This,newVal)	\
    (This)->lpVtbl -> put_V1KeyID(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_get_InputFile_Proxy( 
    IWMRMProtect * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMProtect_get_InputFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_put_InputFile_Proxy( 
    IWMRMProtect * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMProtect_put_InputFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_get_V1LicenseAcqURL_Proxy( 
    IWMRMProtect * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMProtect_get_V1LicenseAcqURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_put_V1LicenseAcqURL_Proxy( 
    IWMRMProtect * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMProtect_put_V1LicenseAcqURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_get_Key_Proxy( 
    IWMRMProtect * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMProtect_get_Key_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_put_Key_Proxy( 
    IWMRMProtect * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMProtect_put_Key_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_get_Header_Proxy( 
    IWMRMProtect * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMProtect_get_Header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_put_Header_Proxy( 
    IWMRMProtect * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMProtect_put_Header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_ProtectFile_Proxy( 
    IWMRMProtect * This,
    /* [in] */ BSTR bstrFileName);


void __RPC_STUB IWMRMProtect_ProtectFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_WriteFile_Proxy( 
    IWMRMProtect * This,
    /* [in] */ BSTR bstrFileName);


void __RPC_STUB IWMRMProtect_WriteFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_get_V1KeyID_Proxy( 
    IWMRMProtect * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMProtect_get_V1KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMProtect_put_V1KeyID_Proxy( 
    IWMRMProtect * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMProtect_put_V1KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMProtect_INTERFACE_DEFINED__ */


#ifndef __IWMRMHeader_INTERFACE_DEFINED__
#define __IWMRMHeader_INTERFACE_DEFINED__

/* interface IWMRMHeader */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMHeader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B4ECB7A-5F65-4C65-B509-F0BAA2043BC9")
    IWMRMHeader : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Header( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Header( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContentID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ContentID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IndividualizedVersion( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IndividualizedVersion( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseAcqURL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LicenseAcqURL( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attribute( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Attribute( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sign( 
            /* [in] */ BSTR bstrPrivKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Verify( 
            /* [in] */ BSTR bstrPubKey,
            /* [retval][out] */ LONG *plResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCheckSum( 
            /* [in] */ BSTR bstrKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMHeaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMHeader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMHeader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMHeader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMHeader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMHeader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMHeader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMHeader * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            IWMRMHeader * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Header )( 
            IWMRMHeader * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IWMRMHeader * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyID )( 
            IWMRMHeader * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyID )( 
            IWMRMHeader * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentID )( 
            IWMRMHeader * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContentID )( 
            IWMRMHeader * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IndividualizedVersion )( 
            IWMRMHeader * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IndividualizedVersion )( 
            IWMRMHeader * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseAcqURL )( 
            IWMRMHeader * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseAcqURL )( 
            IWMRMHeader * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IWMRMHeader * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attribute )( 
            IWMRMHeader * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            IWMRMHeader * This,
            /* [in] */ BSTR bstrPrivKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            IWMRMHeader * This,
            /* [in] */ BSTR bstrPubKey,
            /* [retval][out] */ LONG *plResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCheckSum )( 
            IWMRMHeader * This,
            /* [in] */ BSTR bstrKey);
        
        END_INTERFACE
    } IWMRMHeaderVtbl;

    interface IWMRMHeader
    {
        CONST_VTBL struct IWMRMHeaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMHeader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMHeader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMHeader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMHeader_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMHeader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMHeader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMHeader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMHeader_get_Header(This,pVal)	\
    (This)->lpVtbl -> get_Header(This,pVal)

#define IWMRMHeader_put_Header(This,newVal)	\
    (This)->lpVtbl -> put_Header(This,newVal)

#define IWMRMHeader_get_Version(This,pVal)	\
    (This)->lpVtbl -> get_Version(This,pVal)

#define IWMRMHeader_get_KeyID(This,pVal)	\
    (This)->lpVtbl -> get_KeyID(This,pVal)

#define IWMRMHeader_put_KeyID(This,newVal)	\
    (This)->lpVtbl -> put_KeyID(This,newVal)

#define IWMRMHeader_get_ContentID(This,pVal)	\
    (This)->lpVtbl -> get_ContentID(This,pVal)

#define IWMRMHeader_put_ContentID(This,newVal)	\
    (This)->lpVtbl -> put_ContentID(This,newVal)

#define IWMRMHeader_get_IndividualizedVersion(This,pVal)	\
    (This)->lpVtbl -> get_IndividualizedVersion(This,pVal)

#define IWMRMHeader_put_IndividualizedVersion(This,newVal)	\
    (This)->lpVtbl -> put_IndividualizedVersion(This,newVal)

#define IWMRMHeader_get_LicenseAcqURL(This,pVal)	\
    (This)->lpVtbl -> get_LicenseAcqURL(This,pVal)

#define IWMRMHeader_put_LicenseAcqURL(This,newVal)	\
    (This)->lpVtbl -> put_LicenseAcqURL(This,newVal)

#define IWMRMHeader_get_Attribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_Attribute(This,bstrName,pVal)

#define IWMRMHeader_put_Attribute(This,bstrName,newVal)	\
    (This)->lpVtbl -> put_Attribute(This,bstrName,newVal)

#define IWMRMHeader_Sign(This,bstrPrivKey)	\
    (This)->lpVtbl -> Sign(This,bstrPrivKey)

#define IWMRMHeader_Verify(This,bstrPubKey,plResult)	\
    (This)->lpVtbl -> Verify(This,bstrPubKey,plResult)

#define IWMRMHeader_SetCheckSum(This,bstrKey)	\
    (This)->lpVtbl -> SetCheckSum(This,bstrKey)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_get_Header_Proxy( 
    IWMRMHeader * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMHeader_get_Header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_put_Header_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMHeader_put_Header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_get_Version_Proxy( 
    IWMRMHeader * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMHeader_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_get_KeyID_Proxy( 
    IWMRMHeader * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMHeader_get_KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_put_KeyID_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMHeader_put_KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_get_ContentID_Proxy( 
    IWMRMHeader * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMHeader_get_ContentID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_put_ContentID_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMHeader_put_ContentID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_get_IndividualizedVersion_Proxy( 
    IWMRMHeader * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMHeader_get_IndividualizedVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_put_IndividualizedVersion_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMHeader_put_IndividualizedVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_get_LicenseAcqURL_Proxy( 
    IWMRMHeader * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMHeader_get_LicenseAcqURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_put_LicenseAcqURL_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMHeader_put_LicenseAcqURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_get_Attribute_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMHeader_get_Attribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_put_Attribute_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMHeader_put_Attribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_Sign_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR bstrPrivKey);


void __RPC_STUB IWMRMHeader_Sign_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_Verify_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR bstrPubKey,
    /* [retval][out] */ LONG *plResult);


void __RPC_STUB IWMRMHeader_Verify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMHeader_SetCheckSum_Proxy( 
    IWMRMHeader * This,
    /* [in] */ BSTR bstrKey);


void __RPC_STUB IWMRMHeader_SetCheckSum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMHeader_INTERFACE_DEFINED__ */


#ifndef __IWMRMHeader2_INTERFACE_DEFINED__
#define __IWMRMHeader2_INTERFACE_DEFINED__

/* interface IWMRMHeader2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMHeader2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44F7DFDA-C7D1-4c7f-83D2-73BA3EAED9FA")
    IWMRMHeader2 : public IWMRMHeader
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddUplink( 
            /* [in] */ BSTR uplinkKid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveUplink( 
            /* [in] */ BSTR uplinkKid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMHeader2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMHeader2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMHeader2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMHeader2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMHeader2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMHeader2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMHeader2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMHeader2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            IWMRMHeader2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Header )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IWMRMHeader2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyID )( 
            IWMRMHeader2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyID )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentID )( 
            IWMRMHeader2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContentID )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IndividualizedVersion )( 
            IWMRMHeader2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IndividualizedVersion )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseAcqURL )( 
            IWMRMHeader2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LicenseAcqURL )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attribute )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR bstrPrivKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR bstrPubKey,
            /* [retval][out] */ LONG *plResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCheckSum )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddUplink )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR uplinkKid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveUplink )( 
            IWMRMHeader2 * This,
            /* [in] */ BSTR uplinkKid);
        
        END_INTERFACE
    } IWMRMHeader2Vtbl;

    interface IWMRMHeader2
    {
        CONST_VTBL struct IWMRMHeader2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMHeader2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMHeader2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMHeader2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMHeader2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMHeader2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMHeader2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMHeader2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMHeader2_get_Header(This,pVal)	\
    (This)->lpVtbl -> get_Header(This,pVal)

#define IWMRMHeader2_put_Header(This,newVal)	\
    (This)->lpVtbl -> put_Header(This,newVal)

#define IWMRMHeader2_get_Version(This,pVal)	\
    (This)->lpVtbl -> get_Version(This,pVal)

#define IWMRMHeader2_get_KeyID(This,pVal)	\
    (This)->lpVtbl -> get_KeyID(This,pVal)

#define IWMRMHeader2_put_KeyID(This,newVal)	\
    (This)->lpVtbl -> put_KeyID(This,newVal)

#define IWMRMHeader2_get_ContentID(This,pVal)	\
    (This)->lpVtbl -> get_ContentID(This,pVal)

#define IWMRMHeader2_put_ContentID(This,newVal)	\
    (This)->lpVtbl -> put_ContentID(This,newVal)

#define IWMRMHeader2_get_IndividualizedVersion(This,pVal)	\
    (This)->lpVtbl -> get_IndividualizedVersion(This,pVal)

#define IWMRMHeader2_put_IndividualizedVersion(This,newVal)	\
    (This)->lpVtbl -> put_IndividualizedVersion(This,newVal)

#define IWMRMHeader2_get_LicenseAcqURL(This,pVal)	\
    (This)->lpVtbl -> get_LicenseAcqURL(This,pVal)

#define IWMRMHeader2_put_LicenseAcqURL(This,newVal)	\
    (This)->lpVtbl -> put_LicenseAcqURL(This,newVal)

#define IWMRMHeader2_get_Attribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_Attribute(This,bstrName,pVal)

#define IWMRMHeader2_put_Attribute(This,bstrName,newVal)	\
    (This)->lpVtbl -> put_Attribute(This,bstrName,newVal)

#define IWMRMHeader2_Sign(This,bstrPrivKey)	\
    (This)->lpVtbl -> Sign(This,bstrPrivKey)

#define IWMRMHeader2_Verify(This,bstrPubKey,plResult)	\
    (This)->lpVtbl -> Verify(This,bstrPubKey,plResult)

#define IWMRMHeader2_SetCheckSum(This,bstrKey)	\
    (This)->lpVtbl -> SetCheckSum(This,bstrKey)


#define IWMRMHeader2_AddUplink(This,uplinkKid)	\
    (This)->lpVtbl -> AddUplink(This,uplinkKid)

#define IWMRMHeader2_RemoveUplink(This,uplinkKid)	\
    (This)->lpVtbl -> RemoveUplink(This,uplinkKid)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMHeader2_AddUplink_Proxy( 
    IWMRMHeader2 * This,
    /* [in] */ BSTR uplinkKid);


void __RPC_STUB IWMRMHeader2_AddUplink_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMHeader2_RemoveUplink_Proxy( 
    IWMRMHeader2 * This,
    /* [in] */ BSTR uplinkKid);


void __RPC_STUB IWMRMHeader2_RemoveUplink_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMHeader2_INTERFACE_DEFINED__ */


#ifndef __IWMRMCoding_INTERFACE_DEFINED__
#define __IWMRMCoding_INTERFACE_DEFINED__

/* interface IWMRMCoding */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMRMCoding;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C39DDC6-E5C1-40A8-B208-17B5E4006C83")
    IWMRMCoding : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Encode( 
            /* [size_is][in] */ BYTE *pbData,
            /* [in] */ LONG lSize,
            /* [retval][out] */ BSTR *pbstrEncodedData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ BSTR bstrEncodedData,
            /* [out] */ LONG *plSize,
            /* [size_is][size_is][out] */ BYTE **ppbData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMCodingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMCoding * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMCoding * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMCoding * This);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            IWMRMCoding * This,
            /* [size_is][in] */ BYTE *pbData,
            /* [in] */ LONG lSize,
            /* [retval][out] */ BSTR *pbstrEncodedData);
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            IWMRMCoding * This,
            /* [in] */ BSTR bstrEncodedData,
            /* [out] */ LONG *plSize,
            /* [size_is][size_is][out] */ BYTE **ppbData);
        
        END_INTERFACE
    } IWMRMCodingVtbl;

    interface IWMRMCoding
    {
        CONST_VTBL struct IWMRMCodingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMCoding_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMCoding_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMCoding_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMCoding_Encode(This,pbData,lSize,pbstrEncodedData)	\
    (This)->lpVtbl -> Encode(This,pbData,lSize,pbstrEncodedData)

#define IWMRMCoding_Decode(This,bstrEncodedData,plSize,ppbData)	\
    (This)->lpVtbl -> Decode(This,bstrEncodedData,plSize,ppbData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMRMCoding_Encode_Proxy( 
    IWMRMCoding * This,
    /* [size_is][in] */ BYTE *pbData,
    /* [in] */ LONG lSize,
    /* [retval][out] */ BSTR *pbstrEncodedData);


void __RPC_STUB IWMRMCoding_Encode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMRMCoding_Decode_Proxy( 
    IWMRMCoding * This,
    /* [in] */ BSTR bstrEncodedData,
    /* [out] */ LONG *plSize,
    /* [size_is][size_is][out] */ BYTE **ppbData);


void __RPC_STUB IWMRMCoding_Decode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMCoding_INTERFACE_DEFINED__ */


#ifndef __IWMRMKeys_INTERFACE_DEFINED__
#define __IWMRMKeys_INTERFACE_DEFINED__

/* interface IWMRMKeys */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMKeys;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44B557F6-BCB6-4BAE-9CA9-EC81D6DAAB45")
    IWMRMKeys : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateSeed( 
            /* [retval][out] */ BSTR *pbstrSeed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateKeyID( 
            /* [retval][out] */ BSTR *pbstrKeyID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Seed( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Seed( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateKey( 
            /* [retval][out] */ BSTR *pbstrKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateSigningKeys( 
            /* [out][in] */ VARIANT *pvarPrivKey,
            /* [out][in] */ VARIANT *pvarPubKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMKeysVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMKeys * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMKeys * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMKeys * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMKeys * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMKeys * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMKeys * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMKeys * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateSeed )( 
            IWMRMKeys * This,
            /* [retval][out] */ BSTR *pbstrSeed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyID )( 
            IWMRMKeys * This,
            /* [retval][out] */ BSTR *pbstrKeyID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Seed )( 
            IWMRMKeys * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Seed )( 
            IWMRMKeys * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyID )( 
            IWMRMKeys * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyID )( 
            IWMRMKeys * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKey )( 
            IWMRMKeys * This,
            /* [retval][out] */ BSTR *pbstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateSigningKeys )( 
            IWMRMKeys * This,
            /* [out][in] */ VARIANT *pvarPrivKey,
            /* [out][in] */ VARIANT *pvarPubKey);
        
        END_INTERFACE
    } IWMRMKeysVtbl;

    interface IWMRMKeys
    {
        CONST_VTBL struct IWMRMKeysVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMKeys_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMKeys_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMKeys_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMKeys_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMKeys_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMKeys_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMKeys_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMKeys_GenerateSeed(This,pbstrSeed)	\
    (This)->lpVtbl -> GenerateSeed(This,pbstrSeed)

#define IWMRMKeys_GenerateKeyID(This,pbstrKeyID)	\
    (This)->lpVtbl -> GenerateKeyID(This,pbstrKeyID)

#define IWMRMKeys_get_Seed(This,pVal)	\
    (This)->lpVtbl -> get_Seed(This,pVal)

#define IWMRMKeys_put_Seed(This,newVal)	\
    (This)->lpVtbl -> put_Seed(This,newVal)

#define IWMRMKeys_get_KeyID(This,pVal)	\
    (This)->lpVtbl -> get_KeyID(This,pVal)

#define IWMRMKeys_put_KeyID(This,newVal)	\
    (This)->lpVtbl -> put_KeyID(This,newVal)

#define IWMRMKeys_GenerateKey(This,pbstrKey)	\
    (This)->lpVtbl -> GenerateKey(This,pbstrKey)

#define IWMRMKeys_GenerateSigningKeys(This,pvarPrivKey,pvarPubKey)	\
    (This)->lpVtbl -> GenerateSigningKeys(This,pvarPrivKey,pvarPubKey)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_GenerateSeed_Proxy( 
    IWMRMKeys * This,
    /* [retval][out] */ BSTR *pbstrSeed);


void __RPC_STUB IWMRMKeys_GenerateSeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_GenerateKeyID_Proxy( 
    IWMRMKeys * This,
    /* [retval][out] */ BSTR *pbstrKeyID);


void __RPC_STUB IWMRMKeys_GenerateKeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_get_Seed_Proxy( 
    IWMRMKeys * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMKeys_get_Seed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_put_Seed_Proxy( 
    IWMRMKeys * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMKeys_put_Seed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_get_KeyID_Proxy( 
    IWMRMKeys * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMKeys_get_KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_put_KeyID_Proxy( 
    IWMRMKeys * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMKeys_put_KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_GenerateKey_Proxy( 
    IWMRMKeys * This,
    /* [retval][out] */ BSTR *pbstrKey);


void __RPC_STUB IWMRMKeys_GenerateKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMKeys_GenerateSigningKeys_Proxy( 
    IWMRMKeys * This,
    /* [out][in] */ VARIANT *pvarPrivKey,
    /* [out][in] */ VARIANT *pvarPubKey);


void __RPC_STUB IWMRMKeys_GenerateSigningKeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMKeys_INTERFACE_DEFINED__ */


#ifndef __IWMRMKeys2_INTERFACE_DEFINED__
#define __IWMRMKeys2_INTERFACE_DEFINED__

/* interface IWMRMKeys2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMKeys2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9C7F23FA-8A18-4d7b-A7F0-9BF113B91DBF")
    IWMRMKeys2 : public IWMRMKeys
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateSigningKeysEx( 
            /* [out][in] */ VARIANT *pvarPrivKey,
            /* [out][in] */ VARIANT *pvarPubKey,
            /* [out][in] */ VARIANT *pvarCert) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCertificate( 
            /* [in] */ BSTR bstrCertType,
            /* [retval][out] */ BSTR *pbstrCert) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateKeyEx( 
            /* [in] */ LONG lReqLen,
            /* [retval][out] */ BSTR *pbstrKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMKeys2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMKeys2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMKeys2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMKeys2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMKeys2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMKeys2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMKeys2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMKeys2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateSeed )( 
            IWMRMKeys2 * This,
            /* [retval][out] */ BSTR *pbstrSeed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyID )( 
            IWMRMKeys2 * This,
            /* [retval][out] */ BSTR *pbstrKeyID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Seed )( 
            IWMRMKeys2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Seed )( 
            IWMRMKeys2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyID )( 
            IWMRMKeys2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyID )( 
            IWMRMKeys2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKey )( 
            IWMRMKeys2 * This,
            /* [retval][out] */ BSTR *pbstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateSigningKeys )( 
            IWMRMKeys2 * This,
            /* [out][in] */ VARIANT *pvarPrivKey,
            /* [out][in] */ VARIANT *pvarPubKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateSigningKeysEx )( 
            IWMRMKeys2 * This,
            /* [out][in] */ VARIANT *pvarPrivKey,
            /* [out][in] */ VARIANT *pvarPubKey,
            /* [out][in] */ VARIANT *pvarCert);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCertificate )( 
            IWMRMKeys2 * This,
            /* [in] */ BSTR bstrCertType,
            /* [retval][out] */ BSTR *pbstrCert);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyEx )( 
            IWMRMKeys2 * This,
            /* [in] */ LONG lReqLen,
            /* [retval][out] */ BSTR *pbstrKey);
        
        END_INTERFACE
    } IWMRMKeys2Vtbl;

    interface IWMRMKeys2
    {
        CONST_VTBL struct IWMRMKeys2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMKeys2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMKeys2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMKeys2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMKeys2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMKeys2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMKeys2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMKeys2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMKeys2_GenerateSeed(This,pbstrSeed)	\
    (This)->lpVtbl -> GenerateSeed(This,pbstrSeed)

#define IWMRMKeys2_GenerateKeyID(This,pbstrKeyID)	\
    (This)->lpVtbl -> GenerateKeyID(This,pbstrKeyID)

#define IWMRMKeys2_get_Seed(This,pVal)	\
    (This)->lpVtbl -> get_Seed(This,pVal)

#define IWMRMKeys2_put_Seed(This,newVal)	\
    (This)->lpVtbl -> put_Seed(This,newVal)

#define IWMRMKeys2_get_KeyID(This,pVal)	\
    (This)->lpVtbl -> get_KeyID(This,pVal)

#define IWMRMKeys2_put_KeyID(This,newVal)	\
    (This)->lpVtbl -> put_KeyID(This,newVal)

#define IWMRMKeys2_GenerateKey(This,pbstrKey)	\
    (This)->lpVtbl -> GenerateKey(This,pbstrKey)

#define IWMRMKeys2_GenerateSigningKeys(This,pvarPrivKey,pvarPubKey)	\
    (This)->lpVtbl -> GenerateSigningKeys(This,pvarPrivKey,pvarPubKey)


#define IWMRMKeys2_GenerateSigningKeysEx(This,pvarPrivKey,pvarPubKey,pvarCert)	\
    (This)->lpVtbl -> GenerateSigningKeysEx(This,pvarPrivKey,pvarPubKey,pvarCert)

#define IWMRMKeys2_GetCertificate(This,bstrCertType,pbstrCert)	\
    (This)->lpVtbl -> GetCertificate(This,bstrCertType,pbstrCert)

#define IWMRMKeys2_GenerateKeyEx(This,lReqLen,pbstrKey)	\
    (This)->lpVtbl -> GenerateKeyEx(This,lReqLen,pbstrKey)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMKeys2_GenerateSigningKeysEx_Proxy( 
    IWMRMKeys2 * This,
    /* [out][in] */ VARIANT *pvarPrivKey,
    /* [out][in] */ VARIANT *pvarPubKey,
    /* [out][in] */ VARIANT *pvarCert);


void __RPC_STUB IWMRMKeys2_GenerateSigningKeysEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMKeys2_GetCertificate_Proxy( 
    IWMRMKeys2 * This,
    /* [in] */ BSTR bstrCertType,
    /* [retval][out] */ BSTR *pbstrCert);


void __RPC_STUB IWMRMKeys2_GetCertificate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMKeys2_GenerateKeyEx_Proxy( 
    IWMRMKeys2 * This,
    /* [in] */ LONG lReqLen,
    /* [retval][out] */ BSTR *pbstrKey);


void __RPC_STUB IWMRMKeys2_GenerateKeyEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMKeys2_INTERFACE_DEFINED__ */


#ifndef __IWMRMLicenseStateData_INTERFACE_DEFINED__
#define __IWMRMLicenseStateData_INTERFACE_DEFINED__

/* interface IWMRMLicenseStateData */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMLicenseStateData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E47FB7B-05BF-40f7-899A-1423E955DB62")
    IWMRMLicenseStateData : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StreamId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Category( 
            /* [retval][out] */ WMRM_LICENSE_STATE_CATEGORY *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Vagueness( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Counts( 
            /* [retval][out] */ SAFEARRAY * *ppsaCounts) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Dates( 
            /* [retval][out] */ SAFEARRAY * *ppsaCounts) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMLicenseStateDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMLicenseStateData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMLicenseStateData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMLicenseStateData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMLicenseStateData * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMLicenseStateData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMLicenseStateData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMLicenseStateData * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StreamId )( 
            IWMRMLicenseStateData * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Category )( 
            IWMRMLicenseStateData * This,
            /* [retval][out] */ WMRM_LICENSE_STATE_CATEGORY *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vagueness )( 
            IWMRMLicenseStateData * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Counts )( 
            IWMRMLicenseStateData * This,
            /* [retval][out] */ SAFEARRAY * *ppsaCounts);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dates )( 
            IWMRMLicenseStateData * This,
            /* [retval][out] */ SAFEARRAY * *ppsaCounts);
        
        END_INTERFACE
    } IWMRMLicenseStateDataVtbl;

    interface IWMRMLicenseStateData
    {
        CONST_VTBL struct IWMRMLicenseStateDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMLicenseStateData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMLicenseStateData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMLicenseStateData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMLicenseStateData_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMLicenseStateData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMLicenseStateData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMLicenseStateData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMLicenseStateData_get_StreamId(This,pVal)	\
    (This)->lpVtbl -> get_StreamId(This,pVal)

#define IWMRMLicenseStateData_get_Category(This,pVal)	\
    (This)->lpVtbl -> get_Category(This,pVal)

#define IWMRMLicenseStateData_get_Vagueness(This,pVal)	\
    (This)->lpVtbl -> get_Vagueness(This,pVal)

#define IWMRMLicenseStateData_get_Counts(This,ppsaCounts)	\
    (This)->lpVtbl -> get_Counts(This,ppsaCounts)

#define IWMRMLicenseStateData_get_Dates(This,ppsaCounts)	\
    (This)->lpVtbl -> get_Dates(This,ppsaCounts)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseStateData_get_StreamId_Proxy( 
    IWMRMLicenseStateData * This,
    /* [retval][out] */ ULONG *pVal);


void __RPC_STUB IWMRMLicenseStateData_get_StreamId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseStateData_get_Category_Proxy( 
    IWMRMLicenseStateData * This,
    /* [retval][out] */ WMRM_LICENSE_STATE_CATEGORY *pVal);


void __RPC_STUB IWMRMLicenseStateData_get_Category_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseStateData_get_Vagueness_Proxy( 
    IWMRMLicenseStateData * This,
    /* [retval][out] */ ULONG *pVal);


void __RPC_STUB IWMRMLicenseStateData_get_Vagueness_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseStateData_get_Counts_Proxy( 
    IWMRMLicenseStateData * This,
    /* [retval][out] */ SAFEARRAY * *ppsaCounts);


void __RPC_STUB IWMRMLicenseStateData_get_Counts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseStateData_get_Dates_Proxy( 
    IWMRMLicenseStateData * This,
    /* [retval][out] */ SAFEARRAY * *ppsaCounts);


void __RPC_STUB IWMRMLicenseStateData_get_Dates_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMLicenseStateData_INTERFACE_DEFINED__ */


#ifndef __IWMRMUplink_INTERFACE_DEFINED__
#define __IWMRMUplink_INTERFACE_DEFINED__

/* interface IWMRMUplink */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMUplink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FAD38F38-75E3-457e-82DD-D01B2BB18468")
    IWMRMUplink : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LicenseState( 
            /* [retval][out] */ IWMRMLicenseStateData **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMUplinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMUplink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMUplink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMUplink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMUplink * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMUplink * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMUplink * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMUplink * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KID )( 
            IWMRMUplink * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LicenseState )( 
            IWMRMUplink * This,
            /* [retval][out] */ IWMRMLicenseStateData **pVal);
        
        END_INTERFACE
    } IWMRMUplinkVtbl;

    interface IWMRMUplink
    {
        CONST_VTBL struct IWMRMUplinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMUplink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMUplink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMUplink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMUplink_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMUplink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMUplink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMUplink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMUplink_get_KID(This,pVal)	\
    (This)->lpVtbl -> get_KID(This,pVal)

#define IWMRMUplink_get_LicenseState(This,pVal)	\
    (This)->lpVtbl -> get_LicenseState(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMUplink_get_KID_Proxy( 
    IWMRMUplink * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMUplink_get_KID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMUplink_get_LicenseState_Proxy( 
    IWMRMUplink * This,
    /* [retval][out] */ IWMRMLicenseStateData **pVal);


void __RPC_STUB IWMRMUplink_get_LicenseState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMUplink_INTERFACE_DEFINED__ */


#ifndef __IWMRMUplinkCollection_INTERFACE_DEFINED__
#define __IWMRMUplinkCollection_INTERFACE_DEFINED__

/* interface IWMRMUplinkCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMUplinkCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2A28ABF-39AA-46de-AD04-66FF20D140A9")
    IWMRMUplinkCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_item( 
            /* [in] */ LONG index,
            /* [retval][out] */ IWMRMUplink **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMUplinkCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMUplinkCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMUplinkCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMUplinkCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMUplinkCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMUplinkCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMUplinkCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMUplinkCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IWMRMUplinkCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IWMRMUplink **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IWMRMUplinkCollection * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IWMRMUplinkCollectionVtbl;

    interface IWMRMUplinkCollection
    {
        CONST_VTBL struct IWMRMUplinkCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMUplinkCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMUplinkCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMUplinkCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMUplinkCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMUplinkCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMUplinkCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMUplinkCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMUplinkCollection_get_item(This,index,pVal)	\
    (This)->lpVtbl -> get_item(This,index,pVal)

#define IWMRMUplinkCollection_get_length(This,pVal)	\
    (This)->lpVtbl -> get_length(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMUplinkCollection_get_item_Proxy( 
    IWMRMUplinkCollection * This,
    /* [in] */ LONG index,
    /* [retval][out] */ IWMRMUplink **pVal);


void __RPC_STUB IWMRMUplinkCollection_get_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMUplinkCollection_get_length_Proxy( 
    IWMRMUplinkCollection * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWMRMUplinkCollection_get_length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMUplinkCollection_INTERFACE_DEFINED__ */


#ifndef __IWMRMChallenge_INTERFACE_DEFINED__
#define __IWMRMChallenge_INTERFACE_DEFINED__

/* interface IWMRMChallenge */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMChallenge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96CE0585-2129-44E8-9F26-0CFBA54392FE")
    IWMRMChallenge : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Challenge( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Challenge( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClientAttribute( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Header( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClientInfo( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_V1Challenge( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActionCount( 
            /* [retval][out] */ DWORD *pdwVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Action( 
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMChallengeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMChallenge * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMChallenge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMChallenge * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMChallenge * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMChallenge * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMChallenge * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMChallenge * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Challenge )( 
            IWMRMChallenge * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Challenge )( 
            IWMRMChallenge * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientAttribute )( 
            IWMRMChallenge * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            IWMRMChallenge * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientInfo )( 
            IWMRMChallenge * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_V1Challenge )( 
            IWMRMChallenge * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionCount )( 
            IWMRMChallenge * This,
            /* [retval][out] */ DWORD *pdwVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Action )( 
            IWMRMChallenge * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IWMRMChallengeVtbl;

    interface IWMRMChallenge
    {
        CONST_VTBL struct IWMRMChallengeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMChallenge_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMChallenge_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMChallenge_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMChallenge_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMChallenge_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMChallenge_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMChallenge_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMChallenge_get_Challenge(This,pVal)	\
    (This)->lpVtbl -> get_Challenge(This,pVal)

#define IWMRMChallenge_put_Challenge(This,newVal)	\
    (This)->lpVtbl -> put_Challenge(This,newVal)

#define IWMRMChallenge_get_ClientAttribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_ClientAttribute(This,bstrName,pVal)

#define IWMRMChallenge_get_Header(This,pVal)	\
    (This)->lpVtbl -> get_Header(This,pVal)

#define IWMRMChallenge_get_ClientInfo(This,pVal)	\
    (This)->lpVtbl -> get_ClientInfo(This,pVal)

#define IWMRMChallenge_get_V1Challenge(This,pVal)	\
    (This)->lpVtbl -> get_V1Challenge(This,pVal)

#define IWMRMChallenge_get_ActionCount(This,pdwVal)	\
    (This)->lpVtbl -> get_ActionCount(This,pdwVal)

#define IWMRMChallenge_get_Action(This,dwIndex,pVal)	\
    (This)->lpVtbl -> get_Action(This,dwIndex,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_get_Challenge_Proxy( 
    IWMRMChallenge * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMChallenge_get_Challenge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_put_Challenge_Proxy( 
    IWMRMChallenge * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMChallenge_put_Challenge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_get_ClientAttribute_Proxy( 
    IWMRMChallenge * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMChallenge_get_ClientAttribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_get_Header_Proxy( 
    IWMRMChallenge * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMChallenge_get_Header_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_get_ClientInfo_Proxy( 
    IWMRMChallenge * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMChallenge_get_ClientInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_get_V1Challenge_Proxy( 
    IWMRMChallenge * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMChallenge_get_V1Challenge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_get_ActionCount_Proxy( 
    IWMRMChallenge * This,
    /* [retval][out] */ DWORD *pdwVal);


void __RPC_STUB IWMRMChallenge_get_ActionCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge_get_Action_Proxy( 
    IWMRMChallenge * This,
    /* [in] */ DWORD dwIndex,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMChallenge_get_Action_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMChallenge_INTERFACE_DEFINED__ */


#ifndef __IWMRMChallenge2_INTERFACE_DEFINED__
#define __IWMRMChallenge2_INTERFACE_DEFINED__

/* interface IWMRMChallenge2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMChallenge2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68CC3E3C-47ED-47ce-925F-EABE931FF518")
    IWMRMChallenge2 : public IWMRMChallenge
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckClientCapability( 
            /* [in] */ BSTR bstrFunctionName,
            /* [retval][out] */ BOOL *fSupport) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMChallenge2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMChallenge2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMChallenge2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMChallenge2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMChallenge2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMChallenge2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMChallenge2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMChallenge2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Challenge )( 
            IWMRMChallenge2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Challenge )( 
            IWMRMChallenge2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientAttribute )( 
            IWMRMChallenge2 * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            IWMRMChallenge2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientInfo )( 
            IWMRMChallenge2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_V1Challenge )( 
            IWMRMChallenge2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionCount )( 
            IWMRMChallenge2 * This,
            /* [retval][out] */ DWORD *pdwVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Action )( 
            IWMRMChallenge2 * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckClientCapability )( 
            IWMRMChallenge2 * This,
            /* [in] */ BSTR bstrFunctionName,
            /* [retval][out] */ BOOL *fSupport);
        
        END_INTERFACE
    } IWMRMChallenge2Vtbl;

    interface IWMRMChallenge2
    {
        CONST_VTBL struct IWMRMChallenge2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMChallenge2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMChallenge2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMChallenge2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMChallenge2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMChallenge2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMChallenge2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMChallenge2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMChallenge2_get_Challenge(This,pVal)	\
    (This)->lpVtbl -> get_Challenge(This,pVal)

#define IWMRMChallenge2_put_Challenge(This,newVal)	\
    (This)->lpVtbl -> put_Challenge(This,newVal)

#define IWMRMChallenge2_get_ClientAttribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_ClientAttribute(This,bstrName,pVal)

#define IWMRMChallenge2_get_Header(This,pVal)	\
    (This)->lpVtbl -> get_Header(This,pVal)

#define IWMRMChallenge2_get_ClientInfo(This,pVal)	\
    (This)->lpVtbl -> get_ClientInfo(This,pVal)

#define IWMRMChallenge2_get_V1Challenge(This,pVal)	\
    (This)->lpVtbl -> get_V1Challenge(This,pVal)

#define IWMRMChallenge2_get_ActionCount(This,pdwVal)	\
    (This)->lpVtbl -> get_ActionCount(This,pdwVal)

#define IWMRMChallenge2_get_Action(This,dwIndex,pVal)	\
    (This)->lpVtbl -> get_Action(This,dwIndex,pVal)


#define IWMRMChallenge2_CheckClientCapability(This,bstrFunctionName,fSupport)	\
    (This)->lpVtbl -> CheckClientCapability(This,bstrFunctionName,fSupport)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge2_CheckClientCapability_Proxy( 
    IWMRMChallenge2 * This,
    /* [in] */ BSTR bstrFunctionName,
    /* [retval][out] */ BOOL *fSupport);


void __RPC_STUB IWMRMChallenge2_CheckClientCapability_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMChallenge2_INTERFACE_DEFINED__ */


#ifndef __IWMRMChallenge3_INTERFACE_DEFINED__
#define __IWMRMChallenge3_INTERFACE_DEFINED__

/* interface IWMRMChallenge3 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMChallenge3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDC4CEB6-D868-4825-9871-DC5CD99B6D7C")
    IWMRMChallenge3 : public IWMRMChallenge2
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Uplinks( 
            /* [retval][out] */ IWMRMUplinkCollection **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClientVersion( 
            /* [retval][out] */ BSTR *pbstrClientVersion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMChallenge3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMChallenge3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMChallenge3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMChallenge3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMChallenge3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMChallenge3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMChallenge3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMChallenge3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Challenge )( 
            IWMRMChallenge3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Challenge )( 
            IWMRMChallenge3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientAttribute )( 
            IWMRMChallenge3 * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Header )( 
            IWMRMChallenge3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientInfo )( 
            IWMRMChallenge3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_V1Challenge )( 
            IWMRMChallenge3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionCount )( 
            IWMRMChallenge3 * This,
            /* [retval][out] */ DWORD *pdwVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Action )( 
            IWMRMChallenge3 * This,
            /* [in] */ DWORD dwIndex,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckClientCapability )( 
            IWMRMChallenge3 * This,
            /* [in] */ BSTR bstrFunctionName,
            /* [retval][out] */ BOOL *fSupport);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Uplinks )( 
            IWMRMChallenge3 * This,
            /* [retval][out] */ IWMRMUplinkCollection **ppVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientVersion )( 
            IWMRMChallenge3 * This,
            /* [retval][out] */ BSTR *pbstrClientVersion);
        
        END_INTERFACE
    } IWMRMChallenge3Vtbl;

    interface IWMRMChallenge3
    {
        CONST_VTBL struct IWMRMChallenge3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMChallenge3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMChallenge3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMChallenge3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMChallenge3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMChallenge3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMChallenge3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMChallenge3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMChallenge3_get_Challenge(This,pVal)	\
    (This)->lpVtbl -> get_Challenge(This,pVal)

#define IWMRMChallenge3_put_Challenge(This,newVal)	\
    (This)->lpVtbl -> put_Challenge(This,newVal)

#define IWMRMChallenge3_get_ClientAttribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_ClientAttribute(This,bstrName,pVal)

#define IWMRMChallenge3_get_Header(This,pVal)	\
    (This)->lpVtbl -> get_Header(This,pVal)

#define IWMRMChallenge3_get_ClientInfo(This,pVal)	\
    (This)->lpVtbl -> get_ClientInfo(This,pVal)

#define IWMRMChallenge3_get_V1Challenge(This,pVal)	\
    (This)->lpVtbl -> get_V1Challenge(This,pVal)

#define IWMRMChallenge3_get_ActionCount(This,pdwVal)	\
    (This)->lpVtbl -> get_ActionCount(This,pdwVal)

#define IWMRMChallenge3_get_Action(This,dwIndex,pVal)	\
    (This)->lpVtbl -> get_Action(This,dwIndex,pVal)


#define IWMRMChallenge3_CheckClientCapability(This,bstrFunctionName,fSupport)	\
    (This)->lpVtbl -> CheckClientCapability(This,bstrFunctionName,fSupport)


#define IWMRMChallenge3_get_Uplinks(This,ppVal)	\
    (This)->lpVtbl -> get_Uplinks(This,ppVal)

#define IWMRMChallenge3_get_ClientVersion(This,pbstrClientVersion)	\
    (This)->lpVtbl -> get_ClientVersion(This,pbstrClientVersion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge3_get_Uplinks_Proxy( 
    IWMRMChallenge3 * This,
    /* [retval][out] */ IWMRMUplinkCollection **ppVal);


void __RPC_STUB IWMRMChallenge3_get_Uplinks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMChallenge3_get_ClientVersion_Proxy( 
    IWMRMChallenge3 * This,
    /* [retval][out] */ BSTR *pbstrClientVersion);


void __RPC_STUB IWMRMChallenge3_get_ClientVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMChallenge3_INTERFACE_DEFINED__ */


#ifndef __IWMRMLicGen_INTERFACE_DEFINED__
#define __IWMRMLicGen_INTERFACE_DEFINED__

/* interface IWMRMLicGen */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMLicGen;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BE066FE-EF53-4B59-967B-7CA06CBFAAC2")
    IWMRMLicGen : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ClientInfo( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BindToPubKey( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BindToPubKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetKey( 
            /* [in] */ BSTR bstrType,
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLicenseToDeliver( 
            /* [retval][out] */ BSTR *pbstrLicense) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attribute( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Attribute( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Rights( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rights( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetClientVersion( 
            /* [out][in] */ VARIANT *pvarCategory,
            /* [out][in] */ VARIANT *pvarVersion) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMLicGenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMLicGen * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMLicGen * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMLicGen * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMLicGen * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMLicGen * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMLicGen * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMLicGen * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IWMRMLicGen * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IWMRMLicGen * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientInfo )( 
            IWMRMLicGen * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyID )( 
            IWMRMLicGen * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyID )( 
            IWMRMLicGen * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BindToPubKey )( 
            IWMRMLicGen * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BindToPubKey )( 
            IWMRMLicGen * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetKey )( 
            IWMRMLicGen * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLicenseToDeliver )( 
            IWMRMLicGen * This,
            /* [retval][out] */ BSTR *pbstrLicense);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IWMRMLicGen * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attribute )( 
            IWMRMLicGen * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rights )( 
            IWMRMLicGen * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rights )( 
            IWMRMLicGen * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClientVersion )( 
            IWMRMLicGen * This,
            /* [out][in] */ VARIANT *pvarCategory,
            /* [out][in] */ VARIANT *pvarVersion);
        
        END_INTERFACE
    } IWMRMLicGenVtbl;

    interface IWMRMLicGen
    {
        CONST_VTBL struct IWMRMLicGenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMLicGen_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMLicGen_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMLicGen_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMLicGen_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMLicGen_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMLicGen_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMLicGen_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMLicGen_get_Priority(This,pVal)	\
    (This)->lpVtbl -> get_Priority(This,pVal)

#define IWMRMLicGen_put_Priority(This,newVal)	\
    (This)->lpVtbl -> put_Priority(This,newVal)

#define IWMRMLicGen_put_ClientInfo(This,newVal)	\
    (This)->lpVtbl -> put_ClientInfo(This,newVal)

#define IWMRMLicGen_get_KeyID(This,pVal)	\
    (This)->lpVtbl -> get_KeyID(This,pVal)

#define IWMRMLicGen_put_KeyID(This,newVal)	\
    (This)->lpVtbl -> put_KeyID(This,newVal)

#define IWMRMLicGen_get_BindToPubKey(This,pVal)	\
    (This)->lpVtbl -> get_BindToPubKey(This,pVal)

#define IWMRMLicGen_put_BindToPubKey(This,newVal)	\
    (This)->lpVtbl -> put_BindToPubKey(This,newVal)

#define IWMRMLicGen_SetKey(This,bstrType,bstrKey)	\
    (This)->lpVtbl -> SetKey(This,bstrType,bstrKey)

#define IWMRMLicGen_GetLicenseToDeliver(This,pbstrLicense)	\
    (This)->lpVtbl -> GetLicenseToDeliver(This,pbstrLicense)

#define IWMRMLicGen_get_Attribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_Attribute(This,bstrName,pVal)

#define IWMRMLicGen_put_Attribute(This,bstrName,newVal)	\
    (This)->lpVtbl -> put_Attribute(This,bstrName,newVal)

#define IWMRMLicGen_get_Rights(This,pVal)	\
    (This)->lpVtbl -> get_Rights(This,pVal)

#define IWMRMLicGen_put_Rights(This,newVal)	\
    (This)->lpVtbl -> put_Rights(This,newVal)

#define IWMRMLicGen_GetClientVersion(This,pvarCategory,pvarVersion)	\
    (This)->lpVtbl -> GetClientVersion(This,pvarCategory,pvarVersion)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_get_Priority_Proxy( 
    IWMRMLicGen * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IWMRMLicGen_get_Priority_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_put_Priority_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ long newVal);


void __RPC_STUB IWMRMLicGen_put_Priority_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_put_ClientInfo_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen_put_ClientInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_get_KeyID_Proxy( 
    IWMRMLicGen * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicGen_get_KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_put_KeyID_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen_put_KeyID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_get_BindToPubKey_Proxy( 
    IWMRMLicGen * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicGen_get_BindToPubKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_put_BindToPubKey_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen_put_BindToPubKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_SetKey_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ BSTR bstrType,
    /* [in] */ BSTR bstrKey);


void __RPC_STUB IWMRMLicGen_SetKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_GetLicenseToDeliver_Proxy( 
    IWMRMLicGen * This,
    /* [retval][out] */ BSTR *pbstrLicense);


void __RPC_STUB IWMRMLicGen_GetLicenseToDeliver_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_get_Attribute_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicGen_get_Attribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_put_Attribute_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen_put_Attribute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_get_Rights_Proxy( 
    IWMRMLicGen * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicGen_get_Rights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_put_Rights_Proxy( 
    IWMRMLicGen * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen_put_Rights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen_GetClientVersion_Proxy( 
    IWMRMLicGen * This,
    /* [out][in] */ VARIANT *pvarCategory,
    /* [out][in] */ VARIANT *pvarVersion);


void __RPC_STUB IWMRMLicGen_GetClientVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMLicGen_INTERFACE_DEFINED__ */


#ifndef __IWMRMLicGen2_INTERFACE_DEFINED__
#define __IWMRMLicGen2_INTERFACE_DEFINED__

/* interface IWMRMLicGen2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMLicGen2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF10E749-9C9F-47a1-917C-E6998AE162A0")
    IWMRMLicGen2 : public IWMRMLicGen
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsClientExcluded( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IndividualizedVersion( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddContentRevocation( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMLicGen2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMLicGen2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMLicGen2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMLicGen2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMLicGen2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMLicGen2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMLicGen2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMLicGen2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IWMRMLicGen2 * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IWMRMLicGen2 * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientInfo )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyID )( 
            IWMRMLicGen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyID )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BindToPubKey )( 
            IWMRMLicGen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BindToPubKey )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetKey )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLicenseToDeliver )( 
            IWMRMLicGen2 * This,
            /* [retval][out] */ BSTR *pbstrLicense);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attribute )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rights )( 
            IWMRMLicGen2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rights )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClientVersion )( 
            IWMRMLicGen2 * This,
            /* [out][in] */ VARIANT *pvarCategory,
            /* [out][in] */ VARIANT *pvarVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsClientExcluded )( 
            IWMRMLicGen2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IndividualizedVersion )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddContentRevocation )( 
            IWMRMLicGen2 * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IWMRMLicGen2Vtbl;

    interface IWMRMLicGen2
    {
        CONST_VTBL struct IWMRMLicGen2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMLicGen2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMLicGen2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMLicGen2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMLicGen2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMLicGen2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMLicGen2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMLicGen2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMLicGen2_get_Priority(This,pVal)	\
    (This)->lpVtbl -> get_Priority(This,pVal)

#define IWMRMLicGen2_put_Priority(This,newVal)	\
    (This)->lpVtbl -> put_Priority(This,newVal)

#define IWMRMLicGen2_put_ClientInfo(This,newVal)	\
    (This)->lpVtbl -> put_ClientInfo(This,newVal)

#define IWMRMLicGen2_get_KeyID(This,pVal)	\
    (This)->lpVtbl -> get_KeyID(This,pVal)

#define IWMRMLicGen2_put_KeyID(This,newVal)	\
    (This)->lpVtbl -> put_KeyID(This,newVal)

#define IWMRMLicGen2_get_BindToPubKey(This,pVal)	\
    (This)->lpVtbl -> get_BindToPubKey(This,pVal)

#define IWMRMLicGen2_put_BindToPubKey(This,newVal)	\
    (This)->lpVtbl -> put_BindToPubKey(This,newVal)

#define IWMRMLicGen2_SetKey(This,bstrType,bstrKey)	\
    (This)->lpVtbl -> SetKey(This,bstrType,bstrKey)

#define IWMRMLicGen2_GetLicenseToDeliver(This,pbstrLicense)	\
    (This)->lpVtbl -> GetLicenseToDeliver(This,pbstrLicense)

#define IWMRMLicGen2_get_Attribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_Attribute(This,bstrName,pVal)

#define IWMRMLicGen2_put_Attribute(This,bstrName,newVal)	\
    (This)->lpVtbl -> put_Attribute(This,bstrName,newVal)

#define IWMRMLicGen2_get_Rights(This,pVal)	\
    (This)->lpVtbl -> get_Rights(This,pVal)

#define IWMRMLicGen2_put_Rights(This,newVal)	\
    (This)->lpVtbl -> put_Rights(This,newVal)

#define IWMRMLicGen2_GetClientVersion(This,pvarCategory,pvarVersion)	\
    (This)->lpVtbl -> GetClientVersion(This,pvarCategory,pvarVersion)


#define IWMRMLicGen2_get_IsClientExcluded(This,pVal)	\
    (This)->lpVtbl -> get_IsClientExcluded(This,pVal)

#define IWMRMLicGen2_put_IndividualizedVersion(This,newVal)	\
    (This)->lpVtbl -> put_IndividualizedVersion(This,newVal)

#define IWMRMLicGen2_AddContentRevocation(This,newVal)	\
    (This)->lpVtbl -> AddContentRevocation(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen2_get_IsClientExcluded_Proxy( 
    IWMRMLicGen2 * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMLicGen2_get_IsClientExcluded_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen2_put_IndividualizedVersion_Proxy( 
    IWMRMLicGen2 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen2_put_IndividualizedVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen2_AddContentRevocation_Proxy( 
    IWMRMLicGen2 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen2_AddContentRevocation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMLicGen2_INTERFACE_DEFINED__ */


#ifndef __IWMRMLicGen3_INTERFACE_DEFINED__
#define __IWMRMLicGen3_INTERFACE_DEFINED__

/* interface IWMRMLicGen3 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMLicGen3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8A86E62-DB16-4387-83EF-96663388DFB5")
    IWMRMLicGen3 : public IWMRMLicGen2
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UplinkKid( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UplinkKid( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UplinkKey( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UplinkKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MeteringCertificate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MeteringCertificate( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMLicGen3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMLicGen3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMLicGen3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMLicGen3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMLicGen3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMLicGen3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMLicGen3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMLicGen3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IWMRMLicGen3 * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientInfo )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyID )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyID )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BindToPubKey )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BindToPubKey )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetKey )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLicenseToDeliver )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BSTR *pbstrLicense);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Attribute )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rights )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rights )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetClientVersion )( 
            IWMRMLicGen3 * This,
            /* [out][in] */ VARIANT *pvarCategory,
            /* [out][in] */ VARIANT *pvarVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsClientExcluded )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IndividualizedVersion )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddContentRevocation )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UplinkKid )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UplinkKid )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UplinkKey )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UplinkKey )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeteringCertificate )( 
            IWMRMLicGen3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MeteringCertificate )( 
            IWMRMLicGen3 * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IWMRMLicGen3Vtbl;

    interface IWMRMLicGen3
    {
        CONST_VTBL struct IWMRMLicGen3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMLicGen3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMLicGen3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMLicGen3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMLicGen3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMLicGen3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMLicGen3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMLicGen3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMLicGen3_get_Priority(This,pVal)	\
    (This)->lpVtbl -> get_Priority(This,pVal)

#define IWMRMLicGen3_put_Priority(This,newVal)	\
    (This)->lpVtbl -> put_Priority(This,newVal)

#define IWMRMLicGen3_put_ClientInfo(This,newVal)	\
    (This)->lpVtbl -> put_ClientInfo(This,newVal)

#define IWMRMLicGen3_get_KeyID(This,pVal)	\
    (This)->lpVtbl -> get_KeyID(This,pVal)

#define IWMRMLicGen3_put_KeyID(This,newVal)	\
    (This)->lpVtbl -> put_KeyID(This,newVal)

#define IWMRMLicGen3_get_BindToPubKey(This,pVal)	\
    (This)->lpVtbl -> get_BindToPubKey(This,pVal)

#define IWMRMLicGen3_put_BindToPubKey(This,newVal)	\
    (This)->lpVtbl -> put_BindToPubKey(This,newVal)

#define IWMRMLicGen3_SetKey(This,bstrType,bstrKey)	\
    (This)->lpVtbl -> SetKey(This,bstrType,bstrKey)

#define IWMRMLicGen3_GetLicenseToDeliver(This,pbstrLicense)	\
    (This)->lpVtbl -> GetLicenseToDeliver(This,pbstrLicense)

#define IWMRMLicGen3_get_Attribute(This,bstrName,pVal)	\
    (This)->lpVtbl -> get_Attribute(This,bstrName,pVal)

#define IWMRMLicGen3_put_Attribute(This,bstrName,newVal)	\
    (This)->lpVtbl -> put_Attribute(This,bstrName,newVal)

#define IWMRMLicGen3_get_Rights(This,pVal)	\
    (This)->lpVtbl -> get_Rights(This,pVal)

#define IWMRMLicGen3_put_Rights(This,newVal)	\
    (This)->lpVtbl -> put_Rights(This,newVal)

#define IWMRMLicGen3_GetClientVersion(This,pvarCategory,pvarVersion)	\
    (This)->lpVtbl -> GetClientVersion(This,pvarCategory,pvarVersion)


#define IWMRMLicGen3_get_IsClientExcluded(This,pVal)	\
    (This)->lpVtbl -> get_IsClientExcluded(This,pVal)

#define IWMRMLicGen3_put_IndividualizedVersion(This,newVal)	\
    (This)->lpVtbl -> put_IndividualizedVersion(This,newVal)

#define IWMRMLicGen3_AddContentRevocation(This,newVal)	\
    (This)->lpVtbl -> AddContentRevocation(This,newVal)


#define IWMRMLicGen3_get_UplinkKid(This,pVal)	\
    (This)->lpVtbl -> get_UplinkKid(This,pVal)

#define IWMRMLicGen3_put_UplinkKid(This,newVal)	\
    (This)->lpVtbl -> put_UplinkKid(This,newVal)

#define IWMRMLicGen3_get_UplinkKey(This,pVal)	\
    (This)->lpVtbl -> get_UplinkKey(This,pVal)

#define IWMRMLicGen3_put_UplinkKey(This,newVal)	\
    (This)->lpVtbl -> put_UplinkKey(This,newVal)

#define IWMRMLicGen3_get_MeteringCertificate(This,pVal)	\
    (This)->lpVtbl -> get_MeteringCertificate(This,pVal)

#define IWMRMLicGen3_put_MeteringCertificate(This,newVal)	\
    (This)->lpVtbl -> put_MeteringCertificate(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen3_get_UplinkKid_Proxy( 
    IWMRMLicGen3 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicGen3_get_UplinkKid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen3_put_UplinkKid_Proxy( 
    IWMRMLicGen3 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen3_put_UplinkKid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen3_get_UplinkKey_Proxy( 
    IWMRMLicGen3 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicGen3_get_UplinkKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen3_put_UplinkKey_Proxy( 
    IWMRMLicGen3 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen3_put_UplinkKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen3_get_MeteringCertificate_Proxy( 
    IWMRMLicGen3 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicGen3_get_MeteringCertificate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicGen3_put_MeteringCertificate_Proxy( 
    IWMRMLicGen3 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicGen3_put_MeteringCertificate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMLicGen3_INTERFACE_DEFINED__ */


#ifndef __IWMRMRights_INTERFACE_DEFINED__
#define __IWMRMRights_INTERFACE_DEFINED__

/* interface IWMRMRights */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMRights;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F32F2174-5529-4D22-A2B8-7905F389F1C9")
    IWMRMRights : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowBackupRestore( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowBackupRestore( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowBurnToCD( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowBurnToCD( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BeginDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BeginDate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeleteOnClockRollback( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeleteOnClockRollback( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableOnClockRollback( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableOnClockRollback( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpirationDate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAllRights( 
            /* [retval][out] */ BSTR *pbstrRights) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinimumAppSecurity( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinimumAppSecurity( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowPlayOnPC( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowPlayOnPC( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Playcount( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Playcount( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSAPMode( 
            /* [in] */ VARIANT varAllowDigitalOut,
            /* [in] */ VARIANT varCheckDriverCerts,
            /* [in] */ VARIANT varMinDriverSecurity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSAPMode( 
            /* [out][in] */ VARIANT *pvarAllowDigitalOut,
            /* [out][in] */ VARIANT *pvarCheckDriverCerts,
            /* [out][in] */ VARIANT *pvarMinDriverSecurity) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowTransferToSDMI( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowTransferToSDMI( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowTransferToNonSDMI( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowTransferToNonSDMI( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransferCount( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransferCount( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PMRights( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PMRights( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PMAppSecurity( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PMAppSecurity( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PMExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PMExpirationDate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BurnToCDCount( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BurnToCDCount( 
            /* [in] */ DWORD newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMRightsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMRights * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMRights * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMRights * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMRights * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMRights * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMRights * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMRights * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowBackupRestore )( 
            IWMRMRights * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowBackupRestore )( 
            IWMRMRights * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowBurnToCD )( 
            IWMRMRights * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowBurnToCD )( 
            IWMRMRights * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeginDate )( 
            IWMRMRights * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeginDate )( 
            IWMRMRights * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeleteOnClockRollback )( 
            IWMRMRights * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeleteOnClockRollback )( 
            IWMRMRights * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableOnClockRollback )( 
            IWMRMRights * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableOnClockRollback )( 
            IWMRMRights * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IWMRMRights * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationDate )( 
            IWMRMRights * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllRights )( 
            IWMRMRights * This,
            /* [retval][out] */ BSTR *pbstrRights);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumAppSecurity )( 
            IWMRMRights * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumAppSecurity )( 
            IWMRMRights * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPlayOnPC )( 
            IWMRMRights * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPlayOnPC )( 
            IWMRMRights * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Playcount )( 
            IWMRMRights * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Playcount )( 
            IWMRMRights * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWMRMRights * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSAPMode )( 
            IWMRMRights * This,
            /* [in] */ VARIANT varAllowDigitalOut,
            /* [in] */ VARIANT varCheckDriverCerts,
            /* [in] */ VARIANT varMinDriverSecurity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSAPMode )( 
            IWMRMRights * This,
            /* [out][in] */ VARIANT *pvarAllowDigitalOut,
            /* [out][in] */ VARIANT *pvarCheckDriverCerts,
            /* [out][in] */ VARIANT *pvarMinDriverSecurity);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowTransferToSDMI )( 
            IWMRMRights * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowTransferToSDMI )( 
            IWMRMRights * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowTransferToNonSDMI )( 
            IWMRMRights * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowTransferToNonSDMI )( 
            IWMRMRights * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransferCount )( 
            IWMRMRights * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransferCount )( 
            IWMRMRights * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMRights )( 
            IWMRMRights * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMRights )( 
            IWMRMRights * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMAppSecurity )( 
            IWMRMRights * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMAppSecurity )( 
            IWMRMRights * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMExpirationDate )( 
            IWMRMRights * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMExpirationDate )( 
            IWMRMRights * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BurnToCDCount )( 
            IWMRMRights * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BurnToCDCount )( 
            IWMRMRights * This,
            /* [in] */ DWORD newVal);
        
        END_INTERFACE
    } IWMRMRightsVtbl;

    interface IWMRMRights
    {
        CONST_VTBL struct IWMRMRightsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMRights_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMRights_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMRights_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMRights_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMRights_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMRights_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMRights_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMRights_get_AllowBackupRestore(This,pVal)	\
    (This)->lpVtbl -> get_AllowBackupRestore(This,pVal)

#define IWMRMRights_put_AllowBackupRestore(This,newVal)	\
    (This)->lpVtbl -> put_AllowBackupRestore(This,newVal)

#define IWMRMRights_get_AllowBurnToCD(This,pVal)	\
    (This)->lpVtbl -> get_AllowBurnToCD(This,pVal)

#define IWMRMRights_put_AllowBurnToCD(This,newVal)	\
    (This)->lpVtbl -> put_AllowBurnToCD(This,newVal)

#define IWMRMRights_get_BeginDate(This,pVal)	\
    (This)->lpVtbl -> get_BeginDate(This,pVal)

#define IWMRMRights_put_BeginDate(This,newVal)	\
    (This)->lpVtbl -> put_BeginDate(This,newVal)

#define IWMRMRights_get_DeleteOnClockRollback(This,pVal)	\
    (This)->lpVtbl -> get_DeleteOnClockRollback(This,pVal)

#define IWMRMRights_put_DeleteOnClockRollback(This,newVal)	\
    (This)->lpVtbl -> put_DeleteOnClockRollback(This,newVal)

#define IWMRMRights_get_DisableOnClockRollback(This,pVal)	\
    (This)->lpVtbl -> get_DisableOnClockRollback(This,pVal)

#define IWMRMRights_put_DisableOnClockRollback(This,newVal)	\
    (This)->lpVtbl -> put_DisableOnClockRollback(This,newVal)

#define IWMRMRights_get_ExpirationDate(This,pVal)	\
    (This)->lpVtbl -> get_ExpirationDate(This,pVal)

#define IWMRMRights_put_ExpirationDate(This,newVal)	\
    (This)->lpVtbl -> put_ExpirationDate(This,newVal)

#define IWMRMRights_GetAllRights(This,pbstrRights)	\
    (This)->lpVtbl -> GetAllRights(This,pbstrRights)

#define IWMRMRights_get_MinimumAppSecurity(This,pVal)	\
    (This)->lpVtbl -> get_MinimumAppSecurity(This,pVal)

#define IWMRMRights_put_MinimumAppSecurity(This,newVal)	\
    (This)->lpVtbl -> put_MinimumAppSecurity(This,newVal)

#define IWMRMRights_get_AllowPlayOnPC(This,pVal)	\
    (This)->lpVtbl -> get_AllowPlayOnPC(This,pVal)

#define IWMRMRights_put_AllowPlayOnPC(This,newVal)	\
    (This)->lpVtbl -> put_AllowPlayOnPC(This,newVal)

#define IWMRMRights_get_Playcount(This,pVal)	\
    (This)->lpVtbl -> get_Playcount(This,pVal)

#define IWMRMRights_put_Playcount(This,newVal)	\
    (This)->lpVtbl -> put_Playcount(This,newVal)

#define IWMRMRights_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IWMRMRights_SetSAPMode(This,varAllowDigitalOut,varCheckDriverCerts,varMinDriverSecurity)	\
    (This)->lpVtbl -> SetSAPMode(This,varAllowDigitalOut,varCheckDriverCerts,varMinDriverSecurity)

#define IWMRMRights_GetSAPMode(This,pvarAllowDigitalOut,pvarCheckDriverCerts,pvarMinDriverSecurity)	\
    (This)->lpVtbl -> GetSAPMode(This,pvarAllowDigitalOut,pvarCheckDriverCerts,pvarMinDriverSecurity)

#define IWMRMRights_get_AllowTransferToSDMI(This,pVal)	\
    (This)->lpVtbl -> get_AllowTransferToSDMI(This,pVal)

#define IWMRMRights_put_AllowTransferToSDMI(This,newVal)	\
    (This)->lpVtbl -> put_AllowTransferToSDMI(This,newVal)

#define IWMRMRights_get_AllowTransferToNonSDMI(This,pVal)	\
    (This)->lpVtbl -> get_AllowTransferToNonSDMI(This,pVal)

#define IWMRMRights_put_AllowTransferToNonSDMI(This,newVal)	\
    (This)->lpVtbl -> put_AllowTransferToNonSDMI(This,newVal)

#define IWMRMRights_get_TransferCount(This,pVal)	\
    (This)->lpVtbl -> get_TransferCount(This,pVal)

#define IWMRMRights_put_TransferCount(This,newVal)	\
    (This)->lpVtbl -> put_TransferCount(This,newVal)

#define IWMRMRights_get_PMRights(This,pVal)	\
    (This)->lpVtbl -> get_PMRights(This,pVal)

#define IWMRMRights_put_PMRights(This,newVal)	\
    (This)->lpVtbl -> put_PMRights(This,newVal)

#define IWMRMRights_get_PMAppSecurity(This,pVal)	\
    (This)->lpVtbl -> get_PMAppSecurity(This,pVal)

#define IWMRMRights_put_PMAppSecurity(This,newVal)	\
    (This)->lpVtbl -> put_PMAppSecurity(This,newVal)

#define IWMRMRights_get_PMExpirationDate(This,pVal)	\
    (This)->lpVtbl -> get_PMExpirationDate(This,pVal)

#define IWMRMRights_put_PMExpirationDate(This,newVal)	\
    (This)->lpVtbl -> put_PMExpirationDate(This,newVal)

#define IWMRMRights_get_BurnToCDCount(This,pVal)	\
    (This)->lpVtbl -> get_BurnToCDCount(This,pVal)

#define IWMRMRights_put_BurnToCDCount(This,newVal)	\
    (This)->lpVtbl -> put_BurnToCDCount(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_AllowBackupRestore_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights_get_AllowBackupRestore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_AllowBackupRestore_Proxy( 
    IWMRMRights * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights_put_AllowBackupRestore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_AllowBurnToCD_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights_get_AllowBurnToCD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_AllowBurnToCD_Proxy( 
    IWMRMRights * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights_put_AllowBurnToCD_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_BeginDate_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMRights_get_BeginDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_BeginDate_Proxy( 
    IWMRMRights * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMRights_put_BeginDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_DeleteOnClockRollback_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights_get_DeleteOnClockRollback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_DeleteOnClockRollback_Proxy( 
    IWMRMRights * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights_put_DeleteOnClockRollback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_DisableOnClockRollback_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights_get_DisableOnClockRollback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_DisableOnClockRollback_Proxy( 
    IWMRMRights * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights_put_DisableOnClockRollback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_ExpirationDate_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMRights_get_ExpirationDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_ExpirationDate_Proxy( 
    IWMRMRights * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMRights_put_ExpirationDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRights_GetAllRights_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BSTR *pbstrRights);


void __RPC_STUB IWMRMRights_GetAllRights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_MinimumAppSecurity_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights_get_MinimumAppSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_MinimumAppSecurity_Proxy( 
    IWMRMRights * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights_put_MinimumAppSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_AllowPlayOnPC_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights_get_AllowPlayOnPC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_AllowPlayOnPC_Proxy( 
    IWMRMRights * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights_put_AllowPlayOnPC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_Playcount_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights_get_Playcount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_Playcount_Proxy( 
    IWMRMRights * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights_put_Playcount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRights_Reset_Proxy( 
    IWMRMRights * This);


void __RPC_STUB IWMRMRights_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRights_SetSAPMode_Proxy( 
    IWMRMRights * This,
    /* [in] */ VARIANT varAllowDigitalOut,
    /* [in] */ VARIANT varCheckDriverCerts,
    /* [in] */ VARIANT varMinDriverSecurity);


void __RPC_STUB IWMRMRights_SetSAPMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRights_GetSAPMode_Proxy( 
    IWMRMRights * This,
    /* [out][in] */ VARIANT *pvarAllowDigitalOut,
    /* [out][in] */ VARIANT *pvarCheckDriverCerts,
    /* [out][in] */ VARIANT *pvarMinDriverSecurity);


void __RPC_STUB IWMRMRights_GetSAPMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_AllowTransferToSDMI_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights_get_AllowTransferToSDMI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_AllowTransferToSDMI_Proxy( 
    IWMRMRights * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights_put_AllowTransferToSDMI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_AllowTransferToNonSDMI_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights_get_AllowTransferToNonSDMI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_AllowTransferToNonSDMI_Proxy( 
    IWMRMRights * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights_put_AllowTransferToNonSDMI_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_TransferCount_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights_get_TransferCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_TransferCount_Proxy( 
    IWMRMRights * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights_put_TransferCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_PMRights_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights_get_PMRights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_PMRights_Proxy( 
    IWMRMRights * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights_put_PMRights_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_PMAppSecurity_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights_get_PMAppSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_PMAppSecurity_Proxy( 
    IWMRMRights * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights_put_PMAppSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_PMExpirationDate_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMRights_get_PMExpirationDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_PMExpirationDate_Proxy( 
    IWMRMRights * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMRights_put_PMExpirationDate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights_get_BurnToCDCount_Proxy( 
    IWMRMRights * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights_get_BurnToCDCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights_put_BurnToCDCount_Proxy( 
    IWMRMRights * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights_put_BurnToCDCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMRights_INTERFACE_DEFINED__ */


#ifndef __IWMRMRights2_INTERFACE_DEFINED__
#define __IWMRMRights2_INTERFACE_DEFINED__

/* interface IWMRMRights2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMRights2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E049387D-AAF0-4856-9E18-5FDBBC847D9D")
    IWMRMRights2 : public IWMRMRights
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationAfterFirstUse( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpirationAfterFirstUse( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationOnStore( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpirationOnStore( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowSaveStreamProtected( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowSaveStreamProtected( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExcludeApplication( 
            /* [in] */ DWORD dwAppID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinimumClientSDKSecurity( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinimumClientSDKSecurity( 
            /* [in] */ DWORD newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMRights2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMRights2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMRights2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMRights2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMRights2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMRights2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMRights2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMRights2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowBackupRestore )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowBackupRestore )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowBurnToCD )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowBurnToCD )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeginDate )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeginDate )( 
            IWMRMRights2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeleteOnClockRollback )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeleteOnClockRollback )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableOnClockRollback )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableOnClockRollback )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationDate )( 
            IWMRMRights2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllRights )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BSTR *pbstrRights);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumAppSecurity )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumAppSecurity )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPlayOnPC )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPlayOnPC )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Playcount )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Playcount )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWMRMRights2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSAPMode )( 
            IWMRMRights2 * This,
            /* [in] */ VARIANT varAllowDigitalOut,
            /* [in] */ VARIANT varCheckDriverCerts,
            /* [in] */ VARIANT varMinDriverSecurity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSAPMode )( 
            IWMRMRights2 * This,
            /* [out][in] */ VARIANT *pvarAllowDigitalOut,
            /* [out][in] */ VARIANT *pvarCheckDriverCerts,
            /* [out][in] */ VARIANT *pvarMinDriverSecurity);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowTransferToSDMI )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowTransferToSDMI )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowTransferToNonSDMI )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowTransferToNonSDMI )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransferCount )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransferCount )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMRights )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMRights )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMAppSecurity )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMAppSecurity )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMExpirationDate )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMExpirationDate )( 
            IWMRMRights2 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BurnToCDCount )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BurnToCDCount )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationAfterFirstUse )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationAfterFirstUse )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationOnStore )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationOnStore )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowSaveStreamProtected )( 
            IWMRMRights2 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSaveStreamProtected )( 
            IWMRMRights2 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExcludeApplication )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD dwAppID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumClientSDKSecurity )( 
            IWMRMRights2 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumClientSDKSecurity )( 
            IWMRMRights2 * This,
            /* [in] */ DWORD newVal);
        
        END_INTERFACE
    } IWMRMRights2Vtbl;

    interface IWMRMRights2
    {
        CONST_VTBL struct IWMRMRights2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMRights2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMRights2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMRights2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMRights2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMRights2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMRights2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMRights2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMRights2_get_AllowBackupRestore(This,pVal)	\
    (This)->lpVtbl -> get_AllowBackupRestore(This,pVal)

#define IWMRMRights2_put_AllowBackupRestore(This,newVal)	\
    (This)->lpVtbl -> put_AllowBackupRestore(This,newVal)

#define IWMRMRights2_get_AllowBurnToCD(This,pVal)	\
    (This)->lpVtbl -> get_AllowBurnToCD(This,pVal)

#define IWMRMRights2_put_AllowBurnToCD(This,newVal)	\
    (This)->lpVtbl -> put_AllowBurnToCD(This,newVal)

#define IWMRMRights2_get_BeginDate(This,pVal)	\
    (This)->lpVtbl -> get_BeginDate(This,pVal)

#define IWMRMRights2_put_BeginDate(This,newVal)	\
    (This)->lpVtbl -> put_BeginDate(This,newVal)

#define IWMRMRights2_get_DeleteOnClockRollback(This,pVal)	\
    (This)->lpVtbl -> get_DeleteOnClockRollback(This,pVal)

#define IWMRMRights2_put_DeleteOnClockRollback(This,newVal)	\
    (This)->lpVtbl -> put_DeleteOnClockRollback(This,newVal)

#define IWMRMRights2_get_DisableOnClockRollback(This,pVal)	\
    (This)->lpVtbl -> get_DisableOnClockRollback(This,pVal)

#define IWMRMRights2_put_DisableOnClockRollback(This,newVal)	\
    (This)->lpVtbl -> put_DisableOnClockRollback(This,newVal)

#define IWMRMRights2_get_ExpirationDate(This,pVal)	\
    (This)->lpVtbl -> get_ExpirationDate(This,pVal)

#define IWMRMRights2_put_ExpirationDate(This,newVal)	\
    (This)->lpVtbl -> put_ExpirationDate(This,newVal)

#define IWMRMRights2_GetAllRights(This,pbstrRights)	\
    (This)->lpVtbl -> GetAllRights(This,pbstrRights)

#define IWMRMRights2_get_MinimumAppSecurity(This,pVal)	\
    (This)->lpVtbl -> get_MinimumAppSecurity(This,pVal)

#define IWMRMRights2_put_MinimumAppSecurity(This,newVal)	\
    (This)->lpVtbl -> put_MinimumAppSecurity(This,newVal)

#define IWMRMRights2_get_AllowPlayOnPC(This,pVal)	\
    (This)->lpVtbl -> get_AllowPlayOnPC(This,pVal)

#define IWMRMRights2_put_AllowPlayOnPC(This,newVal)	\
    (This)->lpVtbl -> put_AllowPlayOnPC(This,newVal)

#define IWMRMRights2_get_Playcount(This,pVal)	\
    (This)->lpVtbl -> get_Playcount(This,pVal)

#define IWMRMRights2_put_Playcount(This,newVal)	\
    (This)->lpVtbl -> put_Playcount(This,newVal)

#define IWMRMRights2_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IWMRMRights2_SetSAPMode(This,varAllowDigitalOut,varCheckDriverCerts,varMinDriverSecurity)	\
    (This)->lpVtbl -> SetSAPMode(This,varAllowDigitalOut,varCheckDriverCerts,varMinDriverSecurity)

#define IWMRMRights2_GetSAPMode(This,pvarAllowDigitalOut,pvarCheckDriverCerts,pvarMinDriverSecurity)	\
    (This)->lpVtbl -> GetSAPMode(This,pvarAllowDigitalOut,pvarCheckDriverCerts,pvarMinDriverSecurity)

#define IWMRMRights2_get_AllowTransferToSDMI(This,pVal)	\
    (This)->lpVtbl -> get_AllowTransferToSDMI(This,pVal)

#define IWMRMRights2_put_AllowTransferToSDMI(This,newVal)	\
    (This)->lpVtbl -> put_AllowTransferToSDMI(This,newVal)

#define IWMRMRights2_get_AllowTransferToNonSDMI(This,pVal)	\
    (This)->lpVtbl -> get_AllowTransferToNonSDMI(This,pVal)

#define IWMRMRights2_put_AllowTransferToNonSDMI(This,newVal)	\
    (This)->lpVtbl -> put_AllowTransferToNonSDMI(This,newVal)

#define IWMRMRights2_get_TransferCount(This,pVal)	\
    (This)->lpVtbl -> get_TransferCount(This,pVal)

#define IWMRMRights2_put_TransferCount(This,newVal)	\
    (This)->lpVtbl -> put_TransferCount(This,newVal)

#define IWMRMRights2_get_PMRights(This,pVal)	\
    (This)->lpVtbl -> get_PMRights(This,pVal)

#define IWMRMRights2_put_PMRights(This,newVal)	\
    (This)->lpVtbl -> put_PMRights(This,newVal)

#define IWMRMRights2_get_PMAppSecurity(This,pVal)	\
    (This)->lpVtbl -> get_PMAppSecurity(This,pVal)

#define IWMRMRights2_put_PMAppSecurity(This,newVal)	\
    (This)->lpVtbl -> put_PMAppSecurity(This,newVal)

#define IWMRMRights2_get_PMExpirationDate(This,pVal)	\
    (This)->lpVtbl -> get_PMExpirationDate(This,pVal)

#define IWMRMRights2_put_PMExpirationDate(This,newVal)	\
    (This)->lpVtbl -> put_PMExpirationDate(This,newVal)

#define IWMRMRights2_get_BurnToCDCount(This,pVal)	\
    (This)->lpVtbl -> get_BurnToCDCount(This,pVal)

#define IWMRMRights2_put_BurnToCDCount(This,newVal)	\
    (This)->lpVtbl -> put_BurnToCDCount(This,newVal)


#define IWMRMRights2_get_ExpirationAfterFirstUse(This,pVal)	\
    (This)->lpVtbl -> get_ExpirationAfterFirstUse(This,pVal)

#define IWMRMRights2_put_ExpirationAfterFirstUse(This,newVal)	\
    (This)->lpVtbl -> put_ExpirationAfterFirstUse(This,newVal)

#define IWMRMRights2_get_ExpirationOnStore(This,pVal)	\
    (This)->lpVtbl -> get_ExpirationOnStore(This,pVal)

#define IWMRMRights2_put_ExpirationOnStore(This,newVal)	\
    (This)->lpVtbl -> put_ExpirationOnStore(This,newVal)

#define IWMRMRights2_get_AllowSaveStreamProtected(This,pVal)	\
    (This)->lpVtbl -> get_AllowSaveStreamProtected(This,pVal)

#define IWMRMRights2_put_AllowSaveStreamProtected(This,newVal)	\
    (This)->lpVtbl -> put_AllowSaveStreamProtected(This,newVal)

#define IWMRMRights2_ExcludeApplication(This,dwAppID)	\
    (This)->lpVtbl -> ExcludeApplication(This,dwAppID)

#define IWMRMRights2_get_MinimumClientSDKSecurity(This,pVal)	\
    (This)->lpVtbl -> get_MinimumClientSDKSecurity(This,pVal)

#define IWMRMRights2_put_MinimumClientSDKSecurity(This,newVal)	\
    (This)->lpVtbl -> put_MinimumClientSDKSecurity(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_get_ExpirationAfterFirstUse_Proxy( 
    IWMRMRights2 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights2_get_ExpirationAfterFirstUse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_put_ExpirationAfterFirstUse_Proxy( 
    IWMRMRights2 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights2_put_ExpirationAfterFirstUse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_get_ExpirationOnStore_Proxy( 
    IWMRMRights2 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights2_get_ExpirationOnStore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_put_ExpirationOnStore_Proxy( 
    IWMRMRights2 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights2_put_ExpirationOnStore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_get_AllowSaveStreamProtected_Proxy( 
    IWMRMRights2 * This,
    /* [retval][out] */ BOOL *pVal);


void __RPC_STUB IWMRMRights2_get_AllowSaveStreamProtected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_put_AllowSaveStreamProtected_Proxy( 
    IWMRMRights2 * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IWMRMRights2_put_AllowSaveStreamProtected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_ExcludeApplication_Proxy( 
    IWMRMRights2 * This,
    /* [in] */ DWORD dwAppID);


void __RPC_STUB IWMRMRights2_ExcludeApplication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_get_MinimumClientSDKSecurity_Proxy( 
    IWMRMRights2 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights2_get_MinimumClientSDKSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights2_put_MinimumClientSDKSecurity_Proxy( 
    IWMRMRights2 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights2_put_MinimumClientSDKSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMRights2_INTERFACE_DEFINED__ */


#ifndef __IWMRMRights3_INTERFACE_DEFINED__
#define __IWMRMRights3_INTERFACE_DEFINED__

/* interface IWMRMRights3 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMRights3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84650B4B-0857-4899-B383-994642CA9D30")
    IWMRMRights3 : public IWMRMRights2
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowCollaborativePlay( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowCollaborativePlay( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowPlaylistBurn( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowPlaylistBurn( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlaylistBurnTrackCount( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlaylistBurnTrackCount( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxPlaylistBurnCount( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxPlaylistBurnCount( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowCopy( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowCopy( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CopyCount( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CopyCount( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GracePeriod( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GracePeriod( 
            /* [in] */ DWORD newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowPlay( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowPlay( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CopyRestrictions( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CopyRestrictions( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlayRestrictions( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlayRestrictions( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinimumSecurityLevel( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MinimumSecurityLevel( 
            /* [in] */ DWORD newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMRights3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMRights3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMRights3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMRights3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMRights3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMRights3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMRights3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMRights3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowBackupRestore )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowBackupRestore )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowBurnToCD )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowBurnToCD )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BeginDate )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BeginDate )( 
            IWMRMRights3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeleteOnClockRollback )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeleteOnClockRollback )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableOnClockRollback )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableOnClockRollback )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationDate )( 
            IWMRMRights3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllRights )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BSTR *pbstrRights);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumAppSecurity )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumAppSecurity )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPlayOnPC )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPlayOnPC )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Playcount )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Playcount )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWMRMRights3 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSAPMode )( 
            IWMRMRights3 * This,
            /* [in] */ VARIANT varAllowDigitalOut,
            /* [in] */ VARIANT varCheckDriverCerts,
            /* [in] */ VARIANT varMinDriverSecurity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSAPMode )( 
            IWMRMRights3 * This,
            /* [out][in] */ VARIANT *pvarAllowDigitalOut,
            /* [out][in] */ VARIANT *pvarCheckDriverCerts,
            /* [out][in] */ VARIANT *pvarMinDriverSecurity);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowTransferToSDMI )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowTransferToSDMI )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowTransferToNonSDMI )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowTransferToNonSDMI )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransferCount )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransferCount )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMRights )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMRights )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMAppSecurity )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMAppSecurity )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PMExpirationDate )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PMExpirationDate )( 
            IWMRMRights3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BurnToCDCount )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BurnToCDCount )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationAfterFirstUse )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationAfterFirstUse )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationOnStore )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationOnStore )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowSaveStreamProtected )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSaveStreamProtected )( 
            IWMRMRights3 * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExcludeApplication )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD dwAppID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumClientSDKSecurity )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumClientSDKSecurity )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowCollaborativePlay )( 
            IWMRMRights3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowCollaborativePlay )( 
            IWMRMRights3 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPlaylistBurn )( 
            IWMRMRights3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPlaylistBurn )( 
            IWMRMRights3 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlaylistBurnTrackCount )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlaylistBurnTrackCount )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxPlaylistBurnCount )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxPlaylistBurnCount )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowCopy )( 
            IWMRMRights3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowCopy )( 
            IWMRMRights3 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CopyCount )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CopyCount )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GracePeriod )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GracePeriod )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPlay )( 
            IWMRMRights3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPlay )( 
            IWMRMRights3 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CopyRestrictions )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CopyRestrictions )( 
            IWMRMRights3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlayRestrictions )( 
            IWMRMRights3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlayRestrictions )( 
            IWMRMRights3 * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinimumSecurityLevel )( 
            IWMRMRights3 * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinimumSecurityLevel )( 
            IWMRMRights3 * This,
            /* [in] */ DWORD newVal);
        
        END_INTERFACE
    } IWMRMRights3Vtbl;

    interface IWMRMRights3
    {
        CONST_VTBL struct IWMRMRights3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMRights3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMRights3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMRights3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMRights3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMRights3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMRights3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMRights3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMRights3_get_AllowBackupRestore(This,pVal)	\
    (This)->lpVtbl -> get_AllowBackupRestore(This,pVal)

#define IWMRMRights3_put_AllowBackupRestore(This,newVal)	\
    (This)->lpVtbl -> put_AllowBackupRestore(This,newVal)

#define IWMRMRights3_get_AllowBurnToCD(This,pVal)	\
    (This)->lpVtbl -> get_AllowBurnToCD(This,pVal)

#define IWMRMRights3_put_AllowBurnToCD(This,newVal)	\
    (This)->lpVtbl -> put_AllowBurnToCD(This,newVal)

#define IWMRMRights3_get_BeginDate(This,pVal)	\
    (This)->lpVtbl -> get_BeginDate(This,pVal)

#define IWMRMRights3_put_BeginDate(This,newVal)	\
    (This)->lpVtbl -> put_BeginDate(This,newVal)

#define IWMRMRights3_get_DeleteOnClockRollback(This,pVal)	\
    (This)->lpVtbl -> get_DeleteOnClockRollback(This,pVal)

#define IWMRMRights3_put_DeleteOnClockRollback(This,newVal)	\
    (This)->lpVtbl -> put_DeleteOnClockRollback(This,newVal)

#define IWMRMRights3_get_DisableOnClockRollback(This,pVal)	\
    (This)->lpVtbl -> get_DisableOnClockRollback(This,pVal)

#define IWMRMRights3_put_DisableOnClockRollback(This,newVal)	\
    (This)->lpVtbl -> put_DisableOnClockRollback(This,newVal)

#define IWMRMRights3_get_ExpirationDate(This,pVal)	\
    (This)->lpVtbl -> get_ExpirationDate(This,pVal)

#define IWMRMRights3_put_ExpirationDate(This,newVal)	\
    (This)->lpVtbl -> put_ExpirationDate(This,newVal)

#define IWMRMRights3_GetAllRights(This,pbstrRights)	\
    (This)->lpVtbl -> GetAllRights(This,pbstrRights)

#define IWMRMRights3_get_MinimumAppSecurity(This,pVal)	\
    (This)->lpVtbl -> get_MinimumAppSecurity(This,pVal)

#define IWMRMRights3_put_MinimumAppSecurity(This,newVal)	\
    (This)->lpVtbl -> put_MinimumAppSecurity(This,newVal)

#define IWMRMRights3_get_AllowPlayOnPC(This,pVal)	\
    (This)->lpVtbl -> get_AllowPlayOnPC(This,pVal)

#define IWMRMRights3_put_AllowPlayOnPC(This,newVal)	\
    (This)->lpVtbl -> put_AllowPlayOnPC(This,newVal)

#define IWMRMRights3_get_Playcount(This,pVal)	\
    (This)->lpVtbl -> get_Playcount(This,pVal)

#define IWMRMRights3_put_Playcount(This,newVal)	\
    (This)->lpVtbl -> put_Playcount(This,newVal)

#define IWMRMRights3_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IWMRMRights3_SetSAPMode(This,varAllowDigitalOut,varCheckDriverCerts,varMinDriverSecurity)	\
    (This)->lpVtbl -> SetSAPMode(This,varAllowDigitalOut,varCheckDriverCerts,varMinDriverSecurity)

#define IWMRMRights3_GetSAPMode(This,pvarAllowDigitalOut,pvarCheckDriverCerts,pvarMinDriverSecurity)	\
    (This)->lpVtbl -> GetSAPMode(This,pvarAllowDigitalOut,pvarCheckDriverCerts,pvarMinDriverSecurity)

#define IWMRMRights3_get_AllowTransferToSDMI(This,pVal)	\
    (This)->lpVtbl -> get_AllowTransferToSDMI(This,pVal)

#define IWMRMRights3_put_AllowTransferToSDMI(This,newVal)	\
    (This)->lpVtbl -> put_AllowTransferToSDMI(This,newVal)

#define IWMRMRights3_get_AllowTransferToNonSDMI(This,pVal)	\
    (This)->lpVtbl -> get_AllowTransferToNonSDMI(This,pVal)

#define IWMRMRights3_put_AllowTransferToNonSDMI(This,newVal)	\
    (This)->lpVtbl -> put_AllowTransferToNonSDMI(This,newVal)

#define IWMRMRights3_get_TransferCount(This,pVal)	\
    (This)->lpVtbl -> get_TransferCount(This,pVal)

#define IWMRMRights3_put_TransferCount(This,newVal)	\
    (This)->lpVtbl -> put_TransferCount(This,newVal)

#define IWMRMRights3_get_PMRights(This,pVal)	\
    (This)->lpVtbl -> get_PMRights(This,pVal)

#define IWMRMRights3_put_PMRights(This,newVal)	\
    (This)->lpVtbl -> put_PMRights(This,newVal)

#define IWMRMRights3_get_PMAppSecurity(This,pVal)	\
    (This)->lpVtbl -> get_PMAppSecurity(This,pVal)

#define IWMRMRights3_put_PMAppSecurity(This,newVal)	\
    (This)->lpVtbl -> put_PMAppSecurity(This,newVal)

#define IWMRMRights3_get_PMExpirationDate(This,pVal)	\
    (This)->lpVtbl -> get_PMExpirationDate(This,pVal)

#define IWMRMRights3_put_PMExpirationDate(This,newVal)	\
    (This)->lpVtbl -> put_PMExpirationDate(This,newVal)

#define IWMRMRights3_get_BurnToCDCount(This,pVal)	\
    (This)->lpVtbl -> get_BurnToCDCount(This,pVal)

#define IWMRMRights3_put_BurnToCDCount(This,newVal)	\
    (This)->lpVtbl -> put_BurnToCDCount(This,newVal)


#define IWMRMRights3_get_ExpirationAfterFirstUse(This,pVal)	\
    (This)->lpVtbl -> get_ExpirationAfterFirstUse(This,pVal)

#define IWMRMRights3_put_ExpirationAfterFirstUse(This,newVal)	\
    (This)->lpVtbl -> put_ExpirationAfterFirstUse(This,newVal)

#define IWMRMRights3_get_ExpirationOnStore(This,pVal)	\
    (This)->lpVtbl -> get_ExpirationOnStore(This,pVal)

#define IWMRMRights3_put_ExpirationOnStore(This,newVal)	\
    (This)->lpVtbl -> put_ExpirationOnStore(This,newVal)

#define IWMRMRights3_get_AllowSaveStreamProtected(This,pVal)	\
    (This)->lpVtbl -> get_AllowSaveStreamProtected(This,pVal)

#define IWMRMRights3_put_AllowSaveStreamProtected(This,newVal)	\
    (This)->lpVtbl -> put_AllowSaveStreamProtected(This,newVal)

#define IWMRMRights3_ExcludeApplication(This,dwAppID)	\
    (This)->lpVtbl -> ExcludeApplication(This,dwAppID)

#define IWMRMRights3_get_MinimumClientSDKSecurity(This,pVal)	\
    (This)->lpVtbl -> get_MinimumClientSDKSecurity(This,pVal)

#define IWMRMRights3_put_MinimumClientSDKSecurity(This,newVal)	\
    (This)->lpVtbl -> put_MinimumClientSDKSecurity(This,newVal)


#define IWMRMRights3_get_AllowCollaborativePlay(This,pVal)	\
    (This)->lpVtbl -> get_AllowCollaborativePlay(This,pVal)

#define IWMRMRights3_put_AllowCollaborativePlay(This,newVal)	\
    (This)->lpVtbl -> put_AllowCollaborativePlay(This,newVal)

#define IWMRMRights3_get_AllowPlaylistBurn(This,pVal)	\
    (This)->lpVtbl -> get_AllowPlaylistBurn(This,pVal)

#define IWMRMRights3_put_AllowPlaylistBurn(This,newVal)	\
    (This)->lpVtbl -> put_AllowPlaylistBurn(This,newVal)

#define IWMRMRights3_get_PlaylistBurnTrackCount(This,pVal)	\
    (This)->lpVtbl -> get_PlaylistBurnTrackCount(This,pVal)

#define IWMRMRights3_put_PlaylistBurnTrackCount(This,newVal)	\
    (This)->lpVtbl -> put_PlaylistBurnTrackCount(This,newVal)

#define IWMRMRights3_get_MaxPlaylistBurnCount(This,pVal)	\
    (This)->lpVtbl -> get_MaxPlaylistBurnCount(This,pVal)

#define IWMRMRights3_put_MaxPlaylistBurnCount(This,newVal)	\
    (This)->lpVtbl -> put_MaxPlaylistBurnCount(This,newVal)

#define IWMRMRights3_get_AllowCopy(This,pVal)	\
    (This)->lpVtbl -> get_AllowCopy(This,pVal)

#define IWMRMRights3_put_AllowCopy(This,newVal)	\
    (This)->lpVtbl -> put_AllowCopy(This,newVal)

#define IWMRMRights3_get_CopyCount(This,pVal)	\
    (This)->lpVtbl -> get_CopyCount(This,pVal)

#define IWMRMRights3_put_CopyCount(This,newVal)	\
    (This)->lpVtbl -> put_CopyCount(This,newVal)

#define IWMRMRights3_get_GracePeriod(This,pVal)	\
    (This)->lpVtbl -> get_GracePeriod(This,pVal)

#define IWMRMRights3_put_GracePeriod(This,newVal)	\
    (This)->lpVtbl -> put_GracePeriod(This,newVal)

#define IWMRMRights3_get_AllowPlay(This,pVal)	\
    (This)->lpVtbl -> get_AllowPlay(This,pVal)

#define IWMRMRights3_put_AllowPlay(This,newVal)	\
    (This)->lpVtbl -> put_AllowPlay(This,newVal)

#define IWMRMRights3_get_CopyRestrictions(This,pVal)	\
    (This)->lpVtbl -> get_CopyRestrictions(This,pVal)

#define IWMRMRights3_put_CopyRestrictions(This,newVal)	\
    (This)->lpVtbl -> put_CopyRestrictions(This,newVal)

#define IWMRMRights3_get_PlayRestrictions(This,pVal)	\
    (This)->lpVtbl -> get_PlayRestrictions(This,pVal)

#define IWMRMRights3_put_PlayRestrictions(This,newVal)	\
    (This)->lpVtbl -> put_PlayRestrictions(This,newVal)

#define IWMRMRights3_get_MinimumSecurityLevel(This,pVal)	\
    (This)->lpVtbl -> get_MinimumSecurityLevel(This,pVal)

#define IWMRMRights3_put_MinimumSecurityLevel(This,newVal)	\
    (This)->lpVtbl -> put_MinimumSecurityLevel(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_AllowCollaborativePlay_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IWMRMRights3_get_AllowCollaborativePlay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_AllowCollaborativePlay_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IWMRMRights3_put_AllowCollaborativePlay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_AllowPlaylistBurn_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IWMRMRights3_get_AllowPlaylistBurn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_AllowPlaylistBurn_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IWMRMRights3_put_AllowPlaylistBurn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_PlaylistBurnTrackCount_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights3_get_PlaylistBurnTrackCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_PlaylistBurnTrackCount_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights3_put_PlaylistBurnTrackCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_MaxPlaylistBurnCount_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights3_get_MaxPlaylistBurnCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_MaxPlaylistBurnCount_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights3_put_MaxPlaylistBurnCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_AllowCopy_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IWMRMRights3_get_AllowCopy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_AllowCopy_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IWMRMRights3_put_AllowCopy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_CopyCount_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights3_get_CopyCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_CopyCount_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights3_put_CopyCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_GracePeriod_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights3_get_GracePeriod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_GracePeriod_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights3_put_GracePeriod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_AllowPlay_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IWMRMRights3_get_AllowPlay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_AllowPlay_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IWMRMRights3_put_AllowPlay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_CopyRestrictions_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMRights3_get_CopyRestrictions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_CopyRestrictions_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMRights3_put_CopyRestrictions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_PlayRestrictions_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMRights3_get_PlayRestrictions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_PlayRestrictions_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMRights3_put_PlayRestrictions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_get_MinimumSecurityLevel_Proxy( 
    IWMRMRights3 * This,
    /* [retval][out] */ DWORD *pVal);


void __RPC_STUB IWMRMRights3_get_MinimumSecurityLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMRights3_put_MinimumSecurityLevel_Proxy( 
    IWMRMRights3 * This,
    /* [in] */ DWORD newVal);


void __RPC_STUB IWMRMRights3_put_MinimumSecurityLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMRights3_INTERFACE_DEFINED__ */


#ifndef __IWMRMResponse_INTERFACE_DEFINED__
#define __IWMRMResponse_INTERFACE_DEFINED__

/* interface IWMRMResponse */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMResponse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4585796B-BC65-449a-ADDA-499D6DB07801")
    IWMRMResponse : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddLicense( 
            /* [in] */ BSTR bstrVersion,
            /* [in] */ BSTR bstrLicense) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLicenseResponse( 
            /* [retval][out] */ BSTR *pbstrResponse) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReplaceQuotesWith( 
            /* [in] */ BSTR bstrReplacement) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMResponseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMResponse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMResponse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMResponse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMResponse * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMResponse * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMResponse * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMResponse * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddLicense )( 
            IWMRMResponse * This,
            /* [in] */ BSTR bstrVersion,
            /* [in] */ BSTR bstrLicense);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLicenseResponse )( 
            IWMRMResponse * This,
            /* [retval][out] */ BSTR *pbstrResponse);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReplaceQuotesWith )( 
            IWMRMResponse * This,
            /* [in] */ BSTR bstrReplacement);
        
        END_INTERFACE
    } IWMRMResponseVtbl;

    interface IWMRMResponse
    {
        CONST_VTBL struct IWMRMResponseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMResponse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMResponse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMResponse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMResponse_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMResponse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMResponse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMResponse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMResponse_AddLicense(This,bstrVersion,bstrLicense)	\
    (This)->lpVtbl -> AddLicense(This,bstrVersion,bstrLicense)

#define IWMRMResponse_GetLicenseResponse(This,pbstrResponse)	\
    (This)->lpVtbl -> GetLicenseResponse(This,pbstrResponse)

#define IWMRMResponse_put_ReplaceQuotesWith(This,bstrReplacement)	\
    (This)->lpVtbl -> put_ReplaceQuotesWith(This,bstrReplacement)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMResponse_AddLicense_Proxy( 
    IWMRMResponse * This,
    /* [in] */ BSTR bstrVersion,
    /* [in] */ BSTR bstrLicense);


void __RPC_STUB IWMRMResponse_AddLicense_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMResponse_GetLicenseResponse_Proxy( 
    IWMRMResponse * This,
    /* [retval][out] */ BSTR *pbstrResponse);


void __RPC_STUB IWMRMResponse_GetLicenseResponse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMResponse_put_ReplaceQuotesWith_Proxy( 
    IWMRMResponse * This,
    /* [in] */ BSTR bstrReplacement);


void __RPC_STUB IWMRMResponse_put_ReplaceQuotesWith_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMResponse_INTERFACE_DEFINED__ */


#ifndef __IWMRMTools_INTERFACE_DEFINED__
#define __IWMRMTools_INTERFACE_DEFINED__

/* interface IWMRMTools */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMTools;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFEC8072-F9F0-47fd-9B7E-C10951B36940")
    IWMRMTools : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateContentRevocation( 
            /* [in] */ BSTR bstrContentOwnerPrivKey,
            /* [in] */ DWORD dwSequenceNumber,
            /* [in] */ BSTR bstrContentOwnerPubKey,
            /* [in] */ BSTR bstrLicenseServerPubKey,
            /* [in] */ VARIANT vsrReserved,
            /* [retval][out] */ BSTR *pbstrContentRevocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMToolsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMTools * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMTools * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMTools * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMTools * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMTools * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMTools * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMTools * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateContentRevocation )( 
            IWMRMTools * This,
            /* [in] */ BSTR bstrContentOwnerPrivKey,
            /* [in] */ DWORD dwSequenceNumber,
            /* [in] */ BSTR bstrContentOwnerPubKey,
            /* [in] */ BSTR bstrLicenseServerPubKey,
            /* [in] */ VARIANT vsrReserved,
            /* [retval][out] */ BSTR *pbstrContentRevocation);
        
        END_INTERFACE
    } IWMRMToolsVtbl;

    interface IWMRMTools
    {
        CONST_VTBL struct IWMRMToolsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMTools_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMTools_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMTools_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMTools_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMTools_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMTools_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMTools_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMTools_GenerateContentRevocation(This,bstrContentOwnerPrivKey,dwSequenceNumber,bstrContentOwnerPubKey,bstrLicenseServerPubKey,vsrReserved,pbstrContentRevocation)	\
    (This)->lpVtbl -> GenerateContentRevocation(This,bstrContentOwnerPrivKey,dwSequenceNumber,bstrContentOwnerPubKey,bstrLicenseServerPubKey,vsrReserved,pbstrContentRevocation)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMTools_GenerateContentRevocation_Proxy( 
    IWMRMTools * This,
    /* [in] */ BSTR bstrContentOwnerPrivKey,
    /* [in] */ DWORD dwSequenceNumber,
    /* [in] */ BSTR bstrContentOwnerPubKey,
    /* [in] */ BSTR bstrLicenseServerPubKey,
    /* [in] */ VARIANT vsrReserved,
    /* [retval][out] */ BSTR *pbstrContentRevocation);


void __RPC_STUB IWMRMTools_GenerateContentRevocation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMTools_INTERFACE_DEFINED__ */


#ifndef __IWMRMHeaderSigning_INTERFACE_DEFINED__
#define __IWMRMHeaderSigning_INTERFACE_DEFINED__

/* interface IWMRMHeaderSigning */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMRMHeaderSigning;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("247B673A-259D-4064-A4BE-9CAECCF77BA7")
    IWMRMHeaderSigning : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddDigitalSignatureObject( 
            /* [size_is][out][in] */ BYTE *pbHeader,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwBytesNeeded) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMHeaderSigningVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMHeaderSigning * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMHeaderSigning * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMHeaderSigning * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddDigitalSignatureObject )( 
            IWMRMHeaderSigning * This,
            /* [size_is][out][in] */ BYTE *pbHeader,
            /* [in] */ DWORD dwSize,
            /* [out] */ DWORD *pdwBytesNeeded);
        
        END_INTERFACE
    } IWMRMHeaderSigningVtbl;

    interface IWMRMHeaderSigning
    {
        CONST_VTBL struct IWMRMHeaderSigningVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMHeaderSigning_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMHeaderSigning_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMHeaderSigning_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMHeaderSigning_AddDigitalSignatureObject(This,pbHeader,dwSize,pdwBytesNeeded)	\
    (This)->lpVtbl -> AddDigitalSignatureObject(This,pbHeader,dwSize,pdwBytesNeeded)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMRMHeaderSigning_AddDigitalSignatureObject_Proxy( 
    IWMRMHeaderSigning * This,
    /* [size_is][out][in] */ BYTE *pbHeader,
    /* [in] */ DWORD dwSize,
    /* [out] */ DWORD *pdwBytesNeeded);


void __RPC_STUB IWMRMHeaderSigning_AddDigitalSignatureObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMHeaderSigning_INTERFACE_DEFINED__ */


#ifndef __IWMRMMetering_INTERFACE_DEFINED__
#define __IWMRMMetering_INTERFACE_DEFINED__

/* interface IWMRMMetering */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMMetering;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E84F84F-E590-44cf-B76A-B6364302DD8D")
    IWMRMMetering : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MeteringCertificate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MeteringCertificate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerPrivateKey( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerPrivateKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Challenge( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Challenge( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMeteringDataAsXml( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMeteringResponse( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMeteringData( 
            /* [retval][out] */ IWMRMMeteringData **meteringData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMMeteringVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMMetering * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMMetering * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMMetering * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMMetering * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMMetering * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMMetering * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMMetering * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeteringCertificate )( 
            IWMRMMetering * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MeteringCertificate )( 
            IWMRMMetering * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerPrivateKey )( 
            IWMRMMetering * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerPrivateKey )( 
            IWMRMMetering * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Challenge )( 
            IWMRMMetering * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Challenge )( 
            IWMRMMetering * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMeteringDataAsXml )( 
            IWMRMMetering * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMeteringResponse )( 
            IWMRMMetering * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMeteringData )( 
            IWMRMMetering * This,
            /* [retval][out] */ IWMRMMeteringData **meteringData);
        
        END_INTERFACE
    } IWMRMMeteringVtbl;

    interface IWMRMMetering
    {
        CONST_VTBL struct IWMRMMeteringVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMMetering_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMMetering_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMMetering_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMMetering_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMMetering_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMMetering_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMMetering_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMMetering_get_MeteringCertificate(This,pVal)	\
    (This)->lpVtbl -> get_MeteringCertificate(This,pVal)

#define IWMRMMetering_put_MeteringCertificate(This,newVal)	\
    (This)->lpVtbl -> put_MeteringCertificate(This,newVal)

#define IWMRMMetering_get_ServerPrivateKey(This,pVal)	\
    (This)->lpVtbl -> get_ServerPrivateKey(This,pVal)

#define IWMRMMetering_put_ServerPrivateKey(This,newVal)	\
    (This)->lpVtbl -> put_ServerPrivateKey(This,newVal)

#define IWMRMMetering_put_Challenge(This,newVal)	\
    (This)->lpVtbl -> put_Challenge(This,newVal)

#define IWMRMMetering_get_Challenge(This,pVal)	\
    (This)->lpVtbl -> get_Challenge(This,pVal)

#define IWMRMMetering_GetMeteringDataAsXml(This,pVal)	\
    (This)->lpVtbl -> GetMeteringDataAsXml(This,pVal)

#define IWMRMMetering_GetMeteringResponse(This,pVal)	\
    (This)->lpVtbl -> GetMeteringResponse(This,pVal)

#define IWMRMMetering_GetMeteringData(This,meteringData)	\
    (This)->lpVtbl -> GetMeteringData(This,meteringData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_get_MeteringCertificate_Proxy( 
    IWMRMMetering * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMetering_get_MeteringCertificate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_put_MeteringCertificate_Proxy( 
    IWMRMMetering * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMMetering_put_MeteringCertificate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_get_ServerPrivateKey_Proxy( 
    IWMRMMetering * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMetering_get_ServerPrivateKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_put_ServerPrivateKey_Proxy( 
    IWMRMMetering * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMMetering_put_ServerPrivateKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_put_Challenge_Proxy( 
    IWMRMMetering * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMMetering_put_Challenge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_get_Challenge_Proxy( 
    IWMRMMetering * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMetering_get_Challenge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_GetMeteringDataAsXml_Proxy( 
    IWMRMMetering * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMetering_GetMeteringDataAsXml_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_GetMeteringResponse_Proxy( 
    IWMRMMetering * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMetering_GetMeteringResponse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMMetering_GetMeteringData_Proxy( 
    IWMRMMetering * This,
    /* [retval][out] */ IWMRMMeteringData **meteringData);


void __RPC_STUB IWMRMMetering_GetMeteringData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMMetering_INTERFACE_DEFINED__ */


#ifndef __IWMRMMeteringData_INTERFACE_DEFINED__
#define __IWMRMMeteringData_INTERFACE_DEFINED__

/* interface IWMRMMeteringData */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMMeteringData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A726F062-C431-4b5d-92C8-52D7D709FFE7")
    IWMRMMeteringData : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MeteringId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransactionId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContentCollection( 
            /* [retval][out] */ IWMRMMeteringContentCollection **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMMeteringDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMMeteringData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMMeteringData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMMeteringData * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMMeteringData * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMMeteringData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMMeteringData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMMeteringData * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeteringId )( 
            IWMRMMeteringData * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionId )( 
            IWMRMMeteringData * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentCollection )( 
            IWMRMMeteringData * This,
            /* [retval][out] */ IWMRMMeteringContentCollection **pVal);
        
        END_INTERFACE
    } IWMRMMeteringDataVtbl;

    interface IWMRMMeteringData
    {
        CONST_VTBL struct IWMRMMeteringDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMMeteringData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMMeteringData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMMeteringData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMMeteringData_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMMeteringData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMMeteringData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMMeteringData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMMeteringData_get_MeteringId(This,pVal)	\
    (This)->lpVtbl -> get_MeteringId(This,pVal)

#define IWMRMMeteringData_get_TransactionId(This,pVal)	\
    (This)->lpVtbl -> get_TransactionId(This,pVal)

#define IWMRMMeteringData_get_ContentCollection(This,pVal)	\
    (This)->lpVtbl -> get_ContentCollection(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringData_get_MeteringId_Proxy( 
    IWMRMMeteringData * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMeteringData_get_MeteringId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringData_get_TransactionId_Proxy( 
    IWMRMMeteringData * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMeteringData_get_TransactionId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringData_get_ContentCollection_Proxy( 
    IWMRMMeteringData * This,
    /* [retval][out] */ IWMRMMeteringContentCollection **pVal);


void __RPC_STUB IWMRMMeteringData_get_ContentCollection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMMeteringData_INTERFACE_DEFINED__ */


#ifndef __IWMRMMeteringContentCollection_INTERFACE_DEFINED__
#define __IWMRMMeteringContentCollection_INTERFACE_DEFINED__

/* interface IWMRMMeteringContentCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMMeteringContentCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DD83AC3-5C7A-4d9f-91B2-E56E334AAB7E")
    IWMRMMeteringContentCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_item( 
            /* [in] */ LONG index,
            /* [retval][out] */ IWMRMMeteringContent **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMMeteringContentCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMMeteringContentCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMMeteringContentCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMMeteringContentCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMMeteringContentCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMMeteringContentCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMMeteringContentCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMMeteringContentCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IWMRMMeteringContentCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IWMRMMeteringContent **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IWMRMMeteringContentCollection * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IWMRMMeteringContentCollectionVtbl;

    interface IWMRMMeteringContentCollection
    {
        CONST_VTBL struct IWMRMMeteringContentCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMMeteringContentCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMMeteringContentCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMMeteringContentCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMMeteringContentCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMMeteringContentCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMMeteringContentCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMMeteringContentCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMMeteringContentCollection_get_item(This,index,pVal)	\
    (This)->lpVtbl -> get_item(This,index,pVal)

#define IWMRMMeteringContentCollection_get_length(This,pVal)	\
    (This)->lpVtbl -> get_length(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringContentCollection_get_item_Proxy( 
    IWMRMMeteringContentCollection * This,
    /* [in] */ LONG index,
    /* [retval][out] */ IWMRMMeteringContent **pVal);


void __RPC_STUB IWMRMMeteringContentCollection_get_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringContentCollection_get_length_Proxy( 
    IWMRMMeteringContentCollection * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWMRMMeteringContentCollection_get_length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMMeteringContentCollection_INTERFACE_DEFINED__ */


#ifndef __IWMRMMeteringContent_INTERFACE_DEFINED__
#define __IWMRMMeteringContent_INTERFACE_DEFINED__

/* interface IWMRMMeteringContent */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMMeteringContent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83A8F002-1B03-4719-B57E-DC0391A491FF")
    IWMRMMeteringContent : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Actions( 
            /* [retval][out] */ IWMRMMeteringActionCollection **pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMMeteringContentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMMeteringContent * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMMeteringContent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMMeteringContent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMMeteringContent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMMeteringContent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMMeteringContent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMMeteringContent * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyId )( 
            IWMRMMeteringContent * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Actions )( 
            IWMRMMeteringContent * This,
            /* [retval][out] */ IWMRMMeteringActionCollection **pVal);
        
        END_INTERFACE
    } IWMRMMeteringContentVtbl;

    interface IWMRMMeteringContent
    {
        CONST_VTBL struct IWMRMMeteringContentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMMeteringContent_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMMeteringContent_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMMeteringContent_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMMeteringContent_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMMeteringContent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMMeteringContent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMMeteringContent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMMeteringContent_get_KeyId(This,pVal)	\
    (This)->lpVtbl -> get_KeyId(This,pVal)

#define IWMRMMeteringContent_get_Actions(This,pVal)	\
    (This)->lpVtbl -> get_Actions(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringContent_get_KeyId_Proxy( 
    IWMRMMeteringContent * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMeteringContent_get_KeyId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringContent_get_Actions_Proxy( 
    IWMRMMeteringContent * This,
    /* [retval][out] */ IWMRMMeteringActionCollection **pVal);


void __RPC_STUB IWMRMMeteringContent_get_Actions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMMeteringContent_INTERFACE_DEFINED__ */


#ifndef __IWMRMMeteringActionCollection_INTERFACE_DEFINED__
#define __IWMRMMeteringActionCollection_INTERFACE_DEFINED__

/* interface IWMRMMeteringActionCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMMeteringActionCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("371A3AC2-2549-4ff7-BCE6-314B2CD23F41")
    IWMRMMeteringActionCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_item( 
            /* [in] */ LONG index,
            /* [retval][out] */ IWMRMMeteringAction **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMMeteringActionCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMMeteringActionCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMMeteringActionCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMMeteringActionCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMMeteringActionCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMMeteringActionCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMMeteringActionCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMMeteringActionCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_item )( 
            IWMRMMeteringActionCollection * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IWMRMMeteringAction **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IWMRMMeteringActionCollection * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IWMRMMeteringActionCollectionVtbl;

    interface IWMRMMeteringActionCollection
    {
        CONST_VTBL struct IWMRMMeteringActionCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMMeteringActionCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMMeteringActionCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMMeteringActionCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMMeteringActionCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMMeteringActionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMMeteringActionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMMeteringActionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMMeteringActionCollection_get_item(This,index,pVal)	\
    (This)->lpVtbl -> get_item(This,index,pVal)

#define IWMRMMeteringActionCollection_get_length(This,pVal)	\
    (This)->lpVtbl -> get_length(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringActionCollection_get_item_Proxy( 
    IWMRMMeteringActionCollection * This,
    /* [in] */ LONG index,
    /* [retval][out] */ IWMRMMeteringAction **pVal);


void __RPC_STUB IWMRMMeteringActionCollection_get_item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringActionCollection_get_length_Proxy( 
    IWMRMMeteringActionCollection * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWMRMMeteringActionCollection_get_length_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMMeteringActionCollection_INTERFACE_DEFINED__ */


#ifndef __IWMRMMeteringAction_INTERFACE_DEFINED__
#define __IWMRMMeteringAction_INTERFACE_DEFINED__

/* interface IWMRMMeteringAction */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMMeteringAction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD5E7658-2690-4203-99D5-8DC98AA5C37E")
    IWMRMMeteringAction : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMMeteringActionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMMeteringAction * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMMeteringAction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMMeteringAction * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMMeteringAction * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMMeteringAction * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMMeteringAction * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMMeteringAction * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IWMRMMeteringAction * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IWMRMMeteringAction * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IWMRMMeteringActionVtbl;

    interface IWMRMMeteringAction
    {
        CONST_VTBL struct IWMRMMeteringActionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMMeteringAction_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMMeteringAction_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMMeteringAction_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMMeteringAction_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMMeteringAction_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMMeteringAction_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMMeteringAction_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMMeteringAction_get_Name(This,pVal)	\
    (This)->lpVtbl -> get_Name(This,pVal)

#define IWMRMMeteringAction_get_Value(This,pVal)	\
    (This)->lpVtbl -> get_Value(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringAction_get_Name_Proxy( 
    IWMRMMeteringAction * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMMeteringAction_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMMeteringAction_get_Value_Proxy( 
    IWMRMMeteringAction * This,
    /* [retval][out] */ LONG *pVal);


void __RPC_STUB IWMRMMeteringAction_get_Value_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMMeteringAction_INTERFACE_DEFINED__ */


#ifndef __IWMRMRestrictions_INTERFACE_DEFINED__
#define __IWMRMRestrictions_INTERFACE_DEFINED__

/* interface IWMRMRestrictions */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMRestrictions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65036A26-70C2-428C-9A53-C8EAC6A420C3")
    IWMRMRestrictions : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddRestriction( 
            /* [in] */ WMRM_RESTRICTION_TYPE val,
            /* [in] */ DWORD level) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddExtension( 
            /* [in] */ BSTR guid,
            /* [in] */ BYTE byteVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSchemeToReserved( 
            /* [in] */ BSTR guid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSchemeToExclude( 
            /* [in] */ BSTR guid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSchemeToInclude( 
            /* [in] */ BSTR guid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRestrictions( 
            /* [retval][out] */ BSTR *prestrictions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMRestrictionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMRestrictions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMRestrictions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMRestrictions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMRestrictions * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMRestrictions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMRestrictions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMRestrictions * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddRestriction )( 
            IWMRMRestrictions * This,
            /* [in] */ WMRM_RESTRICTION_TYPE val,
            /* [in] */ DWORD level);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddExtension )( 
            IWMRMRestrictions * This,
            /* [in] */ BSTR guid,
            /* [in] */ BYTE byteVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSchemeToReserved )( 
            IWMRMRestrictions * This,
            /* [in] */ BSTR guid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSchemeToExclude )( 
            IWMRMRestrictions * This,
            /* [in] */ BSTR guid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSchemeToInclude )( 
            IWMRMRestrictions * This,
            /* [in] */ BSTR guid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRestrictions )( 
            IWMRMRestrictions * This,
            /* [retval][out] */ BSTR *prestrictions);
        
        END_INTERFACE
    } IWMRMRestrictionsVtbl;

    interface IWMRMRestrictions
    {
        CONST_VTBL struct IWMRMRestrictionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMRestrictions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMRestrictions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMRestrictions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMRestrictions_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMRestrictions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMRestrictions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMRestrictions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMRestrictions_AddRestriction(This,val,level)	\
    (This)->lpVtbl -> AddRestriction(This,val,level)

#define IWMRMRestrictions_AddExtension(This,guid,byteVal)	\
    (This)->lpVtbl -> AddExtension(This,guid,byteVal)

#define IWMRMRestrictions_AddSchemeToReserved(This,guid)	\
    (This)->lpVtbl -> AddSchemeToReserved(This,guid)

#define IWMRMRestrictions_AddSchemeToExclude(This,guid)	\
    (This)->lpVtbl -> AddSchemeToExclude(This,guid)

#define IWMRMRestrictions_AddSchemeToInclude(This,guid)	\
    (This)->lpVtbl -> AddSchemeToInclude(This,guid)

#define IWMRMRestrictions_GetRestrictions(This,prestrictions)	\
    (This)->lpVtbl -> GetRestrictions(This,prestrictions)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRestrictions_AddRestriction_Proxy( 
    IWMRMRestrictions * This,
    /* [in] */ WMRM_RESTRICTION_TYPE val,
    /* [in] */ DWORD level);


void __RPC_STUB IWMRMRestrictions_AddRestriction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRestrictions_AddExtension_Proxy( 
    IWMRMRestrictions * This,
    /* [in] */ BSTR guid,
    /* [in] */ BYTE byteVal);


void __RPC_STUB IWMRMRestrictions_AddExtension_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRestrictions_AddSchemeToReserved_Proxy( 
    IWMRMRestrictions * This,
    /* [in] */ BSTR guid);


void __RPC_STUB IWMRMRestrictions_AddSchemeToReserved_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRestrictions_AddSchemeToExclude_Proxy( 
    IWMRMRestrictions * This,
    /* [in] */ BSTR guid);


void __RPC_STUB IWMRMRestrictions_AddSchemeToExclude_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRestrictions_AddSchemeToInclude_Proxy( 
    IWMRMRestrictions * This,
    /* [in] */ BSTR guid);


void __RPC_STUB IWMRMRestrictions_AddSchemeToInclude_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMRestrictions_GetRestrictions_Proxy( 
    IWMRMRestrictions * This,
    /* [retval][out] */ BSTR *prestrictions);


void __RPC_STUB IWMRMRestrictions_GetRestrictions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMRestrictions_INTERFACE_DEFINED__ */


#ifndef __IWMRMLicenseRevocationAcknowledger_INTERFACE_DEFINED__
#define __IWMRMLicenseRevocationAcknowledger_INTERFACE_DEFINED__

/* interface IWMRMLicenseRevocationAcknowledger */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMLicenseRevocationAcknowledger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6607B5EE-0081-46E2-88B2-4470983AA791")
    IWMRMLicenseRevocationAcknowledger : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Verify( 
            /* [in] */ BSTR machinePubkey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTransactionId( 
            /* [retval][out] */ BSTR *transactionId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Acknowledgement( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Acknowledgement( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMLicenseRevocationAcknowledgerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMLicenseRevocationAcknowledger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMLicenseRevocationAcknowledger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [in] */ BSTR machinePubkey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTransactionId )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [retval][out] */ BSTR *transactionId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Acknowledgement )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Acknowledgement )( 
            IWMRMLicenseRevocationAcknowledger * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IWMRMLicenseRevocationAcknowledgerVtbl;

    interface IWMRMLicenseRevocationAcknowledger
    {
        CONST_VTBL struct IWMRMLicenseRevocationAcknowledgerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMLicenseRevocationAcknowledger_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMLicenseRevocationAcknowledger_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMLicenseRevocationAcknowledger_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMLicenseRevocationAcknowledger_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMLicenseRevocationAcknowledger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMLicenseRevocationAcknowledger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMLicenseRevocationAcknowledger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMLicenseRevocationAcknowledger_Verify(This,machinePubkey)	\
    (This)->lpVtbl -> Verify(This,machinePubkey)

#define IWMRMLicenseRevocationAcknowledger_GetTransactionId(This,transactionId)	\
    (This)->lpVtbl -> GetTransactionId(This,transactionId)

#define IWMRMLicenseRevocationAcknowledger_get_Acknowledgement(This,pVal)	\
    (This)->lpVtbl -> get_Acknowledgement(This,pVal)

#define IWMRMLicenseRevocationAcknowledger_put_Acknowledgement(This,newVal)	\
    (This)->lpVtbl -> put_Acknowledgement(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationAcknowledger_Verify_Proxy( 
    IWMRMLicenseRevocationAcknowledger * This,
    /* [in] */ BSTR machinePubkey);


void __RPC_STUB IWMRMLicenseRevocationAcknowledger_Verify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationAcknowledger_GetTransactionId_Proxy( 
    IWMRMLicenseRevocationAcknowledger * This,
    /* [retval][out] */ BSTR *transactionId);


void __RPC_STUB IWMRMLicenseRevocationAcknowledger_GetTransactionId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationAcknowledger_get_Acknowledgement_Proxy( 
    IWMRMLicenseRevocationAcknowledger * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicenseRevocationAcknowledger_get_Acknowledgement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationAcknowledger_put_Acknowledgement_Proxy( 
    IWMRMLicenseRevocationAcknowledger * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicenseRevocationAcknowledger_put_Acknowledgement_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMLicenseRevocationAcknowledger_INTERFACE_DEFINED__ */


#ifndef __IWMRMLicenseRevocationChallenge_INTERFACE_DEFINED__
#define __IWMRMLicenseRevocationChallenge_INTERFACE_DEFINED__

/* interface IWMRMLicenseRevocationChallenge */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMLicenseRevocationChallenge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11929226-B8D9-4855-8E24-7F2AFC0B7D96")
    IWMRMLicenseRevocationChallenge : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR lrbChallenge) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTransactionId( 
            /* [retval][out] */ BSTR *pbstrTid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMachineId( 
            /* [retval][out] */ BSTR *pbstrMid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMachinePublicKey( 
            /* [retval][out] */ BSTR *pbstrMPubKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCustomData( 
            /* [retval][out] */ BSTR *pbstrCustomData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMLicenseRevocationChallengeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMLicenseRevocationChallenge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMLicenseRevocationChallenge * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [in] */ BSTR lrbChallenge);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTransactionId )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [retval][out] */ BSTR *pbstrTid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMachineId )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [retval][out] */ BSTR *pbstrMid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMachinePublicKey )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [retval][out] */ BSTR *pbstrMPubKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCustomData )( 
            IWMRMLicenseRevocationChallenge * This,
            /* [retval][out] */ BSTR *pbstrCustomData);
        
        END_INTERFACE
    } IWMRMLicenseRevocationChallengeVtbl;

    interface IWMRMLicenseRevocationChallenge
    {
        CONST_VTBL struct IWMRMLicenseRevocationChallengeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMLicenseRevocationChallenge_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMLicenseRevocationChallenge_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMLicenseRevocationChallenge_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMLicenseRevocationChallenge_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMLicenseRevocationChallenge_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMLicenseRevocationChallenge_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMLicenseRevocationChallenge_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMLicenseRevocationChallenge_Initialize(This,lrbChallenge)	\
    (This)->lpVtbl -> Initialize(This,lrbChallenge)

#define IWMRMLicenseRevocationChallenge_GetTransactionId(This,pbstrTid)	\
    (This)->lpVtbl -> GetTransactionId(This,pbstrTid)

#define IWMRMLicenseRevocationChallenge_GetMachineId(This,pbstrMid)	\
    (This)->lpVtbl -> GetMachineId(This,pbstrMid)

#define IWMRMLicenseRevocationChallenge_GetMachinePublicKey(This,pbstrMPubKey)	\
    (This)->lpVtbl -> GetMachinePublicKey(This,pbstrMPubKey)

#define IWMRMLicenseRevocationChallenge_GetCustomData(This,pbstrCustomData)	\
    (This)->lpVtbl -> GetCustomData(This,pbstrCustomData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationChallenge_Initialize_Proxy( 
    IWMRMLicenseRevocationChallenge * This,
    /* [in] */ BSTR lrbChallenge);


void __RPC_STUB IWMRMLicenseRevocationChallenge_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationChallenge_GetTransactionId_Proxy( 
    IWMRMLicenseRevocationChallenge * This,
    /* [retval][out] */ BSTR *pbstrTid);


void __RPC_STUB IWMRMLicenseRevocationChallenge_GetTransactionId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationChallenge_GetMachineId_Proxy( 
    IWMRMLicenseRevocationChallenge * This,
    /* [retval][out] */ BSTR *pbstrMid);


void __RPC_STUB IWMRMLicenseRevocationChallenge_GetMachineId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationChallenge_GetMachinePublicKey_Proxy( 
    IWMRMLicenseRevocationChallenge * This,
    /* [retval][out] */ BSTR *pbstrMPubKey);


void __RPC_STUB IWMRMLicenseRevocationChallenge_GetMachinePublicKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationChallenge_GetCustomData_Proxy( 
    IWMRMLicenseRevocationChallenge * This,
    /* [retval][out] */ BSTR *pbstrCustomData);


void __RPC_STUB IWMRMLicenseRevocationChallenge_GetCustomData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMLicenseRevocationChallenge_INTERFACE_DEFINED__ */


#ifndef __IWMRMLicenseRevocationResponse_INTERFACE_DEFINED__
#define __IWMRMLicenseRevocationResponse_INTERFACE_DEFINED__

/* interface IWMRMLicenseRevocationResponse */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMRMLicenseRevocationResponse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D410E2DB-80E4-43CC-8014-EF99755E1728")
    IWMRMLicenseRevocationResponse : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomData( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomData( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RevocationPublicKey( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RevocationPublicKey( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TransactionId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TransactionId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateSignedResponse( 
            /* [in] */ BSTR bstrLGPrivateKey,
            /* [in] */ BSTR bstrMachinePublicKey,
            /* [retval][out] */ BSTR *pbstrResponse) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMRMLicenseRevocationResponseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMRMLicenseRevocationResponse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMRMLicenseRevocationResponse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWMRMLicenseRevocationResponse * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyId )( 
            IWMRMLicenseRevocationResponse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyId )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomData )( 
            IWMRMLicenseRevocationResponse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomData )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RevocationPublicKey )( 
            IWMRMLicenseRevocationResponse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RevocationPublicKey )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionId )( 
            IWMRMLicenseRevocationResponse * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransactionId )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateSignedResponse )( 
            IWMRMLicenseRevocationResponse * This,
            /* [in] */ BSTR bstrLGPrivateKey,
            /* [in] */ BSTR bstrMachinePublicKey,
            /* [retval][out] */ BSTR *pbstrResponse);
        
        END_INTERFACE
    } IWMRMLicenseRevocationResponseVtbl;

    interface IWMRMLicenseRevocationResponse
    {
        CONST_VTBL struct IWMRMLicenseRevocationResponseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMRMLicenseRevocationResponse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMRMLicenseRevocationResponse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMRMLicenseRevocationResponse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMRMLicenseRevocationResponse_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWMRMLicenseRevocationResponse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWMRMLicenseRevocationResponse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWMRMLicenseRevocationResponse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWMRMLicenseRevocationResponse_get_KeyId(This,pVal)	\
    (This)->lpVtbl -> get_KeyId(This,pVal)

#define IWMRMLicenseRevocationResponse_put_KeyId(This,newVal)	\
    (This)->lpVtbl -> put_KeyId(This,newVal)

#define IWMRMLicenseRevocationResponse_get_CustomData(This,pVal)	\
    (This)->lpVtbl -> get_CustomData(This,pVal)

#define IWMRMLicenseRevocationResponse_put_CustomData(This,newVal)	\
    (This)->lpVtbl -> put_CustomData(This,newVal)

#define IWMRMLicenseRevocationResponse_get_RevocationPublicKey(This,pVal)	\
    (This)->lpVtbl -> get_RevocationPublicKey(This,pVal)

#define IWMRMLicenseRevocationResponse_put_RevocationPublicKey(This,newVal)	\
    (This)->lpVtbl -> put_RevocationPublicKey(This,newVal)

#define IWMRMLicenseRevocationResponse_get_TransactionId(This,pVal)	\
    (This)->lpVtbl -> get_TransactionId(This,pVal)

#define IWMRMLicenseRevocationResponse_put_TransactionId(This,newVal)	\
    (This)->lpVtbl -> put_TransactionId(This,newVal)

#define IWMRMLicenseRevocationResponse_GenerateSignedResponse(This,bstrLGPrivateKey,bstrMachinePublicKey,pbstrResponse)	\
    (This)->lpVtbl -> GenerateSignedResponse(This,bstrLGPrivateKey,bstrMachinePublicKey,pbstrResponse)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_get_KeyId_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_get_KeyId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_put_KeyId_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_put_KeyId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_get_CustomData_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_get_CustomData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_put_CustomData_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_put_CustomData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_get_RevocationPublicKey_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_get_RevocationPublicKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_put_RevocationPublicKey_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_put_RevocationPublicKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_get_TransactionId_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_get_TransactionId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_put_TransactionId_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IWMRMLicenseRevocationResponse_put_TransactionId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IWMRMLicenseRevocationResponse_GenerateSignedResponse_Proxy( 
    IWMRMLicenseRevocationResponse * This,
    /* [in] */ BSTR bstrLGPrivateKey,
    /* [in] */ BSTR bstrMachinePublicKey,
    /* [retval][out] */ BSTR *pbstrResponse);


void __RPC_STUB IWMRMLicenseRevocationResponse_GenerateSignedResponse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMRMLicenseRevocationResponse_INTERFACE_DEFINED__ */



#ifndef __WMRMOBJSLib_LIBRARY_DEFINED__
#define __WMRMOBJSLib_LIBRARY_DEFINED__

/* library WMRMOBJSLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WMRMOBJSLib;

EXTERN_C const CLSID CLSID_WMRMProtect;

#ifdef __cplusplus

class DECLSPEC_UUID("42152A9D-AFFE-48B8-9C61-C1C5DDB64FF7")
WMRMProtect;
#endif

EXTERN_C const CLSID CLSID_WMRMHeader;

#ifdef __cplusplus

class DECLSPEC_UUID("457B9521-268E-44D6-A1D7-189C47EA7D5A")
WMRMHeader;
#endif

EXTERN_C const CLSID CLSID_WMRMCoding;

#ifdef __cplusplus

class DECLSPEC_UUID("3B19D980-A64C-4245-AC20-9E087CDE2DA3")
WMRMCoding;
#endif

EXTERN_C const CLSID CLSID_WMRMKeys;

#ifdef __cplusplus

class DECLSPEC_UUID("3AFB20E3-6FA9-44C7-9F93-0BA1F35B7501")
WMRMKeys;
#endif

EXTERN_C const CLSID CLSID_WMRMChallenge;

#ifdef __cplusplus

class DECLSPEC_UUID("76FB40C2-7B90-402A-867D-73747BF85F48")
WMRMChallenge;
#endif

EXTERN_C const CLSID CLSID_WMRMLicGen;

#ifdef __cplusplus

class DECLSPEC_UUID("FD12AEC6-1A3D-4294-8019-B6B771467428")
WMRMLicGen;
#endif

EXTERN_C const CLSID CLSID_WMRMRights;

#ifdef __cplusplus

class DECLSPEC_UUID("54789987-B968-4E76-9E40-D5F5EFC01714")
WMRMRights;
#endif

EXTERN_C const CLSID CLSID_WMRMResponse;

#ifdef __cplusplus

class DECLSPEC_UUID("11582EB3-3A56-4e50-B786-9B121E9C20D9")
WMRMResponse;
#endif

EXTERN_C const CLSID CLSID_WMRMTools;

#ifdef __cplusplus

class DECLSPEC_UUID("B984156F-0759-4959-9FD4-A865E9D6C28B")
WMRMTools;
#endif

EXTERN_C const CLSID CLSID_WMRMMetering;

#ifdef __cplusplus

class DECLSPEC_UUID("39C0D5BB-5E00-48e1-A4FF-7FD6EBC98123")
WMRMMetering;
#endif

EXTERN_C const CLSID CLSID_WMRMRestrictions;

#ifdef __cplusplus

class DECLSPEC_UUID("AC42A8E0-D613-4681-8AF7-365C120A7176")
WMRMRestrictions;
#endif

EXTERN_C const CLSID CLSID_WMRMLicenseRevocationAcknowledger;

#ifdef __cplusplus

class DECLSPEC_UUID("D83699D3-B617-42A5-B78C-17E61B1B642C")
WMRMLicenseRevocationAcknowledger;
#endif

EXTERN_C const CLSID CLSID_WMRMLicenseRevocationChallenge;

#ifdef __cplusplus

class DECLSPEC_UUID("6F9DE141-2480-4B43-829F-A1F8E55B1EF4")
WMRMLicenseRevocationChallenge;
#endif

EXTERN_C const CLSID CLSID_WMRMLicenseRevocationResponse;

#ifdef __cplusplus

class DECLSPEC_UUID("F563FD76-816A-4BA0-8D43-A153F7315EFC")
WMRMLicenseRevocationResponse;
#endif
#endif /* __WMRMOBJSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


