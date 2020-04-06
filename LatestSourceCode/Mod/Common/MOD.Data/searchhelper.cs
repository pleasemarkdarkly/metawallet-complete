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
    public class SearchHelper
    {
		//------------------------------------------------------------------
		/// <summary>
		/// SQL server has four characters with special meaning in
		/// the context of searches. As we don't want users to be able
		/// to introduce them, we need to treat them as literals.
		/// 
		/// The four cases are: 
		/// '_' and '%' (wildcards)
		/// '[(foo)]' and [^(foo)] (search ranges and negation of search ranges)
		/// </summary>
		//------------------------------------------------------------------
		public static string ReplaceSpecialSQLSearchChars(string search_string)
		{
			if (search_string != null && search_string != String.Empty)
			{
				// Do bracket replacement first, as to not intoduce extra 
				// work for next steps. Negeation of search ranges can be disregarded
				// since removing search ranges turns the ^ into a normal character.
                search_string = search_string.Replace("[", "[[]");

				// remove wildcards
                search_string = search_string.Replace("_", "[_]").Replace("%", "[%]");
			}

			return search_string;
		}
		
		//------------------------------------------------------------------
        /// <summary>This method returns a valid date based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The decimal form of the object</returns>
        // ------------------------------------------------------------------
        public static DateTime? GetDateTime(object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            
            if (inputObject is DateTime || inputObject is string)
            {
                DateTime date = MOD.Data.DefaultValue.DateTime;

                try
                {
                    date = DateTime.Parse(inputObject.ToString());
                }
                catch (FormatException)
                {
                    return null;
                }

                if (date == MOD.Data.DefaultValue.DateTime)
                    return null;
                
                return date;
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
        public static decimal? GetDecimal(Object inputObject) 
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            if (inputObject is decimal || inputObject is string)
            {
                if (decimal.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Decimal)
                {
                    return null;
                }
                return decimal.Parse(inputObject.ToString());
            }
            else
                throw new InvalidCastException();
        }
      public static float? GetFloat(Object inputObject)
      {
        if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
          return null;
        if (inputObject is float || inputObject is string)
        {
          if (float.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Float)
          {
            return null;
          }
          return float.Parse(inputObject.ToString());
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
        public static short? GetShort(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            if (inputObject is short || inputObject is string)
            {
                if (short.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Short)
                {
                    return null;
                }
                return short.Parse(inputObject.ToString());
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
        public static byte? GetByte(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            if (inputObject is byte || inputObject is string)
            {
                if (byte.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Byte)
                {
                    return null;
                }
                return byte.Parse(inputObject.ToString());
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
		public static byte[] GetBinary(Object inputObject)
		{
			// not supported right now
			return null;
		}

		// ------------------------------------------------------------------
        /// <summary>This method returns a valid guid based on the input object and default value.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <param name="defaultValue">The default value incase of converstion failure</param>
        /// <returns>The decimal form of the object</returns>
        // ------------------------------------------------------------------
        public static Guid? GetGuid(object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            if (inputObject is Guid)
            {
                if ((Guid) inputObject == MOD.Data.DefaultValue.Guid)
                {
                    return null;
                }
                return (Guid) inputObject;
            }
			else if (inputObject is string)
			{
				GuidConverter guidC = new GuidConverter();
				Guid guidID = (Guid)guidC.ConvertFromString((string) inputObject);
				if (guidID == MOD.Data.DefaultValue.Guid)
				{
					return null;
				}
				return guidID;
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
        public static int? GetInt(object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            if (inputObject is int || inputObject is string)
            {
                if (int.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Int || int.Parse(inputObject.ToString()) == (int)MOD.Data.Lists.ListDefaultSelection.Any || int.Parse(inputObject.ToString()) == (int)MOD.Data.Lists.ListDefaultSelection.None)
                {
                    return null;
                }
                return int.Parse(inputObject.ToString());
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
                return null;
            if (inputObject is string)
            {
                if (inputObject.ToString() == MOD.Data.DefaultValue.String)
                {
                    return null;
                }
                return inputObject.ToString();
            }
            else
                throw new InvalidCastException();
        }

        // ------------------------------------------------------------------
        /// <summary>This method returns a valid long based on the input object or null.</summary>
        /// 
        /// <param name="inputObject">The object to be converted</param>
        /// <returns>The int form of the object</returns>
        // ------------------------------------------------------------------
        public static long? GetLong(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            if (inputObject is long || inputObject is string)
            {
                if (long.Parse(inputObject.ToString()) == MOD.Data.DefaultValue.Long)
                {
                    return null;
                }
                return long.Parse(inputObject.ToString());
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
        public static bool? GetBool(Object inputObject)
        {
            if (inputObject == null || inputObject.ToString().Trim() == string.Empty)
                return null;
            if (inputObject is bool || inputObject is string)
            {
                return bool.Parse(inputObject.ToString());
            }
            else
                throw new InvalidCastException();
        }

    }
}
