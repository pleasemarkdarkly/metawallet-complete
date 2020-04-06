using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace Toshiba.SDSDMW
{
    public class Helper
    {
        static byte[] s_SDSDID;
        static byte[] s_serviceID;
        static byte[] s_serviceName;
        static byte[] s_providerID;
        static byte[] s_providerName;
        static byte[] s_language;
        static byte[] s_characterCode;

        public static byte[] SDSDID
        {
            get
            {
                if (s_SDSDID == null)
                {
                    s_SDSDID = new byte[3]; // 0x4d5110
                    s_SDSDID[0] = 0x4d;
                    s_SDSDID[1] = 0x51;
                    s_SDSDID[2] = 0x10;
                }
                return s_SDSDID;
            }

            set
            {
                if (value.Length != 3)
                {
                    throw new ArgumentException("SDSDID was attempted to be set with the wrong size array.");
                }
                s_SDSDID = value;
            }
        }

        public static byte[] ServiceID
        {
            get
            {
                if (s_serviceID == null)
                {
                    s_serviceID = new byte[128];
                    s_serviceID[0] = 0x4d; // first three bytes are the SDSD ID
                    s_serviceID[1] = 0x51;
                    s_serviceID[2] = 0x10;
                    System.Text.ASCIIEncoding encoding = new System.Text.ASCIIEncoding();
                    byte[] bytes = encoding.GetBytes("GreenPlay");
                    bytes.CopyTo(s_serviceID, 3);
                }
                return s_serviceID;
            }

            set
            {
                if (value.Length != 128)
                {
                    throw new ArgumentException("ServiceID was attempted to be set with the wrong size array.");
                }
                s_serviceID = value;
            }
        }

        public static byte[] ServiceName
        {
            get
            {
                if (s_serviceName == null)
                {
                    s_serviceName = new byte[256];
                    System.Text.ASCIIEncoding encoding = new System.Text.ASCIIEncoding();
                    byte[] bytes = encoding.GetBytes("MOD_Systems_Inc_GreenPlay");
                    bytes.CopyTo(s_serviceName, 0);
                }
                return s_serviceName;
            }

            set
            {
                if (value.Length != 256)
                {
                    throw new ArgumentException("ServiceName was attempted to be set with the wrong size array.");
                }
                s_serviceName = value;
            }
        }

        public static byte[] ProviderID
        {
            get
            {
                if (s_providerID == null)
                {
                    s_providerID = new byte[128]; // 0x4d, 0x51, 0x62, 0x69, 0x63, 0x2d, 0x4a, 0x61, 0x70, 0x61, 0x6e
                    s_providerID[0] = 0x4d;
                    s_providerID[1] = 0x51;
                    s_providerID[2] = 0x62;
                    s_providerID[3] = 0x69;
                    s_providerID[4] = 0x63;
                    s_providerID[5] = 0x2d;
                    s_providerID[6] = 0x4a;
                    s_providerID[7] = 0x61;
                    s_providerID[8] = 0x70;
                    s_providerID[9] = 0x61;
                    s_providerID[10] = 0x6e;
                }
                return s_providerID;
            }

            set
            {
                if (value.Length != 128)
                {
                    throw new ArgumentException("ProviderID was attempted to be set with the wrong size array.");
                }
                s_providerID = value;
            }
        }

        public static byte[] ProviderName
        {
            get
            {
                if (s_providerName == null)
                {
                    s_providerName = new byte[256];
                    System.Text.ASCIIEncoding encoding = new System.Text.ASCIIEncoding();
                    byte[] bytes = encoding.GetBytes("MQbic-Japan");
                    bytes.CopyTo(s_providerName, 0);
                }
                return s_providerName;
            }

            set
            {
                if (value.Length != 256)
                {
                    throw new ArgumentException("ProviderName was attempted to be set with the wrong size array.");
                }
                s_providerName = value;
            }
        }

        public static byte[] Language
        {
            get
            {
                if (s_language == null)
                {
                    s_language = new byte[8];
                    System.Text.ASCIIEncoding encoding = new System.Text.ASCIIEncoding();
                    byte[] bytes = encoding.GetBytes("en-US");
                    bytes.CopyTo(s_language, 0);
                }
                return s_language;
            }

            set
            {
                if (value.Length != 8)
                {
                    throw new ArgumentException("Language was attempted to be set with the wrong size array.");
                }
                s_language = value;
            }
        }

        public static byte[] CharacterCode
        {
            get
            {
                if (s_characterCode == null)
                {
                    s_characterCode = new byte[2];
                    s_characterCode[0] = 0x00;
                    s_characterCode[1] = 0x03;
                }
                return s_characterCode;
            }

            set
            {
                if (value.Length != 2)
                {
                    throw new ArgumentException("CharacterCode was attempted to be set with the wrong size array.");
                }
                s_characterCode = value;
            }
        }

        public static uint GenerateNewUserKeyID(ref SSS.SSS_UKID UserKeyID)
        {
            //UserKeyID.SVC_ID = new byte[3];
            UserKeyID.SVC_ID = SDSDID;
            //UserKeyID.Reserved = new byte[1];
            //UserKeyID.SN = new byte[4]; //TODO: need to generate a real serial number
            UserKeyID.SN[0] = 0x01;
            UserKeyID.SN[1] = 0x02;
            UserKeyID.SN[2] = 0x03;
            UserKeyID.SN[3] = 0x04;

            return (uint)SSS.STS.SSS_STS_SUCCESS;
        }

        public static byte[] ConvertToContentUserRuleDate(DateTime DateTime, bool SetFirstPlaybackPerformedBit)
        {
            byte[] ur_c_date = ConvertToContentUserRuleDate(DateTime);

            if (SetFirstPlaybackPerformedBit)
            {
                // plug in the first playback performed bit
                ur_c_date[0] |= 0x40; // set b22
            }

            return ur_c_date;
        }

        public static byte[] ConvertToContentUserRuleDate(DateTime DateTime)
        {
            byte[] ur_c_date = new byte[3];
            // plug the date in first
            int modifiedJulianDate = Convert.ToInt32(Math.Floor(CalendarConverter.Gregorian2ModifiedJulian(DateTime)));
            int shiftedDate = modifiedJulianDate << 5;
            byte[] date = BitConverter.GetBytes(shiftedDate);
            ur_c_date[0] = date[2];
            ur_c_date[1] = date[1];
            ur_c_date[2] = date[0];

            // plug in the validity of time bit
            ur_c_date[0] |= 0x80; // set b23

            // plug in time section
            byte timeMask = 0x1f;
            ur_c_date[2] |= (byte)(Convert.ToByte(DateTime.Hour) & timeMask);

            return ur_c_date;
        }

        public static byte[] GenerateCONTENT_FORMAT(SSS.CONTENT_FORMAT_H264_PROFILE H264Profile, SSS.CONTENT_FORMAT_H264_LEVEL H264Level, SSS.CONTENT_FORMAT_MPEG2_PROFILE MPEG2Profile, SSS.CONTENT_FORMAT_MPEG2_LEVEL MPEG2Level, SSS.CONTENT_FORMAT_AUDIO_ATR AudioATR, SSS.CONTENT_FORMAT_CATG Catg, SSS.CONTENT_FORMAT_FORM Form)
        {
            byte[] content_format = new byte[4];
            content_format[0] = 0x80;  // TRIG set to 10b
            content_format[0] |= (byte)((byte)H264Profile << 2);
            content_format[0] |= (byte)((byte)H264Level >> 6);
            content_format[1] |= (byte)((byte)H264Level << 2);
            content_format[1] |= (byte)((byte)MPEG2Profile << 1);
            content_format[1] |= (byte)((byte)MPEG2Level >> 7);
            content_format[2] |= (byte)((byte)MPEG2Level << 5);
            content_format[2] |= (byte)((byte)AudioATR >> 3);
            content_format[3] |= (byte)((byte)AudioATR << 5);
            content_format[3] |= (byte)((byte)Catg << 3);
            content_format[3] |= (byte)((byte)Form << 1);
            return content_format;
        }

        public static byte[] GenerateUR_TRIGGER(bool PlaybackControlPermitted, bool CopyMoveControlPermitted)
        {
            byte[] ur_trigger = new byte[1];
            if (PlaybackControlPermitted == true)
            {
                ur_trigger[0] = 0x80;
            }
            if (CopyMoveControlPermitted == true)
            {
                ur_trigger[0] |= 0x01;
            }
            return ur_trigger;
        }

        public static byte[] GenerateUR_MCCNTRL(SSS.UR_MCCNTRLMoveControl InitialMoveControl, SSS.UR_MCCNTRLMoveControl CurrentMoveControl, SSS.UR_MCCNTRLCopyControl CopyCountControl)
        {
            byte[] ur_mccntrl = new byte[1];
            ur_mccntrl[0] = (byte)((byte)InitialMoveControl << 6);
            ur_mccntrl[0] |= (byte)((byte)CurrentMoveControl << 4);
            ur_mccntrl[0] |= (byte)CopyCountControl;
            return ur_mccntrl;
        }

        public static byte[] GenerateUR_MCCNTRL(SSS.UR_MCCNTRLMoveControl InitialMoveControl, SSS.UR_MCCNTRLMoveControl CurrentMoveControl, byte CopyCount)
        {
            if (CopyCount == 0x00 || CopyCount > 0x0e)
            {
                throw new ArgumentOutOfRangeException("CopyCount", "CopyCount parameter must be a value between 0x01 and 0x0e");
            }
            byte[] ur_mccntrl = GenerateUR_MCCNTRL(InitialMoveControl, CurrentMoveControl, SSS.UR_MCCNTRLCopyControl.CopyNever);
            ur_mccntrl[0] |= CopyCount;
            return ur_mccntrl;
        }

        public static byte[] GenerateUR_V_TRIGGER()
        {
            // in the current spec, the only valid setting is 0x00
            return new byte[1];
        }

        public static byte[] GenerateUR_V_INITIAL(SSS.UR_V_INITIALExportControl ExportControl)
        {
            byte[] ur_v_initial = new byte[2];
            ur_v_initial[0] = (byte)((byte)ExportControl << 7);
            return ur_v_initial;
        }

        public static byte[] GenerateUR_V_CURRENT(SSS.UR_V_CURRENTExportControl ExportControl)
        {
            byte[] ur_v_current = new byte[2];
            ur_v_current[0] = (byte)((byte)ExportControl << 7);
            return ur_v_current;
        }

        public static byte[] GenerateUR_CHECK()
        {
            return BitConverter.GetBytes((ulong)0xefcdab8967452301); // 0x0123456789abcdef
        }

        public static byte[] GenerateUR_V_EXSDV_INFO(byte MoveControlInfo, SSS.UR_V_EXSDV_INFOTitleKeyType TitleKeyType, ushort TKURENumber)
        {
            byte[] ur_v_exsdv_info = new byte[2];
            byte[] tkureNumber = BitConverter.GetBytes(TKURENumber);
            ur_v_exsdv_info[0] = tkureNumber[1];
            ur_v_exsdv_info[1] = tkureNumber[0];
            ur_v_exsdv_info[0] |= (byte)((byte)MoveControlInfo << 6);
            ur_v_exsdv_info[0] |= (byte)((byte)TitleKeyType << 3);
            return ur_v_exsdv_info;
        }

        public static byte[] GenerateUR_V_CCIFLAGS(SSS.UR_V_CCIFLAGSStrmCCI StrmCCIControl, SSS.UR_V_CCIFLAGSNonReencryption NonReencryptionControl, SSS.UR_V_CCIFLAGSAPSTB APSTBControl)
        {
            byte[] ur_v_cciflags = new byte[1];
            ur_v_cciflags[0] = (byte)((byte)StrmCCIControl << 7);
            ur_v_cciflags[0] |= (byte)((byte)NonReencryptionControl << 6);
            ur_v_cciflags[0] |= (byte)((byte)APSTBControl << 4);
            return ur_v_cciflags;
        }

        public static byte[] GenerateUR_I_P_CNT(SSS.UR_I_P_CNTPlaybackControl PlaybackControl)
        {
            byte[] ur_c_p_cnt = BitConverter.GetBytes((ushort)PlaybackControl);
            return ur_c_p_cnt;
        }

        public static byte[] GenerateUR_I_P_CNT(ushort PlaybackCount)
        {
            if (PlaybackCount == 0x00 || PlaybackCount == 0xffff)
            {
                throw new ArgumentOutOfRangeException("CopyCount", "CopyCount parameter must be a value between 0x01 and 0xfffe");
            }
            byte[] ur_c_p_cnt = new byte[2];
            ur_c_p_cnt = BitConverter.GetBytes((ushort)PlaybackCount);
            return ur_c_p_cnt;
        }

        public static byte[] GenerateUR_C_P_CNT(SSS.UR_C_P_CNTPlaybackControl PlaybackControl)
        {
            byte[] ur_c_p_cnt = BitConverter.GetBytes((ushort)PlaybackControl);
            return ur_c_p_cnt;
        }

        public static byte[] GenerateUR_C_P_CNT(ushort PlaybackCount)
        {
            if (PlaybackCount == 0x00 || PlaybackCount == 0xffff)
            {
                throw new ArgumentOutOfRangeException("CopyCount", "CopyCount parameter must be a value between 0x01 and 0xfffe");
            }
            byte[] ur_c_p_cnt = new byte[2];
            ur_c_p_cnt = BitConverter.GetBytes((ushort)PlaybackCount);
            return ur_c_p_cnt;
        }

        public static byte[] GenerateUR_SPAN(uint SpanDays, byte SpanHours)
        {
            byte[] ur_span = new byte[3];
            // plug the days in first
            uint shiftedDays = SpanDays << 5;
            byte[] date = BitConverter.GetBytes(shiftedDays);
            ur_span[0] = date[2];
            ur_span[1] = date[1];
            ur_span[2] = date[0];

            // plug in the validity of span bit
            ur_span[0] |= 0x80; // set b23

            // plug in time section
            byte timeMask = 0x1f;
            ur_span[2] |= (byte)(SpanHours & timeMask);

            return ur_span;
        }


        /// <summary>
        /// Write content to the SDSD device
        /// </summary>
        /// <param name="ContentRootPath">[in] Path of the media which write Content.</param>
        /// <param name="Content">[in] Path of Content (PVO) file.</param>
        /// <param name="ContentKeyData">[in] [96 bytes] Content Key Data (CKD).</param>
        /// <param name="ContentKey">[in] [7 bytes] Content Key (not encrypted).</param>
        /// <param name="ContentUsageRule">[in] [56 bytes] Usage Rule for content (not encrypted).</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        public static uint WriteContent(string ContentRootPath, string Content, SSS.SSS_CKD ContentKeyData, byte[] ContentKey, SSS.SSS_UR_C ContentUsageRule)
        {
            uint dirIndex = 0;
            uint contentIndex = 0;
            return WriteContent(ContentRootPath, Content, ContentKeyData, ContentKey, ContentUsageRule, ref dirIndex, ref contentIndex, null, false);
        }

        /// <summary>
        /// Write content to the SDSD device, and get write progress feedback via the provided delegate callback.
        /// </summary>
        /// <param name="ContentRootPath">[in] Path of the media which write Content.</param>
        /// <param name="Content">[in] Path of Content (PVO) file.</param>
        /// <param name="ContentKeyData">[in] [96 bytes] Content Key Data (CKD).</param>
        /// <param name="ContentKey">[in] [7 bytes] Content Key (not encrypted).</param>
        /// <param name="ContentUsageRule">[in] [56 bytes] Usage Rule for content (not encrypted).</param>
        /// <param name="DirIndex">[out] Index of directory.</param>
        /// <param name="ContentIndex">[out] Index of content (program).</param>
        /// <param name="ProgressCallback">[in] Delegate of callback function for progress. Can be null.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        public static uint WriteContent(string ContentRootPath, string Content, SSS.SSS_CKD ContentKeyData, byte[] ContentKey, SSS.SSS_UR_C ContentUsageRule, ref uint DirIndex, ref uint ContentIndex, SSS.WriteContentExProgressCallback ProgressCallback)
        {
            return WriteContent(ContentRootPath, Content, ContentKeyData, ContentKey, ContentUsageRule, ref DirIndex, ref ContentIndex, ProgressCallback, true);
        }

        /// <summary>
        /// Write content to the SDSD device, and get write progress feedback via the provided delegate callback.
        /// </summary>
        /// <param name="ContentRootPath">[in] Path of the media which write Content.</param>
        /// <param name="Content">[in] Path of Content (PVO) file.</param>
        /// <param name="ContentKeyData">[in] [96 bytes] Content Key Data (CKD).</param>
        /// <param name="ContentKey">[in] [7 bytes] Content Key (not encrypted).</param>
        /// <param name="ContentUsageRule">[in] [56 bytes] Usage Rule for content (not encrypted).</param>
        /// <param name="DirIndex">[out] Index of directory.</param>
        /// <param name="ContentIndex">[out] Index of content (program).</param>
        /// <param name="ProgressCallback">[in] Delegate of callback function for progress. Can be null.</param>
        /// <param name="CallEx">[in] If true, the WriteContentEx method will be called.  Otherwise, the WriteContent method will be called.</param>
        /// <returns>If successful, this function returns 0. Otherwise, it returns a nonzero value.</returns>
        private static uint WriteContent(string ContentRootPath, string Content, SSS.SSS_CKD ContentKeyData, byte[] ContentKey, SSS.SSS_UR_C ContentUsageRule, ref uint DirIndex, ref uint ContentIndex, SSS.WriteContentExProgressCallback ProgressCallback, bool CallEx)
        {
            // Workflow Overview
            // (1) Read available User Key ID (UKID) from SD card. (API : 4.5.1)
            // (2) If there is available UKID, it will go to (7), otherwise, it will go to (3) or (4).
            // (3) Service information is registered if there is no available service. (API : 4.5.2)
            // (4) Read Media ID (MID). (API : 4.5.4)
            // (5) Generate User Key from MID. (API : 4.4.4)
            // (6) Write User Key into a SD card. (API : 4.5.5)
            // (7) Generate Content Key Information (CKI). (API : 4.5.6 or 4.5.7) CKI contains encrypted Content Key and Usage Rule (Ku[Kc + UR_C]) and information of Content Key.
            // (8) Write Content (PVO file) (API : 4.5.8) and CKI. (API : 4.5.9)

            // TODO: Check parameter input
            if (ContentRootPath == string.Empty || Content == string.Empty)
            {
                return (uint)SSS.STS.SSS_STS_ERR_INVALID_PARAMETER;
            }


            uint sts = 0;
            bool haveUserKey = false;
            //byte[] userKeyID = new byte[8];
            byte[] mediaID = new byte[8];
            byte[] userKey = new byte[7];
            //byte[] usageRule = new byte[56];
            //byte[] contentKeyData = new byte[96];
            //byte[] contentKey = new byte[7];
            //byte[] contentKeyInformation = new byte[160];

            SSS.SSS_UKID userKeyID = new SSS.SSS_UKID();
            SSS.InitializeStructure(ref userKeyID);
            // TODO: no hard coding this value


            SSS.SSS_UR_U userUsageRule = new SSS.SSS_UR_U();
            SSS.InitializeStructure(ref userUsageRule);
            //userUsageRule.UR_TRIGGER[0] = 0x00;
            //userUsageRule.UR_UKT[0] = 0x00;
            userUsageRule.UR_UK_ID = userKeyID;
            //userUsageRule.UR_HASH;
            userUsageRule.UR_CHECK = BitConverter.GetBytes((ulong)0x0123456789abcdef);

            //SSS.SSS_UR_C contentUsageRule = new SSS.SSS_UR_C();

            //SSS.SSS_CKD contentKeyData = new SSS.SSS_CKD();

            SSS.SSS_CKI contentKeyInformation = new SSS.SSS_CKI();
            SSS.InitializeStructure(ref contentKeyInformation);


            // (1) Read available User Key ID (UKID) from SD card. (API : 4.5.1)
            sts = SSS.ReadAvailableUserKey(ContentRootPath, ServiceID, ref userKeyID);

            // (2) If there is available UKID, it will go to (7), otherwise, it will go to (3) or (4).
            if (sts != (uint)SSS.STS.SSS_STS_SUCCESS)
            {
                if (sts == (uint)SSS.STS.SSS_STS_ERR_FILE_NOT_FOUND || sts == (uint)SSS.STS.SSS_STS_ERR_NOT_EXIST_SERVICE || sts == (uint)SSS.STS.SSS_STS_ERR_NOT_EXIST_KEY)
                {
                    // (3) Service information is registered if there is no available service. (API : 4.5.2)
                    if (sts == (uint)SSS.STS.SSS_STS_ERR_FILE_NOT_FOUND || sts == (uint)SSS.STS.SSS_STS_ERR_NOT_EXIST_SERVICE)
                    {
                        // make service directory
                        sts = SSS.WriteServiceInformation(ContentRootPath, ServiceID, ServiceName, ProviderID, ProviderName, Language, CharacterCode);
                        if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }
                    }

                    // (4) Read Media ID (MID). (API : 4.5.4)
                    sts = SSS.ReadMediaID(ContentRootPath, mediaID);
                    if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }

                    // (5) Generate User Key from MID. (API : 4.4.4)
                    sts = GenerateNewUserKeyID(ref userKeyID);
                    // TODO: check status on this call?
                    sts = SSS.CreateUserKey(mediaID, ref userKeyID, userKey);
                    if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }

                    // (6) Write User Key into a SD card. (API : 4.5.5)
                    userUsageRule.UR_UK_ID = userKeyID;
                    sts = SSS.WriteUserKey(ContentRootPath, ref userKeyID, userKey, ref userUsageRule);
                    if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }

                    haveUserKey = true;
                }
                else
                {
                    return sts;
                }
            }

            // TESTING
            byte[] content_key_data = Helper.StructureToByteArray(ContentKeyData, 96);
            byte[] content_usage_rule = Helper.StructureToByteArray(ContentUsageRule, 56);

            Helper.PrintBytes(userKey, "user_key");
            Helper.PrintBytes(content_key_data, "content_key_data");
            Helper.PrintBytes(ContentKey, "content_key");
            Helper.PrintBytes(content_usage_rule, "content_usage_rule");


            // /TESTING

            // (7) Generate Content Key Information (CKI). (API : 4.5.6 or 4.5.7) CKI contains encrypted Content Key and Usage Rule (Ku[Kc + UR_C]) and information of Content Key.
            if (haveUserKey == true)
            {
                sts = SSS.GenerateContentKeyInformation(userKey, ref ContentKeyData, ContentKey, ref ContentUsageRule, ref contentKeyInformation);
                if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }
            }
            else
            {
                sts = SSS.GenerateContentKeyInformationFromUKID(ContentRootPath, ref userKeyID, ref ContentKeyData, ContentKey, ref ContentUsageRule, ref contentKeyInformation);
                if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }
            }

            byte[] content_key_information = Helper.StructureToByteArray(contentKeyInformation, 160);

            Helper.PrintBytes(content_key_information, "content_key_information");

            // (8) Write Content (PVO file) (API : 4.5.8) and CKI. (API : 4.5.9)
            if (CallEx == true)
            {
                sts = SSS.WriteContentEx(ContentRootPath, Content, ref DirIndex, ref ContentIndex, ProgressCallback);
                if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }
            }
            else
            {
                sts = SSS.WriteContent(ContentRootPath, Content);
                if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }
            }

            sts = SSS.WriteContentKey(ContentRootPath, ref userKeyID, ref contentKeyInformation);
            if (sts != (uint)SSS.STS.SSS_STS_SUCCESS) { return sts; }

            return sts;
        }

        static byte[] StructureToByteArray(object obj, int len)
        {
            byte[] buffer = new byte[len];
            GCHandle handle = GCHandle.Alloc(buffer, GCHandleType.Pinned);
            Marshal.StructureToPtr(obj, handle.AddrOfPinnedObject(), false);
            handle.Free();
            return buffer;
        }

        static void PrintBytes(byte[] bytes, string caption)
        {
            Console.WriteLine(caption);
            if (bytes == null)
            {
                Console.WriteLine("<NULL>");
                return;
            }
            foreach (byte b in bytes)
            {
                Console.Write(b.ToString("X2"));
            }
            Console.Write("\n");
        }

    }
}
