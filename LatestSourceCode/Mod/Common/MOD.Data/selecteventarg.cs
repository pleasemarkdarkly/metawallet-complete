using System;
using System.Collections.Generic;
using System.Text;

namespace MOD.Data
{
    /// <summary>
    /// Argument passed to AddOptions event handlers declared in class SelectElement
    /// </summary>
    public class SelectEventArg : EventArgs
    {
        /// <summary>
        /// Selected values?
        /// </summary>
        public object SelectedValue;

        /// <summary>
        /// Option text
        /// </summary>
        public string OptionText;
    }
}
