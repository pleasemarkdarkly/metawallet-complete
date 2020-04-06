/*<copyright>
	MOD Systems, Inc (c) 2006 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

//
// MOD.MMS.SampleCreation.h
//
// This DLL contains functions for creating a sample WMA file from a given
// source file.
// The client program should first call ModMmsSampleCreation_Initialize to
// initialize the stream parameters, then call ModMmsSampleCreation_CreateSampleFile
// for each sample file that needs to be created.  When finished,
// ModMmsSampleCreation_Uninitialize will release its objects.
//

#ifdef MODMMSSAMPLECREATION_EXPORTS
//#define MODMMSSAMPLECREATION_API extern "C" __declspec(dllexport) _cdecl
#define MODMMSSAMPLECREATION_API extern "C" __declspec(dllexport)
#else
//#define MODMMSSAMPLECREATION_API extern "C" __declspec(dllimport) _cdecl
#define MODMMSSAMPLECREATION_API extern "C" __declspec(dllimport)
#endif


//------------------------------------------------------------------
/// <summary>Initializes the Sample Creator for use.
/// Call this before calling other functions in this DLL.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSSAMPLECREATION_API
int ModMmsSampleCreation_Initialize(void);

//------------------------------------------------------------------
/// <summary>Initializes the Sample Creator for use.
/// Call this before calling other functions in this DLL.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSSAMPLECREATION_API
int ModMmsSampleCreation_InitializeWithParameters(
        WORD wChannels,
        WORD wBitsPerSample,
        WORD wSamplesPerSecond,
        DWORD dwMaxBitsPerSecond
    );

//------------------------------------------------------------------
/// <summary>Uninitializes the Sample Creator.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSSAMPLECREATION_API
int ModMmsSampleCreation_Uninitialize(void);

//------------------------------------------------------------------
/// <summary>Creates a sample file from the given input file.</summary>
/// <param name="wszInputFile">Full file name and path of the source file</param>
/// <param name="wszOutputFile">Full file name and path of the sample file
/// to be created.  The directory should already exist.</param>
/// <param name="dwSampleDurationSeconds">Length in seconds to use
/// for the sample file.</param>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSSAMPLECREATION_API
int ModMmsSampleCreation_CreateSampleFile(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile,
		DWORD  dwSampleDurationSeconds
	);


//------------------------------------------------------------------
/// <summary>Creates a sample file from the given input file.</summary>
/// <param name="wszInputFile">Full file name and path of the source file</param>
/// <param name="wszOutputFile">Full file name and path of the sample file
/// to be created.  The directory should already exist.</param>
/// <param name="dwSampleOffsetSeconds">Offest in seconds from the beginning
/// of the track to start sampling.</param>
/// <param name="dwSampleDurationSeconds">Length in seconds to use
/// for the sample file.</param>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSSAMPLECREATION_API
int ModMmsSampleCreation_CreateSampleFileFromOffset(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile,
		DWORD  dwSampleOffsetSeconds,
		DWORD  dwSampleDurationSeconds
	);


