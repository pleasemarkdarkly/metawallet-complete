#ifndef CONVERTWMATOMP3_H_
#define CONVERTWMATOMP3_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "stdafx.h"

#define CONVERTER_ERROR_LOG_STRING_LEN 1024

////////////////////////////////////////////////////////////////////////////////
// This class is used to access the raw sample data in a WMA file and feed it
// into the LAME encoder to convert it to MP3.
//
class ConvertWmaToMp3 : public IWMReaderCallback, 
                 public IWMReaderCallbackAdvanced
{
public:
    ConvertWmaToMp3();
    ~ConvertWmaToMp3();

    //
    // Initialize the converter
    //
    HRESULT Initialize();

    //
    // Convert the given input file to an MP3 file at the specified bit rate.
    //
    HRESULT Convert(const WCHAR* pwszInputFile, const WCHAR* pwszOutputFile, bool fUseVBR, DWORD dwMinimumBitRate, DWORD dwMaximumBitRate);

    //
    // Stores error information for later retrieval
    //
    static void LogErrorLocation(HRESULT hr, const char* szFile, const char* szFunction, int line);
    static void GetErrorLocation(int* pHR, LPWSTR szFile, DWORD cchFile, LPWSTR szFunction, DWORD cchFunction, int* pLine);
    static HRESULT s_hr;
    static WCHAR s_szFile[CONVERTER_ERROR_LOG_STRING_LEN];
    static WCHAR s_szFunction[CONVERTER_ERROR_LOG_STRING_LEN];
    static int s_line;

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

    QWORD                   m_qwDuration;

    //
    // LAME variables
    //
    HINSTANCE           m_hDLL;
    BEINITSTREAM        m_beInitStream;
    BEENCODECHUNK       m_beEncodeChunk;
    BEDEINITSTREAM      m_beDeinitStream;
    BECLOSESTREAM       m_beCloseStream;
    BEVERSION           m_beVersion;
    BEWRITEVBRHEADER    m_beWriteVBRHeader;
    BEWRITEINFOTAG      m_beWriteInfoTag;

	HBE_STREAM          m_hbeStream;
	SHORT*              m_pLameWAVInputBuffer;
	BYTE*               m_pLameMP3OutputBuffer;
    // Number of samples to send to LAME to encode
	DWORD               m_dwLameInputSampleCount;
    // Current position in the LAME input buffer
    DWORD               m_dwLameInputBufferPosition;
    // Size of the buffer LAME will return from encoding
	DWORD               m_dwLameOuputBufferSize;

    HANDLE              m_hMP3File;

};

// If the return value of stmt is a failed HRESULT, then log a failure and goto ModExit
#ifndef MOD_CHECK_HR
    #define MOD_CHECK_HR(x) \
        hr = x;             \
        if (FAILED(hr))     \
        {                   \
            ConvertWmaToMp3::LogErrorLocation(hr, __FILE__, __FUNCTION__, __LINE__); \
            goto ModExit;   \
        }
#endif  // MOD_CHECK_HR

// If the return value of stmt is false, then log a failure, set mr to the given result, and goto ModExit
//            ConvertWmaToMp3::LogErrorLocation(E_FAIL, __FILE__, __FUNCTION__, __LINE__, result, msg, __VA_ARGS__);
#ifndef MOD_CHECK_BOOL
    #define MOD_CHECK_BOOL(stmt, result, msg, ...) \
        {   \
            if (!(stmt)) { \
                ConvertWmaToMp3::LogErrorLocation(result, __FILE__, __FUNCTION__, __LINE__); \
                hr = result; \
                goto ModExit; \
            } \
        }
#endif  // MOD_CHECK_BOOL

#ifndef SAFE_RELEASE
    #define SAFE_RELEASE( x )           \
        if ( NULL != x )                \
        {                               \
            x->Release( );              \
            x = NULL;                   \
        }
#endif // SAFE_RELEASE

#ifndef SAFE_DELETE
    #define SAFE_DELETE( x )            \
        if ( NULL != x )                \
        {                               \
            delete x;                   \
            x = NULL;                   \
        }
#endif // SAFE_DELETE

#ifndef SAFE_ARRAYDELETE
    #define SAFE_ARRAYDELETE( x )       \
       if( x )                          \
       {                                \
           delete [] x;                 \
           x = NULL;                    \
       }
#endif //SAFE_ARRAYDELETE

#ifndef SAFE_CLOSEHANDLE
    #define SAFE_CLOSEHANDLE( h )       \
        if( NULL != h )                 \
        {                               \
            CloseHandle( h );           \
            h = NULL;                   \
        }
#endif //SAFE_CLOSEHANDLE

#ifndef SAFE_CLOSEFILEHANDLE
    #define SAFE_CLOSEFILEHANDLE( h )   \
        if( INVALID_HANDLE_VALUE != h ) \
        {                               \
            CloseHandle( h );           \
            h = INVALID_HANDLE_VALUE;   \
        }
#endif //SAFE_CLOSEFILEHANDLE

#ifndef GOTO_EXIT_IF_FAILED
    #define GOTO_EXIT_IF_FAILED( hr )   \
        if( FAILED(hr))                 \
        {                               \
            ConvertWmaToMp3::LogErrorLocation(hr, __FILE__, __FUNCTION__, __LINE__); \
            goto Exit;                  \
        }
#endif //GOTO_EXIT_IF_FAILED

#ifndef CONTINUE_IF_FAILED
    #define CONTINUE_IF_FAILED( hr )    \
        if( FAILED(hr))                 \
        {                               \
            goto Reloop;                \
        }
#endif //CONTINUE_IF_FAILED


#endif // CONVERTWMATOMP3_H_
