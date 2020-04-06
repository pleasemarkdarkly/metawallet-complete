

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Feb 03 14:03:29 2006
 */
/* Compiler settings for wmdmoperationhelper.idl:
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

#ifndef __wmdmoperationhelper_h__
#define __wmdmoperationhelper_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMDMOperationHelper_FWD_DEFINED__
#define __IWMDMOperationHelper_FWD_DEFINED__
typedef interface IWMDMOperationHelper IWMDMOperationHelper;
#endif 	/* __IWMDMOperationHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IWMDMOperationHelper_INTERFACE_DEFINED__
#define __IWMDMOperationHelper_INTERFACE_DEFINED__

/* interface IWMDMOperationHelper */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IWMDMOperationHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A382551-1E84-40ae-B0B0-23FA221B4C6B")
    IWMDMOperationHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFileName( 
            /* [string][in] */ LPWSTR pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSAC( 
            /* [in] */ void *pSACClient) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMOperationHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMOperationHelper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMOperationHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMOperationHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IWMDMOperationHelper * This,
            /* [string][in] */ LPWSTR pszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *SetSAC )( 
            IWMDMOperationHelper * This,
            /* [in] */ void *pSACClient);
        
        END_INTERFACE
    } IWMDMOperationHelperVtbl;

    interface IWMDMOperationHelper
    {
        CONST_VTBL struct IWMDMOperationHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMOperationHelper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMOperationHelper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMOperationHelper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMOperationHelper_SetFileName(This,pszFileName)	\
    (This)->lpVtbl -> SetFileName(This,pszFileName)

#define IWMDMOperationHelper_SetSAC(This,pSACClient)	\
    (This)->lpVtbl -> SetSAC(This,pSACClient)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMOperationHelper_SetFileName_Proxy( 
    IWMDMOperationHelper * This,
    /* [string][in] */ LPWSTR pszFileName);


void __RPC_STUB IWMDMOperationHelper_SetFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMOperationHelper_SetSAC_Proxy( 
    IWMDMOperationHelper * This,
    /* [in] */ void *pSACClient);


void __RPC_STUB IWMDMOperationHelper_SetSAC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMOperationHelper_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


