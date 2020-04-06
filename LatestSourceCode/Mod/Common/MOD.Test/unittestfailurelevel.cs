using System;
using System.Collections.Generic;
using System.Text;
using MOD.Data;
using MOD.Exceptions;

namespace MOD.Test
{
	// ------------------------------------------------------------------------------
	/// <summary>This enumeration lists valid unit test failure levels.</summary>
	// ------------------------------------------------------------------------------
	public enum UnitTestFailureLevel
	{
		/// <summary>None.</summary>
		None = 0,
		/// <summary>Success, test passed.</summary>
		Success = 1,
		/// <summary>Test contains warnings.</summary>
		Warning = 2,
		/// <summary>Test contains errors.</summary>
		Error = 3,
		/// <summary>Test had to be aborted due to critical error.</summary>
		Abort = 4
	}

}
