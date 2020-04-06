

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0365 */
/* Compiler settings for licenseserver.idl:
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

#ifndef __licenseserver_h__
#define __licenseserver_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILicenseGenerator_FWD_DEFINED__
#define __ILicenseGenerator_FWD_DEFINED__
typedef interface ILicenseGenerator ILicenseGenerator;
#endif 	/* __ILicenseGenerator_FWD_DEFINED__ */


#ifndef __LicenseGenerator_FWD_DEFINED__
#define __LicenseGenerator_FWD_DEFINED__

#ifdef __cplusplus
typedef class LicenseGenerator LicenseGenerator;
#else
typedef struct LicenseGenerator LicenseGenerator;
#endif /* __cplusplus */

#endif 	/* __LicenseGenerator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_licenseserver_0000 */
/* [local] */ 

//=========================================================================
//
// Microsoft Windows Media Technologies
// Copyright (C) Microsoft Corporation.  All Rights Reserved.
//
//=========================================================================


extern RPC_IF_HANDLE __MIDL_itf_licenseserver_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_licenseserver_0000_v0_0_s_ifspec;

#ifndef __ILicenseGenerator_INTERFACE_DEFINED__
#define __ILicenseGenerator_INTERFACE_DEFINED__

/* interface ILicenseGenerator */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ILicenseGenerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17B54DBC-C13A-11D2-8B0C-00C04F79EC75")
    ILicenseGenerator : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IssueLicense( 
            /* [in] */ BSTR bstrConnectionString,
            /* [in] */ BSTR bstrLicenseRequest,
            /* [in] */ LONG luserId,
            /* [in] */ VARIANT varContentId,
            /* [in] */ VARIANT varNumDaysToExpiry,
            /* [in] */ VARIANT varRights,
            /* [in] */ VARIANT varMinClientSecurity,
            /* [out][in] */ VARIANT *pvarLicenseResponse,
            /* [out][in] */ VARIANT *pvarIssueId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteIssueEntry( 
            /* [in] */ BSTR bstrConnectionString,
            /* [in] */ LONG lLicenseIssueId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ BSTR bstrAttributeName,
            /* [in] */ VARIANT varAttributeValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ BSTR bstrAttributeName,
            /* [out] */ VARIANT *pvarAttributeValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InstallKeys( 
            /* [in] */ BSTR bstrConnectionString,
            /* [in] */ BOOL bReuse,
            /* [out][in] */ VARIANT *pvarLicenseServerPublicKey,
            /* [out][in] */ VARIANT *pvarLicenseServerPrivateKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILicenseGeneratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILicenseGenerator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILicenseGenerator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILicenseGenerator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILicenseGenerator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILicenseGenerator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILicenseGenerator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILicenseGenerator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IssueLicense )( 
            ILicenseGenerator * This,
            /* [in] */ BSTR bstrConnectionString,
            /* [in] */ BSTR bstrLicenseRequest,
            /* [in] */ LONG luserId,
            /* [in] */ VARIANT varContentId,
            /* [in] */ VARIANT varNumDaysToExpiry,
            /* [in] */ VARIANT varRights,
            /* [in] */ VARIANT varMinClientSecurity,
            /* [out][in] */ VARIANT *pvarLicenseResponse,
            /* [out][in] */ VARIANT *pvarIssueId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteIssueEntry )( 
            ILicenseGenerator * This,
            /* [in] */ BSTR bstrConnectionString,
            /* [in] */ LONG lLicenseIssueId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            ILicenseGenerator * This,
            /* [in] */ BSTR bstrAttributeName,
            /* [in] */ VARIANT varAttributeValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            ILicenseGenerator * This,
            /* [in] */ BSTR bstrAttributeName,
            /* [out] */ VARIANT *pvarAttributeValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallKeys )( 
            ILicenseGenerator * This,
            /* [in] */ BSTR bstrConnectionString,
            /* [in] */ BOOL bReuse,
            /* [out][in] */ VARIANT *pvarLicenseServerPublicKey,
            /* [out][in] */ VARIANT *pvarLicenseServerPrivateKey);
        
        END_INTERFACE
    } ILicenseGeneratorVtbl;

    interface ILicenseGenerator
    {
        CONST_VTBL struct ILicenseGeneratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILicenseGenerator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILicenseGenerator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILicenseGenerator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILicenseGenerator_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ILicenseGenerator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ILicenseGenerator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ILicenseGenerator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ILicenseGenerator_IssueLicense(This,bstrConnectionString,bstrLicenseRequest,luserId,varContentId,varNumDaysToExpiry,varRights,varMinClientSecurity,pvarLicenseResponse,pvarIssueId)	\
    (This)->lpVtbl -> IssueLicense(This,bstrConnectionString,bstrLicenseRequest,luserId,varContentId,varNumDaysToExpiry,varRights,varMinClientSecurity,pvarLicenseResponse,pvarIssueId)

#define ILicenseGenerator_DeleteIssueEntry(This,bstrConnectionString,lLicenseIssueId)	\
    (This)->lpVtbl -> DeleteIssueEntry(This,bstrConnectionString,lLicenseIssueId)

#define ILicenseGenerator_Set(This,bstrAttributeName,varAttributeValue)	\
    (This)->lpVtbl -> Set(This,bstrAttributeName,varAttributeValue)

#define ILicenseGenerator_Get(This,bstrAttributeName,pvarAttributeValue)	\
    (This)->lpVtbl -> Get(This,bstrAttributeName,pvarAttributeValue)

#define ILicenseGenerator_InstallKeys(This,bstrConnectionString,bReuse,pvarLicenseServerPublicKey,pvarLicenseServerPrivateKey)	\
    (This)->lpVtbl -> InstallKeys(This,bstrConnectionString,bReuse,pvarLicenseServerPublicKey,pvarLicenseServerPrivateKey)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ILicenseGenerator_IssueLicense_Proxy( 
    ILicenseGenerator * This,
    /* [in] */ BSTR bstrConnectionString,
    /* [in] */ BSTR bstrLicenseRequest,
    /* [in] */ LONG luserId,
    /* [in] */ VARIANT varContentId,
    /* [in] */ VARIANT varNumDaysToExpiry,
    /* [in] */ VARIANT varRights,
    /* [in] */ VARIANT varMinClientSecurity,
    /* [out][in] */ VARIANT *pvarLicenseResponse,
    /* [out][in] */ VARIANT *pvarIssueId);


void __RPC_STUB ILicenseGenerator_IssueLicense_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ILicenseGenerator_DeleteIssueEntry_Proxy( 
    ILicenseGenerator * This,
    /* [in] */ BSTR bstrConnectionString,
    /* [in] */ LONG lLicenseIssueId);


void __RPC_STUB ILicenseGenerator_DeleteIssueEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ILicenseGenerator_Set_Proxy( 
    ILicenseGenerator * This,
    /* [in] */ BSTR bstrAttributeName,
    /* [in] */ VARIANT varAttributeValue);


void __RPC_STUB ILicenseGenerator_Set_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ILicenseGenerator_Get_Proxy( 
    ILicenseGenerator * This,
    /* [in] */ BSTR bstrAttributeName,
    /* [out] */ VARIANT *pvarAttributeValue);


void __RPC_STUB ILicenseGenerator_Get_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ILicenseGenerator_InstallKeys_Proxy( 
    ILicenseGenerator * This,
    /* [in] */ BSTR bstrConnectionString,
    /* [in] */ BOOL bReuse,
    /* [out][in] */ VARIANT *pvarLicenseServerPublicKey,
    /* [out][in] */ VARIANT *pvarLicenseServerPrivateKey);


void __RPC_STUB ILicenseGenerator_InstallKeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILicenseGenerator_INTERFACE_DEFINED__ */



#ifndef __LICENSESERVERLib_LIBRARY_DEFINED__
#define __LICENSESERVERLib_LIBRARY_DEFINED__

/* library LICENSESERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_LICENSESERVERLib;

EXTERN_C const CLSID CLSID_LicenseGenerator;

#ifdef __cplusplus

class DECLSPEC_UUID("17B54DBD-C13A-11D2-8B0C-00C04F79EC75")
LicenseGenerator;
#endif
#endif /* __LICENSESERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


