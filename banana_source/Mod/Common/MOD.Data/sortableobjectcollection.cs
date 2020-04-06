using System;
using System.Xml;
using System.Xml.Serialization;
using System.Collections.Generic;
using System.ComponentModel;
using System.Collections;
using System.Reflection;

namespace MOD.Data
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to hold basic list properties.</summary>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	[Serializable()]
	public class SortableObjectCollection : System.Collections.CollectionBase 
	{
		#region "Declarations"
        private bool _isDirty = false;
		#endregion "Declarations"

		#region "Public Properties"
        public ArrayList ArrayList
        {
            get { return this.InnerList; }
        }

        public bool IsDirty
        {
            get
            {
                if (_isDirty)
                    return true;
                else
                {
                    foreach (IBaseDataAccessObject obj in this.List)
                        if (obj.IsDirty)
                            return true;
                }

                return false;
            }
        }
		#endregion "Public Properties"

		#region "Public Methods"

        public virtual SortableObjectCollection Clone()
        {
            return new SortableObjectCollection(InnerList);
        }

		// ------------------------------------------------------------------------------
		/// <summary>This method adds an item to the list.</summary>
		/// 
		/// <param name="listItem">The item to be added to the list</param>
		// ------------------------------------------------------------------------------
		public virtual void Add(object listItem)
		{
            _isDirty = true;
			this.InnerList.Add(listItem);
		}

		// ------------------------------------------------------------------------------
		/// <summary>This method inserts an item to the list.</summary>
		/// 
		/// <param name="index">The index where the item will be inserted</param>
		/// <param name="listItem">The object to be inserted</param>
		// ------------------------------------------------------------------------------
		public virtual void Insert(int index, object listItem)
		{
            _isDirty = true;
			this.InnerList.Insert(index, listItem);
		}

		// ------------------------------------------------------------------------------
		/// <summary>This method removes an item from the list.</summary>
		///
		/// <param name="listItem">The item to be removed from the list</param>
		// ------------------------------------------------------------------------------
		public virtual void Remove(object listItem)
		{
            _isDirty = true;
			this.InnerList.Remove(listItem);
		}


        /// <summary>
        /// 
        /// </summary>
        /// <param name="index"></param>
        /// <param name="count"></param>
        public virtual void RemoveRange(int index, int count)
        {
            if (index < InnerList.Count && count > 0)
                _isDirty = true;

            this.InnerList.RemoveRange(index, count);
        }

		public virtual void AddRange(ICollection c)
		{
            if (c.Count > 0)
                _isDirty = true;
	
            this.InnerList.AddRange(c);
		}

		// ------------------------------------------------------------------------------
		/// <summary>This method clears the list.</summary>
		// ------------------------------------------------------------------------------
		public virtual new void Clear()
		{
            if (InnerList.Count > 0)
                _isDirty = true;

			this.InnerList.Clear();
		}

        public virtual bool Contains(object item)
        {
            return InnerList.Contains(item);
        }

		public virtual bool Contains(object listItem, string propertyName)
		{
			object itemVal = listItem.GetType().GetProperty(propertyName).GetValue(listItem, null);
			foreach(object o in InnerList)
			{
				object val = o.GetType().GetProperty(propertyName).GetValue(o, null);
				if( 0 == Comparer.Default.Compare(itemVal, val))
					return true;
			}
			return false;
		}

		public virtual object Find(string propertyName, object propertyValue)
		{
			foreach(object o in InnerList)
			{
				PropertyInfo propInfo = o.GetType().GetProperty(propertyName);
			
				object val = propInfo.GetValue(o,null);
				if( 0 == Comparer.Default.Compare(Convert.ChangeType(propertyValue,propInfo.PropertyType), val))
					return o;
			}
			return null;
		}

        public virtual object Find(int hashCode)
        {
            foreach (object o in List)
                if (o.GetHashCode() == hashCode)
                    return o;

            return null;
        }

		// ------------------------------------------------------------------------------
		/// <summary>This method sorts the list.</summary>
		/// NOTE: Does not support _isDirty
		/// <param name="propertyName">The property which the list will be sorted by</param>
		/// <param name="sortDirection">The direction that the list will be sorted in according to propertyName's value</param>
		/// <exception cref="System.Exception">Thrown when prior exceptions thrown (Such as a null propertyName value in the IComparer).</exception>
		// ------------------------------------------------------------------------------
		public virtual void Sort(string propertyName, SortDirection sortDirection)
		{
			if (InnerList.Count > 0)
			{
				if( InnerList[0].GetType().GetProperty(propertyName) != null )
					InnerList.Sort(new SortableObjectComparerClass(propertyName,sortDirection));
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This method sorts the list on two properties.</summary>
		/// NOTE: Does not support _isDirty
		/// <param name="propertyName1">The primary property which the list will be sorted by</param>
		/// <param name="sortDirection1">The direction that the list will be sorted in according to propertyName1's value</param>
		/// <param name="propertyName2">The secondary property which the list will be sorted by</param>
		/// <param name="sortDirection2">The direction that the list will be sorted in according to propertyName2's value</param>
		/// <exception cref="System.Exception">Thrown when prior exceptions thrown (Such as a null propertyName value in the IComparer).</exception>
		// ------------------------------------------------------------------------------
		public virtual void Sort( string propertyName1, SortDirection sortDirection1, string propertyName2, SortDirection sortDirection2 )
		{
			if (InnerList.Count > 0)
			{
				if ((InnerList[0].GetType().GetProperty( propertyName1 ) != null) && (InnerList[0].GetType().GetProperty( propertyName2 ) != null))
					InnerList.Sort( new SortableObjectTwoPropertyComparerClass( propertyName1, sortDirection1, propertyName2, sortDirection2 ) );
			}
		}

		// ------------------------------------------------------------------------------
        /// <summary>Searches the entire sorted SortableObjectCollection for an element
        /// using the specified property name and sort direction, and returns the
        /// zero-based index of the element.</summary>
        /// <param name="val">An object with the specific property set to match the value being searched for</param>
        /// <param name="propertyName">The name of the property that will be used for comparisons</param>
        /// <param name="sortDirection">The direction that the list is sorted in according to propertyName's value</param>
        /// <exception cref="System.Exception">Thrown when prior exceptions thrown (Such as a null propertyName value in the IComparer).</exception>
        // ------------------------------------------------------------------------------
        public virtual int BinarySearch(object val, string propertyName, SortDirection sortDirection)
        {
            return InnerList.BinarySearch(val, new SortableObjectComparerClass(propertyName,sortDirection));
        }

        // ------------------------------------------------------------------------------
        /// <summary>Searches the entire sorted SortableObjectCollection for an element
        /// using the specified property name and sort direction, and returns the
        /// zero-based index of the element.</summary>
        /// 
        /// <param name="listItemType">The object type that is contained in the list</param>
        /// <param name="val">An object with the specific property set to match the value being searched for</param>
        /// <param name="propertyName">The name of the property that will be used for comparisons</param>
        /// <param name="sortDirection">The direction that the list is sorted in according to propertyName's value</param>
        /// <exception cref="System.Exception">Thrown when prior exceptions thrown (Such as a null propertyName value in the IComparer).</exception>
        // ------------------------------------------------------------------------------
        public virtual int BinarySearch(Type listItemType, object val, string propertyName, SortDirection sortDirection)
        {
            return InnerList.BinarySearch(val, new SortableObjectComparerByTypeClass(listItemType,propertyName,sortDirection));
        }

        public virtual void ClearDirtyState()
        {
            _isDirty = false;
        }

        public virtual void ClearDirtyState(bool clearItemDirtyState)
        {
            _isDirty = false;

            foreach (IBaseDataAccessObject item in InnerList)
            {
                item.ClearDirtyState(true);
            }
        }
        #endregion "Public Methods"

		#region "Miscellaneous"
		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		// ------------------------------------------------------------------------------
		public SortableObjectCollection() : base()
		{
			//
			// constructor logic
			//
		}

        public SortableObjectCollection(ICollection coll) : this()
        {
            InnerList.AddRange(coll);
        }
        
		// ------------------------------------------------------------------------------
		/// <summary>Default accessor.</summary>
		// ------------------------------------------------------------------------------
		public object this[int i]
		{
			get
			{
				object myList = (object) this.InnerList[i];
				return myList;

			}
			set
			{
                if (InnerList[i] == null || !InnerList[i].Equals(value))
                {
                    _isDirty = true;
                    this.InnerList[i] = value;
                }
			}
		}

		#endregion "Miscellaneous"

        #region "SortableObjectCollection Comparers"
        
		// ------------------------------------------------------------------------------
        /// <summary></summary>
        ///
		/// <remarks></remarks>
        // ------------------------------------------------------------------------------
        public class SortableObjectComparerClass : IComparer 
        {
            string m_propertyName;
            protected SortDirection m_sortDirection;
            
			// ------------------------------------------------------------------------------
			/// <summary></summary>
			/// 
			/// <param name="propertyName"></param>
			/// <param name="sortDirection"></param>
			// ------------------------------------------------------------------------------
            public SortableObjectComparerClass(string propertyName, SortDirection sortDirection)
            {
                m_propertyName = propertyName;
                m_sortDirection = sortDirection;
            }

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			/// 
			/// <param name="x"></param>
			/// <param name="y"></param>
			/// <returns></returns>
			// ------------------------------------------------------------------------------
            public virtual int Compare(object x, object y)
            {
                if(m_sortDirection == SortDirection.Random)
                    return new Random((int)DateTime.Now.Ticks).Next(-1,1);
                else if(x == null)
                    return LessThan;
                else if(y == null)
                    return GreaterThan;

                object xval = GetValueFromObject(x);
                object yval = GetValueFromObject(y);
                if (xval == null)
                {
                    if (yval == null)
                        return 0;
                    else
                        return LessThan;
                }

                if( yval == null )
                    return GreaterThan;

                return CorrectCompareResult( DefaultComparer.Compare( xval, yval ) );
            }

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			/// 
			/// <param name="o"></param>
			/// <returns></returns>
			// ------------------------------------------------------------------------------
            protected object GetValueFromObject(object o)
            {
                PropertyInfo prop = o.GetType().GetProperty(m_propertyName);
                if(prop != null)
                {
                    return prop.GetValue(o, new object[] {});
                }
                else
                    return null;
            }

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			// ------------------------------------------------------------------------------
            protected int LessThan 
            {
                get { return m_sortDirection == SortDirection.Ascending ? -1 : 1; }
            }

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			// ------------------------------------------------------------------------------
            protected int GreaterThan
            {
                get { return m_sortDirection == SortDirection.Ascending ? 1 : -1; }
            }

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			// ------------------------------------------------------------------------------
            protected int CorrectCompareResult(int compareResult)
            {
                return m_sortDirection == SortDirection.Ascending ? compareResult : -1 * compareResult;
            }

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			// ------------------------------------------------------------------------------
            protected Comparer DefaultComparer
            {
                get
                {
                    return Comparer.Default;
                }
            }

            //protected const int Equals = 0;
        }

		// ------------------------------------------------------------------------------
		/// <summary></summary>
		///
		/// <remarks></remarks>
		// ------------------------------------------------------------------------------
		public class SortableObjectComparerByTypeClass : SortableObjectComparerClass
        {
            Type m_listItemType;
            PropertyInfo m_prop;
            object[] m_objs = new object[] {};

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			/// 
			/// <param name="listItemType"></param>
			/// <param name="propertyName"></param>
			/// <param name="sortDirection"></param>
			// ------------------------------------------------------------------------------
            public SortableObjectComparerByTypeClass(Type listItemType, string propertyName, SortDirection sortDirection) : base(propertyName,sortDirection)
            {
                m_listItemType = listItemType;
                m_prop = m_listItemType.GetProperty(propertyName);
            }

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			/// 
			/// <param name="x"></param>
			/// <param name="y"></param>
			/// <returns></returns>
			// ------------------------------------------------------------------------------
            public override int Compare(object x, object y)
            {
                if(m_listItemType == null || m_sortDirection == SortDirection.Random)
                    return base.Compare (x, y);
                else if(x == null || x.GetType() != m_listItemType)
                    return LessThan;
                else if(y == null || y.GetType() != m_listItemType)
                    return GreaterThan;
                else
                    return CorrectCompareResult( 
                            DefaultComparer.Compare( 
                                m_prop.GetValue( x, m_objs ),
                                m_prop.GetValue( y, m_objs ) ) );
            }

        }

		// ------------------------------------------------------------------------------
		/// <summary></summary>
		/// Used for sorting lists based on two properties
		/// <remarks></remarks>
		// ------------------------------------------------------------------------------
		public class SortableObjectTwoPropertyComparerClass : IComparer
		{
			protected SortableObjectComparerClass m_comparer1;
			protected SortableObjectComparerClass m_comparer2;

			public SortableObjectTwoPropertyComparerClass( string propertyName1, SortDirection sortDirection1, string propertyName2, SortDirection sortDirection2 )
			{
				m_comparer1 = new SortableObjectComparerClass( propertyName1, sortDirection1 );
				m_comparer2 = new SortableObjectComparerClass( propertyName2, sortDirection2 );
			}

			// ------------------------------------------------------------------------------
			/// <summary></summary>
			/// 
			/// <param name="x"></param>
			/// <param name="y"></param>
			/// <returns></returns>
			// ------------------------------------------------------------------------------
			public int Compare( object x, object y )
			{
				int i = m_comparer1.Compare( x, y );
				if (i == 0)
				{
					return m_comparer2.Compare( x, y );
				}
				else
				{
					return i;
				}
			}
		}

        #endregion "SortableObjectCollection Comparers
	}


}
