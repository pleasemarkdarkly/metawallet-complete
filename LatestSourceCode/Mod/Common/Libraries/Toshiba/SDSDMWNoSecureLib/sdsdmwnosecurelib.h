// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SDSDMWLIB_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SDSDMWLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SDSDMWLIB_EXPORTS
#define SDSDMWLIB_API extern "C" __declspec(dllexport)
#else
#define SDSDMWLIB_API extern "C" __declspec(dllimport)
#endif
//
//// This class is exported from the SDSDMWLib.dll
//class SDSDMWLIB_API CSDSDMWLib {
//public:
//	CSDSDMWLib(void);
//	// TODO: add your methods here.
//};
//
//SDSDMWLIB_API int nSDSDMWLib;
//
//SDSDMWLIB_API int fnSDSDMWLib(void);


/* Declaration of Prototype Function */
/* Functions for Server */
#ifdef __SSS_WINDOWS__
SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_RequestContentKey(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_UCHAR       ContentType,            /* Content Type */
    SSS_CID         ContentID,              /* Content ID */
    SSS_CKEY        ContentKey              /* Content Key */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_RegisterUserKeys(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_STR*        HistoryFilePath,        /* History file path */
    SSS_ULONG*      LineNumber              /* Line Number */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_RegisterEncryptedContentKeys(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_STR*        HistoryFilePath,        /* History file path */
    SSS_ULONG*      LineNumber              /* Line Number */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_CreateUserKey(
    SSS_MID         MediaID,                /* Media ID */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_UKEY        UserKey                 /* User Key */
);
#endif

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_Open(
                    void
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_Close(
                    void
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_Encrypt(
    SSS_UCHAR*      Buffer,                 /* Buffer for data */
    SSS_ULONG       BufferLength,           /* Buffer length */
    SSS_UCHAR*      Key,                    /* Key */
    SSS_ULONG       KeyLength               /* Key length */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_Decrypt(
    SSS_UCHAR*      Buffer,                 /* Buffer for data */
    SSS_ULONG       BufferLength,           /* Buffer length */
    SSS_UCHAR*      Key,                    /* Key */
    SSS_ULONG       KeyLength               /* Key length */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_UpdateMediaStatus(
    SSS_STR*        RootPath,               /* Media path */
    SSS_ULONG       Status                  /* Media status */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ReadAvailableUserKey(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_UKID        UserKeyID               /* User Key ID */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_WriteServiceInformation(
    SSS_STR* KeyRootPath, /* Media Path */
    SSS_SVCID ServiceID, /* Service ID */
    SSS_SVCNAME ServiceName, /* Service Name */
    SSS_PRVID ProviderID, /* Provider ID */
    SSS_PRVNAME ProviderName, /* Provider Name */
    SSS_LANG Language, /* Language */
    SSS_CHARCODE CharacterCode /* Character Code */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ReadServiceInformation(
    SSS_STR* KeyRootPath, /* Media Path */
    SSS_SVCID ServiceID, /* Service ID */
    SSS_SVCNAME ServiceName, /* Service Name */
    SSS_PRVID ProviderID, /* Provider ID */
    SSS_PRVNAME ProviderName, /* Provider Name */
    SSS_LANG Language, /* Language */
    SSS_CHARCODE CharacterCode /* Character Code */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ReadMediaID(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_MID         MediaID                 /* Media ID */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_WriteUserKey(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_UKEY        UserKey,                /* User Key */
    SSS_UR_U        UsageRule               /* UR_U data */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_GenerateContentKeyInformation(
    SSS_UKEY        UserKey,                /* User Key */
    SSS_CKD         ContentKeyData,         /* Content Key Data */
    SSS_CKEY        ContentKey,             /* Content Key */
    SSS_UR_C        UsageRule,              /* Usage Rule for Content */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_GenerateContentKeyInformationFromUKID(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_CKD         ContentKeyData,         /* Content Key Data */
    SSS_CKEY        ContentKey,             /* Content Key */
    SSS_UR_C        UsageRule,              /* Usage Rule for Content */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_WriteContent(
    SSS_STR*        ContentRootPath,        /* Media Path(Content) */
    SSS_STR*        Content                 /* Content file path */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_WriteContentKey(
    SSS_STR*        KeyRootPath,            /* Media Path(Key) */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_FormatUserArea(
    SSS_STR*        ContentRootPath         /* Media Path(Content) */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_FormatProtectedArea(
    SSS_STR*        KeyRootPath             /* Media Path(Key) */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_GetDirNum(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG*      DirectoryNum,           /* Number of Contents */
    SSS_UDR_TBL     UsedDirTable            /* Number of Contents */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_GetContentsNum(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG       DirIndex,               /* Index of Directory */
    SSS_ULONG*      ContentsNum,            /* Number of Contents */
    SSS_PFL_USED    UsedContentsTable       /* Table of Contents flag */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_GetContentHandle(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG       DirIndex,               /* Index of Directory */
    SSS_ULONG       ContentIndex,           /* Index of Contents */
    SSS_CHNDL       ContentHandles          /* Content Handle */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ReadContentInformation(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_PRGI_TBL    ContentInformation      /* Content Information */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ContentKeyFindFirst(
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ContentKeyFindNext(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ReadContentKeyInformation(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_CKD         ContentKeyData,         /* Content Key Information */
    SSS_UR_C        UsageRule               /* Usage Rule */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_DeleteContent(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_CopyContent(
    SSS_STR*        SrcContentRootPath,     /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        SrcKeyRootPath,         /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_STR*        DstContentsRootPath,    /* Media Path */
    SSS_STR*        DstKeyRootPath          /* Media Path */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_MoveContent(
    SSS_STR*        SrcContentRootPath,     /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        SrcKeyRootPath,         /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_STR*        DstContentsRootPath,    /* Media Path */
    SSS_STR*        DstKeyRootPath          /* Media Path */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_OpenStream(
    SSS_STR*        ContentRottPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_SHNDL       StreamHandle            /* Stream Handle */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_CloseStream(
    SSS_SHNDL       StreamHandle            /* Stream Handle */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_StartStream(
    SSS_SHNDL       StreamHandle            /* Stream Handle */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_ReadStream(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_ULONG       ReqSize,                /* Request Size */
    SSS_UCHAR*      Buffer,                 /* Data Buffer */
    SSS_ULONG*      ResSize,                /* Response Size */
    SSS_ULONG*      CurrentTime,            /* Current Time */
    SSS_PLAYINFO    PlayInfo                /* Playback Information */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_SeekStream(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONG        OffsetTime,             /* Offset Time */
    SSS_ULONG       Origin                  /* Origin */
);

SDSDMWLIB_API
SSS_STS SDSDMWNoSecure_SeekStreamFromBytes(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONGLONG    Offset,
    SSS_LONG        Whence,
    SSS_LONGLONG*   Position                /* Current Position */
);