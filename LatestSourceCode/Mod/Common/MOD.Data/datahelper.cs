using Microsoft.Win32;
using System;
using System.Configuration;
using System.ComponentModel;
using System.Collections;
using System.Collections.Specialized;
using System.Xml;
using System.Xml.Serialization;
using System.IO;
using System.Text;


namespace MOD.Data
{
    public class DataHelper
    {
		/// <summary>
		/// Used for legacy systems, where only 6 digits is available
		/// to store a representation of a GUID.
		/// </summary>
		/// <param name="g">The GUID to be hashed</param>
		/// <returns>An integer that when converted to a string will be 6 characters or less.</returns>
		public static uint GetSixDigitHash(Guid g)
		{
			// 6 decimal digits (999999) == 20 binary digits (11110100001000111111)
			return (uint)g.GetHashCode() % 1000000;
		}

		public static object Coalesce(params object[] args)
		{
			foreach (object o in args)
				if (o != null)
					return o;

			return null;
		}

		// ------------------------------------------------------------------
		/// <summary>
		/// Converts the string representation of the name or numeric value of one or more enumerated constants 
		/// to an equivalent enumerated object. 
		/// </summary>
		/// 
		/// <param name="enumType">The <see cref="System.Type"/> of the enumeration.</param>
		/// <param name="inputObject">An object containing the name or value to convert.</param>
		/// <param name="defaultValue">The default value in case of converstion failure.</param>
		/// <returns>An object of type enumType whose value is represented by inputObject. If inputObject was not found, defaultValue is returned.</returns>
		/// <seealso cref="Enum.Parse"/>
		// ------------------------------------------------------------------
		public static Object GetEnum(System.Type enumType, Object inputObject, Object defaultValue) 
		{
			if (inputObject == null)
				return defaultValue;

			try
			{
				return Enum.Parse(enumType, inputObject.ToString());
			}
			catch
			{
				return defaultValue;
			}
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid date based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static DateTime GetDateTime(object inputObject, DateTime defaultValue)
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return defaultValue;

    		return DateTime.Parse(inputObject.ToString());
		}

        /// <summary>
        /// 
        /// </summary>
        /// <param name="input"></param>
        /// <param name="defaultValue"></param>
        /// <returns></returns>
        public static DateTime GetDateTime(string input, DateTime defaultValue)
        {
            if (input == null || input.Trim() == string.Empty)
                return defaultValue;

            return DateTime.Parse(input);
        }

		//------------------------------------------------------------------
		/// <summary>This method returns a valid date based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
        public static DateTime GetDateTime(object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return DateTime.MinValue;

            return DateTime.Parse(inputObject.ToString());
        }

        public static long? GetNullableLong(string input)
        {
            if (input == null || input.Trim() == string.Empty)
                return null;

            return long.Parse(input);
        }

        public static decimal? GetNullableDecimal(string input)
        {
            if (input == null || input.Trim() == string.Empty)
                return null;

            return decimal.Parse(input);
        }

        public static int? GetNullableInt(string input)
        {
            if (input == null || input.Trim() == string.Empty)
                return null;

            return int.Parse(input);
        }
		public static short? GetNullableShort(string input)
		{
			if (input == null || input.Trim() == string.Empty)
				return null;

			return short.Parse(input);
		}


        /// <summary>
        /// Converts a string to a DateTime
        /// </summary>
        /// <param name="input">string representation of a date (or null)</param>
        /// <returns>null if input is empty or null, otherwise converts to Datetime</returns>
        public static DateTime? GetNullableDateTime(string input)
        {
            if (input == null || input.Trim() == string.Empty)
                return null;
            else
                return DateTime.Parse(input);
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid decimal based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
        public static decimal GetDecimal(Object inputObject, decimal defaultValue)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return defaultValue;

            return decimal.Parse(inputObject.ToString());
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="input"></param>
        /// <param name="defaultValue"></param>
        /// <returns></returns>
        public static decimal GetDecimal(string input, decimal defaultValue)
        {
            if (input == null || input.Trim() == string.Empty)
                return defaultValue;

            return decimal.Parse(input);
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid decimal based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static decimal GetDecimal(Object inputObject) 
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return decimal.MinValue;

			return decimal.Parse(inputObject.ToString());
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid float based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The float form of the object</returns>
		// ------------------------------------------------------------------
		public static float GetFloat(Object inputObject, float defaultValue)
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return defaultValue;

			return float.Parse(inputObject.ToString());
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="input"></param>
		/// <param name="defaultValue"></param>
		/// <returns></returns>
		public static float GetFloat(string input, float defaultValue)
		{
			if (input == null || input.Trim() == string.Empty)
				return defaultValue;

			return float.Parse(input);
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid float based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static float GetFloat(Object inputObject)
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return float.MinValue;

			return float.Parse(inputObject.ToString());
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid short based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static short GetShort(Object inputObject, short defaultValue) 
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return defaultValue;

			return short.Parse(inputObject.ToString());
		}

        /// <summary>
        /// 
        /// </summary>
        /// <param name="input"></param>
        /// <param name="defaultValue"></param>
        /// <returns></returns>
        public static short GetShort(string input, short defaultValue)
        {
            if (input == null || input.Trim() == string.Empty)
                return defaultValue;
            
            return short.Parse(input);
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid short based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
        public static short GetShort(Object inputObject)
        {
            if (inputObject is short)
                return (short)inputObject;
            else
                throw new InvalidCastException();
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid byte based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
        public static byte GetByte(Object inputObject, byte defaultValue)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return defaultValue;

            return byte.Parse(inputObject.ToString());
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid byte based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static byte GetByte(Object inputObject)
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return byte.MinValue;

			return byte.Parse(inputObject.ToString());
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid byte based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static byte[] GetBinary(Object inputObject)
		{
			if (inputObject == null)
				return null;

			return (byte[])inputObject;
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a valid byte based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static byte[] GetBinary(Object inputObject, byte[] defaultValue)
		{
			if (inputObject == null)
				return defaultValue;

			return (byte[])inputObject;
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid guid based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static Guid GetGuid(object inputObject)
        {
            if (inputObject is Guid)
                return (Guid)inputObject;
            else
                throw new InvalidCastException();
        }

        // ------------------------------------------------------------------
        /// <summary>This method returns a valid Guid based on the input object and default value.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The int form of the object</returns>
        // ------------------------------------------------------------------
        public static Guid GetGuid(object inputObject, Guid defaultValue)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return defaultValue;

            return new Guid(inputObject.ToString());
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="input"></param>
        /// <param name="defaultValue"></param>
        /// <returns></returns>
        public static Guid GetGuid(string input, Guid defaultValue)
        {
            if (input == null || input.Trim() == string.Empty)
                return defaultValue;

            return new Guid(input);
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="inputObject"></param>
        /// <returns></returns>
        public static int GetInt(object inputObject)
        {
            if (inputObject is int)
                return (int)inputObject;
            else
                throw new InvalidCastException();
        }

        // ------------------------------------------------------------------
        /// <summary>This method returns a valid int based on the input object and default value.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The int form of the object</returns>
        // ------------------------------------------------------------------
        public static int GetInt(Object inputObject, int defaultValue)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return defaultValue;

            return int.Parse(inputObject.ToString());
        }   
    
        /// <summary>
        /// 
        /// </summary>
        /// <param name="input"></param>
        /// <param name="defaultValue"></param>
        /// <returns></returns>
        public static int GetInt(string input, int defaultValue)
        {
            if (input == null || input.Trim() == string.Empty)
                return defaultValue;

            return int.Parse(input);
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid int based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The int form of the object</returns>
		// ------------------------------------------------------------------
        public static string GetString(Object inputObject, string defaultValue)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return defaultValue;

            return inputObject.ToString();
        }

        
		public static long GetLong(object inputObject)
		{
			if (inputObject is long)
				return (long)inputObject;
			else
				throw new InvalidCastException();
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid int based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The int form of the object</returns>
		// ------------------------------------------------------------------
		public static long GetLong(Object inputObject, long defaultValue)
		{
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return defaultValue;

			return long.Parse(inputObject.ToString());
		}

        /// <summary>
        /// 
        /// </summary>
        /// <param name="input"></param>
        /// <param name="defaultValue"></param>
        /// <returns></returns>
        public static long GetLong(string input, long defaultValue)
        {
            if (input == null || input.Trim() == string.Empty)
                return defaultValue;

            return long.Parse(input.ToString());
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="inputObject"></param>
        /// <returns></returns>
		public static bool GetBool(object inputObject)
		{
			if (inputObject is bool)
				return (bool)inputObject;

            if (inputObject is byte)
                return GetBoolFromByte((byte)inputObject);

            if (inputObject is int)
                return GetBoolFromInt((int)inputObject);

			throw new InvalidCastException();
		}

        /// <summary>
        /// 
        /// </summary>
        /// <param name="inputObject"></param>
        /// <returns></returns>
        public static bool GetBoolFromInt(int intBool)
        {
            if (intBool == 0)
                return false;
            if (intBool == 1)
                return true;

            throw new InvalidCastException();
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="inputObject"></param>
        /// <returns></returns>
        public static bool GetBoolFromByte(byte byteBool)
        {
            if (byteBool == 0)
                return false;
            if (byteBool == 1)
                return true;

            throw new InvalidCastException();
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid int based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The int form of the object</returns>
		// ------------------------------------------------------------------
        public static bool GetBool(Object inputObject, bool defaultValue)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return defaultValue;

            return bool.Parse(inputObject.ToString());
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="input"></param>
        /// <param name="defaultValue"></param>
        /// <returns></returns>
        public static bool GetBool(string input, bool defaultValue)
        {
            if (input == null || input.Trim() == string.Empty)
                return defaultValue;

            return bool.Parse(input);
        }
	}
}
