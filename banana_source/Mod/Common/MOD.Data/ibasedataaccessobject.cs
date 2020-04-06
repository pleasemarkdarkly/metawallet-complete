using System;
using System.Collections.Generic;
using System.Text;

namespace MOD.Data
{
    public interface IBaseDataAccessObject
    {
        bool IsDirty { get;}
        bool IsCollectionDirty { get; }

        /// <summary>
        /// Clear the dirty state for this object (not collections)
        /// </summary>
        void ClearDirtyState();

        /// <summary>
        /// Clear the dirtystate for this object, and all collections and their objects.
        /// </summary>
        /// <param name="recursive"></param>
        void ClearDirtyState(bool recursive);
    }
}
