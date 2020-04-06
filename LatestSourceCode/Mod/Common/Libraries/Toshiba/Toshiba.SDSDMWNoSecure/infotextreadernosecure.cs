using System;
using System.Collections.Generic;
using System.Text;

namespace Toshiba.SDSDMW
{
    public abstract class InfoTextReader
    {
        public static byte ReadHexChar(char c)
        {
            if ((c >= '0') && (c <= '9'))
            {
                return Convert.ToByte(Convert.ToUInt32(Convert.ToByte(c)) - Convert.ToUInt32(Convert.ToByte('0')));
            }

            if ((c >= 'A') && (c <= 'F'))
            {
                return Convert.ToByte(Convert.ToUInt32(Convert.ToByte(c)) - Convert.ToUInt32(Convert.ToByte('A')) + 10);
            }

            if ((c >= 'a') && (c <= 'f'))
            {
                return Convert.ToByte(Convert.ToUInt32(Convert.ToByte(c)) - Convert.ToUInt32(Convert.ToByte('a')) + 10);
            }

            // in case of error, return a value with a non-zero high bit to signify an error
            return Convert.ToByte(16);
        }

        public static byte[] ParseBitField(string bitFieldStr, int maxArraySize)
        {
            int stringLen = bitFieldStr.Length;
            if ((stringLen % 2) != 0)
            {
                bitFieldStr = "0" + bitFieldStr;
            }

            if ((bitFieldStr.Length / 2) < maxArraySize)
            {
                int lengthDiff = maxArraySize - (bitFieldStr.Length / 2);
                for (int i = 0; i < lengthDiff; i++)
                {
                    bitFieldStr = "00" + bitFieldStr;
                }
            }

            byte[] bitField = new byte[maxArraySize];
            for (int byteIndex = 0; byteIndex < maxArraySize; byteIndex++)
            {
                string byteStr = bitFieldStr.Substring(byteIndex * 2, 2);
                byte result = Convert.ToByte(0);
                byte hi = InfoTextReader.ReadHexChar(byteStr[0]);
                if ((hi & 0xF0) == 0x00)
                {
                    byte lo = InfoTextReader.ReadHexChar(byteStr[1]);
                    if ((lo & 0xF0) == 0x00)
                    {
                        int intResult = ((int)(hi) << 4) | (int)(lo);
                        result = Convert.ToByte(intResult);

                        bitField[byteIndex] = result;
                    }
                }
            }

            return bitField;
        }

        private List<string[]> m_lines = null;

        public bool ReadFile(string filePath)
        {
            bool success = false;
            List<string> lineList = new List<string>();
            try
            {
                using (System.IO.StreamReader streamReader = new System.IO.StreamReader(filePath))
                {
                    string line;

                    line = streamReader.ReadLine();
                    while (line != null)
                    {
                        if (line.Trim() != String.Empty)
                        {
                            lineList.Add(line);
                        }
                        line = streamReader.ReadLine();
                    }

                    success = true;
                }
            }
            catch
            {
            }

            if (success == true)
            {
                if (lineList.Count == 0)
                {
                    success = false;
                }
                else
                {
                    m_lines = new List<string[]>();
                    foreach (string line in lineList)
                    {
                        string[] args = line.Trim().Split(new char[] { ',' }, StringSplitOptions.None);
                        m_lines.Add(args);
                    }
                }
            }

            if (success == true)
            {
                success = ParseLines(m_lines);
            }

            return success;

        }

        public abstract bool ParseLines(List<string[]> lines);

        public InfoTextReader()
        {
        }

        public virtual List<string[]> Lines
        {
            get
            {
                return m_lines;
            }
        }
    }

    public class TS_INFO : InfoTextReader
    {
        private int m_nProgramMapTableNumber = 0;
        private int m_nProgramClockReference = 0;
        private string m_videoFormat = String.Empty;
        private string m_videoProfile = String.Empty;
        private int m_videoWidth = 0;
        private int m_videoHeight = 0;
        private int m_videoBaseFrameRate = 0;
        private double m_videoPullDownRatio = 0.00;
        private string m_videoUnknown1 = String.Empty;
        private string m_videoUnknown2 = String.Empty;
        private string m_videoUnknown3 = String.Empty;
        private string m_videoAspectRatio = String.Empty;
        private string m_audioFormat = String.Empty;
        private int m_audioSamplingRate = 0;
        private int m_audioNumChannels = 0;
        private int m_audioBitRate = 0;
        private string m_audioChannelDescription = String.Empty;
        private string m_audioUnknown1 = String.Empty;

        public virtual int PMTNumber
        {
            get
            {
                return m_nProgramMapTableNumber;
            }

            set
            {
                m_nProgramMapTableNumber = value;
            }
        }

        public virtual int PCRNumber
        {
            get
            {
                return m_nProgramClockReference;
            }

            set
            {
                m_nProgramClockReference = value;
            }
        }

        public virtual string Format
        {
            get
            {
                return m_videoFormat;
            }

            set
            {
                m_videoFormat = value;
            }
        }

        public virtual string Profile
        {
            get
            {
                return m_videoProfile;
            }

            set
            {
                m_videoProfile = value;
            }
        }

        public virtual int Width
        {
            get
            {
                return m_videoWidth;
            }

            set
            {
                m_videoWidth = value;
            }
        }

        public virtual int Height
        {
            get
            {
                return m_videoHeight;
            }

            set
            {
                m_videoHeight = value;
            }
        }

        public virtual int BaseFrameRate
        {
            get
            {
                return m_videoBaseFrameRate;
            }

            set
            {
                m_videoBaseFrameRate = value;
            }
        }

        public virtual double PullDownRatio
        {
            get
            {
                return m_videoPullDownRatio;
            }

            set
            {
                m_videoPullDownRatio = value;
            }
        }

        public virtual string Unknown1
        {
            get
            {
                return m_videoUnknown1;
            }

            set
            {
                m_videoUnknown1 = value;
            }
        }

        public virtual string Unknown2
        {
            get
            {
                return m_videoUnknown2;
            }

            set
            {
                m_videoUnknown2 = value;
            }
        }

        public virtual string Unknown3
        {
            get
            {
                return m_videoUnknown3;
            }

            set
            {
                m_videoUnknown3 = value;
            }
        }

        public virtual string AspectRatio
        {
            get
            {
                return m_videoAspectRatio;
            }

            set
            {
                m_videoAspectRatio = value;
            }
        }

        public virtual string AudioFormat
        {
            get
            {
                return m_audioFormat;
            }

            set
            {
                m_audioFormat = value;
            }
        }

        public virtual int AudioSampleRate
        {
            get
            {
                return m_audioSamplingRate;
            }

            set
            {
                m_audioSamplingRate = value;
            }
        }

        public virtual int AudioNumChannels
        {
            get
            {
                return m_audioNumChannels;
            }

            set
            {
                m_audioNumChannels = value;
            }
        }

        public virtual int AudioBitRate
        {
            get
            {
                return m_audioBitRate;
            }

            set
            {
                m_audioBitRate = value;
            }
        }

        public virtual string AudioChannelDescription
        {
            get
            {
                return m_audioChannelDescription;
            }

            set
            {
                m_audioChannelDescription = value;
            }
        }

        public virtual string AudioUnknown1
        {
            get
            {
                return m_audioUnknown1;
            }

            set
            {
                m_audioUnknown1 = value;
            }
        }

        public override bool ParseLines(List<string[]> lines)
        {
            bool success = true;

            if (lines == null)
            {
                return false;
            }

            int lineNumber = 0;
            foreach (string[] args in lines)
            {
                switch (lineNumber)
                {
                    case 0:
                        try
                        {
                            PMTNumber = Convert.ToInt32(args[0]);
                        }
                        catch
                        {
                            success = false;
                        }

                        if (String.Compare(args[1], "PMT", true) != 0)
                        {
                            success = false;
                        }
                        break;

                    case 1:
                        try
                        {
                            PCRNumber = Convert.ToInt32(args[0]);
                        }
                        catch
                        {
                            success = false;
                        }

                        if (String.Compare(args[1], "PCR", true) != 0)
                        {
                            success = false;
                        }
                        break;

                    case 2:
                        if (String.Compare(args[1], "Video", true) != 0)
                        {
                            success = false;
                        }
                        else if (args.Length < 9)
                        {
                            success = false;
                        }
                        else
                        {
                            try
                            {
                                Unknown1 = args[0].Trim();
                                Format = args[2].Trim();
                                Profile = args[3].Trim();
                                string[] dims = args[4].Trim().Split(new char[] { 'x' }, StringSplitOptions.RemoveEmptyEntries);
                                Width = Convert.ToInt32(dims[0].Trim());
                                Height = Convert.ToInt32(dims[1].Trim());
                                string[] freqs = args[5].Trim().Split(new string[] { "Hz" }, StringSplitOptions.RemoveEmptyEntries);
                                BaseFrameRate = Convert.ToInt32(freqs[0].Trim());
                                string[] ratioNums = args[6].Trim().Split(new char[] { '/' }, StringSplitOptions.RemoveEmptyEntries);
                                double topNum = Convert.ToDouble(ratioNums[0].Trim());
                                double bottomNum = Convert.ToDouble(ratioNums[1].Trim());
                                PullDownRatio = topNum / bottomNum;
                                Unknown2 = args[7].Trim();
                                AspectRatio = args[8].Trim();
                            }
                            catch
                            {
                                success = false;
                            }
                        }
                        break;

                    case 3:
                        if (String.Compare(args[1], "Audio", true) != 0)
                        {
                            success = false;
                        }
                        else if (args.Length < 8)
                        {
                            success = false;
                        }
                        else
                        {
                            try
                            {
                                Unknown3 = args[0].Trim();
                                AudioFormat = args[2].Trim();
                                AudioUnknown1 = args[3].Trim();
                                string[] freqs = args[4].Trim().Split(new string[] { "kHz" }, StringSplitOptions.RemoveEmptyEntries);
                                AudioSampleRate = Convert.ToInt32(freqs[0].Trim());
                                AudioNumChannels = Convert.ToInt32(args[5].Trim()[0]) - Convert.ToInt32('0');
                                string[] bitrates = args[6].Trim().Split(new string[] { "kbps" }, StringSplitOptions.RemoveEmptyEntries);
                                AudioBitRate = Convert.ToInt32(bitrates[0].Trim());
                                AudioChannelDescription = args[7].Trim();
                            }
                            catch
                            {
                                success = false;
                            }
                        }
                        break;
                }

                if (success == false)
                {
                    break;
                }

                lineNumber++;
            }

            return success;
        }

        public TS_INFO()
        {
        }
    }

    public class C_INFO : InfoTextReader
    {
        private byte[] m_idBitField3 = null;
        private byte[] m_contentTypeBitField1 = null;
        private byte[] m_reservedBitField2 = null;
        private byte[] m_serialBitField8 = null;
        private byte[] m_subSerialBitField2 = null;
        private byte[] m_contentKeyBitField7 = null;

        public virtual byte[] IdBitField3
        {
            get
            {
                return m_idBitField3;
            }

            set
            {
                m_idBitField3 = value;
            }
        }

        public virtual byte[] ContentTypeBitField1
        {
            get
            {
                return m_contentTypeBitField1;
            }

            set
            {
                m_contentTypeBitField1 = value;
            }
        }

        public virtual byte[] ReservedBitField2
        {
            get
            {
                return m_reservedBitField2;
            }

            set
            {
                m_reservedBitField2 = value;
            }
        }

        public virtual byte[] SerialBitField8
        {
            get
            {
                return m_serialBitField8;
            }

            set
            {
                m_serialBitField8 = value;
            }
        }

        public virtual byte[] SubSerialBitField2
        {
            get
            {
                return m_subSerialBitField2;
            }

            set
            {
                m_subSerialBitField2 = value;
            }
        }

        public virtual byte[] ContentKeyBitField7
        {
            get
            {
                return m_contentKeyBitField7;
            }

            set
            {
                m_contentKeyBitField7 = value;
            }
        }

        public override bool ParseLines(List<string[]> lines)
        {
            bool success = true;

            if (lines == null)
            {
                return false;
            }

            int lineNumber = 0;
            foreach (string[] args in lines)
            {
                switch (lineNumber)
                {
                    case 0:
                        if (args.Length < 5)
                        {
                            success = false;
                        }
                        else
                        {
                            try
                            {
                                IdBitField3 = InfoTextReader.ParseBitField(args[0], 3);
                                ContentTypeBitField1 = InfoTextReader.ParseBitField(args[1], 1);
                                ReservedBitField2 = InfoTextReader.ParseBitField(args[2], 2);
                                SerialBitField8 = InfoTextReader.ParseBitField(args[3], 8);
                                SubSerialBitField2 = InfoTextReader.ParseBitField(args[4], 2);
                            }
                            catch
                            {
                                success = false;
                            }
                        }
                        break;

                    case 1:
                        if (args.Length < 1)
                        {
                            success = false;
                        }
                        else
                        {
                            try
                            {
                                ContentKeyBitField7 = InfoTextReader.ParseBitField(args[0], 7);
                            }
                            catch
                            {
                                success = false;
                            }
                        }
                        break;

                }

                if (success == false)
                {
                    break;
                }

                lineNumber++;
            }

            return success;
        }

        public C_INFO()
        {
        }
    }

    public class UR_C_INFO : InfoTextReader
    {
        private int? m_moveControl = null;
        private int? m_copyControl = null;
        private int? m_copyControlEnabled = null;
        private int? m_macrovisionBits = null;
        private DateTime? m_startDate = null;
        private DateTime? m_endDate = null;
        private int? m_playCount = null;
        private int? m_playSpanDays = null;
        private int? m_playSpanHours = null;
        private byte[] m_SDIDBitField8 = null;

        public virtual int? MoveControl
        {
            get
            {
                return m_moveControl;
            }

            set
            {
                m_moveControl = value;
            }
        }

        public virtual int? CopyControl
        {
            get
            {
                return m_copyControl;
            }

            set
            {
                m_copyControl = value;
            }
        }

        public virtual int? CopyControlEnabled
        {
            get
            {
                return m_copyControlEnabled;
            }

            set
            {
                m_copyControlEnabled = value;
            }
        }

        public virtual int? MacrovisionBits
        {
            get
            {
                return m_macrovisionBits;
            }

            set
            {
                m_macrovisionBits = value;
            }
        }

        public virtual DateTime? StartDate
        {
            get
            {
                return m_startDate;
            }

            set
            {
                m_startDate = value;
            }
        }

        public virtual DateTime? EndDate
        {
            get
            {
                return m_endDate;
            }

            set
            {
                m_endDate = value;
            }
        }

        public virtual int? PlayCount
        {
            get
            {
                return m_playCount;
            }

            set
            {
                m_playCount = value;
            }
        }

        public virtual int? PlaySpanDays
        {
            get
            {
                return m_playSpanDays;
            }

            set
            {
                m_playSpanDays = value;
            }
        }

        public virtual int? PlaySpanHours
        {
            get
            {
                return m_playSpanHours;
            }

            set
            {
                m_playSpanHours = value;
            }
        }


        public virtual byte[] SDIDBitField8
        {
            get
            {
                return m_SDIDBitField8;
            }

            set
            {
                m_SDIDBitField8 = value;
            }
        }

        public override bool ParseLines(List<string[]> lines)
        {
            bool success = true;

            if (lines == null)
            {
                return false;
            }

            int lineNumber = 0;
            foreach (string[] args in lines)
            {
                switch (lineNumber)
                {
                    case 0:
                        if (args.Length < 9)
                        {
                            success = false;
                        }
                        else
                        {
                            try
                            {
                                if (args[0].Trim() != String.Empty)
                                {
                                    MoveControl = Convert.ToInt32(args[0].Trim());
                                }
                                if (args[1].Trim() != String.Empty)
                                {
                                    CopyControl = Convert.ToInt32(args[1].Trim());
                                }
                                if (args[2].Trim() != String.Empty)
                                {
                                    CopyControlEnabled = Convert.ToInt32(args[2].Trim());
                                }
                                if (args[3].Trim() != String.Empty)
                                {
                                    MacrovisionBits = Convert.ToInt32(args[3].Trim());
                                }
                                if (args[4].Trim() != String.Empty)
                                {
                                    StartDate = Convert.ToDateTime(args[4].Trim());
                                }
                                if (args[5].Trim() != String.Empty)
                                {
                                    EndDate = Convert.ToDateTime(args[5].Trim());
                                }
                                if (args[6].Trim() != String.Empty)
                                {
                                    PlayCount = Convert.ToInt32(args[6].Trim());
                                }
                                string spanStr = args[7].Trim();
                                if ((spanStr.Length >= 6) && (spanStr.Substring(0, 2) == "PT"))
                                {
                                    spanStr = spanStr.Substring(2, spanStr.Length - 2);
                                    int strIndex = 0;
                                    int strMax = spanStr.Length;
                                    while ((spanStr[strIndex] >= '0') && (spanStr[strIndex] <= '9') && (strIndex < strMax))
                                    {
                                        strIndex++;
                                    }
                                    if ((strIndex < strMax) && (spanStr[strIndex] == 'D'))
                                    {
                                        PlaySpanDays = Convert.ToInt32(spanStr.Substring(0, strIndex));
                                        spanStr = spanStr.Substring(strIndex + 1, spanStr.Length - strIndex - 1);
                                        strIndex = 0;
                                        strMax = spanStr.Length;
                                        while ((spanStr[strIndex] >= '0') && (spanStr[strIndex] <= '9') && (strIndex < strMax))
                                        {
                                            strIndex++;
                                        }
                                        if ((strIndex == (strMax - 1)) && (spanStr[strIndex] == 'H'))
                                        {
                                            PlaySpanHours = Convert.ToInt32(spanStr.Substring(0, strIndex));
                                        }
                                    }


                                }

                                SDIDBitField8 = InfoTextReader.ParseBitField(args[8].Trim(), 8);
                            }
                            catch
                            {
                                success = false;
                            }
                        }
                        break;
                }

                if (success == false)
                {
                    break;
                }

                lineNumber++;
            }

            return success;
        }

        public UR_C_INFO()
        {
        }
    }
}
