/*<copyright>
 MOD Systems, Inc (c) 2005 All Rights Reserved. 720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 
All Rights Reserved, (c) 2005, covered by Trademark Laws, contents are considered Restricted Secrets 
by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected 
SBUX employees as outlined in the Licensing Agreement between MOD Systems and Starbuck Corporation on 
June 3rd, 2005.   
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, 
read, or have access to any part or whole of software source code.  If you have done so, immediatly 
report yourself to your manager. 
Do not reproduce any portions of this software.  Unauthorized use or disclosure of this information 
could impact MOD System's competitive advantage.   
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel 
or otherwise, to any intellectual property rights is granted in this source code.   
CONFIDENTIAL SOURCE CODE
</copyright>*/

using System;
using System.Collections;
using System.Collections.Specialized;
using System.Xml;
using System.Configuration.Install;
using System.IO;
using System.Windows.Forms;

using MOD.Configuration;

namespace MOD.Configuration.Install
{
	/// <summary>
	/// Summary description for ConfigInstaller.
	/// </summary>
	public class ConfigInstaller : Installer
	{
		protected string _targetDir;
		protected StringDictionary _configFilePaths = new StringDictionary();

		/// <summary>
		/// Override this method and fill _configFilePaths with the full paths
		/// of the configuration files you want to prompt the user to confirm.
		/// 
		/// OR, specify parameters in your custom build step:
		/// 
		/// /target="[TARGETDIR]\"  /TargetSubDir="Publishing System"
		/// /ConfigFiles=MOD.HearMusic.Publishing.CommandLine.exe.config;Scripts\ContentExport\ContentExportScript.xml
		/// 
		/// Note that /ConfigFiles is a semi-colon delimited list, and paths are relative to /target
		/// </summary>
		protected virtual void LoadConfigFilePaths()
		{
			// this is only useful when running in test harness
			string mainConfigFile = AppDomain.CurrentDomain.SetupInformation.ConfigurationFile;

			if (File.Exists(mainConfigFile))
				_configFilePaths.Add(Path.GetFileName(mainConfigFile), mainConfigFile);

			if (Context == null)
				return;

			// target dir (if not set by derived class) is set here
			if (_targetDir == null && Context.Parameters["Target"] == null)
			{
				Context.LogMessage("No target dir specified");
				return;
			}
			else if (_targetDir == null && Context.Parameters["Target"] != null)
				_targetDir = Context.Parameters["Target"];

			if (Context.Parameters["TargetSubDir"] != null)
				_targetDir = Path.Combine(_targetDir, Context.Parameters["TargetSubDir"]);

			if (Context.Parameters["ConfigFiles"] == null)
			{
				Context.LogMessage("No config files specified");
				return;
			}

			string configFileList = Context.Parameters["ConfigFiles"];

			string[] configFiles = configFileList.Split(';');

			foreach (string configFile in configFiles)
			{
				string fullPath = Path.Combine(_targetDir, configFile);

				DialogResult result = DialogResult.OK;

				while (!File.Exists(fullPath) && result == DialogResult.OK)
				{
					InputBoxDialog dialog = new InputBoxDialog();
					dialog.FormPrompt = "Could not find configuration file. Please enter path below.";
					dialog.DefaultValue = fullPath;
					result = dialog.ShowDialog();
					fullPath = dialog.InputResponse;
				}
				
				if (result == DialogResult.OK)
				{
					_configFilePaths.Add(Path.GetFileName(configFile), fullPath);
					Context.LogMessage("Found config file: " + fullPath);
				}
			}
		}

		/// <summary>
		/// </summary>
		/// <param name="stateSaver"></param>
		public override void Install(System.Collections.IDictionary stateSaver)
		{
			try
			{
				LoadConfigFilePaths();

				foreach (string friendlyName in _configFilePaths.Keys)
					PromptUserToConfirmConfiguration(_configFilePaths[friendlyName], friendlyName); 

			}
			catch (Exception exc)
			{
				System.Windows.Forms.MessageBox.Show("Config Installer failed: " + exc.Message);
				Context.LogMessage("Config Installer failed: " + exc.Message + "\n" + exc.StackTrace);
			}
		}


		/// <summary>
		/// 
		/// </summary>
		/// <param name="configFilePath"></param>
		/// <param name="friendlyName">Used for the dialog box title</param>
		private void PromptUserToConfirmConfiguration(string configFilePath, string friendlyName)
		{
			// Load config file
			ConfigFile configFile = new ConfigFile();
			XmlTextReader reader = new XmlTextReader(configFilePath);
			configFile.Load(reader);
			reader.Close();

			// Prompt user to override
			ConfigConfirmForm form = new ConfigConfirmForm();
			form.Text = friendlyName;
			form.SettableValues = configFile.GetInstallerSettableValues();

			// Allow derived classes to change the defaults
			FormatDefaultValues(form.SettableValues);
			form.ShowDialog();

			XmlTextWriter writer = new XmlTextWriter(configFilePath, System.Text.Encoding.UTF8);
			writer.Formatting = Formatting.Indented;
			configFile.Save(writer);
			writer.Close();
		}

		/// <summary>
		/// This function will auto replace "{install:server}" with the /Server=[xyz] passed in
		/// </summary>
		/// <param name="settableValues"></param>
		protected virtual void FormatDefaultValues(ArrayList settableValues)
		{
			// override this method to provide formatted default values
			// for the configuration
			foreach (InstallerSettableValue settableValue in settableValues)
			{
				foreach (string key in Context.Parameters.Keys)
				{
					settableValue.Value = settableValue.Value.Replace("{install:" + key + "}", 
						Context.Parameters[key]);
				}
			}
		}
	}
}
