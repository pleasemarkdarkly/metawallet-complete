using System;
using System.Collections.Generic;
using System.Text;
using Toshiba.SDSDMW;

namespace Toshiba.SDSDMW.CommandUI
{
    class Program
    {
        static void Main(string[] args)
        {
#if false
            // exit with instructions
            if (args.Length == 0)
            {
                //Console.WriteLine("Usage: Toshiba.SDSDMW.CommandUI SDCardPath -format");
                //return;
            }

            // parse the command line arguments
            bool format = false;
            

            // grab SDCardPath as the first argument.  TODO: validate?
            //string path = args[0];
            string path = "E:\\";

            for (int i = 1; i < args.Length; i++)
            {
                if (args[i] == "-format")
                {
                    format = true;
                }
            }



            // open the interface
            uint sts = 0; 
            sts = SSS.Open();

            // format
            if (format == true)
            {
                sts = SSS.FormatProtectedArea(path);
                // TODO: check return values

                sts = SSS.FormatUserArea(path);
                // TODO: check return values
            }



            // close the interface
            sts = SSS.Close();

#else


            // region for quick testing of functions


            uint sts = 0;
            sts = SSS.Open();
            //sts = SSS.Close();

            /*
            Random rnd = new Random();
            byte[] buffer = new byte[256];
            rnd.NextBytes(buffer);

            byte[] key = new byte[7];
            rnd.NextBytes(key);

            sts = SSS.Encrypt(buffer, Convert.ToUInt32(buffer.Length), key, Convert.ToUInt32(key.Length));


            sts = SSS.Decrypt(buffer, Convert.ToUInt32(buffer.Length), key, Convert.ToUInt32(key.Length));


            byte[] UserKey = new byte[8];
            byte[] ContentKeyData = new byte[96];
            byte[] ContentKey = new byte[7];
            byte[] UsageRule = new byte[56];
            byte[] ContentKeyInformation = new byte[160];

            rnd.NextBytes(UserKey);
            rnd.NextBytes(ContentKeyData);
            rnd.NextBytes(ContentKey);
            rnd.NextBytes(UsageRule);
            //rnd.NextBytes(ContentKeyInformation);

            sts = SSS.GenerateContentKeyInformation(UserKey, ContentKeyData, ContentKey, UsageRule, ContentKeyInformation);

            SSS.SSS_CKD CKD = new SSS.SSS_CKD();
            SSS.SSS_UR_C UR_C = new SSS.SSS_UR_C();
            SSS.SSS_CKI CKI = new SSS.SSS_CKI();

            sts = SSS.GenerateContentKeyInformation(UserKey, ContentKeyData, ContentKey, UsageRule, ref CKI);

            sts = SSS.GenerateContentKeyInformation(UserKey, ref CKD, ContentKey, ref UR_C, ref CKI);

            */

            // read the media ID off of the card
            //byte[] mediaID = new byte[8];
            //sts = SSS.ReadMediaID("E:\\", mediaID);


            sts = TestWriteContent();


            sts = SSS.Close();
#endif
        }

        public static uint TestWriteContent()
        {
            uint sts = 0;

            string contentRootPath = @"E:\";
            //string content = "C:\\share\\DemoAssets\\1300\\11b\\829\\11b8296d-4043-4d10-85ef-a8aece6ef276.wmv";
            string content = @"\\dotshare\MOD-FTP-AREA\Toshiba\CS Test Videos\Videos\10items\10items.ssv";
            //string content = @"C:\projects\mod\Common\Libraries\Toshiba\Videos\10items\10items.ssv";

            SSS.SSS_CID cid = new SSS.SSS_CID();
            SSS.InitializeStructure(ref cid);

            SSS.SSS_CKD ckd = new SSS.SSS_CKD();
            SSS.InitializeStructure(ref ckd);

            SSS.SSS_UR_C ur_c = new SSS.SSS_UR_C();
            SSS.InitializeStructure(ref ur_c);

            //byte[] date_test = Helper.ConvertToContentUserRuleDate(DateTime.Now, true);
            TS_INFO tsidReader = new TS_INFO();
            bool tsidReadSuccess = tsidReader.ReadFile("ts-info.txt");

            C_INFO cidReader = new C_INFO();
            bool cidReadSuccess = cidReader.ReadFile("c-info.txt");

            UR_C_INFO ur_cReader = new UR_C_INFO();
            bool ur_cReadSuccess = ur_cReader.ReadFile("urc-info.txt");

            if (cidReadSuccess == true)
            {
                int byteIndex = 0;
                
                cid.SVC_ID = Helper.ServiceID;
                for (byteIndex = 0; byteIndex < 3; byteIndex++)
                {
                    cid.SVC_ID[byteIndex] = cidReader.IdBitField3[byteIndex];
                }

                cid.CONTENT_TYPE[0] = cidReader.ContentTypeBitField1[0];
                
                for (byteIndex = 0; byteIndex < 2; byteIndex++)
                {
                    cid.Reserved[byteIndex] = cidReader.ReservedBitField2[byteIndex];
                }

                for (byteIndex = 0; byteIndex < 8; byteIndex++)
                {
                    cid.SN[byteIndex] = cidReader.SerialBitField8[byteIndex];
                }

                for (byteIndex = 0; byteIndex < 2; byteIndex++)
                {
                    cid.Sub_SN[byteIndex] = cidReader.SubSerialBitField2[byteIndex];
                }          
            }
            else
            {
                cid.SVC_ID = Helper.ServiceID;
                cid.CONTENT_TYPE[0] = (byte)SSS.CONTENT_TYPE.VideoContent;
                cid.SN[6] = 0x04;
                cid.SN[7] = 0x37;
                cid.Sub_SN[1] = 0x0c;
            }

            ckd.CHAR_CODE = Helper.CharacterCode;
            ckd.CID = cid;
            ckd.CONTENT_FORMAT = Helper.GenerateCONTENT_FORMAT(SSS.CONTENT_FORMAT_H264_PROFILE.HighProfile, SSS.CONTENT_FORMAT_H264_LEVEL.Level_3, SSS.CONTENT_FORMAT_MPEG2_PROFILE.MainProfileNotUsed, SSS.CONTENT_FORMAT_MPEG2_LEVEL.MainLevelNotUsed, SSS.CONTENT_FORMAT_AUDIO_ATR.None, SSS.CONTENT_FORMAT_CATG.TransportStreamContainer, SSS.CONTENT_FORMAT_FORM.TimeStampedTransportStream);
            ckd.CONTENT_TYPE[0] = (byte)SSS.CONTENT_TYPE.VideoContent;
            ckd.LANG = Helper.Language;
            //ckd.TITLE[0] = 0x44; // D
            //ckd.TITLE[1] = 0x69; // i
            //ckd.TITLE[2] = 0x73; // s
            //ckd.TITLE[3] = 0x63; // c
            //ckd.TITLE[4] = 0x6f; // o

            ur_c.UR_TRIGGER = Helper.GenerateUR_TRIGGER(false, false);
            if ((ur_cReadSuccess == true) && (ur_cReader.MoveControl.HasValue == true) && (ur_cReader.CopyControl.HasValue == true))
            {
                ur_c.UR_MCCNTRL = Helper.GenerateUR_MCCNTRL((SSS.UR_MCCNTRLMoveControl)(ur_cReader.MoveControl.Value), (SSS.UR_MCCNTRLMoveControl)(ur_cReader.MoveControl.Value), (SSS.UR_MCCNTRLCopyControl)(ur_cReader.CopyControl.Value));
            }
            else
            {
                ur_c.UR_MCCNTRL = Helper.GenerateUR_MCCNTRL(SSS.UR_MCCNTRLMoveControl.MoveNever, SSS.UR_MCCNTRLMoveControl.MoveNever, SSS.UR_MCCNTRLCopyControl.CopyNever);
            }
            ur_c.UR_PF_TRIGGER = Helper.GenerateUR_V_TRIGGER();
            ur_c.UR_PF_INITIAL = Helper.GenerateUR_V_INITIAL(SSS.UR_V_INITIALExportControl.ExportToSDVideoNotPermitted);
            ur_c.UR_PF_CURRENT = ur_c.UR_PF_INITIAL;
            if ((ur_cReadSuccess == true) && (ur_cReader.StartDate.HasValue == true) && (ur_cReader.EndDate.HasValue == true))
            {
                ur_c.UR_I_STRTDATE = Helper.ConvertToContentUserRuleDate(ur_cReader.StartDate.Value);
                ur_c.UR_I_ENDDATE = Helper.ConvertToContentUserRuleDate(ur_cReader.EndDate.Value);
            }
            else
            {
                ur_c.UR_I_STRTDATE = Helper.ConvertToContentUserRuleDate(DateTime.Now);
                ur_c.UR_I_ENDDATE = Helper.ConvertToContentUserRuleDate(DateTime.Now.AddDays(9));
            }
            //ur_c.UR_I_STRTDATE = Helper.ConvertToContentUserRuleDate(DateTime.Now);
            //ur_c.UR_I_ENDDATE = Helper.ConvertToContentUserRuleDate(DateTime.Now.AddDays(10));
            if ((ur_cReadSuccess == true) && (ur_cReader.PlayCount.HasValue == true))
            {
                ushort val = (ushort)(ur_cReader.PlayCount.Value);
                switch (val)
                {
                    case 0x0000:
                        ur_c.UR_I_P_CNT = Helper.GenerateUR_I_P_CNT(SSS.UR_I_P_CNTPlaybackControl.PlaybackNever);
                        break;

                    case 0xFFFF:
                        ur_c.UR_I_P_CNT = Helper.GenerateUR_I_P_CNT(SSS.UR_I_P_CNTPlaybackControl.PlaybackUnlimited);
                        break;

                    default:
                        ur_c.UR_I_P_CNT = Helper.GenerateUR_I_P_CNT(val);
                        break;
                }
            }
            else
            {
                ur_c.UR_I_P_CNT = Helper.GenerateUR_I_P_CNT(SSS.UR_I_P_CNTPlaybackControl.PlaybackUnlimited);
            }
            ur_c.UR_C_STRTDATE = ur_c.UR_I_STRTDATE;
            ur_c.UR_C_ENDDATE = ur_c.UR_I_ENDDATE;
            ur_c.UR_C_P_CNT = ur_c.UR_I_P_CNT;
            if ((ur_cReadSuccess == true) && (ur_cReader.PlaySpanDays.HasValue == true) && (ur_cReader.PlaySpanHours.HasValue == true))
            {
                ur_c.UR_SPAN = Helper.GenerateUR_SPAN((uint)(ur_cReader.PlaySpanDays.Value),(byte)(ur_cReader.PlaySpanHours.Value));
            }
            else
            {
                ur_c.UR_SPAN = Helper.GenerateUR_SPAN(9, 0);
            }
            if (ur_cReadSuccess == true)
            {
                int byteIndex = 0;
                
                for (byteIndex = 0; byteIndex < 8; byteIndex++)
                {
                    ur_c.UR_SD_ID[byteIndex] = ur_cReader.SDIDBitField8[byteIndex];
                }          
            }
            else
            {
                ur_c.UR_SD_ID = BitConverter.GetBytes((ulong)0x7766554433221100); // 0x0011223344556677
            }
            ur_c.UR_CHECK = Helper.GenerateUR_CHECK();
            // video specific info goes into a reserved section
            byte[] ur_v_exsdv_info = Helper.GenerateUR_V_EXSDV_INFO((byte)0, SSS.UR_V_EXSDV_INFOTitleKeyType.VIDEO001_KEY, (ushort)0);
            ur_c.Reserved_2[0] = ur_v_exsdv_info[0];
            ur_c.Reserved_2[1] = ur_v_exsdv_info[1];
            byte[] ur_v_cciflags = Helper.GenerateUR_V_CCIFLAGS(SSS.UR_V_CCIFLAGSStrmCCI.StrmCCIIsValid, SSS.UR_V_CCIFLAGSNonReencryption.ReencryptionNotRequired, SSS.UR_V_CCIFLAGSAPSTB.APSType3);
            ur_c.Reserved_2[2] = ur_v_cciflags[0];

            // hard code the content key
            byte[] contentKey = new byte[7]; //b4ef5beb2f12b6
            if (cidReadSuccess == true)
            {
                int byteIndex = 0;

                for (byteIndex = 0; byteIndex < 7; byteIndex++)
                {
                    contentKey[byteIndex] = cidReader.ContentKeyBitField7[byteIndex];
                }
            }
            else
            {
                contentKey[0] = 0xb4;
                contentKey[1] = 0xef;
                contentKey[2] = 0x5b;
                contentKey[3] = 0xeb;
                contentKey[4] = 0x2f;
                contentKey[5] = 0x12;
                contentKey[6] = 0xb6;
            }

            uint dirIndex = 0;
            uint contentIndex = 0;

            //sts = Helper.WriteContent(contentRootPath, content, ckd, contentKey, ur_c);
            sts = Helper.WriteContent(contentRootPath, content, ckd, contentKey, ur_c, ref dirIndex, ref contentIndex, ProgressCallback);

            //uint directoryNum = 0;
            //byte[] usedDirTable = new byte[512];
            //sts = SSS.GetDirNum(contentRootPath, ref directoryNum, usedDirTable);

            return sts;
        }

        public static uint ProgressCallback(uint Percent, uint Status)
        {
            Console.WriteLine("Percent: " + Percent.ToString() + " Status: " + Status.ToString());

            return 0;
        }
    }
}
