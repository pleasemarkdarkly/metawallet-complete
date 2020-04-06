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
    public class EditHelper
    {
        //------------------------------------------------------------------
        /// <summary>This method returns a valid date based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The decimal form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetDateTime(object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is DateTime)
            {
                if (DateTime.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.DateTime)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }

		//------------------------------------------------------------------
		/// <summary>This method returns a valid date based on the input object or null.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static string GetDate(object inputObject)
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return "";
			if (inputObject is DateTime)
			{
				if (DateTime.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.DateTime)
				{
					return "";
				}
				return ((DateTime)inputObject).ToShortDateString();
			}
			else
				throw new InvalidCastException();
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid currency based on the input object or null.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static string GetCurrency(Object inputObject)
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return "";
			if (inputObject is decimal)
			{
				if (decimal.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Decimal)
				{
					return "";
				}
				string decimalValue = DataHelper.GetString(inputObject, "");

				// TODO: better formatting needed
				int index = decimalValue.IndexOf(".");
				if (index >= 0 && decimalValue.Length > index+3)
				{
					decimalValue = decimalValue.Substring(0, index + 3);
				}
				return decimalValue;
			}
			else
				throw new InvalidCastException();
		}
		
		// ------------------------------------------------------------------
        /// <summary>This method returns a valid decimal based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The decimal form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetDecimal(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is decimal)
            {
                if (decimal.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Decimal)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid float based on the input object or null.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static string GetFloat(Object inputObject)
		{
			if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
				return "";
			if (inputObject is float)
			{
				if (float.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Float)
				{
					return "";
				}
				return DataHelper.GetString(inputObject, "");
			}
			else
				throw new InvalidCastException();
		}

		// ------------------------------------------------------------------
        /// <summary>This method returns a valid short based on the input object and default value.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The decimal form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetShort(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is short)
            {
                if (short.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Short)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
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
        public static string GetByte(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is byte)
            {
                if (byte.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Byte)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid binary based on the input object and default value.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <param name="defaultValue">The default value incase of converstion failure</param>
		/// <returns>The decimal form of the object</returns>
		// ------------------------------------------------------------------
		public static string GetBinary(Object inputObject)
		{
			// not really supported now
			return "";
		}
		// ------------------------------------------------------------------
        /// <summary>This method returns a valid guid based on the input object and default value.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The decimal form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetGuid(object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is Guid)
            {
                if ((Guid)inputObject == MOD.Data.DefaultValue.Guid)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }

        // ------------------------------------------------------------------
        /// <summary>This method returns a valid int based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <returns>The int form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetInt(object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is int)
            {
                if (int.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Int || int.Parse(inputObject.ToString()) == (int)MOD.Data.Lists.ListDefaultSelection.Any || int.Parse(inputObject.ToString()) == (int)MOD.Data.Lists.ListDefaultSelection.None)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }

        // ------------------------------------------------------------------
        /// <summary>This method returns a valid string based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <returns>The int form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetString(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is string)
            {
                if (inputObject.ToString() == MOD.Data.DefaultValue.String)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }

		// ------------------------------------------------------------------
		/// <summary>This method returns a valid string based on the input object or null.</summary>
		/// 
		/// <param name="inputObject">The object to be converted</param>
		/// <returns>The int form of the object</returns>
		// ------------------------------------------------------------------
		public static string EncodeStringForDB(Object inputObject)
		{
			// TODO: determine level of encoding
			string inputString = DataHelper.GetString(inputObject, String.Empty);
			return inputString;
		}

		// ------------------------------------------------------------------
        /// <summary>This method returns a valid long based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <returns>The int form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetLong(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is long)
            {
                if (long.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Long)
                {
                    return "";
                }
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }


        // ------------------------------------------------------------------
        /// <summary>This method returns a valid bool based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <returns>The int form of the object</returns>
        // ------------------------------------------------------------------
        public static string GetBool(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return "";
            if (inputObject is bool)
            {
                return DataHelper.GetString(inputObject, "");
            }
            else
                throw new InvalidCastException();
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// This method parses an input string into a guid value.
        /// If the string is in an invalid format, then false is returned.
        /// </summary>
        // ------------------------------------------------------------------------------
        public static bool TryParseGuid(string inputValue, out Guid outputValue)
        {
            try
            {
                outputValue = new Guid(inputValue);
                return true;
            }
            catch
            {
                outputValue = Guid.Empty;
                return false;
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// This method parses an input string into a nullable long value.
        /// If the string is in an invalid format, then false is returned.
        /// </summary>
        // ------------------------------------------------------------------------------
        public static bool TryParseNullableLong(string inputValue, out long? outputValue)
        {
            outputValue = null;
            if (inputValue.Trim().Length > 0)
            {
                long parsedValue;
                if (!long.TryParse(inputValue.Trim(), out parsedValue))
                {
                    return false;
                }
                outputValue = parsedValue;
            }
            return true;
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// This method parses an input string into a nullable DateTime value.
        /// If the string is in an invalid format, then false is returned.
        /// </summary>
        // ------------------------------------------------------------------------------
        public static bool TryParseNullableDateTime(string inputValue, out DateTime? outputValue)
        {
            outputValue = null;
            if (inputValue.Trim().Length > 0)
            {
                DateTime parsedValue;
                if (!DateTime.TryParse(inputValue.Trim(), out parsedValue))
                {
                    return false;
                }
                outputValue = parsedValue;
            }
            return true;
        }

    }
}
