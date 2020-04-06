using System;

namespace MOD.Data
{
	/// <summary>
	/// Summary description for Lists.
	/// </summary>
	public class Lists
	{
        public const string LIST_DEFAULT_SELECTION_ANY = "-1";
        public const string LIST_DEFAULT_SELECTION_NONE = "0";

		// ------------------------------------------------------------------------------
		/// <summary>This enumeration lists default selections for drop down lists.</summary>
		// ------------------------------------------------------------------------------
		public enum ListDefaultSelection
		{
			/// <summary>Any list default section.</summary>
			Any = -1,
			/// <summary>No list default section.</summary>
			None = 0
		}

		public Lists()
		{
			//
			// TODO: Add constructor logic here
			//
		}
	}
}
