

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Feb 03 14:03:31 2006
 */
/* Compiler settings for wmdmprogresshelper.idl:
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

#ifndef __wmdmprogresshelper_h__
#define __wmdmprogresshelper_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMDMProgressHelper_FWD_DEFINED__
#define __IWMDMProgressHelper_FWD_DEFINED__
typedef interface IWMDMProgressHelper IWMDMProgressHelper;
#endif 	/* __IWMDMProgressHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_wmdmprogresshelper_0000 */
/* [local] */ 

#define SFM_BEGIN                      1
#define SFM_END                        2
#define SFM_PROGRESS                   3
typedef struct _tPROGRESSNOTIFY
    {
    DWORD dwMsg;
    DWORD dwCurrentTicks;
    DWORD dwTotalTicks;
    } 	PROGRESSNOTIFY;



extern RPC_IF_HANDLE __MIDL_itf_wmdmprogresshelper_0000_ClientIfHandle;
extern RPC_IF_HANDLE __MIDL_itf_wmdmprogresshelper_0000_ServerIfHandle;

#ifndef __IWMDMProgressHelper_INTERFACE_DEFINED__
#define __IWMDMProgressHelper_INTERFACE_DEFINED__

/* interface IWMDMProgressHelper */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMProgressHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DCB3A10-33ED-11d3-8470-00C04F79DBC5")
    IWMDMProgressHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNotification( 
            HWND hwnd,
            UINT uMsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMProgressHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMProgressHelper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMProgressHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMProgressHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNotification )( 
            IWMDMProgressHelper * This,
            HWND hwnd,
            UINT uMsg);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IWMDMProgressHelper * This);
        
        END_INTERFACE
    } IWMDMProgressHelperVtbl;

    interface IWMDMProgressHelper
    {
        CONST_VTBL struct IWMDMProgressHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMProgressHelper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWMDMProgressHelper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWMDMProgressHelper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWMDMProgressHelper_SetNotification(This,hwnd,uMsg)	\
    (This)->lpVtbl -> SetNotification(This,hwnd,uMsg)

#define IWMDMProgressHelper_Cancel(This)	\
    (This)->lpVtbl -> Cancel(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IWMDMProgressHelper_SetNotification_Proxy( 
    IWMDMProgressHelper * This,
    HWND hwnd,
    UINT uMsg);


void __RPC_STUB IWMDMProgressHelper_SetNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IWMDMProgressHelper_Cancel_Proxy( 
    IWMDMProgressHelper * This);


void __RPC_STUB IWMDMProgressHelper_Cancel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWMDMProgressHelper_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


