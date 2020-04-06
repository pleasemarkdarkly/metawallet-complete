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
        private int _pageSize = DefaultPageSize;

		// for MaximumListSize property
        private int _maximumListSize = DefaultMaximumListSize;

		// for StartIndex property
		private int _startIndex = 1;

		// for SortColumn property
		private string _sortColumn = "";

		// for IncludeInactive property
		private bool _includeInactive = false;

		// for IncludeDateInactive property
		private bool _includeDateInactive = false;

		// for SortDirection property
		private SortDirection _sortDirection = SortDirection.Ascending;

		// for fields to be filtered from data output
		public NamedObjectCollection FilterFields = new NamedObjectCollection();

		// for LoadCollections property
		private bool _loadCollections = false;

		// for UseCache property
		private bool _useCache = true;

		// for additional collections to include in data output
		public NamedObjectCollection CollectionsToLoad = new NamedObjectCollection();

		#endregion "Declarations"

		#region "Public Properties"

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
      
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the include inactive option.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(false)]
		[XmlElementAttribute()]
		public virtual bool IncludeInactive
		{
			get
			{
				return _includeInactive;
			}
			set
			{
				_includeInactive = value;
			}
		}
      
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the include date inactive option.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(false)]
		[XmlElementAttribute()]
		public virtual bool IncludeDateInactive
		{
			get
			{
				return _includeDateInactive;
			}
			set
			{
				_includeDateInactive = value;
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the load collections option.  If
		/// LoadCollections is true, load additional collections indicated in CollectionsToLoad.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(false)]
		[XmlElementAttribute()]
		public virtual bool LoadCollections
		{
			get
			{
				return _loadCollections;
			}
			set
			{
				_loadCollections = value;
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property determines whether or not to use caching to retrieve
		/// or store the associated data.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(false)]
		[XmlElementAttribute()]
		public virtual bool UseCache
		{
			get
			{
				return _useCache;
			}
			set
			{
				_useCache = value;
			}
		}

		#endregion "Public Properties"

		#region "Public Methods"
        public void PopulateNamedObjectCollection(NamedObjectCollection noc)
        {
			noc["IncludeDateInactive"] = IncludeDateInactive;
			noc["IncludeInactive"] = IncludeInactive;
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

        public DataOptions(bool includeInactive)
        {
            _includeInactive = includeInactive;
        }

        public DataOptions(bool includeInactive, bool includeDateInactive)
        {
            _includeInactive = includeInactive;
            _includeDateInactive = includeDateInactive;
        }

        public DataOptions(bool includeInactive, bool includeDateInactive, string sortColumn)
        {
            _includeInactive = includeInactive;
            _includeDateInactive = includeDateInactive;
            _sortColumn = sortColumn;
        }

        public DataOptions(bool includeInactive, bool includeDateInactive, string sortColumn, SortDirection sortDirection)
        {
            _includeInactive = includeInactive;
            _includeDateInactive = includeDateInactive;
            _sortColumn = sortColumn;
            _sortDirection = sortDirection;
        }

        public DataOptions(string sortColumn)
        {
            _sortColumn = sortColumn;
        }

        public DataOptions(string sortColumn, SortDirection sortDirection)
        {
            _sortColumn = sortColumn;
            _sortDirection = sortDirection;
        }

		#endregion "Miscellaneous"
	}
}
