#include "stdafx.h"
#include "math.h"

//#define PRINT_STATUS

WCHAR ConvertWmaToMp3::s_szFile[CONVERTER_ERROR_LOG_STRING_LEN];
WCHAR ConvertWmaToMp3::s_szFunction[CONVERTER_ERROR_LOG_STRING_LEN];
int ConvertWmaToMp3::s_line;
HRESULT ConvertWmaToMp3::s_hr;

//------------------------------------------------------------------------------
// Saves the given HRESULT and the file, function, and line for later retrieval
//------------------------------------------------------------------------------
void
ConvertWmaToMp3::LogErrorLocation(HRESULT hr, const char* szFile, const char* szFunction, int line)
{
//    printf("Error: hr = 0x%08x, in file %s, function %s, line %d\n", hr, szFile, szFunction, line);
    s_hr = hr;
    MultiByteToWideChar(CP_ACP, 0, szFile, CONVERTER_ERROR_LOG_STRING_LEN, s_szFile, CONVERTER_ERROR_LOG_STRING_LEN);
    s_szFile[CONVERTER_ERROR_LOG_STRING_LEN - 1] = '\0';
    MultiByteToWideChar(CP_ACP, 0, szFunction, CONVERTER_ERROR_LOG_STRING_LEN, s_szFunction, CONVERTER_ERROR_LOG_STRING_LEN);
    s_szFunction[CONVERTER_ERROR_LOG_STRING_LEN - 1] = '\0';
    s_line = line;
}

//------------------------------------------------------------------------------
// Returns the last HRESULT , the file, function, and line logged.
//------------------------------------------------------------------------------
void
ConvertWmaToMp3::GetErrorLocation(int* pHR, LPWSTR szFile, DWORD cchFile, LPWSTR szFunction, DWORD cchFunction, int* pLine)
{
    if (pHR != 0)
    {
        *pHR = s_hr;
    }
    if (szFile != 0)
    {
        wcsncpy(szFile, s_szFile, cchFile);
    }
    if (szFunction != 0)
    {
        wcsncpy(szFunction, s_szFunction, cchFile);
    }
    if (pLine != 0)
    {
        *pLine = s_line;
    }
}

//------------------------------------------------------------------------------
// Constructor.
//------------------------------------------------------------------------------
ConvertWmaToMp3::ConvertWmaToMp3()
{
    //
    // Set the reference count to 1 when creating this class.
    //
    m_cRef = 1;

    m_hDLL = NULL;
    m_beInitStream = NULL;
    m_beEncodeChunk = NULL;
    m_beDeinitStream = NULL;
    m_beCloseStream = NULL;
    m_beVersion = NULL;
    m_beWriteVBRHeader = NULL;
    m_beWriteInfoTag = NULL;
    m_hbeStream = NULL;
    m_pLameWAVInputBuffer = NULL;
    m_pLameMP3OutputBuffer = NULL;
    m_hMP3File = NULL;
}

//------------------------------------------------------------------------------
// Destructor.
//------------------------------------------------------------------------------
ConvertWmaToMp3::~ConvertWmaToMp3()
{
    delete [] m_pLameWAVInputBuffer;
    delete [] m_pLameMP3OutputBuffer;
}

//------------------------------------------------------------------------------
// Initialize the converter
//------------------------------------------------------------------------------
HRESULT
ConvertWmaToMp3::Initialize()
{
    HRESULT hr = S_OK;

    // Load the LAME library and get the addresses for its functions.
    m_hDLL = LoadLibrary("lame_enc.dll");
    MOD_CHECK_BOOL(m_hDLL != NULL, E_FAIL, L"Error loading the LAME dll: %d", GetLastError());

    m_beInitStream = (BEINITSTREAM) GetProcAddress(m_hDLL, TEXT_BEINITSTREAM);
    MOD_CHECK_BOOL(m_beInitStream != 0, E_FAIL, L"Error getting proc address of LAME InitStream function");
    m_beEncodeChunk = (BEENCODECHUNK) GetProcAddress(m_hDLL, TEXT_BEENCODECHUNK);
    MOD_CHECK_BOOL(m_beEncodeChunk != 0, E_FAIL, L"Error getting proc address of LAME EncodeChunk function");
    m_beDeinitStream = (BEDEINITSTREAM) GetProcAddress(m_hDLL, TEXT_BEDEINITSTREAM);
    MOD_CHECK_BOOL(m_beDeinitStream != 0, E_FAIL, L"Error getting proc address of LAME DeinitStream function");
    m_beCloseStream = (BECLOSESTREAM) GetProcAddress(m_hDLL, TEXT_BECLOSESTREAM);
    MOD_CHECK_BOOL(m_beCloseStream != 0, E_FAIL, L"Error getting proc address of LAME CloseStream function");
    m_beVersion = (BEVERSION) GetProcAddress(m_hDLL, TEXT_BEVERSION);
    MOD_CHECK_BOOL(m_beVersion != 0, E_FAIL, L"Error getting proc address of LAME Version function");
    m_beWriteVBRHeader = (BEWRITEVBRHEADER) GetProcAddress(m_hDLL, TEXT_BEWRITEVBRHEADER);
    MOD_CHECK_BOOL(m_beWriteVBRHeader != 0, E_FAIL, L"Error getting proc address of LAME WriteVBRHeader function");
    m_beWriteInfoTag = (BEWRITEINFOTAG) GetProcAddress(m_hDLL, TEXT_BEWRITEINFOTAG);
    MOD_CHECK_BOOL(m_beWriteInfoTag != 0, E_FAIL, L"Error getting proc address of LAME WriteInfoTag function");
    m_hbeStream = NULL;
    m_pLameWAVInputBuffer = NULL;
    m_pLameMP3OutputBuffer = NULL;
    m_hMP3File = NULL;

ModExit:

    return hr;
}

//------------------------------------------------------------------------------
// Creates a reader and opens the source file using this reader.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::CreateReader( const WCHAR * pwszInputFile )
{
    HRESULT             hr = S_OK;

#ifdef PRINT_STATUS
    _tprintf( _T( "Creating the Reader...\n" ) );
#endif

    //
    // Create a reader
    //
    hr = WMCreateReader( NULL, 0, &m_pReader );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Get the IWMReaderAdvanced interface
    //
    hr = m_pReader->QueryInterface( IID_IWMReaderAdvanced, (void **)&m_pReaderAdvanced );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Get the IWMHeaderInfo interface of the reader
    //
    hr = m_pReader->QueryInterface( IID_IWMHeaderInfo, (void **)&m_pReaderHeaderInfo );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    m_hr = S_OK;

    //
    // Open the reader; use "this" as the callback interface.
    //
    hr = m_pReader->Open( pwszInputFile, this, NULL );
    if( FAILED ( hr ) )
    {
        return( hr );
    }

    //
    // Wait until WMT_OPENED status message is received in OnStatus()
    //
    hr = WaitForCompletion();
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Get the duration of the source file
    //
    WORD wStreamNumber = 0;
    WMT_ATTR_DATATYPE enumType;
    WORD cbLength = sizeof( m_qwDuration );

    hr = m_pReaderHeaderInfo->GetAttributeByName( &wStreamNumber, 
                                                  g_wszWMDuration,
                                                  &enumType,
                                                  (BYTE *)&m_qwDuration,
                                                  &cbLength );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    if( m_qwDuration == 0 )
    {
        hr = E_INVALIDARG;
        return( hr );
    }

    //
    // Turn on the user clock
    //
    hr = m_pReaderAdvanced->SetUserProvidedClock( TRUE );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Turn on manual stream selection, so we get all streams.
    //
    hr = m_pReaderAdvanced->SetManualStreamSelection( TRUE );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    return( hr );
} 


//------------------------------------------------------------------------------
// Processes the samples from the reader..
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::Process()
{
    HRESULT hr = S_OK;

    //
    // Begin writing
    //
    m_hr = S_OK;
    m_fEOF = FALSE;
    m_dwProgress = 0;
    ResetEvent( m_hEvent );

#ifdef PRINT_STATUS
    _tprintf( _T( "            0%%-------20%%-------40%%-------60%%-------80%%-------100%%\n" ) );
    _tprintf( _T( "Process:    " ) );
#endif

    //
    // Start the reader
    //
    hr = m_pReader->Start( 0, 0, 1.0, 0 );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Wait until the reading is finished
    //
    hr = WaitForCompletion();
#ifdef PRINT_STATUS
    _tprintf( _T( "\n" ) );
#endif

    if( FAILED( hr ) )
    {
        return( hr );
    }

    // Run the calculation


    return( hr );
}

//------------------------------------------------------------------------------
// Waits until the event is signaled.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::WaitForCompletion()
{
    HRESULT hr = S_OK;

    DWORD dwResult = WaitForSingleObject( m_hEvent, INFINITE );
    if( WAIT_OBJECT_0 == dwResult )
    {
        hr = m_hr;
    }
    else
    {
        hr = HRESULT_FROM_WIN32( dwResult );
    }

    return( hr );
}


//------------------------------------------------------------------------------
// Copies the input file to the output file.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::Convert(const WCHAR* pwszInputFile, const WCHAR* pwszOutputFile, bool fUseVBR, DWORD dwMinimumBitRate, DWORD dwMaximumBitRate)
{
    HRESULT hr = S_OK;
    BE_CONFIG   beConfig;
	BE_ERR      beErr = BE_ERR_SUCCESSFUL;
    DWORD       dwBytesToWrite, dwBytesWritten;

    //
    // Initialize the pointers
    //
    m_hEvent = NULL;
    m_pReader = NULL;
    m_pReaderAdvanced = NULL;
    m_pReaderHeaderInfo = NULL;

    //
    // Verify parameters
    //
    MOD_CHECK_BOOL(pwszInputFile != NULL, E_INVALIDARG, L"Invalid input file");
    MOD_CHECK_BOOL(pwszOutputFile != NULL, E_INVALIDARG, L"Invalid output file");

    //
    // Open the output file for writing.
    //
    m_hMP3File = CreateFileW(pwszOutputFile, GENERIC_WRITE, FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    MOD_CHECK_BOOL(m_hMP3File != INVALID_HANDLE_VALUE, E_INVALIDARG, L"Unable to create output file %s", pwszOutputFile);

    //
    // Initialize LAME
    //
    memset(&beConfig, 0, sizeof(beConfig));					// clear all fields
    beConfig.dwConfig = BE_CONFIG_LAME;
    beConfig.format.LHV1.dwStructVersion = 1;
    beConfig.format.LHV1.dwStructSize = sizeof(beConfig);		
    beConfig.format.LHV1.dwSampleRate = 44100;
    beConfig.format.LHV1.nMode = BE_MP3_MODE_JSTEREO;
    beConfig.format.LHV1.dwMaxBitrate = dwMaximumBitRate;
    beConfig.format.LHV1.dwBitrate = dwMinimumBitRate;
    beConfig.format.LHV1.nPreset = LQP_R3MIX;
    beConfig.format.LHV1.dwMpegVersion = MPEG1;
    beConfig.format.LHV1.bOriginal = TRUE;
    beConfig.format.LHV1.bWriteVBRHeader = fUseVBR;
    beConfig.format.LHV1.bCRC = TRUE;
    beConfig.format.LHV1.bCopyright = TRUE;
    beConfig.format.LHV1.bWriteVBRHeader = TRUE;
    beConfig.format.LHV1.bEnableVBR = fUseVBR;
    beConfig.format.LHV1.nVBRQuality = 5;
    beConfig.format.LHV1.bNoRes = TRUE;

    //
	// Init the MP3 Stream
    //
	beErr = m_beInitStream(&beConfig, &m_dwLameInputSampleCount, &m_dwLameOuputBufferSize, &m_hbeStream);
    MOD_CHECK_BOOL(beErr == BE_ERR_SUCCESSFUL, E_FAIL, L"Error initializing LAME: %d", beErr);

    m_pLameWAVInputBuffer = new SHORT[m_dwLameInputSampleCount];
    MOD_CHECK_BOOL(m_pLameWAVInputBuffer != 0, E_OUTOFMEMORY, L"Unable to allocate memory for LAME's input buffer");

    m_pLameMP3OutputBuffer = new BYTE[m_dwLameOuputBufferSize];
    MOD_CHECK_BOOL(m_pLameMP3OutputBuffer != 0, E_OUTOFMEMORY, L"Unable to allocate memory for LAME's output buffer");

    //
    // Dummy do-while loop to do clean up operation before exiting
    //
    do
    {
        //
        // Event for the asynchronous calls
        //
        m_hEvent = CreateEvent( NULL, FALSE, FALSE, NULL );
        if( NULL == m_hEvent )
        {
            hr = HRESULT_FROM_WIN32( GetLastError() );
#ifdef PRINT_STATUS
            _tprintf( _T( "Create event failed (hr=0x%08x).\n" ), hr );
#endif
            break;
        }

        //
        // Create the Reader
        //
        hr = CreateReader( pwszInputFile );
        if( FAILED( hr ) )
        {
#ifdef PRINT_STATUS
            _tprintf( _T( "Could not create the Reader (hr=0x%08x).\n" ), hr );
#endif
            break;
        }

        //
        // Process samples: read from the reader, and calculate
        //
        hr = Process();
        if( FAILED( hr ) )
        {
#ifdef PRINT_STATUS
            //
            // Output some common error messages.
            //
            if( NS_E_VIDEO_CODEC_NOT_INSTALLED == hr )
            {
                _tprintf( _T( "Processing samples failed: Video codec not installed\n" ) );
            }
            if( NS_E_AUDIO_CODEC_NOT_INSTALLED == hr )
            {
                _tprintf( _T( "Processing samples failed: Audio codec not installed\n" ) );
            }
            else if( NS_E_INVALID_OUTPUT_FORMAT == hr )
            {
                _tprintf( _T( "Processing samples failed: Invalid output format \n" ) );
            }
            else if( NS_E_VIDEO_CODEC_ERROR == hr )
            {
                _tprintf( _T( "Processing samples failed: An unexpected error occurred with the video codec \n" ) );
            }
            else if( NS_E_AUDIO_CODEC_ERROR == hr )
            {
                _tprintf( _T( "Processing samples failed: An unexpected error occurred with the audio codec \n" ) );
            }
            else
            {
                _tprintf( _T( "Processing samples failed: Error (hr=0x%08x)\n" ), hr );
            }
#endif

            break;
        }

#ifdef PRINT_STATUS
        _tprintf( _T( "Copy finished.\n" ) );
#endif

        //
        // Note: The output file is indexed automatically.
        // You can use IWMWriterFileSink3::SetAutoIndexing(FALSE) to disable 
        // auto indexing. 
        //
    }
    while( FALSE );

    m_fEOF = TRUE;

    MOD_CHECK_HR(hr);

	// Deinit the MP3 stream and write out any last data
	beErr = m_beDeinitStream(m_hbeStream, m_pLameMP3OutputBuffer, &dwBytesToWrite);
    MOD_CHECK_BOOL(beErr == BE_ERR_SUCCESSFUL, E_FAIL, L"Error deinitializing LAME: %d", beErr);
    if (dwBytesToWrite > 0)
    {
		if (!WriteFile(m_hMP3File, m_pLameMP3OutputBuffer, dwBytesToWrite, &dwBytesWritten, NULL) || (dwBytesToWrite != dwBytesWritten))
		{
            MOD_CHECK_BOOL(false, E_UNEXPECTED, L"Wanted to write %d bytes, wrote %d bytes\n", dwBytesToWrite, dwBytesWritten);
		}
    }

    if (m_hbeStream != 0)
    {
	    m_beCloseStream( m_hbeStream );
        m_hbeStream = 0;
    }

    char szOutputFile[MAX_PATH];
    int len = WideCharToMultiByte(CP_UTF8, NULL, pwszOutputFile, wcslen(pwszOutputFile), szOutputFile, MAX_PATH, NULL, NULL);
    if (len > 0)
    {
        szOutputFile[len] = '\0';
	    if  (m_beWriteInfoTag != NULL)
	    {
		    // Write the INFO Tag
		    m_beWriteInfoTag(m_hbeStream, szOutputFile);
	    }
	    else
	    {
		    m_beWriteVBRHeader(szOutputFile);
	    }
    }

ModExit:

    if (m_hbeStream != 0)
    {
	    m_beCloseStream( m_hbeStream );
    }

    SAFE_RELEASE( m_pReaderHeaderInfo );
    SAFE_RELEASE( m_pReaderAdvanced );
    SAFE_RELEASE( m_pReader );    
    SAFE_CLOSEHANDLE( m_hEvent );
    SAFE_CLOSEHANDLE( m_hMP3File );

    return hr;
}

//------------------------------------------------------------------------------
// Implementation of IWMReaderCallback::OnSample.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::OnSample( /* [in] */ DWORD dwOutputNum,
                            /* [in] */ QWORD qwSampleTime,
                            /* [in] */ QWORD qwSampleDuration,
                            /* [in] */ DWORD dwFlags,
                            /* [in] */ INSSBuffer __RPC_FAR * pSample,
                            /* [in] */ void __RPC_FAR * pvContext )
{
    HRESULT hr = S_OK;
    BYTE* pbBuffer;
    DWORD dwLength, dwWritten = 0;
    BE_ERR beErr = BE_ERR_SUCCESSFUL;

    if (dwOutputNum != 0)
    {
        return( S_OK );
    }

    pSample->GetBufferAndLength( &pbBuffer, &dwLength );
/*
    printf( "OnSample: len: %d\n", dwLength );
    printf( "OnSample: time: %d\n", qwSampleTime );
    printf( "OnSample: duration: %d\n", qwSampleDuration );
*/

#ifdef PRINT_STATUS
    while( m_dwProgress <= qwSampleTime * 50 / m_qwDuration )
    {
        m_dwProgress++;
        _tprintf( _T( "*" ) );
    }
#endif

    short* pusBuffer = (short*)pbBuffer;
    DWORD dwSamples = dwLength / 2;
    DWORD dwSampleOffset = 0;

    while (dwSampleOffset < dwSamples)
    {
	    // Encode samples
        DWORD dwBytesWritten, dwBytesWritten2 = 0;
        DWORD dwSamplesToEncode = dwSamples - dwSampleOffset > m_dwLameInputSampleCount ? m_dwLameInputSampleCount : dwSamples - dwSampleOffset;
        beErr = m_beEncodeChunk(m_hbeStream, dwSamplesToEncode, pusBuffer + dwSampleOffset, m_pLameMP3OutputBuffer, &dwBytesWritten);
        MOD_CHECK_BOOL(beErr == BE_ERR_SUCCESSFUL, E_FAIL, "Error encoding chunk: %d", beErr);
        dwSampleOffset += dwSamplesToEncode;

		if (!WriteFile(m_hMP3File, m_pLameMP3OutputBuffer, dwBytesWritten, &dwBytesWritten2, NULL) || (dwBytesWritten != dwBytesWritten2))
		{
            MOD_CHECK_BOOL(false, E_UNEXPECTED, L"Wanted to write %d bytes, wrote %d bytes\n", dwBytesWritten, dwBytesWritten2);
		}
    }

ModExit:

    if (FAILED(hr))
    {
        m_hr = hr;
        SetEvent( m_hEvent );
    }

    return hr;
}

//------------------------------------------------------------------------------
// Implementation of IWMStatusCallback::OnStatus.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::OnStatus( /* [in] */ WMT_STATUS Status,
                            /* [in] */ HRESULT hr,
                            /* [in] */ WMT_ATTR_DATATYPE dwType,
                            /* [in] */ BYTE __RPC_FAR * pValue,
                            /* [in] */ void __RPC_FAR * pvContext)
{
    //
    // If an error code already exists, just set the event and return.
    //
    if( FAILED( m_hr ) )
    {
        SetEvent( m_hEvent );
        return( S_OK );
    }

    //
    // If an error occurred in the reader, save this error code and set the event.
    //
    if( FAILED(hr) )
    {
        m_hr = hr;
        SetEvent( m_hEvent );
        return( S_OK );
    }

    switch ( Status )
    {
    case WMT_OPENED:
#ifdef PRINT_STATUS
        _tprintf( _T( "Reader Callback: File is opened.\n" ) );
#endif
        m_hr = S_OK;
        SetEvent( m_hEvent );

        break;

    case WMT_STARTED:
        //
        // Ask for 1 second of the stream to be delivered
        //
        m_qwReaderTime = 10000000;
//        m_qwReaderTime = 500000;	// 50ms
        hr = m_pReaderAdvanced->DeliverTime( m_qwReaderTime );
        if( FAILED( hr ) )
        {
            m_hr = hr;
            SetEvent( m_hEvent );
        }

        break;

    case WMT_EOF:
        m_hr = S_OK;
        m_fEOF = TRUE;
        SetEvent( m_hEvent );
    
        break;
    }

    return( S_OK );
}


//------------------------------------------------------------------------------
// Implementation of IWMReaderCallbackAdvanced::OnTime.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::OnTime( /* [in] */ QWORD qwCurrentTime,
                          /* [in] */ void __RPC_FAR * pvContext)
{
    //
    // Keep asking for 1 second of the stream till EOF
    //
    if( !m_fEOF )
    {
        m_qwReaderTime += 10000000;

        // It's possible for the callback to be invoked after an error has already torn down
        // the system, so make sure we still have a reader before doing this.
        HRESULT hr = m_pReaderAdvanced->DeliverTime( m_qwReaderTime );
        if( FAILED( hr ) )
        {
            //
            // If an error occurred in the reader, save this error code and set the event.
            //
            m_hr = hr;
            SetEvent( m_hEvent );
        }
    }

    return( S_OK );
}

HRESULT ConvertWmaToMp3::OnStreamSample( /* [in] */ WORD wStreamNum,
                                  /* [in] */ QWORD cnsSampleTime,
                                  /* [in] */ QWORD cnsSampleDuration,
                                  /* [in] */ DWORD dwFlags,
                                  /* [in] */ INSSBuffer __RPC_FAR * pSample,
                                  /* [in] */ void __RPC_FAR * pvContext)
{
    return( E_NOTIMPL );
}


//------------------------------------------------------------------------------
// Implementation of other IWMReaderCallbackAdvanced methods.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::OnStreamSelection( /* [in] */ WORD wStreamCount,
                                     /* [in] */ WORD __RPC_FAR * pStreamNumbers,
                                     /* [in] */ WMT_STREAM_SELECTION __RPC_FAR * pSelections,
                                     /* [in] */ void __RPC_FAR * pvContext)
{
    return( S_OK );
}

HRESULT ConvertWmaToMp3::OnOutputPropsChanged( /* [in] */ DWORD dwOutputNum,
                                        /* [in] */ WM_MEDIA_TYPE __RPC_FAR * pMediaType,
                                        /* [in] */ void __RPC_FAR * pvContext )
{
    return( S_OK );
}

HRESULT ConvertWmaToMp3::AllocateForOutput( /* [in] */ DWORD dwOutputNum,
                                     /* [in] */ DWORD cbBuffer,
                                     /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                     /* [in] */ void __RPC_FAR * pvContext)
{
    return( E_NOTIMPL );
}

HRESULT ConvertWmaToMp3::AllocateForStream( /* [in] */ WORD wStreamNum,
                                     /* [in] */ DWORD cbBuffer,
                                     /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                     /* [in] */ void __RPC_FAR * pvContext)
{
    return( E_NOTIMPL );
}

//------------------------------------------------------------------------------
// Implementation of IUnknown methods.
//------------------------------------------------------------------------------
HRESULT ConvertWmaToMp3::QueryInterface( /* [in] */ REFIID riid,
                                  /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR * ppvObject)
{
    if( NULL == ppvObject )
    {
        return( E_INVALIDARG );
    }

    if( riid == IID_IWMStatusCallback )
    {
        *ppvObject = static_cast< IWMStatusCallback * >( this );
        AddRef();
    }
    else if( riid == IID_IWMReaderCallback )
    {
        *ppvObject = static_cast< IWMReaderCallback * >( this );
        AddRef();
    }
    else if( riid == IID_IWMReaderCallbackAdvanced )
    {
        *ppvObject = static_cast< IWMReaderCallbackAdvanced * >( this );
        AddRef();
    }
    else if( riid == IID_IUnknown )
    {
        *ppvObject = static_cast< IWMReaderCallback * >( this );
        AddRef();
    }
    else
    {
        *ppvObject = NULL;
        return( E_NOINTERFACE );
    }

    return( S_OK );
}

ULONG ConvertWmaToMp3::AddRef()
{
    return( InterlockedIncrement( &m_cRef ) );
}

ULONG ConvertWmaToMp3::Release()
{
    if( 0 == InterlockedDecrement( &m_cRef ) )
    {
        delete this;
    }

    return( m_cRef );
}
