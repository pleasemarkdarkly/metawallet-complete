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
using MOD.Data;
using MOD.Exceptions;

namespace MOD.Test
{
	public static class UnitTestHelper
	{
		#region Randomizer properties/methods
		private static Random _random = null;
		public static Random Randomizer
		{
			get
			{
				if (_random == null)
				{
					_random = new Random((int)DateTime.Now.Ticks);
				}
				return _random;
			}
		}

		public static void SeedRandom(int ticks)
		{
			_random = new Random(ticks);
		}
		#endregion

		#region ValuePool property/methods
		private static object[] _valuePool = null;
		public static object[] ValuePool
		{
			get
			{
				if (_valuePool == null)
				{
					_valuePool = new object[] { };
				}
				return _valuePool;
			}
		}

		public static void SeedValuePool(object[] valueList)
		{
			int len = valueList.Length;
			_valuePool = new object[len];
			for (int idx = 0; idx < len; idx++)
			{
				_valuePool[idx] = valueList[idx];
			}
		}

		public static void SeedValuePool(NamedObjectCollection noc)
		{
			int len = noc.Count;
			_valuePool = new object[len];
			for (int idx = 0; idx < len; idx++)
			{
				_valuePool[idx] = noc[idx];
			}
		}

		#endregion

		#region ValueCollection property/methods
		private static NamedObjectCollection _valueCollection = null;
		public static NamedObjectCollection ValueCollection
		{
			get
			{
				if (_valueCollection == null)
				{
					_valueCollection = new NamedObjectCollection();
				}
				return _valueCollection;
			}
		}

		public static void SeedValueCollection(object[] valueList)
		{
			int len = valueList.Length;
			_valueCollection = new NamedObjectCollection();
			for (int idx = 0; idx < len; idx++)
			{
				_valueCollection[idx] = valueList[idx];
			}
		}

		public static void SeedValueCollection(NamedObjectCollection noc)
		{
			_valueCollection = new NamedObjectCollection();
			noc.CopyTo(_valueCollection);
		}
		#endregion

        #region Test Error/Failure/Performance helper methods
        public static string GetUnitTestErrorTypeString(UnitTestErrorType errType)
		{
			switch (errType)
			{
                case UnitTestErrorType.Info:
                    return "Information";

				case UnitTestErrorType.Warning:
					return "Warning";

				case UnitTestErrorType.Validation:
					return "Validation error";

				case UnitTestErrorType.Performance:
					return "Performance error";

				case UnitTestErrorType.Functional:
					return "Functional error";

				default:
					return "Unknown error";
			}
        }

        public static string GetUnitTestPerformanceLevelString(UnitTestPerformanceLevel perfLevel)
        {
            switch (perfLevel)
            {
                case UnitTestPerformanceLevel.Good:
                    return "Good performance";

                case UnitTestPerformanceLevel.Fair:
                    return "Fair performance";

                case UnitTestPerformanceLevel.Tolerable:
                    return "Tolerable performance";

                case UnitTestPerformanceLevel.Annoying:
                    return "Annoying performance";

                case UnitTestPerformanceLevel.Painful:
                    return "Painful performance";

                case UnitTestPerformanceLevel.Unacceptable:
                    return "Unacceptable performance";
                
                default:
                    return "Unknown performance rating";
            }
        }       

        // ------------------------------------------------------------------
		/// <summary>This method returns the suggested failure level for a
		/// test error type.  Test workflows determine success or abort conditions
		/// and may otherwise override this mapping.</summary>
		/// 
		/// <param name="errType">The test error type.</param>
		/// <returns>The failure level.</returns>
		// ------------------------------------------------------------------
        public static UnitTestFailureLevel GetUnitTestFailureLevelForErrorType(UnitTestErrorType errType)
		{
			switch (errType)
			{
                case UnitTestErrorType.Info:
                    return UnitTestFailureLevel.Success;
				case UnitTestErrorType.Warning:
				case UnitTestErrorType.Validation:
				case UnitTestErrorType.Performance:
                    return UnitTestFailureLevel.Warning;
				case UnitTestErrorType.Functional:
                    return UnitTestFailureLevel.Error;
				default:
                    return UnitTestFailureLevel.None;
			}
        }

        // ------------------------------------------------------------------
        /// <summary>This method returns the suggested test error type for an integration
        /// test performance level.  Integration test workflows determine success or abort conditions
        /// and may otherwise override this mapping.</summary>
        /// 
        /// <param name="perfLevel">The integration test performance level.</param>
        /// <returns>The test error type.</returns>
        // ------------------------------------------------------------------
        public static UnitTestErrorType GetUnitTestErrorTypeForPerformanceLevel(UnitTestPerformanceLevel perfLevel)
        {
            switch (perfLevel)
            {
                case UnitTestPerformanceLevel.Good:
                case UnitTestPerformanceLevel.Fair:
                case UnitTestPerformanceLevel.Tolerable:
                    return UnitTestErrorType.Info;
                case UnitTestPerformanceLevel.Annoying:
                case UnitTestPerformanceLevel.Painful:
                case UnitTestPerformanceLevel.Unacceptable:
                    return UnitTestErrorType.Performance;
                default:
                    return UnitTestErrorType.Unknown;
            }
        }

        public static UnitTestPerformanceLevel GetPerformanceLevelFromTime(double actualTime, double[] timeLevels)
        {
            if (timeLevels == null)
            {
                throw new ArgumentException("GetPerformanceLevelFromTime: time levels list is null.");
            }

            if (timeLevels.Length < ((int)UnitTestPerformanceLevel.PerformanceLevelCount - 1))
            {
                throw new ArgumentException("GetPerformanceLevelFromTime: time levels list is smaller than total number of performance levels minus one (last value is implied infinity).");
            }
            
            int iLeftIndex = 0;
            int iRightIndex = (int)UnitTestPerformanceLevel.PerformanceLevelCount - 2;
            
            if (actualTime < timeLevels[iLeftIndex])
            {
                return UnitTestPerformanceLevel.Good;
            }

            if (actualTime > timeLevels[iRightIndex])
            {
                return UnitTestPerformanceLevel.Unacceptable;
            }

            int iCurIndex = 0;
            while ((iRightIndex - iLeftIndex) > 1)
            {
                iCurIndex = (iLeftIndex + iRightIndex) / 2;
                if (actualTime > timeLevels[iCurIndex])
                {
                    iLeftIndex = iCurIndex;
                }
                else
                {
                    iRightIndex = iCurIndex;
                }
            }

            return (UnitTestPerformanceLevel)(iRightIndex + 1);           
        }

        // ------------------------------------------------------------------
        /// <summary>This method writes the object value to the console prefixed by a message.</summary>
        /// 
        /// <returns>nothing</returns>
        // ------------------------------------------------------------------

        public static void ReportValueToConsole(string msg, object o)
        {
            string line = msg + ": ";
            if (o == null)
            {
                line += "null";
            }
            else
            {
                line += o;
            }

            Console.WriteLine(line);
        }

        #endregion
        
        #region Get Object From Pool Methods
        // main method for retrieving object from a defined pool (object array), whether by index or randomly
		private static object GetObjectFromDefinedPool(int? index, object[] pool)
		{
			int len = pool.Length;
			if (len == 0)
			{
				throw new InvalidOperationException("GetObjectFromDefinedPool cannot retrieve value from empty value pool.");
			}

			// If index is specified, retrieve object by index
			if (index != null)
			{
				int i = (int)index;

				if (i < 0)
				{
					throw new ArgumentException("GetObjectFromDefinedPool cannot retrieve value using a negative index.");
				}

				if (i >= len)
				{
					throw new ArgumentException("GetObjectFromDefinedPool cannot retrieve value with index value " + index.ToString() + ". Index is greater than value pool length " + len.ToString() + ".");
				}

				return pool[i];
			}

			// if not index is provided, return a random object from the array
			return pool[GetInt(0, len - 1)];
		}

		// wrapper method for main pool object retrieval, where user can supply a custom object array as a pool to choose from, or assign null if user wants to use internal ValuePool property
		public static object GetObjectFromPool(int? index, object[] customPool)
		{
			object[] pool;
			if (customPool != null)
			{
				pool = customPool;
			}
			else
			{
				pool = ValuePool;
			}

			return GetObjectFromDefinedPool(index, pool);
		}

		// wrapper method for main pool object retrieval, where user can supply a string key for the internal ValueCollection property to retrieve an object array, and choose a value from this pool
		public static object GetObjectFromPool(int? index, string poolKey)
		{
			if (poolKey == null)
			{
				throw new ArgumentException("GetObjectFromPool[int?,string] was passed a null key string parameter.");
			}

			// get object to which the pool key refers
			object boxedPool = GetObjectFromCollection(poolKey);

			// attempt to unbox object as a pool i.e. object array
			object[] pool = null;
			try
			{
				pool = (object[])boxedPool;
			}
			catch (InvalidCastException)
			{
				// unboxing failed
				pool = null;
			}

			// call the custom pool variant of this method if we successfully unboxed a pool
			if (pool != null)
			{
				return GetObjectFromPool(index, pool);
			}

			// return null if we failed to unbox the object retrieved
			return null;
		}

		public static object GetNullableObjectFromPool(int? index, object[] customPool, float probability)
		{
			if (((float)Randomizer.NextDouble()) < probability)
			{
				return GetObjectFromPool(index, customPool);
			}

			return null;
		}

		public static object GetNullableObjectFromPool(int? index, string poolKey, float probability)
		{
			if (((float)Randomizer.NextDouble()) < probability)
			{
				return GetObjectFromPool(index, poolKey);
			}

			return null;
		}
		#endregion

		#region Get Object From Collection Methods
        // ------------------------------------------------------------------
        /// <summary>This method returns a string from an input object, and
        /// guarantees that the return is not null.  If it gets a null input object,
        /// it returns "null [N]" where [N] is the index. Otherwise, it just returns
        /// the object string image as it was.</summary>
        /// 
        /// <param name="obj">Input object.</param>
        /// <param name="index">Unique index</param>
        /// <returns>The string key.</returns>
        // ------------------------------------------------------------------        
        public static string GetStringKeyFromObject(object obj, int index)
        {
            if (obj == null)
            {
                return "(null " + index.ToString() + ")";
            }

            return obj.ToString();
        }

		public static object GetObjectFromCollection(int? index, NamedObjectCollection noc)
		{
			if (noc == null)
			{
				throw new ArgumentException("GetObjectFromCollection[int?] got passed a null value collection.");
			}

			int len = noc.Count;
			if (len == 0)
			{
				throw new InvalidOperationException("GetObjectFromCollection[int?] cannot retrieve value from empty value collection.");
			}

			int i = 0;

			if (index != null)
			{
				i = (int)index;

				if (i < 0)
				{
					throw new ArgumentException("GetObjectFromCollection[int?] cannot retrieve value using a negative index.");
				}

				if (i >= len)
				{
					throw new ArgumentException("GetObjectFromCollection[int?] cannot retrieve value with index value " + index.ToString() + ". Index is greater than value pool length " + len.ToString() + ".");
				}
			}
			else
			{
				i = GetInt(0, len - 1);
			}

			return noc[i];
		}

		public static object GetObjectFromCollection(string key, NamedObjectCollection noc)
		{
			if (noc == null)
			{
				throw new ArgumentException("GetObjectFromCollection[string] got passed a null value collection.");
			}

			int len = noc.Count;
			if (len == 0)
			{
				throw new InvalidOperationException("GetObjectFromCollection[string] cannot retrieve value from empty value collection.");
			}

			object result = noc[key];

			if (result == null)
			{
				throw new InvalidOperationException("GetObjectFromCollection[string] returned a null value.");
			}

			return result;
		}

		public static object GetObjectFromCollection(int? index)
		{
			return GetObjectFromCollection(index, ValueCollection);
		}

		public static object GetObjectFromCollection(string key)
		{
			return GetObjectFromCollection(key, ValueCollection);
		}

		public static object GetNullableObjectFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			if (((float)Randomizer.NextDouble()) < probability)
			{
				return GetObjectFromCollection(index, noc);
			}

			return null;
		}

		public static object GetNullableObjectFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			if (((float)Randomizer.NextDouble()) < probability)
			{
				return GetObjectFromCollection(key, noc);
			}

			return null;
		}

		public static object GetNullableObjectFromCollection(int? index, float probability)
		{
			if (((float)Randomizer.NextDouble()) < probability)
			{
				return GetObjectFromCollection(index);
			}

			return null;
		}

		public static object GetNullableObjectFromCollection(string key, float probability)
		{
			if (((float)Randomizer.NextDouble()) < probability)
			{
				return GetObjectFromCollection(key);
			}

			return null;
		}
		#endregion

        #region Get DateTime Methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random DateTime value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static DateTime GetDateTime(DateTime? minValue, DateTime? maxValue)
		{
			DateTime minDate = new DateTime(1754, 1, 1);
			if (minValue == null || minValue < minDate)
			{
				minValue = minDate;
			}
			if (maxValue == null || maxValue > DateTime.MaxValue)
			{
				maxValue = DateTime.MaxValue;
			}

			return new DateTime(((DateTime)minValue).Ticks + (long)(Randomizer.NextDouble() * (((DateTime)maxValue).Ticks - ((DateTime)minValue).Ticks)));
		}
		public static DateTime? GetNullableDateTime(DateTime? minValue, DateTime? maxValue)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetDateTime(minValue, maxValue);
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random DateTime value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static DateTime GetDateTime(DateTime? minValue, DateTime? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			DateTime value = DateTime.Now;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (DateTime)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetDateTime(minValue, maxValue);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetDateTime(minValue, maxValue);
			}
			return value;
		}
		public static DateTime? GetNullableDateTime(DateTime? minValue, DateTime? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetDateTime(minValue, maxValue, setValues, percentageFromSetValues, out setValueUsed);
		}

        private static DateTime GetDateTimeFromObject(object o)
        {
            if (o == null)
            {
                throw new ArgumentException("GetDateTimeFromObject was passed a null object parameter.");
            }

            DateTime result;

            try
            {
                result = (DateTime)o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetDateTimeFromObject could not convert from object parameter.");
            }

            return result;
        }

        private static DateTime? GetNullableDateTimeFromNullableObject(object o)
        {
            if (o == null)
            {
                return null;
            }

            DateTime result;

            try
            {
                result = (DateTime)o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetNullableDateTimeFromNullableObject could not convert from object parameter.");
            }

            return result;
        }

        public static DateTime GetDateTimeFromPool(int? index, object[] customPool)
        {
            return GetDateTimeFromObject(GetObjectFromPool(index, customPool));
        }

        public static DateTime GetDateTimeFromPool(int? index, string poolKey)
        {
            return GetDateTimeFromObject(GetObjectFromPool(index, poolKey));
        }

        public static DateTime? GetNullableDateTimeFromPool(int? index, object[] customPool, float probability)
        {
            return GetNullableDateTimeFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
        }

        public static DateTime? GetNullableDateTimeFromPool(int? index, string poolKey, float probability)
        {
            return GetNullableDateTimeFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
        }

        public static DateTime GetDateTimeFromCollection(int index, NamedObjectCollection noc)
        {
            return GetDateTimeFromObject(GetObjectFromCollection(index, noc));
        }

        public static DateTime GetDateTimeFromCollection(string key, NamedObjectCollection noc)
        {
            return GetDateTimeFromObject(GetObjectFromCollection(key, noc));
        }

        public static DateTime GetDateTimeFromCollection(int index)
        {
            return GetDateTimeFromObject(GetObjectFromCollection(index));
        }

        public static DateTime GetDateTimeFromCollection(string key)
        {
            return GetDateTimeFromObject(GetObjectFromCollection(key));
        }

        public static DateTime? GetNullableDateTimeFromCollection(int? index, NamedObjectCollection noc, float probability)
        {
            return GetNullableDateTimeFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
        }

        public static DateTime? GetNullableDateTimeFromCollection(string key, NamedObjectCollection noc, float probability)
        {
            return GetNullableDateTimeFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
        }

        public static DateTime? GetNullableDateTimeFromCollection(int? index, float probability)
        {
            return GetNullableDateTimeFromNullableObject(GetNullableObjectFromCollection(index, probability));
        }

        public static DateTime? GetNullableDateTimeFromCollection(string key, float probability)
        {
            return GetNullableDateTimeFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }

        // ------------------------------------------------------------------
        /// <summary>This method converts ticks to seconds.</summary>
        /// 
        /// <param name="tickInterval">The number of ticks to be converted to seconds.</param>
        /// <returns>A double representing the number of seconds this tick interval equates.</returns>
        // ------------------------------------------------------------------
        public static double GetSecondsFromTicks(long tickInterval)
        {
            // a tick of 100 nanoseconds, which is 10^(-7) seconds (or one tenth of a microsecond)
            return tickInterval * 0.0000001;
        }

        #endregion

        #region Get demical methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random decimal value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static decimal GetDecimal(decimal? minValue, decimal? maxValue)
		{
			decimal outputValue = DefaultValue.Decimal;
			if (minValue == null || minValue < decimal.MinValue)
			{
				minValue = decimal.MinValue;
			}
			if (maxValue == null || maxValue > decimal.MaxValue)
			{
				maxValue = decimal.MaxValue;
			}
			if (Randomizer.Next(0, 1000) > 500)
			{
				// get negative value
				outputValue = ((decimal)Randomizer.NextDouble()) * (decimal)minValue;
			}
			else
			{
				// get positive value
				outputValue = ((decimal)Randomizer.NextDouble()) * (decimal)maxValue;
			}
			return outputValue;
		}
		public static decimal? GetNullableDecimal(decimal? minValue, decimal? maxValue)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetDecimal(minValue, maxValue);
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random decimal value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static decimal GetDecimal(decimal? minValue, decimal? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			decimal value = 0;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (decimal)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetDecimal(minValue, maxValue);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetDecimal(minValue, maxValue);
			}
			return value;
		}
		public static decimal? GetNullableGetDecimal(decimal? minValue, decimal? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetDecimal(minValue, maxValue, setValues, percentageFromSetValues, out setValueUsed);
		}

		private static decimal GetDecimalFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetDecimalFromObject was passed a null object parameter.");
			}

			decimal result;

			try
			{
				result = (decimal)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetDecimalFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static decimal? GetNullableDecimalFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			decimal result;

			try
			{
				result = (decimal)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableDecimalFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static decimal GetDecimalFromPool(int? index, object[] customPool)
		{
			return GetDecimalFromObject(GetObjectFromPool(index, customPool));
		}

		public static decimal GetDecimalFromPool(int? index, string poolKey)
		{
			return GetDecimalFromObject(GetObjectFromPool(index, poolKey));
		}

		public static decimal? GetNullableDecimalFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableDecimalFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static decimal? GetNullableDecimalFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableDecimalFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static decimal GetDecimalFromCollection(int index, NamedObjectCollection noc)
		{
			return GetDecimalFromObject(GetObjectFromCollection(index, noc));
		}

		public static decimal GetDecimalFromCollection(string key, NamedObjectCollection noc)
		{
			return GetDecimalFromObject(GetObjectFromCollection(key, noc));
		}

		public static decimal GetDecimalFromCollection(int index)
		{
			return GetDecimalFromObject(GetObjectFromCollection(index));
		}

		public static decimal GetDecimalFromCollection(string key)
		{
			return GetDecimalFromObject(GetObjectFromCollection(key));
		}

		public static decimal? GetNullableDecimalFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableDecimalFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static decimal? GetNullableDecimalFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableDecimalFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static decimal? GetNullableDecimalFromCollection(int? index, float probability)
		{
			return GetNullableDecimalFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static decimal? GetNullableDecimalFromCollection(string key, float probability)
		{
			return GetNullableDecimalFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get float methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random float value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static float GetFloat(float? minValue, float? maxValue)
		{
			float outputValue = DefaultValue.Float;
			if (minValue == null || minValue < float.MinValue)
			{
				minValue = float.MinValue;
			}
			if (maxValue == null || maxValue > float.MaxValue)
			{
				maxValue = float.MaxValue;
			}
			if (Randomizer.Next(0, 1000) > 500)
			{
				// get negative value
				outputValue = ((float)Randomizer.NextDouble()) * (float)minValue;
			}
			else
			{
				// get positive value
				outputValue = ((float)Randomizer.NextDouble()) * (float)maxValue;
			}
			return outputValue;
		}
		public static float? GetNullableFloat(float? minValue, float? maxValue)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetFloat(minValue, maxValue);
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random float value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static float GetFloat(float? minValue, float? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			float value = 0;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (float)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetFloat(minValue, maxValue);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetFloat(minValue, maxValue);
			}
			return value;
		}
		public static float? GetNullableFloat(float? minValue, float? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetFloat(minValue, maxValue, setValues, percentageFromSetValues, out setValueUsed);
		}

		private static float GetFloatFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetFloatFromObject was passed a null object parameter.");
			}

			float result;

			try
			{
				result = (float)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetFloatFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static float? GetNullableFloatFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			float result;

			try
			{
				result = (float)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableFloatFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static float GetFloatFromPool(int? index, object[] customPool)
		{
			return GetFloatFromObject(GetObjectFromPool(index, customPool));
		}

		public static float GetFloatFromPool(int? index, string poolKey)
		{
			return GetFloatFromObject(GetObjectFromPool(index, poolKey));
		}

		public static float? GetNullableFloatFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableFloatFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static float? GetNullableFloatFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableFloatFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static float GetFloatFromCollection(int index, NamedObjectCollection noc)
		{
			return GetFloatFromObject(GetObjectFromCollection(index, noc));
		}

		public static float GetFloatFromCollection(string key, NamedObjectCollection noc)
		{
			return GetFloatFromObject(GetObjectFromCollection(key, noc));
		}

		public static float GetFloatFromCollection(int index)
		{
			return GetFloatFromObject(GetObjectFromCollection(index));
		}

		public static float GetFloatFromCollection(string key)
		{
			return GetFloatFromObject(GetObjectFromCollection(key));
		}

		public static float? GetNullableFloatFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableFloatFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static float? GetNullableFloatFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableFloatFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static float? GetNullableFloatFromCollection(int? index, float probability)
		{
			return GetNullableFloatFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static float? GetNullableFloatFromCollection(string key, float probability)
		{
			return GetNullableFloatFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get byte methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random byte value.</summary>
		/// 
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static byte GetByte()
		{
			byte[] buffer = new byte[1];
			Randomizer.NextBytes(buffer);
			return buffer[0];
		}
		public static byte? GetNullableByte()
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetByte();
		}

        private static byte GetByteFromObject(object o)
        {
            if (o == null)
            {
                throw new ArgumentException("GetByteFromObject was passed a null object parameter.");
            }

            byte result;

            try
            {
                result = (byte)o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetByteFromObject could not convert from object parameter.");
            }

            return result;
        }

        private static byte? GetNullableByteFromNullableObject(object o)
        {
            if (o == null)
            {
                return null;
            }

            byte result;

            try
            {
                result = (byte)o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetNullableByteFromNullableObject could not convert from object parameter.");
            }

            return result;
        }

        public static byte GetByteFromPool(int? index, object[] customPool)
        {
            return GetByteFromObject(GetObjectFromPool(index, customPool));
        }

        public static byte GetByteFromPool(int? index, string poolKey)
        {
            return GetByteFromObject(GetObjectFromPool(index, poolKey));
        }

        public static byte? GetNullableByteFromPool(int? index, object[] customPool, float probability)
        {
            return GetNullableByteFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
        }

        public static byte? GetNullableByteFromPool(int? index, string poolKey, float probability)
        {
            return GetNullableByteFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
        }

        public static byte GetByteFromCollection(int index, NamedObjectCollection noc)
        {
            return GetByteFromObject(GetObjectFromCollection(index, noc));
        }

        public static byte GetByteFromCollection(string key, NamedObjectCollection noc)
        {
            return GetByteFromObject(GetObjectFromCollection(key, noc));
        }

        public static byte GetByteFromCollection(int index)
        {
            return GetByteFromObject(GetObjectFromCollection(index));
        }

        public static byte GetByteFromCollection(string key)
        {
            return GetByteFromObject(GetObjectFromCollection(key));
        }

        public static byte? GetNullableByteFromCollection(int? index, NamedObjectCollection noc, float probability)
        {
            return GetNullableByteFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
        }

        public static byte? GetNullableByteFromCollection(string key, NamedObjectCollection noc, float probability)
        {
            return GetNullableByteFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
        }

        public static byte? GetNullableByteFromCollection(int? index, float probability)
        {
            return GetNullableByteFromNullableObject(GetNullableObjectFromCollection(index, probability));
        }

        public static byte? GetNullableByteFromCollection(string key, float probability)
        {
            return GetNullableByteFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get Binary methods (byte array)
        // ------------------------------------------------------------------
		/// <summary>This method returns a random array of byte values.</summary>
		/// 
		/// <param name="bufferSize">The size of bytes to return.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static byte[] GetBinary(int bufferSize)
		{
			byte[] buffer = new byte[bufferSize];
			Randomizer.NextBytes(buffer);
			return buffer;
		}

        private static byte[] GetBinaryFromObject(object o)
        {
            if (o == null)
            {
                throw new ArgumentException("GetBinaryFromObject was passed a null object parameter.");
            }

            byte[] result;

            try
            {
                result = (byte[])o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetBinaryFromObject could not convert from object parameter.");
            }

            return result;
        }

        private static byte[] GetNullableBinaryFromNullableObject(object o)
        {
            if (o == null)
            {
                return null;
            }

            byte[] result;

            try
            {
                result = (byte[])o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetNullableBinaryFromNullableObject could not convert from object parameter.");
            }

            return result;
        }

        public static byte[] GetBinaryFromPool(int? index, object[] customPool)
        {
            return GetBinaryFromObject(GetObjectFromPool(index, customPool));
        }

        public static byte[] GetBinaryFromPool(int? index, string poolKey)
        {
            return GetBinaryFromObject(GetObjectFromPool(index, poolKey));
        }

        public static byte[] GetNullableBinaryFromPool(int? index, object[] customPool, float probability)
        {
            return GetNullableBinaryFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
        }

        public static byte[] GetNullableBinaryFromPool(int? index, string poolKey, float probability)
        {
            return GetNullableBinaryFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
        }

        public static byte[] GetBinaryFromCollection(int index, NamedObjectCollection noc)
        {
            return GetBinaryFromObject(GetObjectFromCollection(index, noc));
        }

        public static byte[] GetBinaryFromCollection(string key, NamedObjectCollection noc)
        {
            return GetBinaryFromObject(GetObjectFromCollection(key, noc));
        }

        public static byte[] GetBinaryFromCollection(int index)
        {
            return GetBinaryFromObject(GetObjectFromCollection(index));
        }

        public static byte[] GetBinaryFromCollection(string key)
        {
            return GetBinaryFromObject(GetObjectFromCollection(key));
        }

        public static byte[] GetNullableBinaryFromCollection(int? index, NamedObjectCollection noc, float probability)
        {
            return GetNullableBinaryFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
        }

        public static byte[] GetNullableBinaryFromCollection(string key, NamedObjectCollection noc, float probability)
        {
            return GetNullableBinaryFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
        }

        public static byte[] GetNullableBinaryFromCollection(int? index, float probability)
        {
            return GetNullableBinaryFromNullableObject(GetNullableObjectFromCollection(index, probability));
        }

        public static byte[] GetNullableBinaryFromCollection(string key, float probability)
        {
            return GetNullableBinaryFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get Guid methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random Guid value.</summary>
		/// 
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static Guid GetGuid()
		{
			return Guid.NewGuid();
		}
		public static Guid? GetNullableGuid()
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetGuid();
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random Guid value.</summary>
		/// 
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static Guid GetGuid(NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			Guid value = Guid.Empty;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (Guid)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetGuid();
				}
			}
			else
			{
				setValueUsed = false;
				value = GetGuid();
			}
			return value;
		}
		public static Guid? GetNullableGuid(NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetGuid(setValues, percentageFromSetValues, out setValueUsed);
		}

        private static Guid GetGuidFromObject(object o)
        {
            if (o == null)
            {
                throw new ArgumentException("GetGuidFromObject was passed a null object parameter.");
            }

            Guid result;

            try
            {
                result = (Guid)o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetGuidFromObject could not convert from object parameter.");
            }

            return result;
        }

        private static Guid? GetNullableGuidFromNullableObject(object o)
        {
            if (o == null)
            {
                return null;
            }

            Guid result;

            try
            {
                result = (Guid)o;
            }
            catch (InvalidCastException)
            {
                throw new InvalidOperationException("GetNullableGuidFromNullableObject could not convert from object parameter.");
            }

            return result;
        }

        public static Guid GetGuidFromPool(int? index, object[] customPool)
        {
            return GetGuidFromObject(GetObjectFromPool(index, customPool));
        }

        public static Guid GetGuidFromPool(int? index, string poolKey)
        {
            return GetGuidFromObject(GetObjectFromPool(index, poolKey));
        }

        public static Guid? GetNullableGuidFromPool(int? index, object[] customPool, float probability)
        {
            return GetNullableGuidFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
        }

        public static Guid? GetNullableGuidFromPool(int? index, string poolKey, float probability)
        {
            return GetNullableGuidFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
        }

        public static Guid GetGuidFromCollection(int index, NamedObjectCollection noc)
        {
            return GetGuidFromObject(GetObjectFromCollection(index, noc));
        }

        public static Guid GetGuidFromCollection(string key, NamedObjectCollection noc)
        {
            return GetGuidFromObject(GetObjectFromCollection(key, noc));
        }

        public static Guid GetGuidFromCollection(int index)
        {
            return GetGuidFromObject(GetObjectFromCollection(index));
        }

        public static Guid GetGuidFromCollection(string key)
        {
            return GetGuidFromObject(GetObjectFromCollection(key));
        }

        public static Guid? GetNullableGuidFromCollection(int? index, NamedObjectCollection noc, float probability)
        {
            return GetNullableGuidFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
        }

        public static Guid? GetNullableGuidFromCollection(string key, NamedObjectCollection noc, float probability)
        {
            return GetNullableGuidFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
        }

        public static Guid? GetNullableGuidFromCollection(int? index, float probability)
        {
            return GetNullableGuidFromNullableObject(GetNullableObjectFromCollection(index, probability));
        }

        public static Guid? GetNullableGuidFromCollection(string key, float probability)
        {
            return GetNullableGuidFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get int methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random int value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static int GetInt(int? minValue, int? maxValue)
		{
			if (minValue == null || minValue < int.MinValue)
			{
				minValue = int.MinValue;
			}
			if (maxValue == null || maxValue > int.MaxValue)
			{
				maxValue = int.MaxValue;
			}
			return Randomizer.Next((int)minValue, (int)maxValue);
		}
		public static int? GetNullableInt(int? minValue, int? maxValue)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetInt(minValue, maxValue);
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random int value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static int GetInt(int? minValue, int? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			int value = 0;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (int)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetInt(minValue, maxValue);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetInt(minValue, maxValue);
			}
			return value;
		}
		public static int? GetNullableInt(int? minValue, int? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetInt(minValue, maxValue, setValues, percentageFromSetValues, out setValueUsed);
		}


		private static int GetIntFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetIntFromObject was passed a null object parameter.");
			}

			int result;

			try
			{
				result = (int)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetIntFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static int? GetNullableIntFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			int result;

			try
			{
				result = (int)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableIntFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static int GetIntFromPool(int? index, object[] customPool)
		{
			return GetIntFromObject(GetObjectFromPool(index, customPool));
		}

		public static int GetIntFromPool(int? index, string poolKey)
		{
			return GetIntFromObject(GetObjectFromPool(index, poolKey));
		}

		public static int? GetNullableIntFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableIntFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static int? GetNullableIntFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableIntFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static int GetIntFromCollection(int index, NamedObjectCollection noc)
		{
			return GetIntFromObject(GetObjectFromCollection(index, noc));
		}

		public static int GetIntFromCollection(string key, NamedObjectCollection noc)
		{
			return GetIntFromObject(GetObjectFromCollection(key, noc));
		}

		public static int GetIntFromCollection(int index)
		{
			return GetIntFromObject(GetObjectFromCollection(index));
		}

		public static int GetIntFromCollection(string key)
		{
			return GetIntFromObject(GetObjectFromCollection(key));
		}

		public static int? GetNullableIntFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableIntFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static int? GetNullableIntFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableIntFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static int? GetNullableIntFromCollection(int? index, float probability)
		{
			return GetNullableIntFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static int? GetNullableIntFromCollection(string key, float probability)
		{
			return GetNullableIntFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get short methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random short value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static short GetShort(short? minValue, short? maxValue)
		{
			if (minValue == null || minValue < short.MinValue)
			{
				minValue = short.MinValue;
			}
			if (maxValue == null || maxValue > short.MaxValue)
			{
				maxValue = short.MaxValue;
			}
			return (short)Randomizer.Next((int)minValue, (int)maxValue);
		}
		public static short? GetNullableShort(short? minValue, short? maxValue)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetShort(minValue, maxValue);
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random short value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static short GetShort(short? minValue, short? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			short value = 0;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (short)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetShort(minValue, maxValue);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetShort(minValue, maxValue);
			}
			return value;
		}
		public static short? GetNullableShort(short? minValue, short? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetShort(minValue, maxValue, setValues, percentageFromSetValues, out setValueUsed);
		}

		private static short GetShortFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetShortFromObject was passed a null object parameter.");
			}

			short result;

			try
			{
				result = (short)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetShortFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static short? GetNullableShortFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			short result;

			try
			{
				result = (short)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableShortFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static short GetShortFromPool(int? index, object[] customPool)
		{
			return GetShortFromObject(GetObjectFromPool(index, customPool));
		}

		public static short GetShortFromPool(int? index, string poolKey)
		{
			return GetShortFromObject(GetObjectFromPool(index, poolKey));
		}

		public static short? GetNullableShortFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableShortFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static short? GetNullableShortFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableShortFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static short GetShortFromCollection(int index, NamedObjectCollection noc)
		{
			return GetShortFromObject(GetObjectFromCollection(index, noc));
		}

		public static short GetShortFromCollection(string key, NamedObjectCollection noc)
		{
			return GetShortFromObject(GetObjectFromCollection(key, noc));
		}

		public static short GetShortFromCollection(int index)
		{
			return GetShortFromObject(GetObjectFromCollection(index));
		}

		public static short GetShortFromCollection(string key)
		{
			return GetShortFromObject(GetObjectFromCollection(key));
		}

		public static short? GetNullableShortFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableShortFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static short? GetNullableShortFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableShortFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static short? GetNullableShortFromCollection(int? index, float probability)
		{
			return GetNullableShortFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static short? GetNullableShortFromCollection(string key, float probability)
		{
			return GetNullableShortFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get tiny methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random short value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static short GetTiny(short? minValue, short? maxValue)
		{
			if (minValue == null || minValue < 0)
			{
				minValue = 0;
			}
			if (maxValue == null || maxValue > 32)
			{
				maxValue = 32;
			}
			return (short)Randomizer.Next((int)minValue, (int)maxValue);
		}
		public static short? GetNullableTiny(short? minValue, short? maxValue)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetTiny(minValue, maxValue);
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random tiny value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static short GetTiny(short? minValue, short? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			short value = 0;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (short)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetTiny(minValue, maxValue);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetTiny(minValue, maxValue);
			}
			return value;
		}
		public static short? GetNullableTiny(short? minValue, short? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetTiny(minValue, maxValue, setValues, percentageFromSetValues, out setValueUsed);
		}


		private static short GetTinyFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetTinyFromObject was passed a null object parameter.");
			}

			short result;

			try
			{
				result = (short)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetTinyFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static short? GetNullableTinyFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			short result;

			try
			{
				result = (short)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableTinyFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static short GetTinyFromPool(int? index, object[] customPool)
		{
			return GetTinyFromObject(GetObjectFromPool(index, customPool));
		}

		public static short GetTinyFromPool(int? index, string poolKey)
		{
			return GetTinyFromObject(GetObjectFromPool(index, poolKey));
		}

		public static short? GetNullableTinyFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableTinyFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static short? GetNullableTinyFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableTinyFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static short GetTinyFromCollection(int index, NamedObjectCollection noc)
		{
			return GetTinyFromObject(GetObjectFromCollection(index, noc));
		}

		public static short GetTinyFromCollection(string key, NamedObjectCollection noc)
		{
			return GetTinyFromObject(GetObjectFromCollection(key, noc));
		}

		public static short GetTinyFromCollection(int index)
		{
			return GetTinyFromObject(GetObjectFromCollection(index));
		}

		public static short GetTinyFromCollection(string key)
		{
			return GetTinyFromObject(GetObjectFromCollection(key));
		}

		public static short? GetNullableTinyFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableTinyFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static short? GetNullableTinyFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableTinyFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static short? GetNullableTinyFromCollection(int? index, float probability)
		{
			return GetNullableTinyFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static short? GetNullableTinyFromCollection(string key, float probability)
		{
			return GetNullableTinyFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get long methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random long value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static long GetLong(long? minValue, long? maxValue)
		{
			// TODO: extend random values to long
			if (minValue == null || minValue < int.MinValue)
			{
				minValue = int.MinValue;
			}
			if (maxValue == null || maxValue > int.MaxValue)
			{
				maxValue = int.MaxValue;
			}

			return (long)Randomizer.Next((int)minValue, (int)maxValue);
		}
		public static long? GetNullableLong(long? minValue, long? maxValue)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetLong(minValue, maxValue);
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random long value.</summary>
		/// 
		/// <param name="minValue">The minimum value that can be returned.</param>
		/// <param name="maxValue">The maximum value that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static long GetLong(long? minValue, long? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			long value = 0;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (long)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetLong(minValue, maxValue);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetLong(minValue, maxValue);
			}
			return value;
		}
		public static long? GetNullableLong(long? minValue, long? maxValue, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				setValueUsed = false;
				return null;
			}

			return GetLong(minValue, maxValue, setValues, percentageFromSetValues, out setValueUsed);
		}

		private static long GetLongFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetLongFromObject was passed a null object parameter.");
			}

			long result;

			try
			{
				result = (long)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetLongFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static long? GetNullableLongFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			long result;

			try
			{
				result = (long)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableLongFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static long GetLongFromPool(int? index, object[] customPool)
		{
			return GetLongFromObject(GetObjectFromPool(index, customPool));
		}

		public static long GetLongFromPool(int? index, string poolKey)
		{
			return GetLongFromObject(GetObjectFromPool(index, poolKey));
		}

		public static long? GetNullableLongFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableLongFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static long? GetNullableLongFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableLongFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static long GetLongFromCollection(int index, NamedObjectCollection noc)
		{
			return GetLongFromObject(GetObjectFromCollection(index, noc));
		}

		public static long GetLongFromCollection(string key, NamedObjectCollection noc)
		{
			return GetLongFromObject(GetObjectFromCollection(key, noc));
		}

		public static long GetLongFromCollection(int index)
		{
			return GetLongFromObject(GetObjectFromCollection(index));
		}

		public static long GetLongFromCollection(string key)
		{
			return GetLongFromObject(GetObjectFromCollection(key));
		}

		public static long? GetNullableLongFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableLongFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static long? GetNullableLongFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableLongFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static long? GetNullableLongFromCollection(int? index, float probability)
		{
			return GetNullableLongFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static long? GetNullableLongFromCollection(string key, float probability)
		{
			return GetNullableLongFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get string methods
		// ------------------------------------------------------------------
		/// <summary>This method returns a random string with random values.</summary>
		/// 
		/// <param name="minLength">The minimum string size that can be returned.</param>
		/// <param name="maxLength">The maximum string size that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static string GetAlphaNumericString(int? minLength, int? maxLength)
		{
			string selectString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
			if (minLength == null || minLength < 0)
			{
				minLength = 0;
			}
			if (maxLength == null || maxLength > int.MaxValue)
			{
				maxLength = int.MaxValue;
			}
			string outputString = String.Empty;
			int stringLength = Randomizer.Next((int)minLength, (int)maxLength);
			for (int i = 0; i < stringLength; i++)
			{
				outputString += selectString.Substring(Randomizer.Next(0, selectString.Length - 1), 1);
			}
			return outputString;
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random string with random values.</summary>
		/// 
		/// <param name="minLength">The minimum string size that can be returned.</param>
		/// <param name="maxLength">The maximum string size that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static string GetString(int? minLength, int? maxLength)
		{
			string selectString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()~`-=_+[]{};':\",./<>?\\|";
			if (minLength == null || minLength < 0)
			{
				minLength = 0;
			}
			if (maxLength == null || maxLength > int.MaxValue)
			{
				maxLength = int.MaxValue;
			}
			string outputString = String.Empty;
			int stringLength = Randomizer.Next((int)minLength, (int)maxLength);
			for (int i = 0; i < stringLength; i++)
			{
				outputString += selectString.Substring(Randomizer.Next(0, selectString.Length - 1), 1);
			}
			return outputString;
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random string with random values.</summary>
		/// 
		/// <param name="minLength">The minimum string size that can be returned.</param>
		/// <param name="maxLength">The maximum string size that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static string GetString(int? minLength, int? maxLength, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			string value = String.Empty;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (string)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					setValueUsed = false;
					value = GetString(minLength, maxLength);
				}
			}
			else
			{
				setValueUsed = false;
				value = GetString(minLength, maxLength);
			}
			return value;
		}

		// ------------------------------------------------------------------
		/// <summary>This method returns a random url with random values.</summary>
		/// 
		/// <param name="minLength">The minimum string size that can be returned.</param>
		/// <param name="maxLength">The maximum string size that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static string GetURL(int? minLength, int? maxLength)
		{
			string selectString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890.";
			if (minLength == null || minLength < 0)
			{
				minLength = 0;
			}
			if (maxLength == null || maxLength > int.MaxValue)
			{
				maxLength = int.MaxValue;
			}
			string outputString = String.Empty;
			int stringLength = Randomizer.Next((int)minLength, (int)maxLength);
			for (int i = 0; i < stringLength; i++)
			{
				outputString += selectString.Substring(Randomizer.Next(0, selectString.Length - 1), 1);
			}
			return outputString;
		}
		// ------------------------------------------------------------------
		/// <summary>This method returns a random URL with random values.</summary>
		/// 
		/// <param name="minLength">The minimum string size that can be returned.</param>
		/// <param name="maxLength">The maximum string size that can be returned.</param>
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static string GetURL(int? minLength, int? maxLength, NamedObjectCollection setValues, int percentageFromSetValues, out bool setValueUsed)
		{
			string value = String.Empty;
			if (Randomizer.Next(0, 100) <= percentageFromSetValues)
			{
				try
				{
					setValueUsed = true;
					value = (string)setValues[Randomizer.Next(0, setValues.Count - 1)];
				}
				catch
				{
					throw new InvalidOperationException("Could not get URL value from set values.");
				}
			}
			else
			{
				setValueUsed = false;
				value = GetURL(minLength, maxLength);
			}
			return value;
		}

		private static string GetStringFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetStringFromObject was passed a null object parameter.");
			}

			string result;

			try
			{
				result = (string)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetStringFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static string GetNullableStringFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			string result;

			try
			{
				result = (string)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableStringFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static string GetStringFromPool(int? index, object[] customPool)
		{
			return GetStringFromObject(GetObjectFromPool(index, customPool));
		}

		public static string GetStringFromPool(int? index, string poolKey)
		{
			return GetStringFromObject(GetObjectFromPool(index, poolKey));
		}

		public static string GetNullableStringFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableStringFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static string GetNullableStringFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableStringFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static string GetStringFromCollection(int index, NamedObjectCollection noc)
		{
			return GetStringFromObject(GetObjectFromCollection(index, noc));
		}

		public static string GetStringFromCollection(string key, NamedObjectCollection noc)
		{
			return GetStringFromObject(GetObjectFromCollection(key, noc));
		}

		public static string GetStringFromCollection(int index)
		{
			return GetStringFromObject(GetObjectFromCollection(index));
		}

		public static string GetStringFromCollection(string key)
		{
			return GetStringFromObject(GetObjectFromCollection(key));
		}

		public static string GetNullableStringFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableStringFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static string GetNullableStringFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableStringFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static string GetNullableStringFromCollection(int? index, float probability)
		{
			return GetNullableStringFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static string GetNullableStringFromCollection(string key, float probability)
		{
			return GetNullableStringFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

        #region Get bool methods
        // ------------------------------------------------------------------
		/// <summary>This method returns a random bool value.</summary>
		/// 
		/// <returns>The random value.</returns>
		// ------------------------------------------------------------------
		public static bool GetBool()
		{
			if (Randomizer.Next(0, 1000) > 500)
			{
				return true;
			}

			return false;
		}
		public static bool? GetNullableBool()
		{
			if (Randomizer.Next(0, 1000) > 750)
			{
				return null;
			}

			return GetBool();
		}

		private static bool GetBoolFromObject(object o)
		{
			if (o == null)
			{
				throw new ArgumentException("GetBoolFromObject was passed a null object parameter.");
			}

			bool result;

			try
			{
				result = (bool)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetBoolFromObject could not convert from object parameter.");
			}

			return result;
		}

		private static bool? GetNullableBoolFromNullableObject(object o)
		{
			if (o == null)
			{
				return null;
			}

			bool result;

			try
			{
				result = (bool)o;
			}
			catch (InvalidCastException)
			{
				throw new InvalidOperationException("GetNullableBoolFromNullableObject could not convert from object parameter.");
			}

			return result;
		}

		public static bool GetBoolFromPool(int? index, object[] customPool)
		{
			return GetBoolFromObject(GetObjectFromPool(index, customPool));
		}

		public static bool GetBoolFromPool(int? index, string poolKey)
		{
			return GetBoolFromObject(GetObjectFromPool(index, poolKey));
		}

		public static bool? GetNullableBoolFromPool(int? index, object[] customPool, float probability)
		{
			return GetNullableBoolFromNullableObject(GetNullableObjectFromPool(index, customPool, probability));
		}

		public static bool? GetNullableBoolFromPool(int? index, string poolKey, float probability)
		{
			return GetNullableBoolFromNullableObject(GetNullableObjectFromPool(index, poolKey, probability));
		}

		public static bool GetBoolFromCollection(int index, NamedObjectCollection noc)
		{
			return GetBoolFromObject(GetObjectFromCollection(index, noc));
		}

		public static bool GetBoolFromCollection(string key, NamedObjectCollection noc)
		{
			return GetBoolFromObject(GetObjectFromCollection(key, noc));
		}

		public static bool GetBoolFromCollection(int index)
		{
			return GetBoolFromObject(GetObjectFromCollection(index));
		}

		public static bool GetBoolFromCollection(string key)
		{
			return GetBoolFromObject(GetObjectFromCollection(key));
		}

		public static bool? GetNullableBoolFromCollection(int? index, NamedObjectCollection noc, float probability)
		{
			return GetNullableBoolFromNullableObject(GetNullableObjectFromCollection(index, noc, probability));
		}

		public static bool? GetNullableBoolFromCollection(string key, NamedObjectCollection noc, float probability)
		{
			return GetNullableBoolFromNullableObject(GetNullableObjectFromCollection(key, noc, probability));
		}

		public static bool? GetNullableBoolFromCollection(int? index, float probability)
		{
			return GetNullableBoolFromNullableObject(GetNullableObjectFromCollection(index, probability));
		}

		public static bool? GetNullableBoolFromCollection(string key, float probability)
		{
			return GetNullableBoolFromNullableObject(GetNullableObjectFromCollection(key, probability));
        }
        #endregion

	}
}
