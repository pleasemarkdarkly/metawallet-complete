using System;
using System.Globalization;
using Microsoft.Win32;
using System.Configuration;
using System.ComponentModel;
using System.Collections;
using System.Collections.Specialized;
using System.Xml;
using System.Xml.Serialization;
using System.IO;
using System.Text;
using System.Security.Cryptography;
using Microsoft.Practices.EnterpriseLibrary.Security.Cryptography;


namespace MOD.Data
{
	/// <summary>
	/// Summary description for encryption.
	/// </summary>
	public class Encryption
	{
		private byte[] _Key = new byte[] {57,105,8,255,108,7,1,143};
		private byte[] _IV = new byte[] {34,5,29,87,76,154,98,89};
        private static readonly string[] BYTE_MAP = new string[]
            {
                "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "0A", "0B", "0C", "0D", "0E", "0F",
                "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "1A", "1B", "1C", "1D", "1E", "1F",
                "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "2A", "2B", "2C", "2D", "2E", "2F",
                "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "3A", "3B", "3C", "3D", "3E", "3F",
                "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "4A", "4B", "4C", "4D", "4E", "4F",
                "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "5A", "5B", "5C", "5D", "5E", "5F",
                "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "6A", "6B", "6C", "6D", "6E", "6F",
                "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "7A", "7B", "7C", "7D", "7E", "7F",
                "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "8A", "8B", "8C", "8D", "8E", "8F",
                "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "9A", "9B", "9C", "9D", "9E", "9F",
                "A0", "A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "AA", "AB", "AC", "AD", "AE", "AF",
                "B0", "B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "BA", "BB", "BC", "BD", "BE", "BF",
                "C0", "C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "CA", "CB", "CC", "CD", "CE", "CF",
                "D0", "D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DA", "DB", "DC", "DD", "DE", "DF",
                "E0", "E1", "E2", "E3", "E4", "E5", "E6", "E7", "E8", "E9", "EA", "EB", "EC", "ED", "EE", "EF",
                "F0", "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "FA", "FB", "FC", "FD", "FE", "FF"
            };

		public Encryption()
		{
		}

		// ------------------------------------------------------------------
		/// <summary>Encrypt input string using AES encryption.</summary>
		/// 
		/// <param name="inputString">The string to be encrypted</param>
		/// <returns>The string in encrypted form</returns>
		// ------------------------------------------------------------------
		public static string EncryptString(string inputString)
		{
			// encrypt using Rijndael Managed symmetric algorithm
			return Cryptographer.EncryptSymmetric("RijndaelManaged", inputString);
		}

		// ------------------------------------------------------------------
		/// <summary>Decrypt input string that used AES encryption.</summary>
		/// 
		/// <param name="inputString">The string to be decrypted</param>
		/// <returns>The string in unencrypted form</returns>
		// ------------------------------------------------------------------
		public static string DecryptString(string inputString)
		{
			// encrypt using Rijndael Managed symmetric algorithm
			return Microsoft.Practices.EnterpriseLibrary.Security.Cryptography.Cryptographer.DecryptSymmetric("RijndaelManaged", inputString);
		}

		public static string getHash(string str)
		{
			System.Security.Cryptography.MD5CryptoServiceProvider csp = new System.Security.Cryptography.MD5CryptoServiceProvider();
			return BitConverter.ToString( csp.ComputeHash(System.Text.Encoding.ASCII.GetBytes( str )) ).Replace("-","");
		}

		public static string getHash(Stream stream)
		{
			System.Security.Cryptography.MD5CryptoServiceProvider csp = new System.Security.Cryptography.MD5CryptoServiceProvider();
			return BitConverter.ToString( csp.ComputeHash(stream) ).Replace("-","");
		}

		private ICryptoTransform GetDecryptor()
		{
			DESCryptoServiceProvider sp = new DESCryptoServiceProvider();
			return sp.CreateDecryptor(_Key, _IV );
		}

		private ICryptoTransform GetEncryptor()
		{
			DESCryptoServiceProvider sp = new DESCryptoServiceProvider();
			return sp.CreateEncryptor(_Key, _IV );
		}

		/// <summary>
		/// Encrypt the specified byte array.
		/// </summary>
		/// <param name="b">Byte array to encrypt</param>
		/// <returns></returns>
		public byte[] Encrypt(byte[] b)
		{
			MemoryStream ms = new MemoryStream(b.Length);
			CryptoStream cs = new CryptoStream(ms, this.GetEncryptor(), CryptoStreamMode.Write);
			cs.Write(b, 0, b.Length);
			cs.Close();
			return ms.ToArray();
		}

		/// <summary>
		/// Encryp the specified string.
		/// </summary>
		/// <param name="s">String to encrypt</param>
		/// <returns>Encrypted string</returns>
		public byte[] Encrypt(string s)
		{
			
			return Encrypt( (new UnicodeEncoding()).GetBytes(s));
		}

		/// <summary>
		/// Decrypt byte array.
		/// </summary>
		/// <param name="tl">Array to decrypt</param>
		/// <returns>decrypt byte array</returns>
		public string Decrypt(byte[] tl)
		{
			MemoryStream ms = new MemoryStream(tl.Length);
			ms.Write(tl, 0, tl.Length);
			ms.Seek(0, SeekOrigin.Begin);

			CryptoStream cs = new CryptoStream(ms, this.GetDecryptor(), CryptoStreamMode.Read);
			StreamReader sr = new StreamReader(cs, new UnicodeEncoding());
			return sr.ReadToEnd();
		}

		/// <summary>
		/// Converts a hex string a byte array into a byte array.
		/// </summary>
		/// <param name="b">Hex string to convert</param>
		/// <returns>Byte array.</returns>
		public byte[] HexStringToByteArray(string b)
		{
			byte[] n = new byte[b.Length/2];
			for(int i = 0; i < n.Length; i++)
			{
				n[i] = byte.Parse(b.Substring(i * 2, 2), NumberStyles.HexNumber);
			}
			return n;
		}

		/// <summary>
		/// Decrypt a hex string rep of a binary array into a binary array
		/// then return the string of the decrypted binary array.
		/// </summary>
		/// <param name="s">String to decrypt</param>
		/// <returns>Decrypted string</returns>
		public string DecryptHexToString( string s)
		{
			return Decrypt(HexStringToByteArray(s));
			//return Encoding.Unicode.GetString(b);
		}
		/// <summary>
		/// Convert byte array to hex string
		/// </summary>
		/// <param name="b">Byte array</param>
		/// <returns>string for hex string</returns>
		public static string BinaryArrayToHex( byte[] b )
		{
			StringBuilder sb = new StringBuilder(b.Length * 2, b.Length * 2);
			for (int i = 0; i < b.Length; ++i)
			{
                sb.Append(BYTE_MAP[b[i]]);
			}
			return sb.ToString();
		}
	}

	public class StringHash
	{
		byte[] _hash;
		public StringHash(string s)
		{
			byte[] ba = Encoding.Unicode.GetBytes(s);
			System.Security.Cryptography.MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider();
			_hash = md5.ComputeHash(ba, 0, ba.Length);
		}

		public static bool IsEqual( byte[] a, byte[] b)
		{
			if( b.Length != a.Length )
			{
				return false;
			}
			for(int i = 0; i < b.Length && i < a.Length; i++ )
			{
				if( a[i] != b[i] )
				{
					return false;
				}
			}
			return true;
		}

		public bool IsEqual( byte[] b )
		{
			return IsEqual(Hash, b);
		}

		public byte[] Hash
		{
			get 
			{
				return _hash;
			}
		}
	}
}
