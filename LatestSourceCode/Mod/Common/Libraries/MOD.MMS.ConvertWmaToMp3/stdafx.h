// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

//#define FIND_MEDIANS

#include <tchar.h>
#include <wmsdk.h>
#include <stdio.h>

#ifdef FIND_MEDIANS
#include <vector>
#include <algorithm>
#endif


#include "BladeMP3EncDLL.h"
#include "ConvertWmaToMp3.h"
