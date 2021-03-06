using System;
using System.Text;

namespace MOD.Data
{
    public class DefaultValue
    {
        #region Constants
		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default maximum list size for initializations.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const int DefaultPageSize = 20;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default maximum list size for initializations.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const int DefaultMaximumListSize = 1000;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default <see cref="SortDirection"/> for initializations.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const SortDirection DefaultSortDirection = SortDirection.Ascending;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default int value.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const short Short = 0;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default int value.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const int Int = 0;

		// ------------------------------------------------------------------------------
        /// <summary>
        /// Default long value.
        /// </summary>
        // ------------------------------------------------------------------------------
        public const long Long = 0;

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Default string value.
        /// </summary>
        // ------------------------------------------------------------------------------
        public const string String = "";

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Default bool value.
        /// </summary>
        // ------------------------------------------------------------------------------
        public const bool Bool = false;

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Default float value.
        /// </summary>
        // ------------------------------------------------------------------------------
        public const float Float = 0;

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Default double value.
        /// </summary>
        // ------------------------------------------------------------------------------
        public const double Double = 0.00;

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Default decimal value.
        /// </summary>
        // ------------------------------------------------------------------------------
        public const decimal Decimal = 0.00m;


        // ------------------------------------------------------------------------------
        /// <summary>
        /// Default DateTime.
        /// </summary>
        // ------------------------------------------------------------------------------
        public static System.DateTime DateTime = System.DateTime.MinValue;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default Byte.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const byte Byte = 0;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default Binary.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const byte[] Binary = null;

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default GUID string.
		/// This is the value of Guid.Empty.
		/// </summary>
		// ------------------------------------------------------------------------------
		public const string GuidString = "00000000-0000-0000-0000-000000000000";

		// ------------------------------------------------------------------------------
		/// <summary>
		/// Default GUID.
		/// </summary>
		// ------------------------------------------------------------------------------
		public static readonly System.Guid Guid = new Guid( GuidString );


        #endregion
    }
}
