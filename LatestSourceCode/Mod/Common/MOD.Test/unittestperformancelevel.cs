using System;
using System.Collections.Generic;
using System.Text;
using MOD.Data;
using MOD.Exceptions;

namespace MOD.Test
{
	// ------------------------------------------------------------------------------
	/// <summary>This enumeration lists valid test performance levels.</summary>
	// ------------------------------------------------------------------------------
	public enum UnitTestPerformanceLevel
	{
		/// <summary>None.</summary>
		None = 0,
		/// <summary>Good, very acceptable.</summary>
		Good = 1,
        /// <summary>Fair, acceptable.</summary>
        Fair = 2,
        /// <summary>Tolerable, just within spec limits.</summary>
        Tolerable = 3,
        /// <summary>Annoying, just outside spec limits.</summary>
        Annoying = 4,
        /// <summary>TPainful, outside spec limits, near unusable.</summary>
        Painful = 5,
        /// <summary>Unacceptable, seriously outside spec limits. Something must be wrong.</summary>
        Unacceptable = 6,
	
        PerformanceLevelCount = Unacceptable
	}

}
