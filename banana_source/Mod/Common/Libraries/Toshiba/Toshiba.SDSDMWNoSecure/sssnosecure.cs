using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;

namespace Toshiba.SDSDMW
{
    public partial class SSS
    {
        /// <summary>
        /// A callback function used with the WriteContentEx function.
        /// </summary>
        /// <param name="Percent">[out] The percentage of progress.</param>
        /// <param name="Status">[out] Status of progress. Uses the SSS_WRITECEX enumeration.</param>
        /// <returns>It is not used now. Return only 0.</returns>
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate uint WriteContentExProgressCallback(uint Percent, uint Status);

        /// <summary>
        /// SDSD_MW is initialized. In order to use SDSD_MW, this function needs to be called first.
        /// SDSD_MW cannot be opened doubly. In that case, call this function after closing SDSD_MW.
        /// </summary>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>SDSD_MW cannot be opened doubly. In that case, call this function after closing SDSD_MW.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_Open")]
        public static extern uint Open();

        /// <summary>
        /// SDSD_MW is finalized.
        /// </summary>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks></remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_Close")]
        public static extern uint Close();

        /// <summary>
        /// Encrypt a buffer with key.
        /// </summary>
        /// <param name="Buffer">[in/out] Buffer for raw/encrypted data</param>
        /// <param name="BufferLength">[in] Data length (8 byte boundaries)</param>
        /// <param name="Key">[in] Buffer for key</param>
        /// <param name="KeyLength">[in] Key length (It fixes to 7)</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Overwrite a buffer with encrypted data. Encryption algorithm is the C2 cipher algorithm in C-CBC mode.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_Encrypt")]
        public static extern uint Encrypt(byte[] Buffer, uint BufferLength, byte[] Key, uint KeyLength);

        /// <summary>
        /// Decrypt a buffer with key.
        /// </summary>
        /// <param name="Buffer">[in/out] Buffer for encrypted/decrypted data</param>
        /// <param name="BufferLength">[in] Data length (8 byte boundaries)</param>
        /// <param name="Key">[in] Buffer for key</param>
        /// <param name="KeyLength">[in] Key length (It fixes to 7)</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Overwrite a buffer with decrypted data. Decryption algorithm is the C2 cipher algorithm in C-CBC mode.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_Decrypt")]
        public static extern uint Decrypt(byte[] Buffer, uint BufferLength, byte[] Key, uint KeyLength);

        /// <summary>
        /// Call this API, when the status of media (SD Card) changes. When this API is called, the cache data in SDSD_MW is cleared.
        /// </summary>
        /// <param name="RootPath">[in] Path of media (SD Card).</param>
        /// <param name="Status">[in] The status of media (SD Card). SSS_MEDIA_INSERT : When SD card is inserted. SSS_MEDIA_REMOVE : When SD card is removed</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_UpdateMediaStatus")]
        public static extern uint UpdateMediaStatus(string RootPath, uint Status);

        /// <summary>
        /// The time stamp of an SD card is acquired. The date and time are selected from time stamp files in the newest time.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of media (SD Card)</param>
        /// <param name="TimeStamp">[in] The Time Stamp of media (SD Card)</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GetMediaTimeStamp")]
        public static extern uint GetMediaTimeStamp(string KeyRootPath, byte[] TimeStamp);

#if __SSS_WINDOWS__
        /* Functions for Server */

        /// <summary>
        /// Request a new pair of Content Key and Content ID to the Key Server.
        /// </summary>
        /// <param name="URL">[in] URL of the Key Server.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID of the requesting content key.</param>
        /// <param name="ContentType">[in] Content Type of the requesting content key. 10h: Audio Content. 20h: Video Content.</param>
        /// <param name="ContentID">[out] [16 bytes] Content ID created by the Key Server.</param>
        /// <param name="ContentKey">[out] [7 bytes] Content Key created by the Key Server.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_RequestContentKey")]
        public static extern uint RequestContentKey(string URL, byte[] ServiceID, byte ContentType, byte[] ContentID, byte[] ContentKey);

        /// <summary>
        /// Request a new pair of Content Key and Content ID to the Key Server.
        /// </summary>
        /// <param name="URL">[in] URL of the Key Server.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID of the requesting content key.</param>
        /// <param name="ContentType">[in] Content Type of the requesting content key. 10h: Audio Content. 20h: Video Content.</param>
        /// <param name="ContentID">[out] [16 bytes] Content ID created by the Key Server.</param>
        /// <param name="ContentKey">[out] [7 bytes] Content Key created by the Key Server.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_RequestContentKey")]
        public static extern uint RequestContentKey(string URL, byte[] ServiceID, byte ContentType, ref SSS_CID ContentID, byte[] ContentKey);

        /// <summary>
        /// Report the history of issued User Keys to the Key Server.
        /// </summary>
        /// <param name="URL">[in] URL of the Key Server.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID of the user keys to be registered.</param>
        /// <param name="HistoryFilePath">[in] Path of the file which includes the history of the User Keys issued.</param>
        /// <param name="LineNumber">[out] Line number of the history file on which an error happened.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>
        /// The history file has to be the CSV format. Each line consists of the following items devided by “,”. White spaces can’t be inserted around the “,”.
        /// Media ID,User Key ID,User Key,Created Date
        /// Media ID: 16 hex chars
        /// User Key ID: 16 hex chars
        /// User Key: 14 hex chars
        /// Created Date: string format of “YYYY/MM/DD hh:mm:ss.sss”
        /// e.g.)
        /// 0000000000000002,5555550000000001,0123456789abcd,2008/06/13 19:10:11.234
        /// When this function returned an error, LineNumber parameter shows the line on which the error happened. And the remaining lines below the error line are not processed.
        /// </remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_RegisterUserKeys")]
        public static extern uint RegisterUserKeys(string URL, byte[] ServiceID, string HistoryFilePath, ref uint LineNumber);

        /// <summary>
        /// Report the history of issued Encrypted Content Keys to the Key Server.
        /// </summary>
        /// <param name="URL">[in] URL of the Key Server.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID of the encrypted content keys to be registered.</param>
        /// <param name="HistoryFilePath">[in] Path of the file which includes the history of the Encrypted Content Keys issued.</param>
        /// <param name="LineNumber">[out] Line number of the history file on which the error happened.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>
        /// The history file has to be the CSV format. Each line consists of the following items devided by “,”. White spaces can’t be inserted around the “,”.
        /// User Key ID,Content Key ID,Usage Rule,Created Date
        /// User Key ID: 16 hex chars
        /// Content Key ID: 32 hex chars
        /// Usage Rule: 112 hex chars
        /// Created Date: string format of “YYYY/MM/DD hh:mm:ss.sss”
        /// e.g.)
        /// 5555550000000001,55555520000000000000000000010000,111111111111111122222222222222223333333333333333444444444444444455555555555555566666666666666667777777777777777,2008/06/13 19:10:11.234
        /// When this function returned an error, LineNumber parameter shows the line on which the error happened. And the remaining lines below the error line are not processed.
        /// </remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_RegisterEncryptedContentKeys")]
        public static extern uint RegisterEncryptedContentKeys(string URL, byte[] ServiceID, string HistoryFilePath, ref uint LineNumber);

        /// <summary>
        /// Create a new User Key.
        /// </summary>
        /// <param name="MediaID">[in] [8 bytes] Media ID.</param>
        /// <param name="UserKeyID">[in] [8 bytes] User Key ID.</param>
        /// <param name="UserKey">[out] [7 bytes] User Key created.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_CreateUserKey")]
        public static extern uint CreateUserKey(byte[] MediaID, byte[] UserKeyID, byte[] UserKey);

        /// <summary>
        /// Create a new User Key.
        /// </summary>
        /// <param name="MediaID">[in] [8 bytes] Media ID.</param>
        /// <param name="UserKeyID">[in] [8 bytes] User Key ID.</param>
        /// <param name="UserKey">[out] [7 bytes] User Key created.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_CreateUserKey")]
        public static extern uint CreateUserKey(byte[] MediaID, ref SSS_UKID UserKeyID, byte[] UserKey);

#endif

        /// <summary>
        /// Read available User Key from SD card.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of media with which the User Key is written.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID.</param>
        /// <param name="UserKeyID">[out] [8 bytes] User Key ID</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadAvailableUserKey")]
        public static extern uint ReadAvailableUserKey(string KeyRootPath, byte[] ServiceID, byte[] UserKeyID);

        /// <summary>
        /// Read available User Key from SD card.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of media with which the User Key is written.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID.</param>
        /// <param name="UserKeyID">[out] [8 bytes] User Key ID</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadAvailableUserKey")]
        public static extern uint ReadAvailableUserKey(string KeyRootPath, byte[] ServiceID, ref SSS_UKID UserKeyID);

        /// <summary>
        /// Write service information.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of media with which the User Key is written.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID.</param>
        /// <param name="ServiceName">[in] [256 bytes] Service name.</param>
        /// <param name="ProviderID">[in] [128 bytes] Provider ID.</param>
        /// <param name="ProviderName">[in] [256 bytes] Provider name ID.</param>
        /// <param name="Language">[in] [8 bytes] Language. RFC1766 format. (i.e. “en-us”)</param>
        /// <param name="CharacterCode">[in] [2 bytes] Character code of IANA.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>When the same service id is inputted, this function overwrites service information.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_WriteServiceInformation")]
        public static extern uint WriteServiceInformation(string KeyRootPath, byte[] ServiceID, byte[] ServiceName, byte[] ProviderID, byte[] ProviderName, byte[] Language, byte[] CharacterCode);

        /// <summary>
        /// Read service information.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of media with which the User Key is written.</param>
        /// <param name="ServiceID">[in] [128 bytes] Service ID.</param>
        /// <param name="ServiceName">[out] [256 bytes] Service name.</param>
        /// <param name="ProviderID">[out] [128 bytes] Provider ID.</param>
        /// <param name="ProviderName">[out] [256 bytes] Provider name ID.</param>
        /// <param name="Language">[out] [8 bytes] Language. RFC1766 format. (i.e. “en-us”)</param>
        /// <param name="CharacterCode">[out] [2 bytes] Character code of IANA.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadServiceInformation")]
        public static extern uint ReadServiceInformation(string KeyRootPath, byte[] ServiceID, byte[] ServiceName, byte[] ProviderID, byte[] ProviderName, byte[] Language, byte[] CharacterCode);

        /// <summary>
        /// Read Media ID from a SD card.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of media with which the User Key is written.</param>
        /// <param name="MediaID">[out] [8 bytes] Media ID.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadMediaID")]
        public static extern uint ReadMediaID(string KeyRootPath, byte[] MediaID);

        /// <summary>
        /// Write an encrypted user key into a media (SD card). Encryption of User Key is performed within this function.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of the media which write User Key.</param>
        /// <param name="UserKeyID">[in] [8 bytes] User Key ID</param>
        /// <param name="UserKey">[in] [7 bytes] User Key</param>
        /// <param name="UsageRule">[in] [56 bytes] Usage Rule for User Key</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_WriteUserKey")]
        public static extern uint WriteUserKey(string KeyRootPath, byte[] UserKeyID, byte[] UserKey, byte[] UsageRule);

        /// <summary>
        /// Write an encrypted user key into a media (SD card). Encryption of User Key is performed within this function.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of the media which write User Key.</param>
        /// <param name="UserKeyID">[in] [8 bytes] User Key ID</param>
        /// <param name="UserKey">[in] [7 bytes] User Key</param>
        /// <param name="UsageRule">[in] [56 bytes] Usage Rule for User Key</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_WriteUserKey")]
        public static extern uint WriteUserKey(string KeyRootPath, ref SSS_UKID UserKeyID, byte[] UserKey, ref SSS_UR_U UsageRule);

        /// <summary>
        /// Generate Content Key Information (CKI). Data of Content Key and an encrypted Content Key (ECKUR (Ku [Kc + UR_C] ) ) to CKI is generated.
        /// </summary>
        /// <param name="UserKey">[in] [8 bytes] User Key (not encrypted)</param>
        /// <param name="ContentKeyData">[in] [96 bytes] Content Key Data (CKD)</param>
        /// <param name="ContentKey">[in] [7 bytes] Content Key (not encrypted)</param>
        /// <param name="UsageRule">[in] [56 bytes] Usage Rule for content (not encrypted)</param>
        /// <param name="ContentKeyInformation">[out] [160 bytes] Content Key Information (CKI). CKI is ContentKeyData and ECKUR (Ku [Kc + UR_C] )</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GenerateContentKeyInformation")]
        public static extern uint GenerateContentKeyInformation(byte[] UserKey, byte[] ContentKeyData, byte[] ContentKey, byte[] UsageRule, byte[] ContentKeyInformation);

        /// <summary>
        /// Generate Content Key Information (CKI). Data of Content Key and an encrypted Content Key (ECKUR (Ku [Kc + UR_C] ) ) to CKI is generated.
        /// </summary>
        /// <param name="UserKey">[in] [8 bytes] User Key (not encrypted)</param>
        /// <param name="ContentKeyData">[in] [96 bytes] Content Key Data (CKD)</param>
        /// <param name="ContentKey">[in] [7 bytes] Content Key (not encrypted)</param>
        /// <param name="UsageRule">[in] [56 bytes] Usage Rule for content (not encrypted)</param>
        /// <param name="ContentKeyInformation">[out] [160 bytes] Content Key Information (CKI). CKI is ContentKeyData and ECKUR (Ku [Kc + UR_C] )</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GenerateContentKeyInformation")]
        public static extern uint GenerateContentKeyInformation(byte[] UserKey, ref SSS_CKD ContentKeyData, byte[] ContentKey, ref SSS_UR_C UsageRule, ref SSS_CKI ContentKeyInformation);

        /// <summary>
        /// Generate Content Key Information (CKI). Data of Content Key and an encrypted Content Key (ECKUR (Ku [Kc + UR_C])) to CKI is generated. Unless this function is in the state where the media to which the key was written can be read, it cannot be used.
        /// </summary>
        /// <param name="KeyRootPath">[in] The path of media with which User Key is written.</param>
        /// <param name="UserKeyID">[in] [7 bytes] User Key (not encrypted)</param>
        /// <param name="ContentKeyData">[in] [96 bytes] Content Key Data (CKD)</param>
        /// <param name="ContentKey">[in] [7 bytes] Content Key (not encrypted)</param>
        /// <param name="UsageRule">[in] [56 bytes] Usage Rule for content (not encrypted)</param>
        /// <param name="ContentKeyInformation">[out] [160 bytes] Content Key Information (CKI). CKI is ContentKeyData and ECKUR (Ku [Kc + UR_C] )</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GenerateContentKeyInformationFromUKID")]
        public static extern uint GenerateContentKeyInformationFromUKID(string KeyRootPath, byte[] UserKeyID, byte[] ContentKeyData, byte[] ContentKey, byte[] UsageRule, byte[] ContentKeyInformation);

        /// <summary>
        /// Generate Content Key Information (CKI). Data of Content Key and an encrypted Content Key (ECKUR (Ku [Kc + UR_C])) to CKI is generated. Unless this function is in the state where the media to which the key was written can be read, it cannot be used.
        /// </summary>
        /// <param name="KeyRootPath">[in] The path of media with which User Key is written.</param>
        /// <param name="UserKeyID">[in] [7 bytes] User Key (not encrypted)</param>
        /// <param name="ContentKeyData">[in] [96 bytes] Content Key Data (CKD)</param>
        /// <param name="ContentKey">[in] [7 bytes] Content Key (not encrypted)</param>
        /// <param name="UsageRule">[in] [56 bytes] Usage Rule for content (not encrypted)</param>
        /// <param name="ContentKeyInformation">[out] [160 bytes] Content Key Information (CKI). CKI is ContentKeyData and ECKUR (Ku [Kc + UR_C] )</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GenerateContentKeyInformationFromUKID")]
        public static extern uint GenerateContentKeyInformationFromUKID(string KeyRootPath, ref SSS_UKID UserKeyID, ref SSS_CKD ContentKeyData, byte[] ContentKey, ref SSS_UR_C UsageRule, ref SSS_CKI ContentKeyInformation);

        /// <summary>
        /// Write an encrypted content into a media (SD card).
        /// </summary>
        /// <param name="ContentRootPath">[in] Path of the media which write Content.</param>
        /// <param name="Content">[in] Path of Content (PVO) file.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Now, the file divided is not supported.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_WriteContent")]
        public static extern uint WriteContent(string ContentRootPath, string Content);

        /// <summary>
        /// Write an encrypted content into a media (SD card), and provide information on progress (via callback) and location of the file that was written.
        /// </summary>
        /// <param name="ContentRootPath">[in] Path of the media which write Content.</param>
        /// <param name="Content">[in] Path of Content (PVO) file.</param>
        /// <param name="DirIndex">[out] Index of directory.</param>
        /// <param name="ContentIndex">[out] Index of content (program).</param>
        /// <param name="Callback">[in] Delegate of callback function for progress. Can be null.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Now, the file divided is not supported.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_WriteContentEx")]
        public static extern uint WriteContentEx(string ContentRootPath, string Content, ref uint DirIndex, ref uint ContentIndex, WriteContentExProgressCallback Callback);

        /// <summary>
        /// Write an encrypted Content Key into a media (SD card).
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of the media which write Content Key.</param>
        /// <param name="UserKeyID">[in] [8 bytes] User Key ID (UKID)</param>
        /// <param name="ContentKeyInformation">[in] [96 bytes] Content Key Information (CKI). CKI is ContentKeyData and ECKUR (Ku [Kc + UR_C] )</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>The file divided now is not supported.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_WriteContentKey")]
        public static extern uint WriteContentKey(string KeyRootPath, byte[] UserKeyID, byte[] ContentKeyInformation);

        /// <summary>
        /// Write an encrypted Content Key into a media (SD card).
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of the media which write Content Key.</param>
        /// <param name="UserKeyID">[in] [8 bytes] User Key ID (UKID)</param>
        /// <param name="ContentKeyInformation">[in] [96 bytes] Content Key Information (CKI). CKI is ContentKeyData and ECKUR (Ku [Kc + UR_C] )</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>The file divided now is not supported.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_WriteContentKey")]
        public static extern uint WriteContentKey(string KeyRootPath, ref SSS_UKID UserKeyID, ref SSS_CKI ContentKeyInformation);

        /// <summary>
        /// User Data Area is initialized. The written data is deleted.
        /// </summary>
        /// <param name="ContentRootPath">[in] Path of the media which write Content.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_FormatUserArea")]
        public static extern uint FormatUserArea(string ContentRootPath);

        /// <summary>
        /// Protected Area is initialized. The written data is deleted.
        /// </summary>
        /// <param name="KeyRootPath">[in] Path of the media which write Content Key.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_FormatProtectedArea")]
        public static extern uint FormatProtectedArea(string KeyRootPath);

        /// <summary>
        /// Get the number of Content Management Directory (VIDEOhhh) in a SD card.
        /// </summary>
        /// <param name="ContentRootPath">[in] The path of media with which Contents are written.</param>
        /// <param name="DirectoryNum">[out] The number (1-4094) of Content Management Directory (VIDEO hhh)</param>
        /// <param name="UsedDirTable">[out] [512 bytes] Table which Content Management Directory is used or not. If #j flag of the table set to 1, the #j directory is exist. (i.e. If flag #j is 1, then VIDEO#j+1 directory is existing). 512 bytes, with the last two bits reserved.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GetDirNum")]
        public static extern uint GetDirNum(string ContentRootPath, ref uint DirectoryNum, byte[] UsedDirTable);

        /// <summary>
        /// Get the number of contents in Content Management Directory.
        /// </summary>
        /// <param name="ContentRootPath">[in] The path of media with which Contents are written.</param>
        /// <param name="DirIndex">[in] Index of Directory. DirIndex needs to input that whose DIR_U flag is 1.</param>
        /// <param name="ContentsNum">[out] The number (1-254) of Contents</param>
        /// <param name="UsedContentsTable">[out] [32 bytes] Table which Content Management Directory is used or not. If #k flag of the table set to 1, the #k content is exist. (i.e. If flag #k is 1, then PVO#k+1 file is existing). 32 bytes, with the last two bits reserved.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GetContentsNum")]
        public static extern uint GetContentsNum(string ContentRootPath, uint DirIndex, ref uint ContentsNum, byte[] UsedContentsTable);

        /// <summary>
        /// Get the handle of content from a SD card.
        /// </summary>
        /// <param name="ContentRootPath">[in] The path of media with which Contents are written.</param>
        /// <param name="DirIndex">[in] Index of Directory. DirIndex needs to input that whose DIR_U flag is 1.</param>
        /// <param name="ContentIndex">[in] Index of Content. ContentIndex needs to input that whose PFL_USED flag is 1.</param>
        /// <param name="ContentHandles">[out] Handle of content</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>In order to acquire a handle by package, it is necessary to secure the data area for a handle.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_GetContentHandle")]
        public static extern uint GetContentHandle(string ContentRootPath, uint DirIndex, uint ContentIndex, byte[] ContentHandles);

        /// <summary>
        /// Read content information of a content.
        /// </summary>
        /// <param name="ContentRootPath">[in] The path of media with which Contents are written.</param>
        /// <param name="ContentHandle">[in] The handle of content.</param>
        /// <param name="ContentInformation">[out] Content information (PRGI_TBL) data).</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadContentInformation")]
        public static extern uint ReadContentInformation(string ContentRootPath, byte[] ContentHandle, byte[] ContentInformation);

        /// <summary>
        /// Read content information of a content.
        /// </summary>
        /// <param name="ContentRootPath">[in] The path of media with which Contents are written.</param>
        /// <param name="ContentHandle">[in] The handle of content.</param>
        /// <param name="ContentInformation">[out] Content information (PRGI_TBL) data).</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadContentInformation")]
        public static extern uint ReadContentInformation(string ContentRootPath, byte[] ContentHandle, ref SSS_PRGI_TBL ContentInformation);

        /// <summary>
        /// The handle of the Content Key found first is acquired from the media.
        /// </summary>
        /// <param name="ContentHandle">[in] Handle of Content.</param>
        /// <param name="KeyRootPath">[in] The path of media with which Content Keys are written.</param>
        /// <param name="ContentKeyHandle">[out] [32 bytes] Handle of Content Key.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ContentKeyFindFirst")]
        public static extern uint ContentKeyFindFirst(byte[] ContentHandle, string KeyRootPath, byte[] ContentKeyHandle);

        /// <summary>
        /// The handle of the Content Key found from the specified media is acquired.
        /// </summary>
        /// <param name="KeyRootPath">[in] The path of media with which Content Keys are written.</param>
        /// <param name="ContentKeyHandle">[in/out] [32 bytes] Handle of Content Key. Input the handle acquired last time by SSS_FindContentKeyFirst and SSS_FindContentKeyNext.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ContentKeyFindNext")]
        public static extern uint ContentKeyFindNext(string KeyRootPath, byte[] ContentKeyHandle);

        /// <summary>
        /// The information on contents keys, such as Usage Rule (UR_C), is acquired.
        /// </summary>
        /// <param name="KeyRootPath">[in] The path of media with which Content Keys are written.</param>
        /// <param name="ContentKeyHandle">[in] [32 bytes] Handle of Content Key.</param>
        /// <param name="ContentKeyData">[out] [96 bytes] Information of Content Key (CKD data).</param>
        /// <param name="UsageRule">[out] [56 bytes] Usage Rule for Content Key (UR_C data).</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadContentKeyInformation")]
        public static extern uint ReadContentKeyInformation(string KeyRootPath, byte[] ContentKeyHandle, byte[] ContentKeyData, byte[] UsageRule);

        /// <summary>
        /// The information on contents keys, such as Usage Rule (UR_C), is acquired.
        /// </summary>
        /// <param name="KeyRootPath">[in] The path of media with which Content Keys are written.</param>
        /// <param name="ContentKeyHandle">[in] [32 bytes] Handle of Content Key.</param>
        /// <param name="ContentKeyData">[out] [96 bytes] Information of Content Key (CKD data).</param>
        /// <param name="UsageRule">[out] [56 bytes] Usage Rule for Content Key (UR_C data).</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadContentKeyInformation")]
        public static extern uint ReadContentKeyInformation(string KeyRootPath, byte[] ContentKeyHandle, ref SSS_CKD ContentKeyData, ref SSS_UR_C UsageRule);

        /// <summary>
        /// Delete a content and a content key
        /// </summary>
        /// <param name="ContentRootPath">[in] The path of media with which contents are written. Only a content key is deleted when NULL is specified.</param>
        /// <param name="ContentHandle">[in] [24 bytes] Handle of Contents. Only Content key is deleted when NULL is specified.</param>
        /// <param name="KeyRootPath">[in] The path of media with which Content Keys are written. Only Content is deleted when NULL is specified.</param>
        /// <param name="ContentKeyHandle">[in] [32 bytes] The handle of Content Key. Only Content is deleted when NULL is specified.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_DeleteContent")]
        public static extern uint DeleteContent(string ContentRootPath, byte[] ContentHandle, string KeyRootPath, byte[] ContentKeyHandle);

        /// <summary>
        /// Copy an encrypted content and an encrypted content key to another SD card.
        /// </summary>
        /// <param name="SrcContentRootPath">[in] The path of media with which Contents are written.</param>
        /// <param name="ContentHandle">[in] Handle of Contents.</param>
        /// <param name="SrcKeyRootPath">[in] The path of media with which Content Keys are written. Only Content is copied when NULL is specified.</param>
        /// <param name="ContentKeyHandle">[in] [32 bytes] The handle of the Content Key. Only Content is copied when NULL is specified.</param>
        /// <param name="DstContentsRootPath">[in] The path of the media which write User Key. Only Content Key is copied when NULL is specified.</param>
        /// <param name="DstKeyRootPath">[in] The path of media with which Content Keys are written. Only Content is copied when NULL is specified.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_CopyContent")]
        public static extern uint CopyContent(string SrcContentRootPath, byte[] ContentHandle, string SrcKeyRootPath, byte[] ContentKeyHandle, string DstContentsRootPath, string DstKeyRootPath);

        /// <summary>
        /// Move an encrypted content and an encrypted content key to SD card.
        /// </summary>
        /// <param name="SrcContentRootPath">[in] The path of media with which Contents are written.</param>
        /// <param name="ContentHandle">[in] [24 bytes] Handle of Contents.</param>
        /// <param name="SrcKeyRootPath">[in] The path of media with which Content Keys are written. Only Content is moved when NULL is specified.</param>
        /// <param name="ContentKeyHandle">[in] [32 bytes] The handle of the Content Key. Only Content is moved when NULL is specified.</param>
        /// <param name="DstContentsRootPath">[in] The path of the media which write User Key. Only Content Key is moved when NULL is specified.</param>
        /// <param name="DstKeyRootPath">[in] The path of media with which Content Keys are written. Only Content is moved when NULL is specified.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Usage Rule is updated.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_MoveContent")]
        public static extern uint MoveContent(string SrcContentRootPath, byte[] ContentHandle, string SrcKeyRootPath, byte[] ContentKeyHandle, string DstContentsRootPath, string DstKeyRootPath);

        /// <summary>
        /// Open content stream and get StreamHandle of the content.
        /// </summary>
        /// <param name="ContentRottPath">[in] The path of media with which Content is written</param>
        /// <param name="ContentHandle">[in] [24 bytes] The handle of Content</param>
        /// <param name="KeyRootPath">[in] The path of media with which Content Keys are written.</param>
        /// <param name="ContentKeyHandle">[in] [32 bytes] Handle of Content Key. If NULL is specified, Content is not decrypted.</param>
        /// <param name="StreamHandle">[out] The Handle of stream data.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Only one content can be opened in Ver1.0.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_OpenStream")]
        public static extern uint OpenStream(string ContentRottPath, byte[] ContentHandle, string KeyRootPath, byte[] ContentKeyHandle, byte[] StreamHandle);

        /// <summary>
        /// Close handle of stream data.
        /// </summary>
        /// <param name="StreamHandle">[in] [32 bytes] The handle of stream data.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_CloseStream")]
        public static extern uint CloseStream(byte[] StreamHandle);

        /// <summary>
        /// The preparations for playback are made. Usage Rule is updated. It is necessary to certainly call before Playback.
        /// </summary>
        /// <param name="StreamHandle">[in] [32 bytes] The handle of stream data.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>When the SD card is write-protected, playback which updates Usage Rule becomes an error. In such a case, this function returns SSS_STS_ERR_ACCESS_DENIED.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_StartStream")]
        public static extern uint StartStream(byte[] StreamHandle);

        /// <summary>
        /// Read stream data (TSTS(Time-Stamped Transport Stream)).
        /// </summary>
        /// <param name="StreamHandle">[in] [32 bytes] The handle of stream data.</param>
        /// <param name="ReqSize">[in] The maximum number of bytes to be read. The maximum size is 4GB.</param>
        /// <param name="Buffer">[out] A pointer to the buffer that receives the stream data from a pvo file.</param>
        /// <param name="ResSize">[out] A pointer to the variable that receives the number of bytes read.</param>
        /// <param name="CurrentTime">[out] The current time of read TSTS. The time is head of TSTS which the next reads.</param>
        /// <param name="PlayInfo">[out] [56 bytes] Information for Playback.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>If it cannot Playback by Usage Rule, data cannot be read from this function. When it becomes the last of data, a function returns SSS_STS_SUCCESS and ResSize is set to zero.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadStream")]
        public static extern uint ReadStream(byte[] StreamHandle, uint ReqSize, byte[] Buffer, ref uint ResSize, ref uint CurrentTime, byte[] PlayInfo);

        /// <summary>
        /// Read stream data (TSTS(Time-Stamped Transport Stream)).
        /// </summary>
        /// <param name="StreamHandle">[in] [32 bytes] The handle of stream data.</param>
        /// <param name="ReqSize">[in] The maximum number of bytes to be read. The maximum size is 4GB.</param>
        /// <param name="Buffer">[out] A pointer to the buffer that receives the stream data from a pvo file.</param>
        /// <param name="ResSize">[out] A pointer to the variable that receives the number of bytes read.</param>
        /// <param name="CurrentTime">[out] The current time of read TSTS. The time is head of TSTS which the next reads.</param>
        /// <param name="PlayInfo">[out] [56 bytes] Information for Playback.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>If it cannot Playback by Usage Rule, data cannot be read from this function. When it becomes the last of data, a function returns SSS_STS_SUCCESS and ResSize is set to zero.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_ReadStream")]
        public static extern uint ReadStream(byte[] StreamHandle, uint ReqSize, byte[] Buffer, ref uint ResSize, ref uint CurrentTime, ref SSS_PLAYINFO PlayInfo);

        /// <summary>
        /// Move a position of stream data.
        /// </summary>
        /// <param name="StreamHandle">[in] [32 bytes] The handle of stream data.</param>
        /// <param name="OffsetTime">[in] Time (ms) to move.</param>
        /// <param name="Origin">[in] The starting point for the time position move.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Time position to move is the minimum nearest I-Picture.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_SeekStream")]
        public static extern uint SeekStream(byte[] StreamHandle, int OffsetTime, uint Origin);

        /// <summary>
        /// Move a position of stream data.
        /// </summary>
        /// <param name="StreamHandle">[in] [32 bytes] The handle of stream data.</param>
        /// <param name="OffsetTime">[in] Time (ms) to move.</param>
        /// <param name="Origin">[in] The starting point for the time position move.</param>
        /// <param name="PES">[out] Number of PES packet size.</param>
        /// <param name="RES">[out] Time after seeking.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        /// <remarks>Time position to move is the minimum nearest I-Picture.</remarks>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_SeekStreamEx")]
        public static extern uint SeekStreamEx(byte[] StreamHandle, int OffsetTime, uint Origin, ref uint PES, ref uint RES);

        /// <summary>
        /// It moves to the new position measured in bytes from the start of stream data.
        /// </summary>
        /// <param name="StreamHandle">[in] [32 bytes] The handle of stream data.</param>
        /// <param name="Offset">[in] Offset to the position specified by whence.</param>
        /// <param name="Whence">[in] The starting point for the position to move. SSS_SEEK_SET : Set position equal to offset bytes. SSS_SEEK_CUR : Set position to current location plus offset. SSS_SEEK_END : Set position to end of stream data plus offset.</param>
        /// <param name="Position">[out] The moved position.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        [DllImport("SDSDMWNoSecureLib.dll", EntryPoint = "SDSDMWNoSecure_SeekStreamFromBytes")]
        public static extern uint SeekStreamFromBytes(byte[] StreamHandle, long Offset, int Whence, ref ulong Position);

    }
}
