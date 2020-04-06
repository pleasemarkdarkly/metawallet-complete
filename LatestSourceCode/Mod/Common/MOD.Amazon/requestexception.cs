using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization;

using MOD.Exceptions;

namespace MOD.Amazon
{
    public class RequestException : ApplicationException
    {
        public RequestException(string message, Exception innerException)
            : base(message, innerException)
        {
        }

        public RequestException(SerializationInfo info, StreamingContext context)
            : base(info, context)
		{
		}

        public RequestException(string message)
            : base(message)
        {
        }

        public static RequestException CreateException(ErrorsError[] errors)
        {
            if (null != errors)
            {
                StringBuilder message = new StringBuilder();
                foreach (ErrorsError error in errors)
                {
                    //Build error message from errors received from request
                    message.AppendLine(error.Message);
                }

                return new RequestException(message.ToString());
            }

            return new RequestException("No errors specified");
        }
    }
}
