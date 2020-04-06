using System;

namespace MOD.Data
{
	// ------------------------------------------------------------------------------
	/// <summary>This enumeration lists valid access modes.</summary>
	// ------------------------------------------------------------------------------
	public enum AccessMode
	{
		/// <summary>None.</summary>
		None = 0,
		/// <summary>View access.</summary>
		View = 1,
		/// <summary>Edit access.</summary>
		Edit = 2,
		/// <summary>Add access.</summary>
		Add = 3,
		/// <summary>Delete access.</summary>
		Delete = 4,
		/// <summary>All access.</summary>
		All = 5
	}

}
