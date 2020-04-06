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

namespace MOD.Configuration
{
	/// <summary>
	/// Summary description for ConfigurationFile.
	/// </summary>
	public class ConfigFile : XmlDocument
	{
		public ArrayList GetInstallerSettableValues()
		{
			XmlNodeList nodeNames = this.LastChild.SelectNodes("InstallerSettableValues/add");

			ArrayList settableValues = new ArrayList();
			
			foreach (XmlNode nodeName in nodeNames)
			{
				XmlNode settableNode = null;

				string path = nodeName.Attributes["key"].Value;

				if (path.IndexOf("/") == -1)
				{
					settableNode = LastChild.SelectSingleNode("appSettings/add[@key='" + path + "']");

					if (settableNode == null)
						settableNode = LastChild.SelectSingleNode("//*[@Name='" + path + "']");
				}
				else
					settableNode = LastChild.SelectSingleNode(path);

				if (settableNode != null)
				{
					string description = nodeName.Attributes["value"].Value;
					settableValues.Add(new InstallerSettableValue(settableNode, description));
				}
				else
					System.Windows.Forms.MessageBox.Show(
						string.Format("An Installer Settable Configuration Value was not found: {0}",
						path));
			}

			return settableValues;

			//return this.LastChild.SelectNodes("//*[@InstallerSettable='true' or @InstallerSettable='True']");
		}

	}
}
