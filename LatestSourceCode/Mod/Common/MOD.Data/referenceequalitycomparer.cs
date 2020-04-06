using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace MOD.Data
{
    /// <summary>
    /// Used with a hash table when you want to override normal value based comparison
    /// with reference based comparison.
    /// </summary>
    public class ReferenceEqualityComparer : IEqualityComparer
    {
        public override bool Equals(object obj)
        {
            return IntPtr.ReferenceEquals(this, obj); // NOT base.Equals(obj);
        }

        public new bool Equals(object a, object b)
        {
            return IntPtr.ReferenceEquals(a, b);
        }

        public int GetHashCode(object obj)
        {
            return obj.GetHashCode();
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }
    }
}
