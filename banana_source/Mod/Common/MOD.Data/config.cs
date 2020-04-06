using System;
using System.Collections.Specialized;
using Microsoft.Win32;

namespace MOD.Data
{
	/// <summary>
	/// Load and use configuration sections from the registry.
	/// </summary>
	public class RegisterConfig
	{
		private static NameValueCollection _Settings = null;

		/// <summary>
		/// Configuration settings from the registry.
		/// </summary>
		public static NameValueCollection Settings 
		{
			get 
			{
				if( _Settings == null )
				{
					throw(new Exception("Must call RegisterConfig.LoadConfig()"));
				}
				return _Settings;
			}
		}

		/// <summary>
		/// Load configuration information from the registry
		/// </summary>
		public static void LoadConfig()
		{
			_Settings = new NameValueCollection();
			RegistryKey key = Registry.LocalMachine.OpenSubKey("Software\\ADOT\\Configuration");
			string[] values = key.GetValueNames();

			for(int i = 0; i < values.Length; i++)
			{
				Settings[values[i]] = key.GetValue(values[i]).ToString();
			}
		}

		/// <summary>
		/// Adds the subkey values to the Settings parameter.
		/// </summary>
		/// <param name="subKey">LKM\Software\ADOT\Configuration\[subKey]</param>
		public static void AddValues( string subKey )
		{
			RegistryKey key = Registry.LocalMachine.OpenSubKey("Software\\ADOT\\Configuration\\" + subKey);
			string[] values = key.GetValueNames();

			for(int i = 0; i < values.Length; i++)
			{
				Settings[values[i]] = key.GetValue(values[i]).ToString();
			}
		}
	}
}
