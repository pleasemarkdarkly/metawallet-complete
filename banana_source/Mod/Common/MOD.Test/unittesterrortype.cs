using System;
using System.Collections.Generic;
using System.Text;
using MOD.Data;
using MOD.Exceptions;

namespace MOD.Test
{
	// ------------------------------------------------------------------------------
	/// <summary>This enumeration lists valid unit test error types.</summary>
	// ------------------------------------------------------------------------------
	public enum UnitTestErrorType
	{
		/// <summary>For unknown errors.</summary>
		Unknown = 0,
        /// <summary>For informational alerts.</summary>
        Info = 1,
        /// <summary>For warnings.</summary>
		Warning = 2,
		/// <summary>For validation related problems.</summary>
		Validation = 3,
		/// <summary>For performance related problems.</summary>
		Performance = 4,
		/// <summary>For errors in functionality.</summary>
		Functional = 5
	}

}
