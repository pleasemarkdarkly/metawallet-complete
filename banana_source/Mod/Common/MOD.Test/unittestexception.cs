/*<copyright>
MOD Systems, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees).
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/

using System;
using System.Diagnostics;
using System.Runtime.Serialization;
using System.Security.Permissions;
using System.ComponentModel;
using System.Xml;
using System.Xml.Serialization;
using System.Data.SqlClient;
using MOD.Exceptions;

namespace MOD.Test
{
	// ------------------------------------------------------------------------------
	/// <summary>
	/// The exception that is thrown when an integration test error occurs.
	/// </summary>
	// ------------------------------------------------------------------------------
	[Serializable]
	public class UnitTestException : MOD.Exceptions.CustomAppException
	{
		// for ErrorType property
		private UnitTestErrorType _errorType = UnitTestErrorType.Unknown;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Initializes a new instance of the <see cref="CustomAppException"/> class.
		/// Obsolete: Please use a different constructor to specify an exception type when using <see cref="CustomAppException"/>.
		/// </summary>
		// ------------------------------------------------------------------------------
		[Obsolete("Please use a different constructor to specify an exception type when using CustomAppException",false)]
		public UnitTestException() : base()
		{
		}

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Initializes a new instance of the <see cref="CustomAppException"/> class with a specified error 
		/// message and a reference to the inner exception that is the cause of this exception.
		/// </summary>
		/// <param name="message">A message that describes the error.</param>
		/// <param name="innerException">
		/// The exception that is the cause of the current exception. If the innerException parameter is not a
		/// null reference, the current exception is raised in a <b>catch</b> block that handles the inner exception.
		/// </param>
		// ------------------------------------------------------------------------------
		public UnitTestException(string message, Exception innerException) : base(message, innerException)
		{
		}

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Initializes a new instance of the <see cref="CustomAppException"/> class.
		/// </summary>
		/// <param name="errorType">The error type describing this application exception.</param>
		/// <param name="message">A message that describes the error.</param>
		/// <param name="innerException">
		/// The exception that is the cause of the current exception. If the innerException parameter is not a
		/// null reference, the current exception is raised in a <b>catch</b> block that handles the inner exception.
		/// </param>
		// ------------------------------------------------------------------------------
		public UnitTestException(UnitTestErrorType errorType, string message, Exception innerException) : base(message,innerException)
		{
			ErrorType = errorType;
		}

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Gets or sets the error number.
		/// </summary>
		// ------------------------------------------------------------------------------
		[XmlElementAttribute()]
		public virtual UnitTestErrorType ErrorType
		{
			get
			{
				return _errorType;
			}
			set
			{
				_errorType = value;
			}
		}
	}
}
