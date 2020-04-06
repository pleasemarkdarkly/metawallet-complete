/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

using System;


namespace MOD.Management.Interface
{
	public enum SeverityLevel
	{
		Unknown = -1,
		None = 0,
		Warning = 1,
		NonCriticalError = 2,
		CriticalError = 3
	}
	/// <summary>
	/// Summary description for Notification.
	/// </summary>
	public class Notification
	{
		public override string ToString()
		{
			return Value != null ? Value.ToString() : "<NULL>";
		}

#if true
		public Notification(object val)
		{
			Value = val; 
		}

		public object Value;
		public SeverityLevel Severity = SeverityLevel.Unknown;
		
#else
		public enum NotificationTypes
		{
			SNMPWalk,
			SNMPGet
		}

		private string _message;
		private object _data = null;
		private NotificationTypes _type;
		private int _deviceID;
		private object _value;

		public string Message
		{
			get { return _message; }
		}
		public object Data
		{
			get { return _data; }	
		}


		public object Value
		{
			get { return _value; }
			set { _value = value; }
		}

		public NotificationTypes Type
		{
			get { return _type; }
		}

		private int DeviceID
		{
			get { return _deviceID; }
		}	

		public Notification(string message, NotificationTypes type, int deviceID, object data)
		{
			_message = message;
			_type = type;
			_deviceID = deviceID;
			_data = data;
		}

		public Notification(string message)
		{
			_message = message;
		}

		public Notification(object val)
		{
			_value = val;
		}
#endif
	}

}
