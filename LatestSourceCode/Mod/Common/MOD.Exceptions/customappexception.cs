using System;
using System.Diagnostics;
using System.Runtime.Serialization;
using System.Security.Permissions;
using System.ComponentModel;
using System.Xml;
using System.Xml.Serialization;
using MOD.Exceptions;

namespace MOD.Exceptions
{
	/// <summary>
	/// TODO: Attach more environment specific information to the exception
	/// </summary>
    [Serializable]
    public abstract class CustomAppException : ApplicationException
    {
        public CustomAppException()
        {
        }

        public CustomAppException(string message, Exception innerException)
            : base(message, innerException)
        {
        }

		public CustomAppException(SerializationInfo info, StreamingContext context) : base (info, context)
		{
		}
    }
}
