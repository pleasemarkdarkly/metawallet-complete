

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Mon Feb 06 12:37:40 2006
 */
/* Compiler settings for icomponentauthenticate.idl:
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

#ifndef __icomponentauthenticate_h__
#define __icomponentauthenticate_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IComponentAuthenticate_FWD_DEFINED__
#define __IComponentAuthenticate_FWD_DEFINED__
typedef interface IComponentAuthenticate IComponentAuthenticate;
#endif 	/* __IComponentAuthenticate_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "ocidl.h"
#include "propidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_icomponentauthenticate_0000 */
/* [local] */ 

#define SAC_MAC_LEN 8


extern RPC_IF_HANDLE __MIDL_itf_icomponentauthenticate_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icomponentauthenticate_0000_v0_0_s_ifspec;

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


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


