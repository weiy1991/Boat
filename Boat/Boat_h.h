

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jan 26 23:16:10 2016
 */
/* Compiler settings for Boat.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

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


#ifndef __Boat_h_h__
#define __Boat_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBoat_FWD_DEFINED__
#define __IBoat_FWD_DEFINED__
typedef interface IBoat IBoat;

#endif 	/* __IBoat_FWD_DEFINED__ */


#ifndef __CBoatDoc_FWD_DEFINED__
#define __CBoatDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CBoatDoc CBoatDoc;
#else
typedef struct CBoatDoc CBoatDoc;
#endif /* __cplusplus */

#endif 	/* __CBoatDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Boat_LIBRARY_DEFINED__
#define __Boat_LIBRARY_DEFINED__

/* library Boat */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Boat;

#ifndef __IBoat_DISPINTERFACE_DEFINED__
#define __IBoat_DISPINTERFACE_DEFINED__

/* dispinterface IBoat */
/* [uuid] */ 


EXTERN_C const IID DIID_IBoat;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("80DDB29D-E69E-4BAA-A0A5-1AE8B9A885AA")
    IBoat : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IBoatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBoat * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBoat * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBoat * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBoat * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBoat * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBoat * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBoat * This,
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
        
        END_INTERFACE
    } IBoatVtbl;

    interface IBoat
    {
        CONST_VTBL struct IBoatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBoat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBoat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBoat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBoat_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBoat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBoat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBoat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IBoat_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CBoatDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("AB44F51E-F1A4-4F0E-86A0-B376B1E7D588")
CBoatDoc;
#endif
#endif /* __Boat_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


