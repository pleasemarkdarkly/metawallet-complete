using System;
using System.Collections.Generic;
using System.Text;

namespace MOD.Data
{
    /// <summary>
    /// Event arguments.  This argument is passed into custom event
    /// handlers for validation of input.
    /// </summary>
    public class FormElementValidateArgs : EventArgs
    {
        /// <summary>
        /// Describes how to validate, depends on the event handler I guess.
        /// </summary>
        public string ValidateText;

        /// <summary>
        /// The event handler must set this to True if the object is valid, false otherwise
        /// </summary>
        public bool IsValid = false;

        /// <summary>
        /// Object to validate
        /// </summary>
        public object Value;
    }
}
