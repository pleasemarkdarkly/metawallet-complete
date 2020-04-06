using System;
using System.Collections.Generic;
using System.Text;

namespace MOD.Exceptions
{
	public static class ExceptionHelper
	{
		// ------------------------------------------------------------------
		/// <summary>This method returns the extended error message from an exception.</summary>
		/// 
		/// <param name="ex">The exception.</param>
		/// <returns>The extended error message.</returns>
		// ------------------------------------------------------------------
		public static string GetExtendedErrorMessage(System.Exception ex)
		{
			string message = ex.Message;
			while (ex.InnerException != null)
			{
				ex = ex.InnerException;
				message += "\r\n" + ex.Message;
			}
			return message;
		}
		public static string GetExtendedErrorMessage(System.Exception ex, bool isHtml)
		{
			string message = ex.Message;
			if (isHtml == true)
			{
				while (ex.InnerException != null)
				{
					ex = ex.InnerException;
					message += "<br>" + ex.Message + "</br>";
				}
			}
			else
			{
				message = GetExtendedErrorMessage(ex);
			}
			return message;
		}

        // ------------------------------------------------------------------
        /// <summary>This method returns the extended error message from an exception,
        /// with the strack track appeneded to the message.</summary>
        /// 
        /// <param name="ex">The exception.</param>
        /// <returns>The extended error message with the stack trace appended.</returns>
        // ------------------------------------------------------------------
        public static string GetExtendedErrorMessageAndStackTrace(System.Exception ex)
        {
            StringBuilder message = new StringBuilder(ex.Message);
            string stackTrace = ex.StackTrace;
            while (ex.InnerException != null)
            {
                ex = ex.InnerException;
                message.Append(";\r\n" + ex.Message);
                if (stackTrace == null)
                {
                    stackTrace = ex.StackTrace;
                }
            }
            message.Append("\r\n" + stackTrace);
            return message.ToString();
        }
	}
}
