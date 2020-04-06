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
//  Description: SDSD_MW Type Definitions
//===========================================================================
//
//  Date        Rev         Description
//  ----------- ----------- -------------------------------------------------
//  2008.06.27  00          First Release
//
****************************************************************************/

#ifndef __SDSD_MW_H__
#define __SDSD_MW_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "sdsd_types.h"
#include "sdsd_err.h"

#define SDSD_MW_API

/* Declaration of Prototype Function */
/* Functions for Server */
#ifdef __SSS_WINDOWS__
SDSD_MW_API
SSS_STS SSS_RequestContentKey(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_UCHAR       ContentType,            /* Content Type */
    SSS_CID         ContentID,              /* Content ID */
    SSS_CKEY        ContentKey              /* Content Key */
);

SDSD_MW_API
SSS_STS SSS_RegisterUserKeys(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_STR*        HistoryFilePath,        /* History file path */
    SSS_ULONG*      LineNumber              /* Line Number */
);

SDSD_MW_API
SSS_STS SSS_RegisterEncryptedContentKeys(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_STR*        HistoryFilePath,        /* History file path */
    SSS_ULONG*      LineNumber              /* Line Number */
);

SDSD_MW_API
SSS_STS SSS_CreateUserKey(
    SSS_MID         MediaID,                /* Media ID */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_UKEY        UserKey                 /* User Key */
);
#endif

SDSD_MW_API
SSS_STS SSS_Open(
                    void
);

SDSD_MW_API
SSS_STS SSS_Close(
                    void
);

SDSD_MW_API
SSS_STS SSS_Encrypt(
    SSS_UCHAR*      Buffer,                 /* Buffer for data */
    SSS_ULONG       BufferLength,           /* Buffer length */
    SSS_UCHAR*      Key,                    /* Key */
    SSS_ULONG       KeyLength               /* Key length */
);

SDSD_MW_API
SSS_STS SSS_Decrypt(
    SSS_UCHAR*      Buffer,                 /* Buffer for data */
    SSS_ULONG       BufferLength,           /* Buffer length */
    SSS_UCHAR*      Key,                    /* Key */
    SSS_ULONG       KeyLength               /* Key length */
);

SDSD_MW_API
SSS_STS SSS_UpdateMediaStatus(
    SSS_STR*        RootPath,               /* Media path */
    SSS_ULONG       Status                  /* Media status */
);

SDSD_MW_API
SSS_STS SSS_GetMediaTimeStamp(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_TSF*        TimeStamp               /* Time Stamp */
);

SDSD_MW_API
SSS_STS SSS_ReadAvailableUserKey(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_UKID        UserKeyID               /* User Key ID */
);

SDSD_MW_API
SSS_STS SSS_WriteServiceInformation(
    SSS_STR* KeyRootPath, /* Media Path */
    SSS_SVCID ServiceID, /* Service ID */
    SSS_SVCNAME ServiceName, /* Service Name */
    SSS_PRVID ProviderID, /* Provider ID */
    SSS_PRVNAME ProviderName, /* Provider Name */
    SSS_LANG Language, /* Language */
    SSS_CHARCODE CharacterCode /* Character Code */
);

SDSD_MW_API
SSS_STS SSS_ReadServiceInformation(
    SSS_STR* KeyRootPath, /* Media Path */
    SSS_SVCID ServiceID, /* Service ID */
    SSS_SVCNAME ServiceName, /* Service Name */
    SSS_PRVID ProviderID, /* Provider ID */
    SSS_PRVNAME ProviderName, /* Provider Name */
    SSS_LANG Language, /* Language */
    SSS_CHARCODE CharacterCode /* Character Code */
);

SDSD_MW_API
SSS_STS SSS_ReadMediaID(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_MID         MediaID                 /* Media ID */
);

SDSD_MW_API
SSS_STS SSS_WriteUserKey(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_UKEY        UserKey,                /* User Key */
    SSS_UR_U        UsageRule               /* UR_U data */
);

SDSD_MW_API
SSS_STS SSS_GenerateContentKeyInformation(
    SSS_UKEY        UserKey,                /* User Key */
    SSS_CKD         ContentKeyData,         /* Content Key Data */
    SSS_CKEY        ContentKey,             /* Content Key */
    SSS_UR_C        UsageRule,              /* Usage Rule for Content */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
);

SDSD_MW_API
SSS_STS SSS_GenerateContentKeyInformationFromUKID(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_CKD         ContentKeyData,         /* Content Key Data */
    SSS_CKEY        ContentKey,             /* Content Key */
    SSS_UR_C        UsageRule,              /* Usage Rule for Content */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
);

SDSD_MW_API
SSS_STS SSS_WriteContent(
    SSS_STR*        ContentRootPath,        /* Media Path(Content) */
    SSS_STR*        Content                 /* Content file path */
);

SSS_STS SSS_WriteContentEx(
    SSS_STR*        ContentRootPath,        /* Media Path(Content) */
    SSS_STR*        Content,                /* Content file path */
    SSS_ULONG*      DirIndex,               /* Index of directory */
    SSS_ULONG*      PrgIndex,               /* Index of program */
    SSS_CF_WRITECEX Callback                /* Function of callback */
);

SDSD_MW_API
SSS_STS SSS_WriteContentKey(
    SSS_STR*        KeyRootPath,            /* Media Path(Key) */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
);

SDSD_MW_API
SSS_STS SSS_FormatUserArea(
    SSS_STR*        ContentRootPath         /* Media Path(Content) */
);

SDSD_MW_API
SSS_STS SSS_FormatProtectedArea(
    SSS_STR*        KeyRootPath             /* Media Path(Key) */
);

SDSD_MW_API
SSS_STS SSS_GetDirNum(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG*      DirectoryNum,           /* Number of Contents */
    SSS_UDR_TBL     UsedDirTable            /* Number of Contents */
);

SDSD_MW_API
SSS_STS SSS_GetContentsNum(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG       DirIndex,               /* Index of Directory */
    SSS_ULONG*      ContentsNum,            /* Number of Contents */
    SSS_PFL_USED    UsedContentsTable       /* Table of Contents flag */
);

SDSD_MW_API
SSS_STS SSS_GetContentHandle(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG       DirIndex,               /* Index of Directory */
    SSS_ULONG       ContentIndex,           /* Index of Contents */
    SSS_CHNDL       ContentHandles          /* Content Handle */
);

SDSD_MW_API
SSS_STS SSS_ReadContentInformation(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_PRGI_TBL    ContentInformation      /* Content Information */
);

SDSD_MW_API
SSS_STS SSS_ContentKeyFindFirst(
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
);

SDSD_MW_API
SSS_STS SSS_ContentKeyFindNext(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
);

SDSD_MW_API
SSS_STS SSS_ReadContentKeyInformation(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_CKD         ContentKeyData,         /* Content Key Information */
    SSS_UR_C        UsageRule               /* Usage Rule */
);

SDSD_MW_API
SSS_STS SSS_DeleteContent(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
);

SDSD_MW_API
SSS_STS SSS_CopyContent(
    SSS_STR*        SrcContentRootPath,     /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        SrcKeyRootPath,         /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_STR*        DstContentsRootPath,    /* Media Path */
    SSS_STR*        DstKeyRootPath          /* Media Path */
);

SDSD_MW_API
SSS_STS SSS_MoveContent(
    SSS_STR*        SrcContentRootPath,     /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        SrcKeyRootPath,         /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_STR*        DstContentsRootPath,    /* Media Path */
    SSS_STR*        DstKeyRootPath          /* Media Path */
);

SDSD_MW_API
SSS_STS SSS_OpenStream(
    SSS_STR*        ContentRottPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_SHNDL       StreamHandle            /* Stream Handle */
);

SDSD_MW_API
SSS_STS SSS_CloseStream(
    SSS_SHNDL       StreamHandle            /* Stream Handle */
);

SDSD_MW_API
SSS_STS SSS_StartStream(
    SSS_SHNDL       StreamHandle            /* Stream Handle */
);

SDSD_MW_API
SSS_STS SSS_ReadStream(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_ULONG       ReqSize,                /* Request Size */
    SSS_UCHAR*      Buffer,                 /* Data Buffer */
    SSS_ULONG*      ResSize,                /* Response Size */
    SSS_ULONG*      CurrentTime,            /* Current Time */
    SSS_PLAYINFO    PlayInfo                /* Playback Information */
);

SDSD_MW_API
SSS_STS SSS_SeekStream(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONG        OffsetTime,             /* Offset Time */
    SSS_ULONG       Origin                  /* Origin */
);

SDSD_MW_API
SSS_STS SSS_SeekStream2(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONG        OffsetTime,             /* Offset Time */
    SSS_ULONG       Origin,                 /* Origin */
    SSS_ULONG*      pes,                /* Playback Information */
    SSS_ULONG*      res                /* Playback Information */
);

#define SSS_SeekStreamEx    SSS_SeekStream2

SDSD_MW_API
SSS_STS SSS_SeekStreamFromBytes(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONGLONG    Offset,
    SSS_LONG        Whence,
    SSS_LONGLONG*   Position                /* Current Position */
);

#ifdef __cplusplus
}
#endif

#endif /* __SDSD_MW_H__ */
