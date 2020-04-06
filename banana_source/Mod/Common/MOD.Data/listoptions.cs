using System;
using System.Xml;
using System.Xml.Serialization;
using System.ComponentModel;
using MOD.Data;

namespace MOD.Data
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to hold basic list properties.</summary>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	[Serializable()]
	public class DataOptions
    {
        #region Constants
        // ------------------------------------------------------------------------------
        /// <summary>
        /// Default page size for initializations.
        /// </summary>
        // ------------------------------------------------------------------------------
        public const int DefaultPageSize = 50;

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
        #endregion

        #region "Declarations"

        // for PageSize property
		private int _pageSize = 0;

		// for MaximumListSize property
		private int _maximumListSize = 0;

		// for StartIndex property
		private int _startIndex = 0;

		// for SortColumn property
		private string _sortColumn = "";

		// for SortDirection property
		private SortDirection _sortDirection = SortDirection.Ascending;

		#endregion "Declarations"

		#region "Public Properties"

        public NamedObjectCollection FilterFields
        {
            get { return new NamedObjectCollection(); }
        }

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the page size.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(DefaultPageSize)]
		[XmlElementAttribute()]
		public virtual int PageSize
		{
			get
			{
				return _pageSize;
			}
			set
			{
				_pageSize = value;
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the maximum list size.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(DefaultMaximumListSize)]
		[XmlElementAttribute()]
		public virtual int MaximumListSize
		{
			get
			{
				return _maximumListSize;
			}
			set
			{
				_maximumListSize = value;
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the page index.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(0)]
		[XmlElementAttribute()]
		public virtual int StartIndex
		{
			get
			{
				return _startIndex;
			}
			set
			{
				_startIndex = value;
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the sort column.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute("")]
		[XmlElementAttribute()]
		public virtual string SortColumn
		{
			get
			{
				return _sortColumn;
			}
			set
			{
				_sortColumn = value;
			}
		}
      
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the sort direction.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(SortDirection.Ascending)]
		[XmlElementAttribute()]
		public virtual SortDirection SortDirection
		{
			get
			{
				return _sortDirection;
			}
			set
			{
				_sortDirection = value;
			}
		}
      
		#endregion "Public Properties"

		#region "Public Methods"
        public void PopulateNamedObjectCollection(NamedObjectCollection noc)
        {
            if (SortColumn.Trim() != "")
                noc["SortColumn"] = SortColumn;
            noc["SortDirection"] = SortDirection.ToString();
            noc["PageSize"] = PageSize.ToString();
            noc["StartIndex"] = StartIndex.ToString();
            noc["MaximumListSize"] = MaximumListSize.ToString();

            noc["TotalRecords"] = 0;
            noc["MaximumListSizeExceeded"] = false;
        }
		#endregion "Public Methods"

		#region "Miscellaneous"
		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		// ------------------------------------------------------------------------------
		public DataOptions()
		{
			//
			// constructor logic
			//
		}
		#endregion "Miscellaneous"
	}
}
