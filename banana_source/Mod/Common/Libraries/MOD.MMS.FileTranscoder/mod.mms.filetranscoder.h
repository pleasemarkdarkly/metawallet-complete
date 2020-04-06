/*<copyright>
	MOD Systems, Inc (c) 2006 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

//
// MOD.MMS.FileTranscoder.h
//
// This DLL contains functions for transcoding a WMA file from a given
// source file.
// The client program should first call ModMmsFileTranscoder_Initialize to
// initialize the stream parameters, then call ModMmsFileTranscoder_TranscodeFile
// to transcode a file.  When finished transcoding files, calling
// ModMmsFileTranscoder_Uninitialize will release its objects.
//

#ifdef MODMMSFILETRANSCODER_EXPORTS
//#define MODMMSFILETRANSCODER_API extern "C" __declspec(dllexport) _cdecl
#define MODMMSFILETRANSCODER_API extern "C" __declspec(dllexport)
#else
//#define MODMMSFILETRANSCODER_API extern "C" __declspec(dllimport) _cdecl
#define MODMMSFILETRANSCODER_API extern "C" __declspec(dllimport)
#endif


//------------------------------------------------------------------
/// <summary>Initializes the File Transcoder for use.
/// Call this before calling other functions in this DLL.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSFILETRANSCODER_API
int ModMmsFileTranscoder_Initialize(void);

//------------------------------------------------------------------
/// <summary>Uninitializes the File Transcoder.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSFILETRANSCODER_API
int ModMmsFileTranscoder_Uninitialize(void);

//------------------------------------------------------------------
/// <summary>Transcode the given input file.</summary>
/// <param name="wszInputFile">Full file name and path of the source file</param>
/// <param name="wszOutputFile">Full file name and path of the transcoded file
/// to be created.  The directory should already exist.</param>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
MODMMSFILETRANSCODER_API
int ModMmsFileTranscoder_TranscodeFile(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile
	);

//------------------------------------------------------------------
/// <summary>Returns the HRESULT and location of the last error logged.</summary>
// ------------------------------------------------------------------
MODMMSFILETRANSCODER_API
void ModMmsFileTranscoder_GetLastErrorLocation(
		int* pHR,
        WCHAR* szFile,
        DWORD cchFile,
        WCHAR* szFunction,
        DWORD cchFunction,
        int* pLine
	);


