

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0365 */
/* Compiler settings for enrollobj.idl:
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

#ifndef __enrollobj_h__
#define __enrollobj_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDRMEnroll_FWD_DEFINED__
#define __IDRMEnroll_FWD_DEFINED__
typedef interface IDRMEnroll IDRMEnroll;
#endif 	/* __IDRMEnroll_FWD_DEFINED__ */


#ifndef __IDRMEnroll2_FWD_DEFINED__
#define __IDRMEnroll2_FWD_DEFINED__
typedef interface IDRMEnroll2 IDRMEnroll2;
#endif 	/* __IDRMEnroll2_FWD_DEFINED__ */


#ifndef __IDRMEnroll3_FWD_DEFINED__
#define __IDRMEnroll3_FWD_DEFINED__
typedef interface IDRMEnroll3 IDRMEnroll3;
#endif 	/* __IDRMEnroll3_FWD_DEFINED__ */


#ifndef __DRMEnroll_FWD_DEFINED__
#define __DRMEnroll_FWD_DEFINED__

#ifdef __cplusplus
typedef class DRMEnroll DRMEnroll;
#else
typedef struct DRMEnroll DRMEnroll;
#endif /* __cplusplus */

#endif 	/* __DRMEnroll_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_enrollobj_0000 */
/* [local] */ 

//=========================================================================
//
// Microsoft Windows Media Technologies
// Copyright (C) Microsoft Corporation.  All Rights Reserved.
//
//=========================================================================


extern RPC_IF_HANDLE __MIDL_itf_enrollobj_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_enrollobj_0000_v0_0_s_ifspec;

#ifndef __IDRMEnroll_INTERFACE_DEFINED__
#define __IDRMEnroll_INTERFACE_DEFINED__

/* interface IDRMEnroll */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDRMEnroll;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B3FB54C-E9A0-4E19-8960-90046139CDD3")
    IDRMEnroll : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateKeyPair( 
            /* [retval][out] */ BSTR *pbstrPubKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreCertificate( 
            /* [in] */ BSTR bstrCertName,
            /* [in] */ BSTR bstrCert) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreRevocationList( 
            /* [in] */ BSTR bstrList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportPrivateKey( 
            /* [in] */ BSTR bstrPrivKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreVerificationKey( 
            /* [in] */ BSTR bstrVersion,
            /* [in] */ BSTR bstrKey) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDRMEnrollVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDRMEnroll * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDRMEnroll * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDRMEnroll * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDRMEnroll * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDRMEnroll * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDRMEnroll * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDRMEnroll * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyPair )( 
            IDRMEnroll * This,
            /* [retval][out] */ BSTR *pbstrPubKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreCertificate )( 
            IDRMEnroll * This,
            /* [in] */ BSTR bstrCertName,
            /* [in] */ BSTR bstrCert);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreRevocationList )( 
            IDRMEnroll * This,
            /* [in] */ BSTR bstrList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportPrivateKey )( 
            IDRMEnroll * This,
            /* [in] */ BSTR bstrPrivKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreVerificationKey )( 
            IDRMEnroll * This,
            /* [in] */ BSTR bstrVersion,
            /* [in] */ BSTR bstrKey);
        
        END_INTERFACE
    } IDRMEnrollVtbl;

    interface IDRMEnroll
    {
        CONST_VTBL struct IDRMEnrollVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDRMEnroll_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDRMEnroll_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDRMEnroll_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDRMEnroll_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDRMEnroll_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDRMEnroll_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDRMEnroll_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDRMEnroll_GenerateKeyPair(This,pbstrPubKey)	\
    (This)->lpVtbl -> GenerateKeyPair(This,pbstrPubKey)

#define IDRMEnroll_StoreCertificate(This,bstrCertName,bstrCert)	\
    (This)->lpVtbl -> StoreCertificate(This,bstrCertName,bstrCert)

#define IDRMEnroll_StoreRevocationList(This,bstrList)	\
    (This)->lpVtbl -> StoreRevocationList(This,bstrList)

#define IDRMEnroll_ImportPrivateKey(This,bstrPrivKey)	\
    (This)->lpVtbl -> ImportPrivateKey(This,bstrPrivKey)

#define IDRMEnroll_StoreVerificationKey(This,bstrVersion,bstrKey)	\
    (This)->lpVtbl -> StoreVerificationKey(This,bstrVersion,bstrKey)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll_GenerateKeyPair_Proxy( 
    IDRMEnroll * This,
    /* [retval][out] */ BSTR *pbstrPubKey);


void __RPC_STUB IDRMEnroll_GenerateKeyPair_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll_StoreCertificate_Proxy( 
    IDRMEnroll * This,
    /* [in] */ BSTR bstrCertName,
    /* [in] */ BSTR bstrCert);


void __RPC_STUB IDRMEnroll_StoreCertificate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll_StoreRevocationList_Proxy( 
    IDRMEnroll * This,
    /* [in] */ BSTR bstrList);


void __RPC_STUB IDRMEnroll_StoreRevocationList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll_ImportPrivateKey_Proxy( 
    IDRMEnroll * This,
    /* [in] */ BSTR bstrPrivKey);


void __RPC_STUB IDRMEnroll_ImportPrivateKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll_StoreVerificationKey_Proxy( 
    IDRMEnroll * This,
    /* [in] */ BSTR bstrVersion,
    /* [in] */ BSTR bstrKey);


void __RPC_STUB IDRMEnroll_StoreVerificationKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDRMEnroll_INTERFACE_DEFINED__ */


#ifndef __IDRMEnroll2_INTERFACE_DEFINED__
#define __IDRMEnroll2_INTERFACE_DEFINED__

/* interface IDRMEnroll2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDRMEnroll2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E5B9F1DE-5C67-4ee1-AC44-D0BFF7E25A97")
    IDRMEnroll2 : public IDRMEnroll
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreSecurityComponentExclusionList( 
            /* [in] */ BSTR bstrList) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDRMEnroll2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDRMEnroll2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDRMEnroll2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDRMEnroll2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDRMEnroll2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDRMEnroll2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDRMEnroll2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDRMEnroll2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyPair )( 
            IDRMEnroll2 * This,
            /* [retval][out] */ BSTR *pbstrPubKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreCertificate )( 
            IDRMEnroll2 * This,
            /* [in] */ BSTR bstrCertName,
            /* [in] */ BSTR bstrCert);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreRevocationList )( 
            IDRMEnroll2 * This,
            /* [in] */ BSTR bstrList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportPrivateKey )( 
            IDRMEnroll2 * This,
            /* [in] */ BSTR bstrPrivKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreVerificationKey )( 
            IDRMEnroll2 * This,
            /* [in] */ BSTR bstrVersion,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreSecurityComponentExclusionList )( 
            IDRMEnroll2 * This,
            /* [in] */ BSTR bstrList);
        
        END_INTERFACE
    } IDRMEnroll2Vtbl;

    interface IDRMEnroll2
    {
        CONST_VTBL struct IDRMEnroll2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDRMEnroll2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDRMEnroll2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDRMEnroll2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDRMEnroll2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDRMEnroll2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDRMEnroll2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDRMEnroll2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDRMEnroll2_GenerateKeyPair(This,pbstrPubKey)	\
    (This)->lpVtbl -> GenerateKeyPair(This,pbstrPubKey)

#define IDRMEnroll2_StoreCertificate(This,bstrCertName,bstrCert)	\
    (This)->lpVtbl -> StoreCertificate(This,bstrCertName,bstrCert)

#define IDRMEnroll2_StoreRevocationList(This,bstrList)	\
    (This)->lpVtbl -> StoreRevocationList(This,bstrList)

#define IDRMEnroll2_ImportPrivateKey(This,bstrPrivKey)	\
    (This)->lpVtbl -> ImportPrivateKey(This,bstrPrivKey)

#define IDRMEnroll2_StoreVerificationKey(This,bstrVersion,bstrKey)	\
    (This)->lpVtbl -> StoreVerificationKey(This,bstrVersion,bstrKey)


#define IDRMEnroll2_StoreSecurityComponentExclusionList(This,bstrList)	\
    (This)->lpVtbl -> StoreSecurityComponentExclusionList(This,bstrList)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll2_StoreSecurityComponentExclusionList_Proxy( 
    IDRMEnroll2 * This,
    /* [in] */ BSTR bstrList);


void __RPC_STUB IDRMEnroll2_StoreSecurityComponentExclusionList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDRMEnroll2_INTERFACE_DEFINED__ */


#ifndef __IDRMEnroll3_INTERFACE_DEFINED__
#define __IDRMEnroll3_INTERFACE_DEFINED__

/* interface IDRMEnroll3 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDRMEnroll3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D029006B-E319-4189-9356-A7C95A56E1F4")
    IDRMEnroll3 : public IDRMEnroll2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreNamedRevocations( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrRevocationData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreClientRevocations( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrRevocationData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDRMEnroll3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDRMEnroll3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDRMEnroll3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDRMEnroll3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDRMEnroll3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDRMEnroll3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDRMEnroll3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDRMEnroll3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKeyPair )( 
            IDRMEnroll3 * This,
            /* [retval][out] */ BSTR *pbstrPubKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreCertificate )( 
            IDRMEnroll3 * This,
            /* [in] */ BSTR bstrCertName,
            /* [in] */ BSTR bstrCert);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreRevocationList )( 
            IDRMEnroll3 * This,
            /* [in] */ BSTR bstrList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportPrivateKey )( 
            IDRMEnroll3 * This,
            /* [in] */ BSTR bstrPrivKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreVerificationKey )( 
            IDRMEnroll3 * This,
            /* [in] */ BSTR bstrVersion,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreSecurityComponentExclusionList )( 
            IDRMEnroll3 * This,
            /* [in] */ BSTR bstrList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreNamedRevocations )( 
            IDRMEnroll3 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrRevocationData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreClientRevocations )( 
            IDRMEnroll3 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrRevocationData);
        
        END_INTERFACE
    } IDRMEnroll3Vtbl;

    interface IDRMEnroll3
    {
        CONST_VTBL struct IDRMEnroll3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDRMEnroll3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDRMEnroll3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDRMEnroll3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDRMEnroll3_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDRMEnroll3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDRMEnroll3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDRMEnroll3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDRMEnroll3_GenerateKeyPair(This,pbstrPubKey)	\
    (This)->lpVtbl -> GenerateKeyPair(This,pbstrPubKey)

#define IDRMEnroll3_StoreCertificate(This,bstrCertName,bstrCert)	\
    (This)->lpVtbl -> StoreCertificate(This,bstrCertName,bstrCert)

#define IDRMEnroll3_StoreRevocationList(This,bstrList)	\
    (This)->lpVtbl -> StoreRevocationList(This,bstrList)

#define IDRMEnroll3_ImportPrivateKey(This,bstrPrivKey)	\
    (This)->lpVtbl -> ImportPrivateKey(This,bstrPrivKey)

#define IDRMEnroll3_StoreVerificationKey(This,bstrVersion,bstrKey)	\
    (This)->lpVtbl -> StoreVerificationKey(This,bstrVersion,bstrKey)


#define IDRMEnroll3_StoreSecurityComponentExclusionList(This,bstrList)	\
    (This)->lpVtbl -> StoreSecurityComponentExclusionList(This,bstrList)


#define IDRMEnroll3_StoreNamedRevocations(This,bstrName,bstrRevocationData)	\
    (This)->lpVtbl -> StoreNamedRevocations(This,bstrName,bstrRevocationData)

#define IDRMEnroll3_StoreClientRevocations(This,bstrName,bstrRevocationData)	\
    (This)->lpVtbl -> StoreClientRevocations(This,bstrName,bstrRevocationData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll3_StoreNamedRevocations_Proxy( 
    IDRMEnroll3 * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrRevocationData);


void __RPC_STUB IDRMEnroll3_StoreNamedRevocations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDRMEnroll3_StoreClientRevocations_Proxy( 
    IDRMEnroll3 * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ BSTR bstrRevocationData);


void __RPC_STUB IDRMEnroll3_StoreClientRevocations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDRMEnroll3_INTERFACE_DEFINED__ */



#ifndef __ENROLLOBJLib_LIBRARY_DEFINED__
#define __ENROLLOBJLib_LIBRARY_DEFINED__

/* library ENROLLOBJLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ENROLLOBJLib;

EXTERN_C const CLSID CLSID_DRMEnroll;

#ifdef __cplusplus

class DECLSPEC_UUID("685C8DEE-7BF1-47EF-BC0A-8B451023170B")
DRMEnroll;
#endif
#endif /* __ENROLLOBJLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


