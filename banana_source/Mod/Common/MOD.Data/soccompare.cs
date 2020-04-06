using System;
using System.Collections;

namespace MOD.Data
{
	// ------------------------------------------------------------------------
	/// <summary>Implements IComparer for sorting</summary>
	/// 
	/// <remarks></remarks>
	// ------------------------------------------------------------------------
	public class SOCCompare : IComparer
	{
		#region "Declarations"
		private SortDirection sortDirection;
		private string propertyName;
		#endregion "Declarations"

		#region "Public Properties"
		// ------------------------------------------------------------------------
		/// <summary></summary>
		// ------------------------------------------------------------------------
		public SortDirection SortDirection
		{
			get{return sortDirection;}
			set{sortDirection = value;}
		}
		// ------------------------------------------------------------------------
		/// <summary></summary>
		// ------------------------------------------------------------------------
		public string PropertyName
		{
			get{return propertyName;}
			set{propertyName = value;}
		}
		#endregion "Public Properties"

		#region "Public Methods"
		// ------------------------------------------------------------------------
		/// <summary>Compares 2 objects and returns the comparison</summary>
		/// 
		/// <param name="pFirstObject">The first object in the comparison</param>
		/// <param name="pSecondObject">The second object in the comparison</param>
		/// <returns>
		/// An Int32 value specifying which object is greater.
		/// -The result is negative if pFirstObject is less than pSecondObject
		/// -The result is zero if pFirstObject is equal to pSecondObject
		/// -The result is positive if pFirstObject is greater than pSecondObject
		/// </returns>
		// ------------------------------------------------------------------------
		public Int32 Compare(Object pFirstObject, Object pSecondObject)
		{
			int result;
			System.Reflection.PropertyInfo pi = pFirstObject.GetType().GetProperty(propertyName);
			object firstObProperty = pi.GetValue(pFirstObject,null);
			object secondObProperty = pi.GetValue(pSecondObject,null);
           
			result = Comparer.Default.Compare(firstObProperty, secondObProperty);
			if (sortDirection == SortDirection.Descending)
				return -result;
			else if (sortDirection == SortDirection.Random)
			{
				Random r = new Random(result * DateTime.Now.Minute);
				return r.Next(-100,100);
			}	
			else return result;
		}
		#endregion "Public Methods"

		#region "Miscellaneous"
		// ------------------------------------------------------------------------
		/// <summary>Empty Constructor (Currently does nothing)</summary>
		// ------------------------------------------------------------------------
		public SOCCompare(){}
		#endregion "Miscellaneous"
	}
}
