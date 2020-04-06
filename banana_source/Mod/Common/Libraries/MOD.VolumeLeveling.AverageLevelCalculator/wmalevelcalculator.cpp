#include "stdafx.h"
#include "math.h"

//#define PRINT_STATUS

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::WMALevelCalculator()
// Desc: Constructor.
//------------------------------------------------------------------------------
WMALevelCalculator::WMALevelCalculator()
{
    //
    // Set the reference count to 1 when creating this class.
    //
    m_cRef = 1;
}

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::~WMALevelCalculator()
// Desc: Destructor.
//------------------------------------------------------------------------------
WMALevelCalculator::~WMALevelCalculator()
{
}

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::GetAverageLevel()
// Desc: Returns the average level of the track.
//------------------------------------------------------------------------------
unsigned short WMALevelCalculator::GetAverageLevel() const
{
	return (unsigned short)(m_qwLevelAverageSum / m_qwRMSSampleCount);
}

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::GetAverageLevel()
// Desc: Returns the peak value of the track.
//------------------------------------------------------------------------------
unsigned short WMALevelCalculator::GetPeakValue() const
{
	return (unsigned short)m_dwPeakValue;
}

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::GetDuration()
// Desc: Returns the duration of the track.
//------------------------------------------------------------------------------
DWORD WMALevelCalculator::GetDuration() const
{
	return (DWORD)((m_qwDuration + 9999999 /* round up */ ) / (QWORD)10000000);
}

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::GetDuration()
// Desc: Returns the duration of the track.
//------------------------------------------------------------------------------
DWORD WMALevelCalculator::GetDurationInMilliseconds() const
{
	return (DWORD)(m_qwDuration / (QWORD)10000);
}
//------------------------------------------------------------------------------
// Name: WMALevelCalculator::CreateReader()
// Desc: Creates a reader and opens the source file using this reader.
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::CreateReader( const WCHAR * pwszInputFile )
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
// Name: WMALevelCalculator::Process()
// Desc: Processes the samples from the reader..
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::Process()
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
// Name: WMALevelCalculator::WaitForCompletion()
// Desc: Waits until the event is signaled.
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::WaitForCompletion()
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
// Name: WMALevelCalculator::CalculateAverage()
// Desc: Copies the input file to the output file.
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::CalculateAverage( const WCHAR * pwszInputFile )
{
    HRESULT hr = S_OK;

    //
    // Initialize the pointers
    //
    m_hEvent = NULL;
    m_pReader = NULL;
    m_pReaderAdvanced = NULL;
    m_pReaderHeaderInfo = NULL;

    if( NULL == pwszInputFile )
    {
        return( E_INVALIDARG );
    }

	//
	// Initialize the average
	//
	m_qwSampleCount = 0;
	m_dwPeakValue = 0;
	m_qwRMSSampleCount = 0;
	m_dwLeftSampleIndex = 0;
	m_dwRightSampleIndex = 0;
	m_qwLeftLevelSum = 0;
	m_qwRightLevelSum = 0;
	m_qwLevelAverageSum = 0;

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
    SAFE_RELEASE( m_pReaderHeaderInfo );
    SAFE_RELEASE( m_pReaderAdvanced );
    SAFE_RELEASE( m_pReader );    
    SAFE_CLOSEHANDLE( m_hEvent );

    return( hr );

}

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::OnSample()
// Desc: Implementation of IWMReaderCallback::OnSample.
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::OnSample( /* [in] */ DWORD dwOutputNum,
                            /* [in] */ QWORD qwSampleTime,
                            /* [in] */ QWORD qwSampleDuration,
                            /* [in] */ DWORD dwFlags,
                            /* [in] */ INSSBuffer __RPC_FAR * pSample,
                            /* [in] */ void __RPC_FAR * pvContext )
{
	BYTE* pbBuffer;
	DWORD dwLength, dwWritten = 0;

	pSample->GetBufferAndLength( &pbBuffer, &dwLength );
/*
	printf( "OnSample: len: %d\n", dwLength );
	printf( "OnSample: time: %d\n", qwSampleTime );
	printf( "OnSample: duration: %d\n", qwSampleDuration );
*/

    while( m_dwProgress <= qwSampleTime * 50 / m_qwDuration )
    {
        m_dwProgress ++;
#ifdef PRINT_STATUS
        _tprintf( _T( "*" ) );
#endif
    }

/*
	WriteFile( m_hWavFile, pbBuffer, dwLength, &dwWritten, NULL );
	if (dwWritten != dwLength)
	{
		m_hr = E_UNEXPECTED;
		_tprintf( _T( "Reader Callback: Wanted to write %d, wrote %d\n" ), dwLength, dwWritten );
		SetEvent( m_hEvent );
	}
*/

	// 50ms sample interval for RMS
	const DWORD c_dwSamplesPerInterval = 44100 / (1000 / 50);
	short* pusBuffer = (short*)pbBuffer;
	DWORD dwSamples = dwLength / 2;

	DWORD i = 0;
	while (i < dwSamples)
	{
#ifdef PRINT_STATUS
		if (m_dwLeftSampleIndex != m_dwRightSampleIndex)
		{
			printf( "Uh oh\n" );
		}
#endif
		__int64 absSample = abs((int)pusBuffer[i]);
		m_qwLeftLevelSum += absSample * absSample;
		++m_dwLeftSampleIndex;

		++m_qwSampleCount;
		if (absSample > m_dwPeakValue)
		{
			m_dwPeakValue = (DWORD)absSample;
		}

		++i;
		if (i < dwSamples)
		{
			__int64 absSample = abs((int)pusBuffer[i]);
			m_qwRightLevelSum += absSample * absSample;
			++m_dwRightSampleIndex;

			++m_qwSampleCount;
			if (absSample > m_dwPeakValue)
			{
				m_dwPeakValue = (DWORD)absSample;
			}

			++i;
			if (m_dwRightSampleIndex == c_dwSamplesPerInterval)
			{
				QWORD rms = (QWORD)sqrt( (long double)((m_qwLeftLevelSum / c_dwSamplesPerInterval + m_qwRightLevelSum / c_dwSamplesPerInterval) / 2) );
				m_qwLevelAverageSum += rms;

#ifdef FIND_MEDIANS
				m_rmsVector.push_back( (DWORD)rms );
#endif

				++m_qwRMSSampleCount;

				m_dwLeftSampleIndex = 0;
				m_dwRightSampleIndex = 0;
				m_qwLeftLevelSum = 0;
				m_qwRightLevelSum = 0;
			}
		}
	}

    return( S_OK );
}

//------------------------------------------------------------------------------
// Name: WMALevelCalculator::OnStatus()
// Desc: Implementation of IWMStatusCallback::OnStatus.
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::OnStatus( /* [in] */ WMT_STATUS Status,
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
// Name: WMALevelCalculator::OnTime()
// Desc: Implementation of IWMReaderCallbackAdvanced::OnTime.
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::OnTime( /* [in] */ QWORD qwCurrentTime,
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

HRESULT WMALevelCalculator::OnStreamSample( /* [in] */ WORD wStreamNum,
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
HRESULT WMALevelCalculator::OnStreamSelection( /* [in] */ WORD wStreamCount,
                                     /* [in] */ WORD __RPC_FAR * pStreamNumbers,
                                     /* [in] */ WMT_STREAM_SELECTION __RPC_FAR * pSelections,
                                     /* [in] */ void __RPC_FAR * pvContext)
{
    return( S_OK );
}

HRESULT WMALevelCalculator::OnOutputPropsChanged( /* [in] */ DWORD dwOutputNum,
                                        /* [in] */ WM_MEDIA_TYPE __RPC_FAR * pMediaType,
                                        /* [in] */ void __RPC_FAR * pvContext )
{
    return( S_OK );
}

HRESULT WMALevelCalculator::AllocateForOutput( /* [in] */ DWORD dwOutputNum,
                                     /* [in] */ DWORD cbBuffer,
                                     /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                     /* [in] */ void __RPC_FAR * pvContext)
{
    return( E_NOTIMPL );
}

HRESULT WMALevelCalculator::AllocateForStream( /* [in] */ WORD wStreamNum,
                                     /* [in] */ DWORD cbBuffer,
                                     /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                     /* [in] */ void __RPC_FAR * pvContext)
{
    return( E_NOTIMPL );
}

//------------------------------------------------------------------------------
// Implementation of IUnknown methods.
//------------------------------------------------------------------------------
HRESULT WMALevelCalculator::QueryInterface( /* [in] */ REFIID riid,
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

ULONG WMALevelCalculator::AddRef()
{
    return( InterlockedIncrement( &m_cRef ) );
}

ULONG WMALevelCalculator::Release()
{
    if( 0 == InterlockedDecrement( &m_cRef ) )
    {
        delete this;
    }

    return( m_cRef );
}
