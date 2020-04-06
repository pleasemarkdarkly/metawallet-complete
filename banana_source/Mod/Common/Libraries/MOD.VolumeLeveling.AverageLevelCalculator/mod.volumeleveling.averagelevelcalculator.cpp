// MOD.VolumeLeveling.AverageLevelCalculator.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "MOD.VolumeLeveling.AverageLevelCalculator.h"

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
    return TRUE;
}

extern "C" __declspec(dllexport) int _cdecl  MODAverageLevelCalculator_Initialize()
{ 
	HRESULT hr = S_OK;

	hr = CoInitialize( NULL );
    if( FAILED( hr ) )
    {
        printf( "CoInitialize failed: hr = 0x%08x\n", hr );
        return( hr );
    }
	
	return hr; 
}


extern "C" __declspec(dllexport) int _cdecl  MODAverageLevelCalculator_Uninitialize()
{ 
	CoUninitialize();
	
	return S_OK; 
}


// Initializes the average level calculator without calling CoInitialize.
// This is done to avoid problems with differing threading models in managed code.
extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_InitializeNoCoInitialize(void)
{
	return S_OK;
}

// Uninitializes the average level calculator without calling CoUninitialize.
// This is done to avoid problems with differing threading models in managed code.
extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_UninitializeNoCoUninitialize(void)
{
	return S_OK; 
}

extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_CalculateAverageAndDuration(
		WCHAR* wszInputFile,
		unsigned short*	usAverageLevel,
		unsigned short*	usPeakValue,
		DWORD* dwDuration
	)
{
	HRESULT hr = S_OK;
	WMALevelCalculator *pConvert = 0;

	*usAverageLevel = 0;
	*usPeakValue = 0;
	*dwDuration = 0;

//	wprintf( L"Input file: %s\n", wszInputFile );

    pConvert = new WMALevelCalculator();
    if (pConvert == NULL)
    {
        hr = E_OUTOFMEMORY;
		goto Cleanup;
    }

    // Do the WMA -> WAV conversion.
    hr = pConvert->CalculateAverage( wszInputFile );
    if( FAILED( hr ) )
    {
		goto Cleanup;
    }

	*usAverageLevel = pConvert->GetAverageLevel();
	*usPeakValue = pConvert->GetPeakValue();
	*dwDuration = pConvert->GetDuration();

Cleanup:

    // Clean up memory
    SAFE_RELEASE( pConvert );

	return hr; 
}

extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_CalculateAverageAndDurationInMilliseconds(
		WCHAR* wszInputFile,
		unsigned short*	usAverageLevel,
		unsigned short*	usPeakValue,
		DWORD* dwDuration
	)
{
	HRESULT hr = S_OK;
	WMALevelCalculator *pConvert = 0;

	*usAverageLevel = 0;
	*usPeakValue = 0;
	*dwDuration = 0;

//	wprintf( L"Input file: %s\n", wszInputFile );

    pConvert = new WMALevelCalculator();
    if (pConvert == NULL)
    {
        hr = E_OUTOFMEMORY;
		goto Cleanup;
    }

    // Do the WMA -> WAV conversion.
    hr = pConvert->CalculateAverage( wszInputFile );
    if( FAILED( hr ) )
    {
		goto Cleanup;
    }

	*usAverageLevel = pConvert->GetAverageLevel();
	*usPeakValue = pConvert->GetPeakValue();
	*dwDuration = pConvert->GetDurationInMilliseconds();

Cleanup:

    // Clean up memory
    SAFE_RELEASE( pConvert );

	return hr; 
}
