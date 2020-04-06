/*<copyright>
	MOD Systems, Inc (c) 2006 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

//
// MOD.MMS.ConvertWmaToMp3.h
//
// This DLL contains functions for transcoding a WMA file into a MP3 file.
// The client program should first call ModMmsConvertWmaToMp3_Initialize to
// initialize the stream parameters, then call ModMmsConvertWmaToMp3_Convert
// of ModMmsConvertWmaToMp3_ConvertVBR to transcode a file.  When finished
// transcoding files, call ModMmsConvertWmaToMp3_Uninitialize to release its objects.
//

#include "stdafx.h"
#include "MOD.MMS.ConvertWmaToMp3.h"

#ifdef _MANAGED
#pragma managed(push, off)
#endif

#define _WIN32_DCOM 

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

#ifdef _MANAGED
#pragma managed(pop)
#endif

//------------------------------------------------------------------
/// <summary>Initializes the converter for use.
/// Call this before calling other functions in this DLL.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
int _cdecl  ModMmsConvertWmaToMp3_Initialize()
{ 
	HRESULT hr = S_OK;

    if (FAILED(hr))
    {
        printf("Initialize failed: hr = 0x%08x\n", hr);
        return(hr);
    }
	
	return hr; 
}


//------------------------------------------------------------------
/// <summary>Uninitializes the converter.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
int _cdecl  ModMmsConvertWmaToMp3_Uninitialize()
{ 
	
	return S_OK; 
}


//------------------------------------------------------------------
/// <summary>Converts the given input file into MP3 format and writes it to the output file.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
int _cdecl ModMmsConvertWmaToMp3_Convert(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile,
        DWORD dwBitRate
	)
{
	HRESULT hr = S_OK;
	ConvertWmaToMp3 *pConvert = 0;

//	wprintf( L"Input file: %s\n", wszInputFile );

    pConvert = new ConvertWmaToMp3();
    if (pConvert == NULL)
    {
        hr = E_OUTOFMEMORY;
		goto Cleanup;
    }

    hr = pConvert->Initialize();
    if (FAILED(hr))
    {
		goto Cleanup;
    }

    // Do the WMA -> MP3 conversion.
    hr = pConvert->Convert(wszInputFile, wszOutputFile, false, dwBitRate, dwBitRate);
    if (FAILED(hr))
    {
		goto Cleanup;
    }

Cleanup:

    // Clean up memory
    SAFE_RELEASE( pConvert );

	return hr; 
}

//------------------------------------------------------------------
/// <summary>Converts the given input file into MP3 format using variable bit rate encoding (VBR)
/// and writes it to the output file.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
int _cdecl ModMmsConvertWmaToMp3_ConvertVBR(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile,
        DWORD dwMinimumBitRate,
        DWORD dwMaximumBitRate
	)
{
	HRESULT hr = S_OK;
	ConvertWmaToMp3 *pConvert = 0;

//	wprintf( L"Input file: %s\n", wszInputFile );

    pConvert = new ConvertWmaToMp3();
    if (pConvert == NULL)
    {
        hr = E_OUTOFMEMORY;
		goto Cleanup;
    }

    hr = pConvert->Initialize();
    if (FAILED(hr))
    {
		goto Cleanup;
    }

    // Do the WMA -> MP3 conversion.
    hr = pConvert->Convert(wszInputFile, wszOutputFile, true, dwMinimumBitRate, dwMaximumBitRate);
    if (FAILED(hr))
    {
		goto Cleanup;
    }

Cleanup:

    // Clean up memory
    SAFE_RELEASE( pConvert );

	return hr; 
}

//------------------------------------------------------------------
/// <summary>Returns the HRESULT and location of the last error logged.</summary>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
void _cdecl ModMmsConvertWmaToMp3_GetLastErrorLocation(
		int* pHR,
        WCHAR* szFile,
        DWORD cchFile,
        WCHAR* szFunction,
        DWORD cchFunction,
        int* pLine
	)
{
    ConvertWmaToMp3::GetErrorLocation(pHR, szFile, cchFile, szFunction, cchFunction, pLine);
}

