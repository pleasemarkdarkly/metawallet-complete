using System;
using System.Diagnostics;
using System.Runtime.Serialization;
using System.Security.Permissions;
using System.ComponentModel;

namespace MOD.Data
{
	public interface ISupportCaching
	{
		// ------------------------------------------------------------------
		/// <summary>Get the selected object from the application cache.</summary>
		/// 
		/// <param name="cacheSettingKey">The key ID of the cache to get an object from</param>
		/// <returns>The object that results from the cache data</returns>
		// ------------------------------------------------------------------
		object getAppCacheObject(string cacheSettingKey);

		// ------------------------------------------------------------------
		/// <summary>Store the selected object to the application cache.</summary>
		/// 
		/// <param name="cacheSettingKey">The key value of the cache where the object will be stored</param>
		/// <param name="cacheObject">The object to be stored</param>
		/// <param name="minutesInCache">The time (in minutes) that the object should be store in the cache</param>
		// ------------------------------------------------------------------
		void setAppCacheObject(string cacheSettingKey, object cacheObject, int minutesInCache);
	}

	public class Caching
	{
		static ISupportCaching s_cache = null;

		public static void InitializeAppCache(ISupportCaching cache)
		{
			s_cache = cache;
		}

		public static bool IsCachingSupported
		{
			get { return s_cache != null; }
		}

		// ------------------------------------------------------------------
		/// <summary>Get the selected object from the application cache.</summary>
		/// 
		/// <param name="cacheSettingKey">The key ID of the cache to get an object from</param>
		/// <returns>The object that results from the cache data</returns>
		// ------------------------------------------------------------------
		public static object getAppCacheObject(string cacheSettingKey)
		{
			return IsCachingSupported ? s_cache.getAppCacheObject(cacheSettingKey) : null;
		}

		// ------------------------------------------------------------------
		/// <summary>Store the selected object to the application cache.</summary>
		/// 
		/// <param name="cacheSettingKey">The key value of the cache where the object will be stored</param>
		/// <param name="cacheObject">The object to be stored</param>
		/// <param name="minutesInCache">The time (in minutes) that the object should be store in the cache</param>
		// ------------------------------------------------------------------
		public static void setAppCacheObject(string cacheSettingKey, object cacheObject, int minutesInCache)
		{
			if( s_cache != null )
				s_cache.setAppCacheObject(cacheSettingKey,cacheObject,minutesInCache);
		}
		public Caching()
		{
		}
	}
}
