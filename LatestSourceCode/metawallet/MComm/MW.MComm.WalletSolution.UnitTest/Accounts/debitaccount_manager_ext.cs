

/*<copyright>
Meta Wallet, Inc (c) 2007 All Rights Reserved.
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036
All Rights Reserved, (c) 2007, covered by Trademark Laws, contents are considered Restricted Secrets by Meta Wallet.  The contents also may only be viewed by Meta Wallet Engineers (employees) and selected partners as outlined in the Licensing Agreement between Meta Wallet and said partners.
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
using MOD.Test;
using MbUnit.Framework;
using MbUnit.Core;
using MW.MComm.WalletSolution.BLL.Config;
using BLL = MW.MComm.WalletSolution.BLL;
using Utility = MW.MComm.WalletSolution.Utility;
using Microsoft.Practices.EnterpriseLibrary.ExceptionHandling;

namespace MW.MComm.WalletSolution.UnitTest.Accounts
{
    // ------------------------------------------------------------------------------
    /// <summary>This class contains support methods to test DebitAccount instances.</summary>
    ///
    /// File History:
    /// <created>7/25/2007 (Brian MacDonald)</created>
    ///
    /// <remarks></remarks>
    // ------------------------------------------------------------------------------
    public partial class DebitAccount_Manager
    {

		#region Properties
        #endregion Properties

		#region Methods
        // ------------------------------------------------------------------------------
        /// <summary>This method is used to cleanup DebitAccount items.</summary>
        // ------------------------------------------------------------------------------
        public static void PopulateItemCleanup(BLL.Accounts.DebitAccount item, MOD.Data.NamedObjectCollection useCollections, bool performCascade, bool isAddOperation, bool isCollectionOperation, MOD.Test.TestResults results)
        {
            MW.MComm.WalletSolution.UnitTest.Accounts.Account_Manager.PopulateItemCleanup(item, useCollections, performCascade, isAddOperation, isCollectionOperation, results);
        }

        // ------------------------------------------------------------------------------
        /// <summary>This method is used to determine if DebitAccount item can be added.</summary>
        // ------------------------------------------------------------------------------
        public static bool IsValidForAdd(BLL.Accounts.DebitAccount item, bool performCascade, MOD.Test.TestResults results)
        {
            return MW.MComm.WalletSolution.UnitTest.Accounts.Account_Manager.IsValidForAdd(item, performCascade, results);
        }

        // ------------------------------------------------------------------------------
        /// <summary>This method is used to determine if DebitAccount item can be updated.</summary>
        // ------------------------------------------------------------------------------
        public static bool IsValidForUpdate(BLL.Accounts.DebitAccount item, bool performCascade, MOD.Test.TestResults results)
        {
            return MW.MComm.WalletSolution.UnitTest.Accounts.Account_Manager.IsValidForUpdate(item, performCascade, results);
        }

        // ------------------------------------------------------------------------------
        /// <summary>This method is used to determine if DebitAccount item can be deleted.</summary>
        // ------------------------------------------------------------------------------
        public static bool IsValidForDelete(BLL.Accounts.DebitAccount item, bool performCascade, MOD.Test.TestResults results)
        {
            return MW.MComm.WalletSolution.UnitTest.Accounts.Account_Manager.IsValidForDelete(item, performCascade, results);
        }
        #endregion Methods
    }
}