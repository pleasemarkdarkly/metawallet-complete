/*<copyright>
	MOD Systems, Inc (c) 2008 All Rights Reserved.
	720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
	All Rights Reserved, (c) 2008, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.
	No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
	No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
	Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

//
// MOD.VolumeLeveling.AverageLevelCalculator.h
//
// This DLL contains functions for calculating the average level, peak level, and duration of a WMA file.
//

// Initializes/uninitializes the average level calculator, calling CoInitialize and CoUninitialize
extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_Initialize(void);
extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_Uninitialize(void);

// Initializes/uninitializes the average level calculator, without calling CoInitialize and CoUninitialize.
// This is done to avoid problems with differing threading models in managed code.
extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_InitializeNoCoInitialize(void);
extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_UninitializeNoCoUninitialize(void);

extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_CalculateAverageAndDuration(
		WCHAR* wszInputFile,
		unsigned short*	usAverageLevel,
		unsigned short*	usPeakValue,
		DWORD* dwDuration
	);

extern "C" __declspec(dllexport) int _cdecl MODAverageLevelCalculator_CalculateAverageAndDurationInMilliseconds(
		WCHAR* wszInputFile,
		unsigned short*	usAverageLevel,
		unsigned short*	usPeakValue,
		DWORD* dwDuration
	);
