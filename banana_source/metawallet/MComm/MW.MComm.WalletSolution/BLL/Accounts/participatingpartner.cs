
/*<copyright>
Meta Wallet, Inc (c) 2006 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.
No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact Meta Wallet's competitive advantage.
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.
</copyright>*/
using System;
using System.Xml;
using System.Xml.Serialization;
using System.ComponentModel;
using System.Data;
using System.Data.OleDb;
using System.Data.SqlClient;
using MOD.Data;
using MW.MComm.WalletSolution.BLL.Config;
using BLL = MW.MComm.WalletSolution.BLL;
using DAL = MW.MComm.WalletSolution.DAL;
using Utility = MW.MComm.WalletSolution.Utility;
using Microsoft.Practices.EnterpriseLibrary.ExceptionHandling;
namespace MW.MComm.WalletSolution.BLL.Accounts
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to hold and manage information for ParticipatingPartner instances.</summary>
	///
	/// File History:
	/// <created>1/26/2007 (Dave Clemmer)</created>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	[Serializable()]
	[DataTransform(Name = "MW.MComm.WalletSolution.DAL.Accounts.ParticipatingPartner")]
	public partial class ParticipatingPartner : PersistedBusinessObject
	{
		#region Constants
		#endregion Constants
		#region Fields
		// for AccountID property
		protected Guid _accountID = MOD.Data.DefaultValue.Guid;
		// for MetaPartnerID property
		protected Guid _metaPartnerID = MOD.Data.DefaultValue.Guid;
		// for MetaPartnerName read only property
		[DataTransform]
		protected string _metaPartnerName = MOD.Data.DefaultValue.String;
		// for StartDate read only property
		[DataTransform]
		protected DateTime _startDate = MOD.Data.DefaultValue.DateTime;
		// for EndDate read only property
		[DataTransform]
		protected DateTime _endDate = MOD.Data.DefaultValue.DateTime;
		// for DateFormatCode read only property
		[DataTransform]
		protected int _dateFormatCode = MOD.Data.DefaultValue.Int;
		// for FundAccount property
		protected BLL.Accounts.FundAccount _fundAccount = null;
		// for MetaPartner property
		protected BLL.Customers.MetaPartner _metaPartner = null;
		#endregion Fields
		#region Properties
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the AccountID.</summary>
		// ------------------------------------------------------------------------------
		[XmlElementAttribute()]
		[DataTransform]
		public virtual Guid AccountID
		{
			get
			{
				return _accountID;
			}
			set
			{
				if (_accountID != value)
				{
					_accountID = value;
					_fundAccount = null;
					// reset FundAccount
					BLL.PersistedBusinessObject vFundAccount = (BLL.PersistedBusinessObject) FundAccount;
					vFundAccount = null;
					_isDirty = true;
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the MetaPartnerID.</summary>
		// ------------------------------------------------------------------------------
		[XmlElementAttribute()]
		[DataTransform]
		public virtual Guid MetaPartnerID
		{
			get
			{
				return _metaPartnerID;
			}
			set
			{
				if (_metaPartnerID != value)
				{
					_metaPartnerID = value;
					_metaPartner = null;
					// reset MetaPartner
					BLL.PersistedBusinessObject vMetaPartner = (BLL.PersistedBusinessObject) MetaPartner;
					vMetaPartner = null;
					_isDirty = true;
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the primary key.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.String)]
		[XmlElementAttribute()]
		public string PrimaryKey
		{
			get
			{
				return (MOD.Data.DataHelper.GetString(AccountID,"") + ", " + MOD.Data.DataHelper.GetString(MetaPartnerID,""));
			}
			set
			{
				string[] keyValues = value.Split(',');
				if (keyValues.Length > 0)
				{
					AccountID = MOD.Data.DataHelper.GetGuid(keyValues[0], MOD.Data.DefaultValue.Guid);
				}
				if (keyValues.Length > 1)
				{
					MetaPartnerID = MOD.Data.DataHelper.GetGuid(keyValues[1], MOD.Data.DefaultValue.Guid);
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the primary name.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.String)]
		[XmlElementAttribute()]
		public string PrimaryName
		{
			get
			{
				if (_primaryName != MOD.Data.DefaultValue.String)
				{
					return _primaryName;
				}
				else
				{
					return MetaPartnerName;
				}
			}
			set
			{
				_primaryName = value;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the primary index.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.String)]
		[XmlElementAttribute()]
		public string PrimaryIndex
		{
			get
			{
				return (MOD.Data.DataHelper.GetString(AccountID,"") + ", " + MOD.Data.DataHelper.GetString(MetaPartnerID,""));
			}
			set
			{
				string[] keyValues = value.Split(',');
				if (keyValues.Length > 0)
				{
					AccountID = MOD.Data.DataHelper.GetGuid(keyValues[0], MOD.Data.DefaultValue.Guid);
				}
				if (keyValues.Length > 1)
				{
					MetaPartnerID = MOD.Data.DataHelper.GetGuid(keyValues[1], MOD.Data.DefaultValue.Guid);
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the primary sort column.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.String)]
		[XmlElementAttribute()]
		public string PrimarySortColumn
		{
			get
			{
				if (_primarySortColumn != MOD.Data.DefaultValue.String)
				{
					return _primarySortColumn;
				}
				else
				{
					return "MetaPartnerName";
				}
			}
			set
			{
				_primarySortColumn = value;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property checks for any collections that have been modified since object was last saved to or loaded from the database</summary>
		// ------------------------------------------------------------------------------
		public override bool IsCollectionDirty
		{
			get
			{
				return (
				base.IsCollectionDirty);
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This read only property gets the MetaPartnerName.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.String)]
		[XmlElementAttribute()]
		public virtual string MetaPartnerName
		{
			get
			{
				return _metaPartnerName;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This read only property gets the StartDate.</summary>
		// ------------------------------------------------------------------------------
		[XmlElementAttribute()]
		public virtual DateTime StartDate
		{
			get
			{
				return _startDate;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This read only property gets the EndDate.</summary>
		// ------------------------------------------------------------------------------
		[XmlElementAttribute()]
		public virtual DateTime EndDate
		{
			get
			{
				return _endDate;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This read only property gets the DateFormatCode.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.Int)]
		[XmlElementAttribute()]
		public virtual int DateFormatCode
		{
			get
			{
				return _dateFormatCode;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets an item of FundAccount.</summary>
		// ------------------------------------------------------------------------------
		[XmlIgnore]
		[DataTransform]
		public virtual BLL.Accounts.FundAccount FundAccount
		{
			get
			{
				if (_fundAccount == null  && IsLazyLoadable == true)
				{
					_fundAccount = BLL.Accounts.FundAccountManager.GetOneFundAccount((Guid)AccountID);
					// refresh derived properties
					if (_fundAccount != null)
					{
						_startDate = _fundAccount.StartDate;
						_endDate = _fundAccount.EndDate;
					}
					else
					{
						_startDate = MOD.Data.DefaultValue.DateTime;
						_endDate = MOD.Data.DefaultValue.DateTime;
					}
				}
				return _fundAccount;
			}
			set
			{
				if (_fundAccount != value)
				{
					_fundAccount = value;
					_isDirty = true;
					// refresh derived properties
					if (_fundAccount != null)
					{
						_startDate = _fundAccount.StartDate;
						_endDate = _fundAccount.EndDate;
					}
					else
					{
						_startDate = MOD.Data.DefaultValue.DateTime;
						_endDate = MOD.Data.DefaultValue.DateTime;
					}
				}
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets an item of MetaPartner.</summary>
		// ------------------------------------------------------------------------------
		[XmlIgnore]
		[DataTransform]
		public virtual BLL.Customers.MetaPartner MetaPartner
		{
			get
			{
				if (_metaPartner == null  && IsLazyLoadable == true)
				{
					_metaPartner = BLL.Customers.MetaPartnerManager.GetOneMetaPartner((Guid)MetaPartnerID);
					// refresh derived properties
					if (_metaPartner != null)
					{
						_metaPartnerName = _metaPartner.MetaPartnerName;
						_dateFormatCode = _metaPartner.DateFormatCode;
					}
					else
					{
						_metaPartnerName = MOD.Data.DefaultValue.String;
						_dateFormatCode = MOD.Data.DefaultValue.Int;
					}
				}
				return _metaPartner;
			}
			set
			{
				if (_metaPartner != value)
				{
					_metaPartner = value;
					_isDirty = true;
					// refresh derived properties
					if (_metaPartner != null)
					{
						_metaPartnerName = _metaPartner.MetaPartnerName;
						_dateFormatCode = _metaPartner.DateFormatCode;
					}
					else
					{
						_metaPartnerName = MOD.Data.DefaultValue.String;
						_dateFormatCode = MOD.Data.DefaultValue.Int;
					}
				}
			}
		}
		#endregion Properties
		#region Constructors
		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor (currently does nothing).</summary>
		// ------------------------------------------------------------------------------
		public ParticipatingPartner()
		{
			//
			// constructor logic
			//
		}
		// ------------------------------------------------------------------------------
		/// <summary>This method creates an instance with the primary key values.</summary>
		// ------------------------------------------------------------------------------
		public ParticipatingPartner(string keyValues, bool isPrimaryKeyValues)
		{
			if (isPrimaryKeyValues == true)
			{
				//
				// set the primary keys from the comma delimeted list
				//
				PrimaryKey = keyValues;
			}
			else
			{
				//
				// set the index keys from the comma delimeted list
				//
				PrimaryIndex = keyValues;
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This constructor initializes the ParticipatingPartner from its DAL counterpart.</summary>
		// ------------------------------------------------------------------------------
		public ParticipatingPartner(DAL.Accounts.ParticipatingPartner businessObject) : base(businessObject)
		{
		}
		// ------------------------------------------------------------------------------
		/// <summary>This constructor initializes the ParticipatingPartner from its primary key parameters.</summary>
		// ------------------------------------------------------------------------------
		public ParticipatingPartner(Guid accountID, Guid metaPartnerID)
		{
			AccountID = accountID;
			MetaPartnerID = metaPartnerID;
		}
		#endregion Constructors
		#region Methods
		// ------------------------------------------------------------------------------
		/// <summary>This method loads the ParticipatingPartner with its already set properties.</summary>
		// ------------------------------------------------------------------------------
		public void Load()
		{
			Load(AccountID, MetaPartnerID);
		}
		// ------------------------------------------------------------------------------
		/// <summary>This method loads the ParticipatingPartner from its primary key parameters.</summary>
		// ------------------------------------------------------------------------------
		public void Load(Guid accountID, Guid metaPartnerID)
		{
			BLL.Accounts.ParticipatingPartner businessObject = null;
			businessObject = BLL.Accounts.ParticipatingPartnerManager.GetOneParticipatingPartner(accountID, metaPartnerID);
			if(businessObject != null)
			{
				ReflectionHelper.Copy(businessObject, this, true);
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This method saves the ParticipatingPartner into the database,
		/// performing add/update auto detect and performing a cascade operation if indicated.</summary>
		// ------------------------------------------------------------------------------
		public void Save(bool performCascade)
		{
			if (IsLoaded == false)
			{
				BLL.Accounts.ParticipatingPartnerManager.AddOneParticipatingPartner(this, performCascade);
			}
			else
			{
				BLL.Accounts.ParticipatingPartnerManager.UpdateOneParticipatingPartner(this, performCascade);
			}
		}
		// ------------------------------------------------------------------------------
		/// <summary>This method saves the ParticipatingPartner into the database,
		/// performing add/update auto detect and without performing a cascade operation.</summary>
		// ------------------------------------------------------------------------------
		public void Save()
		{
			Save(false);
		}
		/// <summary>
		///	Clears the dirty state of ParticipatingPartner and its subcollections.
		/// </summary>
		/// <param name="clearCollectionDirtyState">Flag to clear subcollections.</param>
		/// <returns></returns>
		public override void ClearDirtyState(bool clearCollectionDirtyState)
		{
			// clear base items
			base.ClearDirtyState();
			// clear collections and other items
			if (this._fundAccount != null)
			{
				this.FundAccount.ClearDirtyState(clearCollectionDirtyState);
			}
			if (this._metaPartner != null)
			{
				this.MetaPartner.ClearDirtyState(clearCollectionDirtyState);
			}
		}
		/// <summary>
		///	Tests to see if input object is convertable to ParticipatingPartner, and has the same primary key values.
		/// </summary>
		/// <param name="obj">Input object to test.</param>
		/// <returns></returns>
		public override bool Equals(object obj)
		{
			ParticipatingPartner participatingPartnerInstance = obj as ParticipatingPartner;
			if (participatingPartnerInstance == null)
				return false;
			else
				return (_accountID == participatingPartnerInstance.AccountID && 
					_metaPartnerID == participatingPartnerInstance.MetaPartnerID);
		}
		/// <summary>
		///	Returns unique identifying integer		 
		/// </summary>
		/// <returns></returns>
		public override int GetHashCode()
		{
			return (_accountID.ToString() + _metaPartnerID.ToString()).GetHashCode();
		}
		#endregion Methods
	}
}