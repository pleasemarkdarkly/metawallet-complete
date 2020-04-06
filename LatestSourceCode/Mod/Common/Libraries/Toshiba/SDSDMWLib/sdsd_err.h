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
//  Title   : sdsd_err.h
//
//  Description: SDSD_MW Error Definitions
//===========================================================================
//
//  Date        Rev         Description
//  ----------- ----------- -------------------------------------------------
//  2008.06.27  00          First Release
//
****************************************************************************/

#ifndef __SDSD_ERR_H__
#define __SDSD_ERR_H__

/* Error Codes */
#define SSS_STS_SUCCESS                         0x0         /* The operation completed successfully. */
#define SSS_STS_ERR_ERROR                       0x1         /* Other errors */

#define SSS_STS_ERR_FILE_NOT_FOUND              0x2         /* The system cannot find the file specified. */
#define SSS_STS_ERR_PATH_NOT_FOUND              0x3         /* The system cannot find the path specified. */
#define SSS_STS_ERR_INVALID_PARAMETER           0x4         /* The parameter is incorrect. */
#define SSS_STS_ERR_ACCESS_DENIED               0x5         /* Access is denied. */
#define SSS_STS_ERR_INVALID_HANDLE              0x6         /* The handle is invalid. */
#define SSS_STS_ERR_INVALID_DATA                0x7         /* The data is invalid. */
#define SSS_STS_ERR_ORDER_FUNCTION              0x8         /* The order which functions are called is different. */
#define SSS_STS_ERR_NOT_USE_SDDRIVER            0x9         /* SD card driver which can use 3CAPI is not installed */
#define SSS_STS_ERR_WRITE_PROTECTED             0xa         /* The protected area of SD card is write-protected. */

#define SSS_STS_ERR_CONTENTS_FULL               0x21        /* Contents are full. */
#define SSS_STS_ERR_KEY_FULL                    0x22        /* Keys are full. */
#define SSS_STS_ERR_NOT_EXIST_KEY               0x23        /* The key is not registered. */
#define SSS_STS_ERR_NOT_PLAYBACK                0x24        /* The content is not played. */
#define SSS_STS_ERR_NOT_EXIST_SERVICE           0x25        /* The service is not registered */
#define SSS_STS_ERR_UNFORMAT                    0x26        /* The media is un-format */
#define SSS_STS_ERR_ALREADY_EXIST_KEY           0x27        /* The key is already registered */
#define SSS_STS_ERR_NOT_EXIST_TS                0x28        /* The Time Stamp is not registered */
#define SSS_STS_ERR_SEEK                        0x29        /* The seeking is failed. */

#define SSS_STS_ERR_UR_INVALID                  0x71        /* The usage rule data is invalid. */
#define SSS_STS_ERR_UR_COUNT                    0x72        /* There is no playback count. */
#define SSS_STS_ERR_UR_STARTTIME                0x73        /* Current time is before a start for playback the content. */
#define SSS_STS_ERR_UR_ENDTIME                  0x74        /* The content license has expired. */
#define SSS_STS_ERR_UR_SPAN                     0x75        /* The content license has expired. */
#define SSS_STS_ERR_UR_COPY                     0x76        /* The content cannot be copied. */
#define SSS_STS_ERR_UR_MOVE                     0x77        /* The content cannot be moved. */
#define SSS_STS_ERR_TS_INVALID                  0x78        /* The time stamp is invalid. */
#define SSS_STS_ERR_BAD_CLOCK                   0x79        /* The clock is not correct. */

#define SSS_STS_ERR_SVR_CONNECTION_FAILED       0x91        /* Connection to the key server failed. */
#define SSS_STS_ERR_SVR_CSV_FORMAT_INVALID      0x92        /* The format of CSV file is invalid. */
#define SSS_STS_ERR_SVR_PROVIDER_AUTH_FAILED    0x93        /* Authentication of the service provider failed. */
#define SSS_STS_ERR_SVR_UKID_INVALID            0x94        /* The User Key ID is invalid. */
#define SSS_STS_ERR_SVR_UKID_NOT_FOUND          0x95        /* The User Key ID is not registered. */
#define SSS_STS_ERR_SVR_CID_INVALID             0x96        /* The Content ID is invalid. */
#define SSS_STS_ERR_SVR_CID_NOT_FOUND           0x97        /* The Content ID is not registered. */
#define SSS_STS_ERR_SVR_SVCID_INVALID           0x98        /* The Service ID is invalid. */
#define SSS_STS_ERR_SVR_SYSTEM_ERROR            0x99        /* System error of the key server. */
#define SSS_STS_ERR_SVR_UNSPECIFIED             0x9A        /* Unspecified error of the key server. */

#endif /* __SDSD_ERR_H__ */
