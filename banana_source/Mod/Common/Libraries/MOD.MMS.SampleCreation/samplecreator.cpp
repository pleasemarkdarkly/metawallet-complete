/*<copyright>
	MOD Systems, Inc (c) 2006 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

#include "stdafx.h"
#include "SampleCreator.h"
#include <tchar.h>

//#define PRINT_DEBUG _tprintf
#define PRINT_DEBUG(...)

#define USE_MUTEX

//------------------------------------------------------------------
/// <summary>Sample Creator constructor.</summary>
// ------------------------------------------------------------------
CSampleCreator::CSampleCreator()
{
    m_pProfile = NULL;
	m_fInSample = false;
	m_dwSampleOffsetSeconds = 0;
}


//------------------------------------------------------------------
/// <summary>Sample Creator destructor.</summary>
// ------------------------------------------------------------------
CSampleCreator::~CSampleCreator()
{
    SAFE_RELEASE(m_pProfile);
}

//------------------------------------------------------------------
/// <summary>Initializes the profile used to specify the output
/// streams, and adds streams with default values.</summary>
// ------------------------------------------------------------------
HRESULT
CSampleCreator::InitializeDefaultProfile()
{
    HRESULT hr;

    SAFE_RELEASE(m_pProfile);
    CHECK_HR(CreateProfile(&m_pProfile));
//    CHECK_HR(AddStreamToProfile(2, 8, 22050, (DWORD)(29 * 1024)));
//    CHECK_HR(AddStreamToProfile(1, 16, 44100, 32 * 1024));
//    CHECK_HR(AddStreamToProfile(2, 16, 44100, 32 * 1024));
//    CHECK_HR(AddStreamToProfile(1, 16, 44100, 48 * 1024));
//    CHECK_HR(AddStreamToProfile(2, 16, 44100, 48 * 1024));
//    CHECK_HR(AddStreamToProfile(1, 16, 44100, 64 * 1024));
    CHECK_HR(AddStreamToProfile(2, 16, 44100, 64 * 1024));
//    CHECK_HR(AddStreamToProfile(1, 16, 44100, 128 * 1024));

Cleanup:

    return hr;
}

//------------------------------------------------------------------
/// <summary>Initializes the profile used to specify the output
/// streams, and adds streams with default values.</summary>
// ------------------------------------------------------------------
HRESULT
CSampleCreator::InitializeDefaultProfile(
    WORD wChannels,
    WORD wBitsPerSample,
    WORD wSamplesPerSecond,
    DWORD dwMaxBitsPerSecond)
{
    HRESULT hr;

    SAFE_RELEASE(m_pProfile);
    CHECK_HR(CreateProfile(&m_pProfile));
    CHECK_HR(AddStreamToProfile(wChannels, wBitsPerSample, wSamplesPerSecond, dwMaxBitsPerSecond));

Cleanup:

    return hr;
}

//------------------------------------------------------------------
/// <summary>Initializes the profile used to specify the output
/// streams.</summary>
// ------------------------------------------------------------------
HRESULT
CSampleCreator::InitializeProfile()
{
    HRESULT hr;

    SAFE_RELEASE(m_pProfile);
    CHECK_HR(CreateProfile(&m_pProfile));

Cleanup:

    return hr;
}


//------------------------------------------------------------------
/// <summary>Creates a sample file from the given input file.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
HRESULT
CSampleCreator::CreateSample(
	const WCHAR* wszInputFile,
	const WCHAR* wszOutputFile,
	DWORD  dwSampleOffsetSeconds,
	DWORD  dwSampleDurationSeconds
)
{
    HRESULT hr = S_OK;

    m_dwSampleDurationSeconds = dwSampleDurationSeconds;
    m_dwSampleOffsetSeconds = dwSampleOffsetSeconds;

    //
    // Initialize the pointers
    //
    m_hEvent = NULL;
    m_pReader = NULL;
    m_pReaderAdvanced = NULL;
    m_pReaderHeaderInfo = NULL;
    m_pReaderProfile = NULL;
    m_pWriter = NULL;
    m_pWriterPreprocess = NULL;
    m_pWriterHeaderInfo = NULL;
    m_pdwPreprocessPass = NULL;
    m_pdwOutputToInput = NULL;
    m_pdwOutputToStream = NULL;

    if ((wszInputFile == NULL) || (wszOutputFile == NULL))
    {
        return E_INVALIDARG;
    }

    //
    // Mutex to protect access to m_pReaderAdvanced
    //
#ifdef USE_MUTEX
    m_hMutex = CreateMutex( NULL, FALSE, NULL );
    if (m_hMutex == NULL)
    {
        hr = HRESULT_FROM_WIN32( GetLastError() );
        _tprintf( _T( "Create mutex failed (hr=0x%08x).\n" ), hr );
        CHECK_HR(hr);
    }
#endif    // USE_MUTEX

    //
    // Event for the asynchronous calls
    //
    m_hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    if (NULL == m_hEvent)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
        _tprintf(_T( "Create event failed (hr=0x%08x).\n" ), hr);
        CHECK_HR(hr);
    }

    //
    // Create the reader
    //
    hr = CreateReader( wszInputFile );
    if( FAILED( hr ) )
    {
        _tprintf( _T( "Could not create the Reader for file %ws (hr=0x%08x).\n" ), wszInputFile, hr );
        CHECK_HR(hr);
    }

    //
    // Create the writer
    //
    hr = CreateWriter( wszOutputFile, m_pProfile );
    if( FAILED( hr ) )
    {
        _tprintf( _T( "Could not create the Writer for file %ws (hr=0x%08x).\n" ), wszOutputFile, hr );
        CHECK_HR(hr);
    }

    //
    // Get the map from the reader ouputs to the writer inputs and 
    // the map from the reader outputs to the reader streams
    //
    hr = GetOutputMap();
    if( FAILED( hr ) )
    {
        _tprintf( _T( "Could not get the output map (hr=0x%08x).\n" ), hr );
        CHECK_HR(hr);
    }
    
    //
    // Set the properties of writer inputs
    //
//    hr = SetWriterInput( fMultiChannel, fSmartRecompression );
    hr = SetWriterInput( false, false);
    if( FAILED( hr ) )
    {
        if( NS_E_INVALID_INPUT_FORMAT == hr )
        {
            _tprintf( _T( "Set writer input failed: The input format is invalid (hr=0x%08x).\n" ), hr );
        }
        else
        {
            _tprintf( _T( "Set writer input failed: Error (hr=0x%08x).\n" ), hr );
        }

        CHECK_HR(hr);
    }

    //
    // Start the encoding
    //
    hr = m_pWriter->BeginWriting( );
    if( FAILED( hr ) )
    {
        if( NS_E_VIDEO_CODEC_NOT_INSTALLED == hr )
        {
            _tprintf( _T( "BeginWriting failed: Video codec not installed\n" ) );
        }
        if( NS_E_AUDIO_CODEC_NOT_INSTALLED == hr )
        {
            _tprintf( _T( "BeginWriting failed: Audio codec not installed\n" ) );
        }
        else if( NS_E_INVALID_OUTPUT_FORMAT == hr )
        {
            _tprintf( _T( "BeginWriting failed: Invalid output format \n" ) );
        }
        else if( NS_E_VIDEO_CODEC_ERROR == hr )
        {
            _tprintf( _T( "BeginWriting failed: An unexpected error occurred with the video codec \n" ) );
        }
        else if( NS_E_AUDIO_CODEC_ERROR == hr )
        {
            _tprintf( _T( "BeginWriting failed: An unexpected error occurred with the audio codec \n" ) );
        }
        else
        {
            _tprintf( _T( "BeginWriting failed: Error (hr=0x%08x)\n" ), hr );
        }

        CHECK_HR(hr);
    }

    //
    // Preprocess the samples if multi-pass is enabled
    //
//    if( fMultiPass )
    if (false)
    {
        hr = Preprocess();
        if(FAILED(hr))
        {
            if( NS_E_INVALID_NUM_PASSES == hr )
            {
                _tprintf( _T( "Preprocessing samples failed: Invalid preprocessing passes. Don't use -m option\n" ) );
            }
            else
            {
                _tprintf( _T( "Preprocessing samples failed: Error (hr=0x%08x)\n" ), hr );
            }

            CHECK_HR(hr);
        }
    }

    //
    // Process all samples from the reader
    //
    hr = Process();
    if (FAILED(hr))
    {
        if( NS_E_INVALID_NUM_PASSES == hr )
        {
            _tprintf( _T( "Processing samples failed: Invalid preprocessing passes. Use -m option\n" ) );
        }
        else 
        {
            _tprintf( _T( "Processing samples failed: Error (hr=0x%08x)\n" ), hr );
        }

        CHECK_HR(hr);
    }

    //
    // End writing
    //
    hr = m_pWriter->EndWriting( );
    if( FAILED( hr ) )
    {
        _tprintf( _T( "Could not end writing (hr=0x%08x).\n" ), hr );
        CHECK_HR(hr);
    }

    //
    // Close the reader
    //
    hr = m_pReader->Close();
    if( FAILED( hr ) )
    {
        _tprintf( _T( "Could not close the reader (hr=0x%08x).\n" ), hr );
        CHECK_HR(hr);
    }

    PRINT_DEBUG( _T( "Recompression finished.\n" ) );
    
    //
    // Note: The output file is indexed automatically.
    // You can use IWMWriterFileSink3::SetAutoIndexing(FALSE) to disable 
    // auto indexing. 
    //

#ifdef USE_MUTEX
    WaitForSingleObject( m_hMutex, INFINITE );
#endif    // USE_MUTEX

Cleanup:

    if (m_pReader != NULL)
    {
        m_pReader->Close();
    }

    //
    // Release all resources
    //
    SAFE_ARRAYDELETE( m_pdwOutputToStream );
    SAFE_ARRAYDELETE( m_pdwOutputToInput );
    SAFE_ARRAYDELETE( m_pdwPreprocessPass );
    SAFE_RELEASE( m_pWriterPreprocess );
    SAFE_RELEASE( m_pWriterHeaderInfo );
    SAFE_RELEASE( m_pWriter );
    SAFE_RELEASE( m_pReaderProfile );
    SAFE_RELEASE( m_pReaderHeaderInfo );
    SAFE_RELEASE( m_pReaderAdvanced );
    SAFE_RELEASE( m_pReader );
    SAFE_CLOSEHANDLE( m_hEvent );
#ifdef USE_MUTEX
    ReleaseMutex( m_hMutex );
#endif    // USE_MUTEX


    return hr;
}

//------------------------------------------------------------------------------
// Name: CSampleCreator::GetOutputMap()
// Desc: Creates the map from the reader ouputs to the writer inputs and 
//       the map from the reader outputs to the reader streams.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::GetOutputMap()
{
    HRESULT             hr = S_OK;
    IWMInputMediaProps  * pWriterInputProps = NULL;
    IWMOutputMediaProps * pReaderOutputProps = NULL;
    IWMStreamConfig     * pReaderStreamConfig = NULL;
    DWORD               cReaderStream = 0;
    GUID                guidReaderOutput;
    GUID                guidWriterInput;
    WCHAR               * pwszOutputConnectionName = NULL;
    WCHAR               * pwszStreamConnectionName = NULL;
    WORD                cbConnectionName = 0;
    BOOL                fMatch = FALSE;

    do
    {
        //
        // Get the output count of the reader
        //
        hr = m_pReader->GetOutputCount( &m_cReaderOutput );
        if( FAILED( hr ) )
        {
            break;
        }

        //
        // Get the input count of the writer
        //
        hr = m_pWriter->GetInputCount( &m_cWriterInput );
        if( FAILED( hr ) )
        {
            break;
        }
         
        //
        // Get the stream count of the reader
        //
        hr = m_pReaderProfile->GetStreamCount( &cReaderStream );
        if( FAILED( hr ) )
        {
            break;
        }
         
        //
        // Allocate memory for the map
        //
        m_pdwOutputToInput = new DWORD[ m_cReaderOutput ];
        m_pdwOutputToStream = new DWORD[ m_cReaderOutput ];

        if( NULL == m_pdwOutputToInput || NULL == m_pdwOutputToStream )
        {
            hr = E_OUTOFMEMORY;
            break;
        }

        //
        // Iterate all outputs of the reader
        //
        for( DWORD i = 0; i < m_cReaderOutput; i ++ )
        {
            //
            // Get the output property interface of the reader
            //
            hr = m_pReader->GetOutputProps( i, &pReaderOutputProps );
            if( FAILED( hr ) )
            {
                break;
            }                       

            //
            // Get the type of this output property
            //
            hr = pReaderOutputProps->GetType( &guidReaderOutput );
            if( FAILED( hr ) )
            {
                break;
            }                       

            //
            // Get the connection name of this output
            //
            hr = pReaderOutputProps->GetConnectionName( NULL, &cbConnectionName );
            if( FAILED( hr ) )
            {
                break;
            }           
            
            pwszOutputConnectionName = new WCHAR[ cbConnectionName ];
            if( NULL == pwszOutputConnectionName )
            {
                hr = E_OUTOFMEMORY;
                break;
            }

            hr = pReaderOutputProps->GetConnectionName( pwszOutputConnectionName, &cbConnectionName );
            if( FAILED( hr ) )
            {
                break;
            }           
            
            //
            // This loop tries to find a matching input of the writer for this output:
            // 1. The input must not be matched by other outputs of the reader.
            // 2. The input must have the same type as this output.
            //
            DWORD j;
            for( j = 0; j < m_cWriterInput; j ++ )
            {
                //
                // Seach for the current reader outputs to writer inputs map
                // 
                DWORD k;
                for( k = 0; k < i; k ++ )
                {
                    if( m_pdwOutputToInput[ k ] == j )
                    {
                        break;
                    }
                }

                //
                // If this input has been matched by other outputs of the reader, 
                // then don't use this input. 
                //
                if( k < i )
                {
                    continue;
                }

                //
                // Get the input property of the writer
                //
                hr = m_pWriter->GetInputProps( j, &pWriterInputProps );
                if( FAILED( hr ) )
                {
                    break;
                }                       

                //
                // Get the type of this input property
                //
                hr = pWriterInputProps->GetType( &guidWriterInput );
                if( FAILED( hr ) )
                {
                    break;
                }
                
                SAFE_RELEASE( pWriterInputProps );

                //
                // If this input type of the writer is equal to the output 
                // type of the reader, we found a match. 
                //
                if( guidReaderOutput == guidWriterInput )
                {
                    fMatch = TRUE;
                    m_pdwOutputToInput[ i ] = j;
                    PRINT_DEBUG( _T( "Output %d of the reader is mapped to input %d of the writer.\n" ), i, j );
                    break;
                }
            }

            if( FAILED( hr ) )
            {
                break;
            }

            //
            // If we cannot find a match for this output, mark it in the map. 
            //
            if( j >= m_cWriterInput )
            {
                m_pdwOutputToInput[ i ] = 0xFFFFFFFF;
            }

            //
            // In a multiple bitrate(MBR) file, several streams could have the 
            // same output number. When playing the MBR file, the reader 
            // determines the best stream to use based on the available resource.
            //
            // This loop finds the actual stream from which this reader output 
            // comes. This information will be used to set up multichannel 
            // encoding and smart recompression.
            //
            for( j = 0; j < cReaderStream; j ++ )
            {
                //
                // Get the stream configuration from the reader's profile
                //
                hr = m_pReaderProfile->GetStream( j, &pReaderStreamConfig );
                if( FAILED( hr ) )
                {
                    break;
                }

                //
                // Get the connection name of this stream configuration
                //
                hr = pReaderStreamConfig->GetConnectionName( NULL, &cbConnectionName );
                if( FAILED( hr ) )
                {
                    break;
                }           
                
                pwszStreamConnectionName = new WCHAR[ cbConnectionName ];
                if( NULL == pwszStreamConnectionName )
                {
                    hr = E_OUTOFMEMORY;
                    break;
                }

                hr = pReaderStreamConfig->GetConnectionName( pwszStreamConnectionName, &cbConnectionName );
                if( FAILED( hr ) )
                {
                    break;
                }   
                
                SAFE_RELEASE( pReaderStreamConfig );

                //
                // If this output comes from this stream, they should have the 
                // same conneciton name
                //
                if( 0 == _wcsicmp( pwszStreamConnectionName, pwszOutputConnectionName ) )
                {
                    m_pdwOutputToStream[ i ] = j;
                    SAFE_ARRAYDELETE( pwszStreamConnectionName );
                    break;
                }

                SAFE_ARRAYDELETE( pwszStreamConnectionName );
            }

            if( FAILED( hr ) )
            {
                break;
            }

            SAFE_RELEASE( pReaderOutputProps );
            SAFE_ARRAYDELETE( pwszOutputConnectionName );
        }

        if( FAILED( hr ) )
        {
            break;
        }

        //
        // At least one output of the reader should be mapped to the input
        // of the writer. 
        //
        if( !fMatch )
        {
            hr = E_FAIL;
            _tprintf( _T( "Could not map any stream from the input file to the output file.\n" ) );
            break;
        }
    }
    while( FALSE );

    //
    // Release all resources
    //
    SAFE_ARRAYDELETE( pwszStreamConnectionName );
    SAFE_ARRAYDELETE( pwszOutputConnectionName );
    SAFE_RELEASE( pReaderStreamConfig );
    SAFE_RELEASE( pReaderOutputProps );
    SAFE_RELEASE( pWriterInputProps );

    return( hr );
}

//------------------------------------------------------------------------------
// Name: CSampleCreator::SetWriterInput()
// Desc: Sets the input properties of the writer. The method will set up 
//       multichannel source and smart recompression if it's necessary.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::SetWriterInput( BOOL fMultiChannel, 
                                        BOOL fSmartRecompression )
{
    HRESULT             hr = S_OK;
    IWMReaderAdvanced2  * pReaderAdvanced2;
    IWMOutputMediaProps * pReaderOutputProps = NULL;
    IWMStreamConfig     * pReaderStreamConfig = NULL;
    IWMMediaProps       * pReaderStreamProps = NULL;
    IWMInputMediaProps  * pWriterInputProps = NULL;
    GUID                enumType;
    WM_MEDIA_TYPE       * pOutputMediaType = NULL;
    WM_MEDIA_TYPE       * pStreamMediaType = NULL;
    IWMPropertyVault    * pPropertyVault = NULL;
    DWORD               cbMediaType = 0;

    PRINT_DEBUG( _T( "Setting the inputs of the writer...\n" ) );

    do
    {
        //
        // Get IWMReaderAdvanced2 interface from the reader
        //
        hr = m_pReader->QueryInterface( IID_IWMReaderAdvanced2, (void **)&pReaderAdvanced2 );
        if( FAILED( hr ) )
        {
            break;
        }

        //
        // Iterate all outputs of the reader
        //
        for( DWORD i = 0; i < m_cReaderOutput; i ++ )
        {
            //
            // If this output has a matching input in the writer, set up the input
            //
            if( 0xFFFFFFFF != m_pdwOutputToInput[ i ] )
            {
                //
                // Get the output property of the reader
                //
                hr = m_pReader->GetOutputProps( i, &pReaderOutputProps );
                if( FAILED( hr ) )
                {
                    break;
                }                       

                // Get the input media properties of the writer
                hr = m_pWriter->GetInputProps( m_pdwOutputToInput[ i ], 
                                               &pWriterInputProps );
                if( FAILED( hr ) )
                {
                    break;
                }                       

                // Get the media type
                hr = pWriterInputProps->GetType( &enumType );
                if( FAILED( hr ) )
                {
                    break;
                }                       

                //
                // We need do more work if the stream type is audio and 
                // multichannel output or smart recompression is enabled.
                //
                if( ( fMultiChannel || fSmartRecompression ) && 
                    WMMEDIATYPE_Audio == enumType )
                {
                    //
                    // Get the stream from which this output comes 
                    //
                    hr = m_pReaderProfile->GetStream( m_pdwOutputToStream[ i ], 
                                                      &pReaderStreamConfig );
                    if( FAILED( hr ) )
                    {
                        break;
                    }

                    //
                    // Get the media property interface of this stream
                    //
                    hr = pReaderStreamConfig->QueryInterface( IID_IWMMediaProps, 
                                                              (void **)&pReaderStreamProps );
                    if( FAILED( hr ) )
                    {
                        break;
                    }

                    //
                    // Get the media type of this stream
                    //
                    hr = pReaderStreamProps->GetMediaType( NULL, &cbMediaType );
                    if( FAILED( hr ) )
                    {
                        break;
                    }                       

                    pStreamMediaType = (WM_MEDIA_TYPE *)new BYTE[ cbMediaType ];
                    if( NULL == pStreamMediaType )
                    {
                        hr = E_OUTOFMEMORY;
                        break;
                    }

                    hr = pReaderStreamProps->GetMediaType( pStreamMediaType, 
                                                           &cbMediaType );
                    if( FAILED( hr ) )
                    {
                        break;
                    }       

                    //
                    // Enable multichannel output for the reader if it's required.
                    // We'll only enable multichannel output when the source has 
                    // more than 2 channels.
                    //
                    // Multichannel output only works on Windodws XP, and it's 
                    // not necessary unless a multichannel profile is used in 
                    // the writer. 
                    //

                    WAVEFORMATEX * pWFX = (WAVEFORMATEX *)pStreamMediaType->pbFormat;

                    if( fMultiChannel && 2 < pWFX->nChannels )
                    {
                        PRINT_DEBUG( _T( "Multichannel output is enabled for output %d of the reader.\n" ), i );

                        BOOL fEnableDiscreteOutput = TRUE;
                        hr = pReaderAdvanced2->SetOutputSetting( i,
                                                                 g_wszEnableDiscreteOutput,
                                                                 WMT_TYPE_BOOL,
                                                                 (BYTE *)&fEnableDiscreteOutput,
                                                                 sizeof( BOOL ) );
                        if( FAILED( hr ) )
                        {
                            break;
                        }

                        DWORD dwSpeakerConfig = pWFX->nChannels;
                        hr = pReaderAdvanced2->SetOutputSetting( i,
                                                                 g_wszSpeakerConfig,
                                                                 WMT_TYPE_DWORD,
                                                                 (BYTE *)&dwSpeakerConfig,
                                                                 sizeof( DWORD ) );
                        if( FAILED( hr ) )
                        {
                            break;
                        }

                        //
                        // We need to call SetOutputProps() to change output properties accordingly
                        //
                        SAFE_RELEASE( pReaderOutputProps );
                        hr = m_pReader->GetOutputFormat( i, 0, &pReaderOutputProps );
                        if( FAILED( hr ) )
                        {
                            break;
                        }

                        hr = m_pReader->SetOutputProps( i, pReaderOutputProps );
                        if( FAILED( hr ) )
                        {
                            break;
                        }

                    }

                    //
                    // Set smart recompression if it's required.
                    //
                    if( fSmartRecompression )
                    {
                        PRINT_DEBUG( _T( "Smart recompression is enabled for input %d of the writer.\n" ), 
                                  m_pdwOutputToInput[ i ] );

                        hr = pWriterInputProps->QueryInterface( IID_IWMPropertyVault, 
                                                                (void **)&pPropertyVault );
                        if( FAILED( hr ))
                        {
                            break;
                        }

                        hr = pPropertyVault->SetProperty( g_wszOriginalWaveFormat, 
                                                          WMT_TYPE_BINARY, 
                                                          pStreamMediaType->pbFormat, 
                                                          pStreamMediaType->cbFormat );
                        if( FAILED( hr ))
                        {
                            break;
                        }
                    }                       
                }

                //
                // Get the media type of the output property
                //
                hr = pReaderOutputProps->GetMediaType( NULL, &cbMediaType );
                if( FAILED( hr ) )
                {
                    break;
                }                       

                pOutputMediaType = (WM_MEDIA_TYPE *)new BYTE[ cbMediaType ];
                if( NULL == pOutputMediaType )
                {
                    hr = E_OUTOFMEMORY;
                    break;
                }

                hr = pReaderOutputProps->GetMediaType( pOutputMediaType, 
                                                       &cbMediaType );
                if( FAILED( hr ) )
                {
                    break;
                }       

                //
                // Apply the media type of the output to the input property 
                // of the writer
                //
                hr = pWriterInputProps->SetMediaType( pOutputMediaType );
                if( FAILED( hr ) )
                {
                    break;
                }

                //
                // Apply the changes of input properties to the writer
                //
                hr = m_pWriter->SetInputProps( m_pdwOutputToInput[ i ], pWriterInputProps );
                if( FAILED( hr ) )
                {
                    break;
                }                       

                //
                // Release all resources
                //
                SAFE_ARRAYDELETE( pStreamMediaType );
                SAFE_ARRAYDELETE( pOutputMediaType );

                SAFE_RELEASE( pPropertyVault );
                SAFE_RELEASE( pReaderStreamProps );
                SAFE_RELEASE( pReaderStreamConfig );
                SAFE_RELEASE( pWriterInputProps );
                SAFE_RELEASE( pReaderOutputProps );
            }
        }

        if( FAILED( hr ) )
        {
            break;
        }

    }
    while( FALSE );

    //
    // Release all resources
    //
    SAFE_ARRAYDELETE( pStreamMediaType );
    SAFE_ARRAYDELETE( pOutputMediaType );

    SAFE_RELEASE( pPropertyVault );
    SAFE_RELEASE( pWriterInputProps );
    SAFE_RELEASE( pReaderOutputProps );
    SAFE_RELEASE( pReaderStreamProps );
    SAFE_RELEASE( pReaderStreamConfig );
    SAFE_RELEASE( pReaderAdvanced2 );

    return( hr );
}

//------------------------------------------------------------------------------
// Name: CSampleCreator::Preprocess()
// Desc: Preprocesses the samples from the reader.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::Preprocess()
{
    HRESULT     hr = S_OK;

    //
    // Get the IWMWriterPreprocess interface from the writer
    // 
    hr = m_pWriter->QueryInterface( IID_IWMWriterPreprocess, 
                                    (void **)&m_pWriterPreprocess );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Allocate memroy for an array to store the preprocessing passes
    //
    m_pdwPreprocessPass = new DWORD[ m_cWriterInput ];
    if( NULL == m_pdwPreprocessPass )
    {
        hr = E_OUTOFMEMORY;
        return( hr );
    }

    //
    // Before preprocessing, we need to iterate all inputs of the writer
    // and get the preprocessing passes. Different inputs of the writer 
    // could have different preprocessing passes. 
    //
    DWORD i;
    for( i = 0; i < m_cWriterInput; i ++ )
    {
        //
        // If this input doesn't have a matching input in the reader, 
        // we don't need to do preprocessing for this input. 
        //
        DWORD j;
        for( j = 0; j < m_cReaderOutput; j ++ )
        {
            if( m_pdwOutputToInput[ j ] == i )
            {
                break;
            }
        }

        if( j < m_cReaderOutput )
        {
            //
            // Get the maximum number of preprocessing passes for this input
            //
            hr = m_pWriterPreprocess->GetMaxPreprocessingPasses( i, 
                                                                 0, 
                                                                 &m_pdwPreprocessPass[ i ] );
            if( FAILED( hr ) )
            {
                return( hr );
            }

            //
            // We do preprocessing only if the number of preprocessing passes is not 0
            //
            if( 0 != m_pdwPreprocessPass[ i ] )
            {
                //
                // Use the maximum number of preprocessing passes
                //
                hr = m_pWriterPreprocess->SetNumPreprocessingPasses( i, 
                                                                     0, 
                                                                     m_pdwPreprocessPass[ i ] );
                if( FAILED( hr ) )
                {
                    return( hr );
                }

                //
                // Begin preprocessing for this input
                // 
                hr = m_pWriterPreprocess->BeginPreprocessingPass( i, 0 );
                if( FAILED( hr ) )
                {
                    return( hr );
                }
            }
        }
        else
        {
            //
            // Set the preprocessing pass to 0 if the input doesn't have 
            // a matching output in the reader
            //
            m_pdwPreprocessPass[ i ] = 0;
        }
    }

    while( TRUE )
    {
        //
        // We do preprocessing only if at least one input has more than zero
        // preprocessing passes.
        //
        for( i = 0; i < m_cWriterInput; i ++ )
        {
            if( 0 < m_pdwPreprocessPass[ i ] )
            {
                break;
            }
        }

        if( i == m_cWriterInput )
        {
            //
            // We don't need to do preprocessing again, because the preprocessing
            // passes of all writer inputs are zero now
            //
            break;
        }

        //
        // Set m_bPreprocessing flag to true, so OnSample() will deliver the 
        // sample to m_pWriterPreprocess, not to m_pWriter.
        //
        m_bPreprocessing = TRUE;

        m_hr = S_OK;
        m_fEOF = FALSE;
        m_qwReaderTime = 0;
        m_dwProgress = 0;
        ResetEvent( m_hEvent );

        PRINT_DEBUG( _T( "            0%%-------20%%-------40%%-------60%%-------80%%-------100%%\n" ) );
        PRINT_DEBUG( _T( "Preprocess: " ) );

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
        PRINT_DEBUG( _T( "\n" ) );
        if( FAILED( hr ) )
        {
            return( hr );
        }

        //
        // Stop the reader
        //
        hr = m_pReader->Stop( );
        if( FAILED( hr ) )
        {
            return( hr );
        }

        //
        // Decrease the preprocessing passes of each input
        //
        for( i = 0; i < m_cWriterInput; i ++ )
        {
            if( 0 < m_pdwPreprocessPass[ i ] )
            {
                m_pdwPreprocessPass[ i ] --;

                if( 0 == m_pdwPreprocessPass[ i ] )
                {
                    //
                    // If we don't need to do preprocessing for this input again,
                    // call EndPreprocessingPass() to stop preprocessing.
                    //
                    hr = m_pWriterPreprocess->EndPreprocessingPass( i, 0 );
                    if( FAILED( hr ) )
                    {
                        return( hr );
                    }
                }
            }
        }
    }

    return( hr );
}

//------------------------------------------------------------------------------
// Name: CSampleCreator::Process()
// Desc: Processes the samples from the reader.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::Process()
{
    HRESULT hr = S_OK;

    //
    // Set m_bPreprocessing flag to false, so OnSample() will deliver the 
    // sample to m_pWriter, not to m_pWriterPreprocess.
    //
    m_bPreprocessing = FALSE;

    m_hr = S_OK;
    m_fEOF = FALSE;
    m_qwReaderTime = 0;
    m_dwProgress = 0;
    ResetEvent( m_hEvent );

    PRINT_DEBUG( _T( "            0%%-------20%%-------40%%-------60%%-------80%%-------100%%\n" ) );
    PRINT_DEBUG( _T( "Process:    " ) );

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
    PRINT_DEBUG( _T( "\n" ) );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Stop the reader
    //
//    hr = m_pReader->Stop( );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    return( hr );
}


//------------------------------------------------------------------
/// <summary>Creates a profile object.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
HRESULT
CSampleCreator::CreateProfile(IWMProfile ** ppIWMProfile)
{
    HRESULT             hr = S_OK;
    IWMProfileManager   *pIWMProfileManager = NULL;
    
    if( NULL == ppIWMProfile )
    {
        return E_POINTER;
    }

    //
    // Create profile manager
    //
    hr = WMCreateProfileManager( &pIWMProfileManager );
    CHECK_HR(hr);

    // Create an empty profile
    hr = pIWMProfileManager->CreateEmptyProfile(WMT_VER_9_0, ppIWMProfile);
    CHECK_HR(hr);

Cleanup:

    SAFE_RELEASE(pIWMProfileManager);

    return hr;
}

//------------------------------------------------------------------
/// <summary>Adds a stream with the specified parameters to
/// the profile.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
HRESULT
CSampleCreator::AddStreamToProfile(
    WORD wChannels,
    WORD wBitsPerSample,
    WORD wSamplesPerSecond,
    DWORD dwMaxBitsPerSecond)
{
    HRESULT             hr = S_OK;
    IWMStreamConfig*    pStreamConfig = NULL;
    WAVEFORMATEX        waveFormat;
    DWORD               dwStreamCount;

    // Make sure the profile's been initialized
    if (m_pProfile == NULL)
    {
        return E_FAIL;
    }

    // Find a stream that matches the given parameters
    memset((void*)&waveFormat, 0, sizeof(WAVEFORMATEX));
    waveFormat.nChannels      = wChannels;
    waveFormat.wBitsPerSample = wBitsPerSample;
    waveFormat.nSamplesPerSec = wSamplesPerSecond;

    CHECK_HR(FindAudioFormat(
        WMMEDIASUBTYPE_WMAudioV8,
        &waveFormat,
        dwMaxBitsPerSecond,
        FALSE,
        &pStreamConfig));

    if (pStreamConfig == NULL)
    {
        // No stream found that matched the parameters, so just exit.
        CHECK_HR(E_FAIL);
    }

    CHECK_HR(m_pProfile->GetStreamCount(&dwStreamCount));

    CHECK_HR(pStreamConfig->SetStreamNumber((WORD)(dwStreamCount + 1)));

    CHECK_HR(pStreamConfig->SetStreamName(L"Audio stream"));

    CHECK_HR(m_pProfile->AddStream(pStreamConfig));

Cleanup:

    SAFE_RELEASE(pStreamConfig);

    return hr;
}



// This constant is used to determine if an index was found.
#define INVALID_INDEX 0xFFFF

// The FindAudioFormat function finds a compressed audio format that
//  matches the criteria defined by the input parameters.
HRESULT CSampleCreator::FindAudioFormat(GUID SubType,
                        WAVEFORMATEX* pWaveLimits,
                        DWORD dwMaxRate,
                        BOOL fAVSync,
                        IWMStreamConfig** ppStreamConfig)
{
    HRESULT hr = S_OK;

    IWMProfileManager* pProfileMgr   = NULL;
    IWMCodecInfo3*     pCodecInfo    = NULL;
    IWMStreamConfig*   pStreamConfig = NULL;
    IWMStreamConfig*   pBestMatch    = NULL;
    IWMMediaProps*     pProps        = NULL;
    WM_MEDIA_TYPE*     pType         = NULL;
    DWORD              cbType        = 0;
    WAVEFORMATEX*      pWave         = NULL;

    DWORD index = 0;
    DWORD cEntries = 0;
    DWORD dwBestRate = 0;
    DWORD PacketsPerSecond = 0;

    // This value is beyond the codec indexes 
    // and will be used to verify success.
    DWORD CodecIndex = INVALID_INDEX; 

    // Instantiate a profile manager object.
    hr = WMCreateProfileManager(&pProfileMgr);
    GOTO_EXIT_IF_FAILED(hr);

    // Get the codec information interface.
    hr = pProfileMgr->QueryInterface(IID_IWMCodecInfo3, (void**)&pCodecInfo);
    GOTO_EXIT_IF_FAILED(hr);

    // Get the number of audio codecs for which there is information.
    hr = pCodecInfo->GetCodecInfoCount(WMMEDIATYPE_Audio, &cEntries);
    GOTO_EXIT_IF_FAILED(hr);

    // Find the index of the codec corresponding to the requested subytpe.
    for(index = 0; index < cEntries; index++)
    {
        // Get the first format for each codec. 
        hr = pCodecInfo->GetCodecFormat(WMMEDIATYPE_Audio, index, 0, &pStreamConfig);
        CONTINUE_IF_FAILED(hr);

        // Get the media properties interface.
        hr = pStreamConfig->QueryInterface(IID_IWMMediaProps, (void**)&pProps);
        CONTINUE_IF_FAILED(hr);

        // Get the size required for the media type structure.
        hr = pProps->GetMediaType(NULL, &cbType);
        CONTINUE_IF_FAILED(hr);

        // Allocate memory for the media type structure.
        pType = (WM_MEDIA_TYPE*) new BYTE[cbType];
        if(pType == NULL)
        {
            hr = E_OUTOFMEMORY;
            goto Exit;
        }

        // Get the media type structure.
        hr = pProps->GetMediaType(pType, &cbType);
        GOTO_EXIT_IF_FAILED(hr);

        // Check this codec against the one requested.
        if(pType->subtype == SubType)
            CodecIndex = index;
        
        // The subtypes did not match. Clean up for next iteration.
Reloop:
        SAFE_RELEASE(pStreamConfig);
        SAFE_RELEASE(pProps);
        SAFE_ARRAYDELETE(pType);

        // Break now if needed. Placing the break here avoids having to
        //  release or delete both inside and outside of the loop.
        if(CodecIndex != INVALID_INDEX)
            break;
    } // for index

    // The subtype is invalid if no codec was found that matches it.
    if(CodecIndex == INVALID_INDEX)
    {
        hr = E_INVALIDARG;
        goto Exit;
    }

    // Get the number of formats supported for the codec.
    hr = pCodecInfo->GetCodecFormatCount(WMMEDIATYPE_Audio, 
                                         CodecIndex, 
                                         &cEntries);
    GOTO_EXIT_IF_FAILED(hr);

    // Loop through the formats for the codec, looking for matches.
    for(index = 0; index < cEntries; index++)
    {
        // Get the next format.
        hr = pCodecInfo->GetCodecFormat(WMMEDIATYPE_Audio, 
                                        CodecIndex, 
                                        index, 
                                        &pStreamConfig);
        GOTO_EXIT_IF_FAILED(hr);

        // Get the media properties interface.
        hr = pStreamConfig->QueryInterface(IID_IWMMediaProps, (void**)&pProps);
        GOTO_EXIT_IF_FAILED(hr);

        // Get the size required for the media type structure.
        hr = pProps->GetMediaType(NULL, &cbType);
        GOTO_EXIT_IF_FAILED(hr);

        // Allocate memory for the media type structure.
        pType = (WM_MEDIA_TYPE*) new BYTE[cbType];
        if(pType == NULL)
        {
            hr = E_OUTOFMEMORY;
            goto Exit;
        }

        // Get the media type structure.
        hr = pProps->GetMediaType(pType, &cbType);
        GOTO_EXIT_IF_FAILED(hr);

        // Check that the format data is present.
        if(pType->cbFormat >= sizeof(WAVEFORMATEX))
            pWave = (WAVEFORMATEX*)pType->pbFormat;
        else
        {
            // The returned media type should always have an attached 
            //  WAVEFORMATEX structure.  
            hr = E_UNEXPECTED;
            goto Exit;
        }

        // Start checking data.

        // Do not check particulars unless the bit rate is in range.
        if((pWave->nAvgBytesPerSec * 8) > dwBestRate &&
           (pWave->nAvgBytesPerSec * 8) <= dwMaxRate)
        {
            // Check the limits.
            if((pWave->nChannels == pWaveLimits->nChannels) &&
               (pWave->wBitsPerSample == pWaveLimits->wBitsPerSample) &&
               (pWave->nSamplesPerSec == pWaveLimits->nSamplesPerSec))
            {
                // If audio/video synchronization requested, check the number
                //  of packets per second (Bps / BlockAlign). The bit rate is
                //  greater than 3200 bps, this value must be 5. 
                //  Otherwise this value is 3.
                // This is an ASF requirement.
                if(fAVSync)
                {
                    if((pWave->nAvgBytesPerSec / pWave->nBlockAlign) >= 
                           ((pWave->nAvgBytesPerSec >= 4000) ? 5.0 : 3.0))
                    {
                        // Release the previous best match.
                        SAFE_RELEASE(pBestMatch);

                        // Set this stream configuration as the new best match.
                        pBestMatch = pStreamConfig;
                        pStreamConfig->AddRef();

                        // Set the best bit rate.
                        dwBestRate = (pWave->nAvgBytesPerSec * 8);

                    }
                } // if fAVSync
                else
                {
                    // Release the previous best match.
                    SAFE_RELEASE(pBestMatch);

                    // Set this stream configuration as the new best match.
                    pBestMatch = pStreamConfig;
                    pStreamConfig->AddRef();

                    // Set the best bit rate.
                    dwBestRate = (pWave->nAvgBytesPerSec * 8);
                } // else
            } // if matching limits
        } // if valid bit rate

        // Clean up for next iteration.
        SAFE_RELEASE(pStreamConfig);
        SAFE_RELEASE(pProps);
        pWave = NULL;
        SAFE_ARRAYDELETE(pType);
    } // for index

    // If no match was found, the arguments were not valid for the codec.
    if(pBestMatch == NULL)
    {
        hr = E_INVALIDARG;
        goto Exit;
    }

    // Set the pointer to the stream configuration.
    *ppStreamConfig = pBestMatch;
    pBestMatch = NULL;

Exit:
    SAFE_RELEASE(pProfileMgr);
    SAFE_RELEASE(pCodecInfo);
    SAFE_RELEASE(pStreamConfig);
    SAFE_RELEASE(pBestMatch);
    SAFE_RELEASE(pProps);
    SAFE_ARRAYDELETE(pType);

    return hr;        
}



//------------------------------------------------------------------
/// <summary>Creates a reader object for the input file.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
HRESULT
CSampleCreator::CreateReader(const WCHAR * wszOutputFile)
{
    HRESULT hr = S_OK;

    PRINT_DEBUG( _T( "Creating the Reader...\n" ) );

    //
    // Create a reader
    //
    CHECK_HR(WMCreateReader( NULL, 0, &m_pReader ));

    //
    // Get the IWMReaderAdvanced interface
    //
    CHECK_HR(m_pReader->QueryInterface( IID_IWMReaderAdvanced, (void **)&m_pReaderAdvanced ));

    //
    // Get the IWMHeaderInfo interface of the reader
    //
    CHECK_HR(m_pReader->QueryInterface( IID_IWMHeaderInfo, (void **)&m_pReaderHeaderInfo ));

    //
    // Get the profile of the reader
    //
    CHECK_HR(m_pReader->QueryInterface( IID_IWMProfile, (void **)&m_pReaderProfile ));

    m_hr = S_OK;
    ResetEvent( m_hEvent );

    //
    // Open the reader, using "this" as the callback interface.
    //
    CHECK_HR(m_pReader->Open( wszOutputFile, this, NULL ));

    //
    // Wait until the WMT_OPENED status message is received in OnStatus()
    //
    CHECK_HR(WaitForCompletion());

    //
    // Get the duration of the source file
    //
    WORD wStreamNum = 0;
    WMT_ATTR_DATATYPE enumType;
    WORD cbLength = sizeof( m_qwDuration );

    CHECK_HR(m_pReaderHeaderInfo->GetAttributeByName( &wStreamNum, 
                                                  g_wszWMDuration, 
                                                  &enumType, 
                                                  (BYTE *)&m_qwDuration, 
                                                  &cbLength ));

    if( m_qwDuration == 0 )
    {
        CHECK_HR(E_INVALIDARG);
    }

    //
    // Turn on the user clock
    //
    CHECK_HR(m_pReaderAdvanced->SetUserProvidedClock( TRUE ));

Cleanup:

    return hr;
} 

//------------------------------------------------------------------------------
// Name: CSampleCreator::CreateWriter()
// Desc: Creates a writer and sets the profile and output of this writer.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::CreateWriter( const WCHAR * wszOutputFile, 
                                      IWMProfile * pProfile )
{
    HRESULT             hr = S_OK;

    PRINT_DEBUG( _T( "Creating the Writer...\n" ) );

    //
    // Create a writer
    //
    hr = WMCreateWriter( NULL, &m_pWriter );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Get the IWMHeaderInfo interface of the writer
    //
    hr = m_pWriter->QueryInterface( IID_IWMHeaderInfo, (void **)&m_pWriterHeaderInfo );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Set the profile of the writer
    //
    hr = m_pWriter->SetProfile( pProfile );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    //
    // Set the output file of the writer
    //
    hr = m_pWriter->SetOutputFilename( wszOutputFile );
    if( FAILED( hr ) )
    {
        return( hr );
    }

    return( hr );
} 


//------------------------------------------------------------------------------
// Name: CSampleCreator::OnSample()
// Desc: Implementation of IWMReaderCallback::OnSample.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::OnSample( /* [in] */ DWORD dwOutputNum,
                                  /* [in] */ QWORD qwSampleTime,
                                  /* [in] */ QWORD qwSampleDuration,
                                  /* [in] */ DWORD dwFlags,
                                  /* [in] */ INSSBuffer __RPC_FAR * pSample,
                                  /* [in] */ void __RPC_FAR * pvContext )
{
    HRESULT hr = S_OK;

	// Make sure another error hasn't been encountered yet.
	if (FAILED( m_hr ))
	{
		return m_hr;
	}

    //
    // Get the input of the writer that matches this output.
    //
    DWORD dwInput = m_pdwOutputToInput[ dwOutputNum ];

    //
    // If this output of the reader doesn't have a matching input of the writer,
    // we'll not pass this sample to the writer.
    //
    if( 0xFFFFFFFF != dwInput )
    {
        //
        // Display the progress information to the user
        //
        while( m_dwProgress <= qwSampleTime * 50 / m_qwDuration )
        {
            m_dwProgress ++;
            PRINT_DEBUG( _T( "*" ) );
        }
        
        //
        // If it's preprocessing, we pass the sample to m_pWriterPreprocess,
        // otherwise we pass the sample to the m_pWriter.
        //
        if( m_bPreprocessing )
        {
            //
            // If the preprocessing passes of the input is 0, we'll not
            // preprocess this sample.
            //
            if( m_pdwPreprocessPass[ dwInput ] > 0 )
            {
                hr = m_pWriterPreprocess->PreprocessSample( dwInput,        // input number
                                                            qwSampleTime,   // presentation time
                                                            dwFlags,        // flags
                                                            pSample );      // the data
            }
        }
        else
        {
			if (m_fInSample == false && qwSampleTime / 10000000 >= m_dwSampleOffsetSeconds)
			{
				m_qwStartSampleTime = qwSampleTime;
				m_fInSample = true;
			}
			if(m_fInSample)
			{
	            hr = m_pWriter->WriteSample( dwInput,       // input number
		                                     qwSampleTime - m_qwStartSampleTime,  // presentation time
			                                 dwFlags,       // flags
				                             pSample );     // the data
	            // If we've reached the sample duration then quit processing.
		        if (((DWORD)(qwSampleTime / 10000000)) >= (m_dwSampleOffsetSeconds + m_dwSampleDurationSeconds))
			    {
				    SetEvent(m_hEvent);
				}
			}
        }

        //
        // If an error occured in Reader, save this error code and set the event.
        //
        if( FAILED( hr ) )
        {
            m_hr = hr;
            SetEvent( m_hEvent );
        }
    }

    return(S_OK);
}

//------------------------------------------------------------------------------
// Name: CSampleCreator::OnStatus()
// Desc: Implementation of IWMStatusCallback::OnStatus.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::OnStatus( /* [in] */ WMT_STATUS Status,
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
        return(S_OK);
    }

    //
    // If an error occurred in the reader, save this error code and set the event.
    //
    if( FAILED(hr) )
    {
        m_hr = hr;
        SetEvent( m_hEvent );
        return(S_OK);
    }

    //
    // Status gives the current status of the reading of the input file
    //
    switch ( Status )
    {
    case WMT_OPENED:
        PRINT_DEBUG( _T( "Reader Callback: File is opened.\n" ) );

        m_hr = S_OK;
        SetEvent( m_hEvent );

        break;

    case WMT_STARTED:
        //
        // Ask for 1 second of the stream to be delivered
        //
        m_qwReaderTime = 10000000;
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

    return(S_OK);
}

//------------------------------------------------------------------------------
// Name: CSampleCreator::OnTime()
// Desc: Implementation of IWMReaderCallbackAdvanced::OnTime.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::OnTime( /* [in] */ QWORD qwCurrentTime,
                                /* [in] */ void __RPC_FAR * pvContext)
{
    //
    // Keep asking for 1 second of the stream till EOF
    //
    if( !m_fEOF )
    {
        // It's possible for the callback to be invoked after an error has already torn down
        // the system, so make sure we still have a reader before doing this.
#ifdef USE_MUTEX
        WaitForSingleObject( m_hMutex, INFINITE );
#endif    // USE_MUTEX

		if (FAILED(m_hr))
		{
	        SetEvent( m_hEvent );
		}
		else if (m_pReaderAdvanced != NULL)
        {
            m_qwReaderTime += 10000000;

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

#ifdef USE_MUTEX
        ReleaseMutex( m_hMutex );
#endif    // USE_MUTEX
    }

    return(S_OK);
}

//------------------------------------------------------------------------------
// Name: CSampleCreator::OnStreamSample()
// Desc: Implementation of IWMReaderCallbackAdvanced::OnStreamSample.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::OnStreamSample( /* [in] */ WORD wStreamNum,
                                        /* [in] */ QWORD cnsSampleTime,
                                        /* [in] */ QWORD cnsSampleDuration,
                                        /* [in] */ DWORD dwFlags,
                                        /* [in] */ INSSBuffer __RPC_FAR * pSample,
                                        /* [in] */ void __RPC_FAR * pvContext )
{
    //
    // The samples are expected in OnSample
    //
    m_hr = E_UNEXPECTED;
    PRINT_DEBUG( _T( "Reader Callback: Received a compressed sample (hr=0x%08x).\n" ), m_hr );
    SetEvent( m_hEvent );

    return(S_OK);
}

//------------------------------------------------------------------------------
// Implementation of other IWMReaderCallbackAdvanced methods.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::OnStreamSelection( /* [in] */ WORD wStreamCount,
                                           /* [in] */ WORD __RPC_FAR * pStreamNumbers,
                                           /* [in] */ WMT_STREAM_SELECTION __RPC_FAR * pSelections,
                                           /* [in] */ void __RPC_FAR * pvContext )
{
    return(S_OK);
}

HRESULT CSampleCreator::OnOutputPropsChanged( /* [in] */ DWORD dwOutputNum,
                                              /* [in] */ WM_MEDIA_TYPE __RPC_FAR * pMediaType,
                                              /* [in] */ void __RPC_FAR * pvContext )
{
    return(S_OK);
}

HRESULT CSampleCreator::AllocateForOutput( /* [in] */ DWORD dwOutputNum,
                                           /* [in] */ DWORD cbBuffer,
                                           /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                           /* [in] */ void __RPC_FAR * pvContext)
{
    return E_NOTIMPL;
}

HRESULT CSampleCreator::AllocateForStream( /* [in] */ WORD wStreamNum,
                                           /* [in] */ DWORD cbBuffer,
                                           /* [out] */ INSSBuffer __RPC_FAR *__RPC_FAR * ppBuffer,
                                           /* [in] */ void __RPC_FAR * pvContext)
{
    return E_NOTIMPL;
}

//------------------------------------------------------------------------------
// Implementation of IUnknown methods.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::QueryInterface( /* [in] */ REFIID riid,
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
        return E_NOINTERFACE;
    }

    return(S_OK);
}

ULONG CSampleCreator::AddRef()
{
    return( InterlockedIncrement( &m_cRef ) );
}

ULONG CSampleCreator::Release()
{
    if( 0 == InterlockedDecrement( &m_cRef ) )
    {
        // ED: don't delete this object when the WMReader releases its interfaces
//        delete this;
    }

    return( m_cRef );
}


//------------------------------------------------------------------------------
// Name: CSampleCreator::WaitForCompletion()
// Desc: Waits until the event is signaled.
//------------------------------------------------------------------------------
HRESULT CSampleCreator::WaitForCompletion()
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

