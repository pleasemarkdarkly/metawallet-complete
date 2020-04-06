#ifndef WMALEVELCALCULATOR_H_
#define WMALEVELCALCULATOR_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "stdafx.h"

////////////////////////////////////////////////////////////////////////////////
// This class is used to access the raw sample data in a WMA file and calculate
// the RMS average and peak level of the track.
//
class WMALevelCalculator : public IWMReaderCallback, 
                 public IWMReaderCallbackAdvanced
{
public:
    WMALevelCalculator();
    ~WMALevelCalculator();

    //
    // Calculate the average level
    //
    HRESULT CalculateAverage( const WCHAR * pwszInputFile );

	//
	// Accessors for the level calculations
	//
	unsigned short GetAverageLevel() const;
	unsigned short GetPeakValue() const;
	DWORD GetDuration() const;
	DWORD GetDurationInMilliseconds() const;

    //
    // IWMReaderCallback interface
    //
    virtual HRESULT STDMETHODCALLTYPE OnSample( /* [in] */ DWORD dwOutputNum,
                                                /* [in] */ QWORD qwSampleTime,
                                                /* [in] */ QWORD qwSampleDuration,
                                                /* [in] */ DWORD dwFlags,
                                                /* [in] */ INSSBuffer __RPC_FAR * pSample,
                                                /* [in] */ void __RPC_FAR * pvContext);

    //
    // IWMReaderAdvanced interface
    //
    virtual HRESULT STDMETHODCALLTYPE OnStatus( /* [in] */ WMT_STATUS Status,
                                                /* [in] */ HRESULT hr,
                                                /* [in] */ WMT_ATTR_DATATYPE dwType,
                                                /* [in] */ BYTE __RPC_FAR * pValue,
                                                /* [in] */ void __RPC_FAR * pvContext);

    virtual HRESULT STDMETHODCALLTYPE OnStreamSample( /* [in] */ WORD wStreamNum,
                                                      /* [in] */ QWORD cnsSampleTime,
                                                      /* [in] */ QWORD cnsSampleDuration,
                                                      /* [in] */ DWORD dwFlags,
                                                      /* [in] */ INSSBuffer __RPC_FAR * pSample,
                                                      /* [in] */ void __RPC_FAR * pvContext);

    virtual HRESULT STDMETHODCALLTYPE OnTime( /* [in] */ QWORD qwCurrentTime,
                                              /* [in] */ void __RPC_FAR * pvContext);

    virtual HRESULT STDMETHODCALLTYPE OnStreamSelection( /* [in] */ WORD wStreamCount,
                                                         /* [in] */ WORD __RPC_FAR * pStreamNumbers,
                                                         /* [in] */ WMT_STREAM_SELECTION __RPC_FAR * pSelections,
                                                         /* [in] */ void __RPC_FAR * pvContext);

    virtual HRESULT STDMETHODCALLTYPE OnOutputPropsChanged( /* [in] */ DWORD dwOutputNum,
                                                            /* [in] */ WM_MEDIA_TYPE __RPC_FAR * pMediaType,
                                                            /* [in] */ void __RPC_FAR * pvContext );

    virtual HRESULT STDMETHODCALLTYPE AllocateForOutput( /* [in] */ DWORD dwOutputNum,
                                                         /* [in] */ DWORD cbBuffer,
                                                         /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                                         /* [in] */ void __RPC_FAR * pvContext);

    virtual HRESULT STDMETHODCALLTYPE AllocateForStream( /* [in] */ WORD wStreamNum,
                                                         /* [in] */ DWORD cbBuffer,
                                                         /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                                         /* [in] */ void __RPC_FAR * pvContext);

    //
    // IUnknown interface
    //
    virtual HRESULT STDMETHODCALLTYPE QueryInterface( /* [in] */ REFIID riid,
                                                      /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR * ppvObject);

    virtual ULONG STDMETHODCALLTYPE AddRef();

    virtual ULONG STDMETHODCALLTYPE Release();

protected:
    
    HRESULT CreateReader( const WCHAR * pwszInputFile );

    HRESULT Process();

    HRESULT WaitForCompletion();

    IWMReader               * m_pReader;
    IWMReaderAdvanced       * m_pReaderAdvanced;
    IWMHeaderInfo           * m_pReaderHeaderInfo;
    IWMProfile              * m_pReaderProfile;

    DWORD                   m_dwStreamCount;

	HANDLE					m_hWavFile;
    HANDLE                  m_hEvent;
	DWORD					m_dwChunkID;
    HRESULT                 m_hr;
    QWORD                   m_qwReaderTime;
    BOOL                    m_fEOF;
    LONG                    m_cRef;

    QWORD                   m_dwProgress;

	DWORD					m_dwLeftSampleIndex;
	DWORD					m_dwRightSampleIndex;

	QWORD					m_qwRMSSampleCount;

	DWORD					m_dwPeakValue;
	QWORD					m_qwSampleCount;

	QWORD					m_qwLeftLevelSum;
	QWORD					m_qwRightLevelSum;

	QWORD					m_qwLevelAverageSum;

#ifdef FIND_MEDIANS
	typedef std::vector< DWORD > RmsVector;
	RmsVector				m_rmsVector;
#endif

    QWORD                   m_qwDuration;

};

#endif // WMALEVELCALCULATOR_H_
