/*<copyright>
	MOD Systems, Inc (c) 2006 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

#ifndef SAMPLECREATOR_H_
#define SAMPLECREATOR_H_

#include "stdafx.h"

#include <wmsdk.h>
#include <mmsystem.h>

#define TRANSCODER_ERROR_LOG_STRING_LEN 1024

class CFileTranscoder : public IWMReaderCallback, public IWMReaderCallbackAdvanced
{
public:

    CFileTranscoder();
    ~CFileTranscoder();

    HRESULT InitializeProfile();
    HRESULT InitializeDefaultProfile();
    HRESULT AddStreamToProfile(
        WORD wChannels,
        WORD wBitsPerSample,
        WORD wSamplesPerSecond,
        DWORD dwMaxBitsPerSecond);

    HRESULT TranscodeFile(
		const WCHAR* wszInputFile,
		const WCHAR* wszOutputFile
	);

    // Stores error information for later retrieval
    static void LogErrorLocation(HRESULT hr, const char* szFile, const char* szFunction, int line);
    static void GetErrorLocation(int* pHR, LPWSTR szFile, DWORD cchFile, LPWSTR szFunction, DWORD cchFunction, int* pLine);
    static HRESULT s_hr;
    static WCHAR s_szFile[TRANSCODER_ERROR_LOG_STRING_LEN];
    static WCHAR s_szFunction[TRANSCODER_ERROR_LOG_STRING_LEN];
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


private:

    HRESULT CreateProfile( IWMProfile ** ppIWMProfile );
    HRESULT FindAudioFormat(WAVEFORMATEX* pWaveLimits,
                        DWORD dwMaxRate,
                        BOOL fUseVBR,
                        DWORD dwNumPasses,
                        IWMStreamConfig** ppStreamConfig);

    HRESULT CreateReader(const WCHAR* wszInputFile);

    HRESULT CreateWriter( const WCHAR * wszOutputFile, IWMProfile * pProfile );

    HRESULT GetOutputMap();

    HRESULT SetWriterInput( BOOL fMultiChannel, BOOL fSmartRecompression );

    HRESULT Preprocess();

    HRESULT Process();

    HRESULT WaitForCompletion();

    DWORD                   m_dwSampleDurationSeconds;

    IWMProfile              *m_pProfile;
    IWMWriter               *m_pWriter;
    IWMWriterPreprocess     *m_pWriterPreprocess;
    IWMHeaderInfo           *m_pWriterHeaderInfo;
    IWMReader               *m_pReader;
    IWMReaderAdvanced       *m_pReaderAdvanced;
    IWMHeaderInfo           *m_pReaderHeaderInfo;
    IWMProfile              *m_pReaderProfile;

    DWORD                   m_cWriterInput;
    DWORD                   m_cReaderOutput;
    DWORD                   *m_pdwPreprocessPass;
    DWORD                   *m_pdwOutputToInput;
    DWORD                   *m_pdwOutputToStream;

    BOOL                    m_bPreprocessing;
    HANDLE                  m_hEvent;
    HANDLE                  m_hMutex;
    HRESULT                 m_hr;
    QWORD                   m_qwReaderTime;
    BOOL                    m_fEOF;
    LONG                    m_cRef;

    QWORD                   m_qwDuration;
    QWORD                   m_dwProgress;

};

#ifndef CHECK_HR
    #define CHECK_HR(x) \
        hr = x;             \
        if (FAILED(hr))     \
        {                   \
            CFileTranscoder::LogErrorLocation(hr, __FILE__, __FUNCTION__, __LINE__); \
            goto Cleanup;   \
        }
#endif  // CHECK_HR

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
            CFileTranscoder::LogErrorLocation(hr, __FILE__, __FUNCTION__, __LINE__); \
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


#endif  // SAMPLECREATOR_H_
