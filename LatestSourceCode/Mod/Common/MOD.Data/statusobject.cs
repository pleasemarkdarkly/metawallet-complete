/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

using System;
using System.Xml;
using System.Xml.Serialization;
using System.ComponentModel;
using System.IO;
using System.Text;

namespace MOD.Data
{
	//------------------------------------------------------------------------
	/// <summary>This class is used to hold core status information.</summary>
	/// 
	/// <remarks></remarks>
	//------------------------------------------------------------------------
	[Serializable()]
    [XmlType(Namespace = "http://modsystems.com/MOD.MMS.AssetSolution/DataTypes")]
	public class StatusObject
	{
		#region "Declarations"

		// for StatusCode property
		private int _statusCode = 0;

		// for StatusDescription property
		private string _statusDescription = "";

		// for TotalRecords property
		private int _totalRecords = 0;

		// for MaximumListSizeExceeded property
		private bool _maximumListSizeExceeded = false;

		#endregion "Declarations"

		#region "Public Properties"

		//------------------------------------------------------------------------
		/// <summary>This property gets or sets the status code.</summary>
		//------------------------------------------------------------------------
		[XmlElementAttribute()]
		public virtual int StatusCode
		{
			get
			{
				return _statusCode;
			}
			set
			{
				_statusCode = value;
			}
		}


		//------------------------------------------------------------------------
		/// <summary>This property gets or sets the status description.</summary>
		//------------------------------------------------------------------------
		[DefaultValueAttribute("")]
		[XmlElementAttribute()]
		public virtual string StatusDescription
		{
			get
			{
				return _statusDescription;
			}
			set
			{
				_statusDescription = value;
			}
		}

		//------------------------------------------------------------------------
		/// <summary>This property gets or sets the total records.</summary>
		//------------------------------------------------------------------------
		[XmlElementAttribute()]
		public virtual int TotalRecords
		{
			get
			{
				return _totalRecords;
			}
			set
			{
				_totalRecords = value;
			}
		}

		//------------------------------------------------------------------------
		/// <summary>This property gets or sets whether the maximum list size was exceeded.</summary>
		//------------------------------------------------------------------------
		[XmlElementAttribute()]
		public virtual bool MaximumListSizeExceeded
		{
			get
			{
				return _maximumListSizeExceeded;
			}
			set
			{
				_maximumListSizeExceeded = value;
			}
		}

		#endregion "Public Properties"

		#region "Public Methods"
		#endregion "Public Methods"

		#region "Miscellaneous"
		//------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		//------------------------------------------------------------------------
		public StatusObject()
		{
			//
			// constructor logic
			//
		}
		#endregion "Miscellaneous"
	}
}
