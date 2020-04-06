/*<copyright>
	MOD Systems, Inc (c) 2008 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2008, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
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

//------------------------------------------------------------------
/// <summary>Initializes the converter for use.
/// Call this before calling other functions in this DLL.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport) int _cdecl ModMmsConvertWmaToMp3_Initialize(void);

//------------------------------------------------------------------
/// <summary>Uninitializes the converter.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport) int _cdecl ModMmsConvertWmaToMp3_Uninitialize(void);

//------------------------------------------------------------------
/// <summary>Converts the given input file into MP3 format and writes it to the output file.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport) int _cdecl ModMmsConvertWmaToMp3_Convert(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile,
        DWORD dwBitRate
	);

//------------------------------------------------------------------
/// <summary>Converts the given input file into MP3 format using variable bit rate encoding (VBR)
/// and writes it to the output file.</summary>
/// 
/// <returns>An HRESULT indicating success or failure</returns>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport) int _cdecl ModMmsConvertWmaToMp3_ConvertVBR(
		WCHAR* wszInputFile,
		WCHAR* wszOutputFile,
        DWORD dwMinimumBitRate,
        DWORD dwMaximumBitRate
	);

//------------------------------------------------------------------
/// <summary>Returns the HRESULT and location of the last error logged.</summary>
// ------------------------------------------------------------------
extern "C" __declspec(dllexport) void _cdecl ModMmsConvertWmaToMp3_GetLastErrorLocation(
		int* pHR,
        WCHAR* szFile,
        DWORD cchFile,
        WCHAR* szFunction,
        DWORD cchFunction,
        int* pLine
	);

