/*<copyright>
	MOD Systems, Inc (c) 2006 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

//
// MOD.MMS.FileTranscoder.cpp
//
// This DLL contains functions for transcoding a WMA file from a given
// source file.
// The client program should first call ModMmsFileTranscoder_Initialize to
// initialize the stream parameters, then call ModMmsFileTranscoder_TranscodeFile
// to transcode a file.  When finished transcoding files, calling
// ModMmsFileTranscoder_Uninitialize will release its objects.
//

#include "stdafx.h"
#include <objbase.h>
#include <stdio.h>
#include "MOD.MMS.FileTranscoder.h"
#include "FileTranscoder.h"


#ifdef _MANAGED
#pragma managed(push, off)
#endif

#define _WIN32_DCOM 

BOOL APIENTRY DllMain( HMODULE hModule,
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

static CFileTranscoder* s_pFileTranscoder = NULL;

//------------------------------------------------------------------
/// <summary>Initializes the File Transcoder for use.
/// Call this before calling other functions in this DLL.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
int ModMmsFileTranscoder_Initialize()
{ 
	HRESULT hr = S_OK;

	hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (FAILED(hr))
    {
        printf("CoInitialize failed: hr = 0x%08x\n", hr);
        CHECK_HR(hr);
    }
    s_pFileTranscoder = new CFileTranscoder();
    if (s_pFileTranscoder == NULL)
    {
        CHECK_HR(E_FAIL);
    }

    CHECK_HR(s_pFileTranscoder->InitializeDefaultProfile());

Cleanup:

    if (FAILED(hr))
    {
        SAFE_RELEASE(s_pFileTranscoder);
    }

	return hr; 
}


//------------------------------------------------------------------
/// <summary>Uninitializes the File Transcoder.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
int ModMmsFileTranscoder_Uninitialize()
{ 
	CoUninitialize();

    SAFE_DELETE(s_pFileTranscoder);
	
	return S_OK; 
}


//------------------------------------------------------------------
/// <summary>Transcode the given input file.</summary>
/// <param name="wszInputFile">Full file name and path of the source file</param>
/// <param name="wszOutputFile">Full file name and path of the transcoded file
/// to be created.  The directory should already exist.</param>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
int ModMmsFileTranscoder_TranscodeFile(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile
	)
{
    HRESULT hr = S_OK;

/*
	wprintf( L"Input file: %s\n", wszInputFile );
	wprintf( L"Output file: %s\n", wszOutputFile );
*/

    if (s_pFileTranscoder == NULL)
    {
        CHECK_HR(E_FAIL);
    }

    hr = s_pFileTranscoder->TranscodeFile(wszInputFile, wszOutputFile);

Cleanup:

    return hr;
}


//------------------------------------------------------------------
/// <summary>Returns the HRESULT and location of the last error logged.</summary>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport)
void ModMmsFileTranscoder_GetLastErrorLocation(
		int* pHR,
        WCHAR* szFile,
        DWORD cchFile,
        WCHAR* szFunction,
        DWORD cchFunction,
        int* pLine
	)
{
    CFileTranscoder::GetErrorLocation(pHR, szFile, cchFile, szFunction, cchFunction, pLine);
}

