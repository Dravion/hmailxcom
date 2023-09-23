

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for hmailxcom.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __hmailxcom_i_h__
#define __hmailxcom_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __Iclientapi_FWD_DEFINED__
#define __Iclientapi_FWD_DEFINED__
typedef interface Iclientapi Iclientapi;

#endif 	/* __Iclientapi_FWD_DEFINED__ */


#ifndef __clientapi_FWD_DEFINED__
#define __clientapi_FWD_DEFINED__

#ifdef __cplusplus
typedef class clientapi clientapi;
#else
typedef struct clientapi clientapi;
#endif /* __cplusplus */

#endif 	/* __clientapi_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __Iclientapi_INTERFACE_DEFINED__
#define __Iclientapi_INTERFACE_DEFINED__

/* interface Iclientapi */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_Iclientapi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11e707da-a5b7-4bbd-8899-bec106bc1d6e")
    Iclientapi : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE sayhello( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IclientapiVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Iclientapi * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Iclientapi * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Iclientapi * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Iclientapi * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Iclientapi * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Iclientapi * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Iclientapi * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(Iclientapi, sayhello)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *sayhello )( 
            Iclientapi * This);
        
        END_INTERFACE
    } IclientapiVtbl;

    interface Iclientapi
    {
        CONST_VTBL struct IclientapiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Iclientapi_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Iclientapi_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Iclientapi_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Iclientapi_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Iclientapi_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Iclientapi_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Iclientapi_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define Iclientapi_sayhello(This)	\
    ( (This)->lpVtbl -> sayhello(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Iclientapi_INTERFACE_DEFINED__ */



#ifndef __hmailxcomLib_LIBRARY_DEFINED__
#define __hmailxcomLib_LIBRARY_DEFINED__

/* library hmailxcomLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_hmailxcomLib;

EXTERN_C const CLSID CLSID_clientapi;

#ifdef __cplusplus

class DECLSPEC_UUID("47415b63-022a-4685-a796-ddc5011bdb6d")
clientapi;
#endif
#endif /* __hmailxcomLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


