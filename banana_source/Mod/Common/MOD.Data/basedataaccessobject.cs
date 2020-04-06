/*<copyright>
 MOD Systems, Inc (c) 2005 All Rights Reserved. 720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 
All Rights Reserved, (c) 2005, covered by Trademark Laws, contents are considered Restricted Secrets 
by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected 
SBUX employees as outlined in the Licensing Agreement between MOD Systems and Starbuck Corporation on 
June 3rd, 2005.   
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, 
read, or have access to any part or whole of software source code.  If you have done so, immediatly 
report yourself to your manager. 
Do not reproduce any portions of this software.  Unauthorized use or disclosure of this information 
could impact MOD System's competitive advantage.   
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel 
or otherwise, to any intellectual property rights is granted in this source code.   
CONFIDENTIAL SOURCE CODE
</copyright>*/

using System;
using System.Xml;
using System.Xml.Serialization;
using System.ComponentModel;
using System.IO;
using System.Text;

namespace MOD.Data
{
    // ------------------------------------------------------------------------------
    /// <summary>This class is used to manage the base properties of all data access objects.</summary>
    /// 
    /// <remarks></remarks>
    // ------------------------------------------------------------------------------
    [Serializable()]
    public class BaseDataAccessObject : ICloneable
    {
        /// <summary>
        /// The default value for date and time initializations.
        /// </summary>
        public readonly DateTime DEFAULT_DATETIME = DateTime.MinValue;
        const string GUID_EMPTY = "00000000-0000-0000-0000-000000000000";


        #region "Declarations"

        // for CreatedByUserID property
        private Guid _createdByUserID = MOD.Data.DefaultValue.Guid;

        // for CreatedDate property
        private System.DateTime _createdDate = DateTime.MinValue;

        // for LastModifiedByUserID property
        private Guid _lastModifiedByUserID = MOD.Data.DefaultValue.Guid;

        // for LastModifiedDate property
        private System.DateTime _lastModifiedDate = DateTime.MinValue;

        // for Timestamp property
        private System.Byte[] _timestamp;

        /// <summary>
        /// Indicates a field has been changed and the object has not been saved to the database
        /// </summary>
        protected bool _isDirty = false;

        #endregion "Declarations"

        #region "Public Properties"

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the data created by user id.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(0)]
        [XmlElementAttribute()]
        [DataTransform]
        public virtual Guid CreatedByUserID
        {
            get
            {
                return _createdByUserID;
            }
            set
            {
                if (_createdByUserID != value)
                {
                    _createdByUserID = value;
                    _isDirty = true;
                }
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the data created date.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValue(typeof(DateTime), "0001-01-01T00:00:00.0000000-08:00")]
        [XmlElementAttribute()]
        [DataTransform]
        public virtual System.DateTime CreatedDate
        {
            get
            {
                return _createdDate;
            }
            set
            {
                if (_createdDate != value)
                {
                    _createdDate = value;
                    _isDirty = true;
                }
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the data last modified by user id.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(0)]
        [XmlElementAttribute()]
        [DataTransform]
        public virtual Guid LastModifiedByUserID
        {
            get
            {
                return _lastModifiedByUserID;
            }

            set
            {
                if (_lastModifiedByUserID != value)
                {
                    _lastModifiedByUserID = value;
                    _isDirty = true;
                }
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the data last modified date.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValue(typeof(DateTime), "0001-01-01T00:00:00.0000000-08:00")]
        [XmlElementAttribute()]
        [DataTransform]
        public virtual System.DateTime LastModifiedDate
        {
            get
            {
                return _lastModifiedDate;
            }
            set
            {
                if (_lastModifiedDate != value)
                {
                    _lastModifiedDate = value;
                    _isDirty = true;
                }
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the data timestamp.</summary>
        // ------------------------------------------------------------------------------
        [XmlElementAttribute()]
        [DataTransform]
        public virtual System.Byte[] Timestamp
        {
            get
            {
                return _timestamp;
            }

            set
            {
                bool same = true;

                if (_timestamp == null || value == null)
                {
                    same = (_timestamp == value);
                }
                else // neither is null
                {
                    if (_timestamp.Length != value.Length)
                        same = false;
                    else
                    {
                        for (int i = 0; i < _timestamp.Length; i++)
                        {
                            if (_timestamp[i] != value[i])
                            {
                                same = false;
                                break;
                            }
                        }
                    }
                }

                if (!same)
                {
                    _timestamp = value;
                    _isDirty = true;
                }
            }
        }

        /// <summary>
        /// This property indicates whether this object's fields have changed since it was 
        /// last loaded from or saved to the database.
        /// </summary>
        [XmlIgnore]
        public virtual bool IsDirty
        {
            get { return _isDirty; }
            set { _isDirty = value; } // note, this should not be settable, but needs to be since this object is saved by other classes
        }

        [XmlIgnore]
        public virtual bool IsCollectionDirty
        {
            get { return false; } // no collections in base class
        }


        #endregion "Public Properties"

        #region "Public Methods"
        #endregion "Public Methods"

        #region "Miscellaneous"
        // ------------------------------------------------------------------------------
        /// <summary>This method is the constructor (currently does nothing).</summary>
        // ------------------------------------------------------------------------------
        public BaseDataAccessObject()
        {
            //
            // constructor logic
            //
        }
        #endregion "Miscellaneous"


        public object Clone()
        {
            object o = this.GetType().GetConstructor(System.Type.EmptyTypes).Invoke(null);
            DataTransformAttribute.CopyTo(o, this, true);
            return o;
        }

    }
}
