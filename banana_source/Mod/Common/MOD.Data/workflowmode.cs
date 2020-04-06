using System;

namespace MOD.Data
{
    // ------------------------------------------------------------------------------
    /// <summary>This enumeration lists valid workflow modes.</summary>
    // ------------------------------------------------------------------------------
    public enum WorkflowMode
    {
        /// <summary>None.</summary>
        None = 0,
        /// <summary>Control is used within the context of other controls.</summary>
        Internal = 1,
        /// <summary>Control is used external to any other controls.</summary>
        External = 2
    }

}
