using System;
using System.IO;
using System.Collections;
using System.Runtime.InteropServices;
using Microsoft.Win32.SafeHandles;

namespace MOD.IO
{
    /// <summary>
    /// Encapsulates a single alternative data stream for a file.
    /// </summary>
    public class StreamInfo
    {
        private FileStreams _parent;
        private string _name;
        private long _size;

        internal StreamInfo(FileStreams Parent, string Name, long Size)
        {
            _parent = Parent;
            _name = Name;
            _size = Size;
        }

        /// <summary>
        /// The name of the stream.
        /// </summary>
        public string Name
        {
            get { return _name; }
        }
        /// <summary>
        /// The size (in bytes) of the stream.
        /// </summary>
        public long Size
        {
            get { return _size; }
        }

        public override string ToString()
        {
            return String.Format("{1}{0}{2}{0}$DATA", Kernel32.STREAM_SEP, _parent.FileName, _name);
        }
        public override bool Equals(Object o)
        {
            if (o is StreamInfo)
            {
                StreamInfo f = (StreamInfo)o;
                return (f._name.Equals(_name) && f._parent.Equals(_parent));
            }
            else if (o is string)
            {
                return ((string)o).Equals(ToString());
            }
            else
                return base.Equals(o);
        }
        public override int GetHashCode()
        {
            return ToString().GetHashCode();
        }

        #region Open
        /// <summary>
        /// Opens or creates the stream in read-write mode, with no sharing.
        /// </summary>
        /// <returns>A <see cref="System.IO.FileStream"/> wrapper for the stream.</returns>
        public FileStream Open()
        {
            return Open(FileMode.OpenOrCreate, FileAccess.ReadWrite, FileShare.None);
        }
        /// <summary>
        /// Opens or creates the stream in read-write mode with no sharing.
        /// </summary>
        /// <param name="Mode">The <see cref="System.IO.FileMode"/> action for the stream.</param>
        /// <returns>A <see cref="System.IO.FileStream"/> wrapper for the stream.</returns>
        public FileStream Open(FileMode Mode)
        {
            return Open(Mode, FileAccess.ReadWrite, FileShare.None);
        }
        /// <summary>
        /// Opens or creates the stream with no sharing.
        /// </summary>
        /// <param name="Mode">The <see cref="System.IO.FileMode"/> action for the stream.</param>
        /// <param name="Access">The <see cref="System.IO.FileAccess"/> level for the stream.</param>
        /// <returns>A <see cref="System.IO.FileStream"/> wrapper for the stream.</returns>
        public FileStream Open(FileMode Mode, FileAccess Access)
        {
            return Open(Mode, Access, FileShare.None);
        }
        /// <summary>
        /// Opens or creates the stream.
        /// </summary>
        /// <param name="Mode">The <see cref="System.IO.FileMode"/> action for the stream.</param>
        /// <param name="Access">The <see cref="System.IO.FileAccess"/> level for the stream.</param>
        /// <param name="Share">The <see cref="System.IO.FileShare"/> level for the stream.</param>
        /// <returns>A <see cref="System.IO.FileStream"/> wrapper for the stream.</returns>
        public FileStream Open(FileMode Mode, FileAccess Access, FileShare Share)
        {
            try
            {
                IntPtr hFile = Kernel32.CreateFile(ToString(), Kernel32.Access2API(Access), Share, 0, Mode, 0, 0);
                SafeFileHandle handle = new SafeFileHandle(hFile, false);
                //return new FileStream(hFile, Access, true);
                return new FileStream(handle, Access);

            }
            catch
            {
                return null;
            }
        }
        #endregion

        #region Delete
        /// <summary>
        /// Deletes the stream from the file.
        /// </summary>
        /// <returns>A <see cref="System.Boolean"/> value: true if the stream was deleted, false if there was an error.</returns>
        public bool Delete()
        {
            return Kernel32.DeleteFile(ToString());
        }
        #endregion
    }
}
