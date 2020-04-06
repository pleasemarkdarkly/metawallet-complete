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
using System.Xml;

namespace MOD.Configuration
{
	/// <summary>
	/// Summary description for InstallerSettableValue.
	/// </summary>
	public class InstallerSettableValue
	{
		private XmlNode _node;
		private string _description;

		public XmlNode Node
		{
			get { return _node; }
		}

		public string Name
		{
			get 
			{
				if (_node.Attributes["key"] != null)
					return _node.Attributes["key"].Value;
				else if (_node.Attributes["Name"] != null)
					return _node.Attributes["Name"].Value;

				throw new ApplicationException("Could not InstallerSettableValue node name or key attribute");
			}
		}

		/// <summary>
		/// Implemented in order to support case-insensitive attribute name
		/// </summary>
		public string Value
		{
			get 
			{ 
				if (_node.Attributes["value"] != null)
					return _node.Attributes["value"].Value;
				else if (_node.Attributes["Value"] != null)
					return _node.Attributes["Value"].Value;

				throw new ApplicationException("Could not InstallerSettableValue node value attribute");
			}

			set
			{
				if (_node.Attributes["value"] != null)
					_node.Attributes["value"].Value = value;
				else if (_node.Attributes["Value"] != null)
					_node.Attributes["Value"].Value = value;
			}
		}

		public string Description
		{
			get { return _description; }
		}


		public InstallerSettableValue(XmlNode node, string description)
		{
			_node = node;
			_description = description;
		}
	}
}
