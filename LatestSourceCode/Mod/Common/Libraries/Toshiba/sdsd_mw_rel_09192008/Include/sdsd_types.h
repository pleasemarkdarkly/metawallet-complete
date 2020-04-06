/****************************************************************************
//
// Copyright 2008 TOSHIBA Corp.
// All Rights Reserved.
//
// THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE of TOSHIBA Corporation.
// The copyright notice above does not evidence any actual or intended
// publication of such source code.
//
****************************************************************************/

/****************************************************************************
//  Title   : sdsd_types.h
//
//  Description: SDSD_MW Type Definitions
//===========================================================================
//
//  Date        Rev         Description
//  ----------- ----------- -------------------------------------------------
//  2008.06.30  00          First Release
//
****************************************************************************/

#ifndef __SDSD_TYPES_H__
#define __SDSD_TYPES_H__

/* Basic Type Definitions */
typedef char            SSS_CHAR;
typedef short           SSS_SHORT;
typedef long            SSS_LONG;
typedef long long       SSS_LONGLONG;
typedef unsigned char   SSS_UCHAR;
typedef unsigned short  SSS_USHORT;
typedef unsigned long   SSS_ULONG;
typedef unsigned long long SSS_ULONGLONG;

/* Special Type Definitions */
typedef SSS_ULONG       SSS_STS;
typedef SSS_CHAR        SSS_STR;
typedef SSS_UCHAR       SSS_SVCID[128];
typedef SSS_UCHAR       SSS_SVCNAME[256];
typedef SSS_UCHAR       SSS_PRVID[128];
typedef SSS_UCHAR       SSS_PRVNAME[256];
typedef SSS_UCHAR       SSS_LANG[8];
typedef SSS_UCHAR       SSS_CHARCODE[2];
typedef SSS_UCHAR       SSS_MID[8];
typedef SSS_UCHAR       SSS_UKID[8];
typedef SSS_UCHAR       SSS_UKEY[7];
typedef SSS_UCHAR       SSS_UR_U[56];
typedef SSS_UCHAR       SSS_CID[16];
typedef SSS_UCHAR       SSS_CKEY[7];
typedef SSS_UCHAR       SSS_UR_C[56];
typedef SSS_UCHAR       SSS_CKD[96];
typedef SSS_UCHAR       SSS_CKI[160];
typedef SSS_UCHAR       SSS_UDR_TBL[512];
typedef SSS_UCHAR       SSS_PFL_USED[32];
typedef SSS_UCHAR       SSS_PRGI_TBL[2048];
typedef SSS_UCHAR       SSS_PLAYINFO[56];
typedef SSS_UCHAR       SSS_CHNDL[24];
typedef SSS_UCHAR       SSS_CKHNDL[32];
typedef SSS_UCHAR       SSS_SHNDL[32];

/* Media status */
enum {
    SSS_MEDIA_REMOVE = 0,
    SSS_MEDIA_INSERT = 1
};

/* Seek Origin */
enum {
    SSS_SEEK_SET = 0,
    SSS_SEEK_CUR = 1,
    SSS_SEEK_END = 2
};

#endif /* __SDSD_TYPES_H__ */
