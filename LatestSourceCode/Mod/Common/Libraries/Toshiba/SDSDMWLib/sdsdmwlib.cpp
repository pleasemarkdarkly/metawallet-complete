// SDSDMWLib.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "SDSDMWLib.h"


#ifdef _MANAGED
#pragma managed(push, off)
#endif

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

//// This is an example of an exported variable
//SDSDMWLIB_API int nSDSDMWLib=0;
//
//// This is an example of an exported function.
//SDSDMWLIB_API int fnSDSDMWLib(void)
//{
//	return 42;
//}
//
//// This is the constructor of a class that has been exported.
//// see SDSDMWLib.h for the class definition
//CSDSDMWLib::CSDSDMWLib()
//{
//	return;
//}

//// Test Wrapper
//SDSDMWLIB_API SSS_STS SDSDMW_Open(void)
//{
//	return SSS_Open();
//}




// Error Values
SDSDMWLIB_API SSS_STS SDSDMW_STS_SUCCESS = SSS_STS_SUCCESS;


/////////

/* Declaration of Prototype Function */
/* Functions for Server */
#ifdef __SSS_WINDOWS__
SDSDMWLIB_API
SSS_STS SDSDMW_RequestContentKey(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_UCHAR       ContentType,            /* Content Type */
    SSS_CID         ContentID,              /* Content ID */
    SSS_CKEY        ContentKey              /* Content Key */
)
{
	return SSS_RequestContentKey(URL, ServiceID, ContentType, ContentID, ContentKey);
}

SDSDMWLIB_API
SSS_STS SDSDMW_RegisterUserKeys(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_STR*        HistoryFilePath,        /* History file path */
    SSS_ULONG*      LineNumber              /* Line Number */
)
{
	return SSS_RegisterUserKeys(URL, ServiceID, HistoryFilePath, LineNumber);
}

SDSDMWLIB_API
SSS_STS SDSDMW_RegisterEncryptedContentKeys(
    SSS_STR*        URL,                    /* URL of the Key Server */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_STR*        HistoryFilePath,        /* History file path */
    SSS_ULONG*      LineNumber              /* Line Number */
)
{
	return SSS_RegisterEncryptedContentKeys(URL, ServiceID, HistoryFilePath, LineNumber);
}

SDSDMWLIB_API
SSS_STS SDSDMW_CreateUserKey(
    SSS_MID         MediaID,                /* Media ID */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_UKEY        UserKey                 /* User Key */
)
{
	return SSS_CreateUserKey(MediaID, UserKeyID, UserKey);
}
#endif

SDSDMWLIB_API
SSS_STS SDSDMW_Open(
                    void
)
{
	return SSS_Open();
}

SDSDMWLIB_API
SSS_STS SDSDMW_Close(
                    void
)
{
	return SSS_Close();
}

SDSDMWLIB_API
SSS_STS SDSDMW_Encrypt(
    SSS_UCHAR*      Buffer,                 /* Buffer for data */
    SSS_ULONG       BufferLength,           /* Buffer length */
    SSS_UCHAR*      Key,                    /* Key */
    SSS_ULONG       KeyLength               /* Key length */
)
{
	return SSS_Encrypt(Buffer, BufferLength, Key, KeyLength);
}

SDSDMWLIB_API
SSS_STS SDSDMW_Decrypt(
    SSS_UCHAR*      Buffer,                 /* Buffer for data */
    SSS_ULONG       BufferLength,           /* Buffer length */
    SSS_UCHAR*      Key,                    /* Key */
    SSS_ULONG       KeyLength               /* Key length */
)
{
	return SSS_Decrypt(Buffer, BufferLength, Key, KeyLength);
}

SDSDMWLIB_API
SSS_STS SDSDMW_UpdateMediaStatus(
    SSS_STR*        RootPath,               /* Media path */
    SSS_ULONG       Status                  /* Media status */
)
{
	return SSS_UpdateMediaStatus(RootPath, Status);
}

SDSDMWLIB_API
SSS_STS SDSDMW_GetMediaTimeStamp(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_TSF*        TimeStamp               /* Time Stamp */
)
{
	return SSS_GetMediaTimeStamp(KeyRootPath, TimeStamp);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ReadAvailableUserKey(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_SVCID       ServiceID,              /* Service ID */
    SSS_UKID        UserKeyID               /* User Key ID */
)
{
	return SSS_ReadAvailableUserKey(KeyRootPath, ServiceID, UserKeyID);
}

SDSDMWLIB_API
SSS_STS SDSDMW_WriteServiceInformation(
    SSS_STR* KeyRootPath, /* Media Path */
    SSS_SVCID ServiceID, /* Service ID */
    SSS_SVCNAME ServiceName, /* Service Name */
    SSS_PRVID ProviderID, /* Provider ID */
    SSS_PRVNAME ProviderName, /* Provider Name */
    SSS_LANG Language, /* Language */
    SSS_CHARCODE CharacterCode /* Character Code */
)
{
	return SSS_WriteServiceInformation(KeyRootPath, ServiceID, ServiceName, ProviderID, ProviderName, Language, CharacterCode);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ReadServiceInformation(
    SSS_STR* KeyRootPath, /* Media Path */
    SSS_SVCID ServiceID, /* Service ID */
    SSS_SVCNAME ServiceName, /* Service Name */
    SSS_PRVID ProviderID, /* Provider ID */
    SSS_PRVNAME ProviderName, /* Provider Name */
    SSS_LANG Language, /* Language */
    SSS_CHARCODE CharacterCode /* Character Code */
)
{
	return SSS_ReadServiceInformation(KeyRootPath, ServiceID, ServiceName, ProviderID, ProviderName, Language, CharacterCode);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ReadMediaID(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_MID         MediaID                 /* Media ID */
)
{
	return SSS_ReadMediaID(KeyRootPath, MediaID);
}

SDSDMWLIB_API
SSS_STS SDSDMW_WriteUserKey(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_UKEY        UserKey,                /* User Key */
    SSS_UR_U        UsageRule               /* UR_U data */
)
{
	return SSS_WriteUserKey(KeyRootPath, UserKeyID, UserKey, UsageRule);
}

SDSDMWLIB_API
SSS_STS SDSDMW_GenerateContentKeyInformation(
    SSS_UKEY        UserKey,                /* User Key */
    SSS_CKD         ContentKeyData,         /* Content Key Data */
    SSS_CKEY        ContentKey,             /* Content Key */
    SSS_UR_C        UsageRule,              /* Usage Rule for Content */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
)
{
	return SSS_GenerateContentKeyInformation(UserKey, ContentKeyData, ContentKey, UsageRule, ContentKeyInformation);
}

SDSDMWLIB_API
SSS_STS SDSDMW_GenerateContentKeyInformationFromUKID(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_CKD         ContentKeyData,         /* Content Key Data */
    SSS_CKEY        ContentKey,             /* Content Key */
    SSS_UR_C        UsageRule,              /* Usage Rule for Content */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
)
{
	return SSS_GenerateContentKeyInformationFromUKID(KeyRootPath, UserKeyID, ContentKeyData, ContentKey, UsageRule, ContentKeyInformation);
}

SDSDMWLIB_API
SSS_STS SDSDMW_WriteContent(
    SSS_STR*        ContentRootPath,        /* Media Path(Content) */
    SSS_STR*        Content                 /* Content file path */
)
{
	return SSS_WriteContent(ContentRootPath, Content);
}

SDSDMWLIB_API
SSS_STS SDSDMW_WriteContentEx(
    SSS_STR*        ContentRootPath,        /* Media Path(Content) */
    SSS_STR*        Content,                /* Content file path */
    SSS_ULONG*      DirIndex,               /* Index of directory */
    SSS_ULONG*      PrgIndex,               /* Index of program */
    SSS_CF_WRITECEX Callback                /* Function of callback */
)
{
	return SSS_WriteContentEx(ContentRootPath, Content, DirIndex, PrgIndex, Callback);
}

SDSDMWLIB_API
SSS_STS SDSDMW_WriteContentKey(
    SSS_STR*        KeyRootPath,            /* Media Path(Key) */
    SSS_UKID        UserKeyID,              /* User Key ID */
    SSS_CKI         ContentKeyInformation   /* Content Key Information */
)
{
	return SSS_WriteContentKey(KeyRootPath, UserKeyID, ContentKeyInformation);
}

SDSDMWLIB_API
SSS_STS SDSDMW_FormatUserArea(
    SSS_STR*        ContentRootPath         /* Media Path(Content) */
)
{
	return SSS_FormatUserArea(ContentRootPath);
}

SDSDMWLIB_API
SSS_STS SDSDMW_FormatProtectedArea(
    SSS_STR*        KeyRootPath             /* Media Path(Key) */
)
{
	return SSS_FormatProtectedArea(KeyRootPath);
}

SDSDMWLIB_API
SSS_STS SDSDMW_GetDirNum(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG*      DirectoryNum,           /* Number of Contents */
    SSS_UDR_TBL     UsedDirTable            /* Number of Contents */
)
{
	return SSS_GetDirNum(ContentRootPath, DirectoryNum, UsedDirTable);
}

SDSDMWLIB_API
SSS_STS SDSDMW_GetContentsNum(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG       DirIndex,               /* Index of Directory */
    SSS_ULONG*      ContentsNum,            /* Number of Contents */
    SSS_PFL_USED    UsedContentsTable       /* Table of Contents flag */
)
{
	return SSS_GetContentsNum(ContentRootPath, DirIndex, ContentsNum, UsedContentsTable);
}

SDSDMWLIB_API
SSS_STS SDSDMW_GetContentHandle(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_ULONG       DirIndex,               /* Index of Directory */
    SSS_ULONG       ContentIndex,           /* Index of Contents */
    SSS_CHNDL       ContentHandles          /* Content Handle */
)
{
	return SSS_GetContentHandle(ContentRootPath, DirIndex, ContentIndex, ContentHandles);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ReadContentInformation(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_PRGI_TBL    ContentInformation      /* Content Information */
)
{
	return SSS_ReadContentInformation(ContentRootPath, ContentHandle, ContentInformation);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ContentKeyFindFirst(
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
)
{
	return SSS_ContentKeyFindFirst(ContentHandle, KeyRootPath, ContentKeyHandle);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ContentKeyFindNext(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
)
{
	return SSS_ContentKeyFindNext(KeyRootPath, ContentKeyHandle);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ReadContentKeyInformation(
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_CKD         ContentKeyData,         /* Content Key Information */
    SSS_UR_C        UsageRule               /* Usage Rule */
)
{
	return SSS_ReadContentKeyInformation(KeyRootPath, ContentKeyHandle, ContentKeyData, UsageRule);
}

SDSDMWLIB_API
SSS_STS SDSDMW_DeleteContent(
    SSS_STR*        ContentRootPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle        /* Content Key Handle */
)
{
	return SSS_DeleteContent(ContentRootPath, ContentHandle, KeyRootPath, ContentKeyHandle);
}

SDSDMWLIB_API
SSS_STS SDSDMW_CopyContent(
    SSS_STR*        SrcContentRootPath,     /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        SrcKeyRootPath,         /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_STR*        DstContentsRootPath,    /* Media Path */
    SSS_STR*        DstKeyRootPath          /* Media Path */
)
{
	return SSS_CopyContent(SrcContentRootPath, ContentHandle, SrcKeyRootPath, ContentKeyHandle, DstContentsRootPath, DstKeyRootPath);
}

SDSDMWLIB_API
SSS_STS SDSDMW_MoveContent(
    SSS_STR*        SrcContentRootPath,     /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        SrcKeyRootPath,         /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_STR*        DstContentsRootPath,    /* Media Path */
    SSS_STR*        DstKeyRootPath          /* Media Path */
)
{
	return SSS_MoveContent(SrcContentRootPath, ContentHandle, SrcKeyRootPath, ContentKeyHandle, DstContentsRootPath, DstKeyRootPath);
}

SDSDMWLIB_API
SSS_STS SDSDMW_OpenStream(
    SSS_STR*        ContentRottPath,        /* Media Path */
    SSS_CHNDL       ContentHandle,          /* Content Handle */
    SSS_STR*        KeyRootPath,            /* Media Path */
    SSS_CKHNDL      ContentKeyHandle,       /* Content Key Handle */
    SSS_SHNDL       StreamHandle            /* Stream Handle */
)
{
	return SSS_OpenStream(ContentRottPath, ContentHandle, KeyRootPath, ContentKeyHandle, StreamHandle);
}

SDSDMWLIB_API
SSS_STS SDSDMW_CloseStream(
    SSS_SHNDL       StreamHandle            /* Stream Handle */
)
{
	return SSS_CloseStream(StreamHandle);
}

SDSDMWLIB_API
SSS_STS SDSDMW_StartStream(
    SSS_SHNDL       StreamHandle            /* Stream Handle */
)
{
	return SSS_StartStream(StreamHandle);
}

SDSDMWLIB_API
SSS_STS SDSDMW_ReadStream(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_ULONG       ReqSize,                /* Request Size */
    SSS_UCHAR*      Buffer,                 /* Data Buffer */
    SSS_ULONG*      ResSize,                /* Response Size */
    SSS_ULONG*      CurrentTime,            /* Current Time */
    SSS_PLAYINFO    PlayInfo                /* Playback Information */
)
{
	return SSS_ReadStream(StreamHandle, ReqSize, Buffer, ResSize, CurrentTime, PlayInfo);
}

SDSDMWLIB_API
SSS_STS SDSDMW_SeekStream(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONG        OffsetTime,             /* Offset Time */
    SSS_ULONG       Origin                  /* Origin */
)
{
	return SSS_SeekStream(StreamHandle, OffsetTime, Origin);
}

SDSDMWLIB_API
SSS_STS SDSDMW_SeekStreamEx(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONG        OffsetTime,             /* Offset Time */
    SSS_ULONG       Origin,                 /* Origin */
    SSS_ULONG*      pes,                    /* Playback Information */
    SSS_ULONG*      res                     /* Playback Information */
)
{
	return SSS_SeekStreamEx(StreamHandle, OffsetTime, Origin, pes, res);
}

SDSDMWLIB_API
SSS_STS SDSDMW_SeekStreamFromBytes(
    SSS_SHNDL       StreamHandle,           /* Stream Handle */
    SSS_LONGLONG    Offset,
    SSS_LONG        Whence,
    SSS_LONGLONG*   Position                /* Current Position */
)
{
	return SSS_SeekStreamFromBytes(StreamHandle, Offset, Whence, Position);
}