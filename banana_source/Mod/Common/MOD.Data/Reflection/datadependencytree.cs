/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/
using System;
using System.Data;
using System.Collections;
using System.Collections.Generic;
using SQLDMO;

namespace MOD.Data.Reflection
{
    // ------------------------------------------------------------------------------
    /// <summary>
	/// The DataDependencyTree determines dependency relationships between tables
    /// in a database, which is then used to calculate table depths.
    /// In this case, Table A depends on Table B if Table A has a foreign key reference to Table B.
	/// </summary>
    // ------------------------------------------------------------------------------
    public class DataDependencyTree
	{
        private Dictionary<string, TableNode> _tables = new Dictionary<string, TableNode>();

        // ------------------------------------------------------------------------------
        /// <summary>
        /// The collection of table nodes, accessible by table name.
        /// </summary>
        // ------------------------------------------------------------------------------
        public Dictionary<string, TableNode> Tables
        {
            get { return _tables; }
            set { _tables = value; }
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Given a server and database, this method builds a tree of dependencies for the tables in the database.
        /// NOTE: THIS METHOD REQUIRES A TRUSTED CONNECTION TO THE DATABASE
        /// </summary>
        // ------------------------------------------------------------------------------
        public void BuildTree(string serverName, string databaseName)
		{
            SQLServer2 server = new SQLServer2();
            server.LoginSecure = true;
            server.Connect(serverName, null, null);

            Database2 database = null;

            foreach (Database2 item in server.Databases)
            {
                if (item.Name.ToLower() == databaseName.ToLower())
                {
                    database = item;
                    break;
                }
            }

            if (database == null)
            {
                throw new ApplicationException("Database not found: " + databaseName);
            }
            
            // Add all tables to list
            foreach (Table2 table in database.Tables)
            {
                if (!_tables.ContainsKey(table.Name.Trim()))
				{
                    if (table.Name.StartsWith("tbl") || table.Name.StartsWith("tlkp") || table.Name.StartsWith("trel"))
                    {
                        _tables[table.Name.Trim()] = new TableNode(table);
                    }
				}
            }

            // Find children for each table
            foreach (TableNode tableNode in _tables.Values)
            {
                foreach (Key key in tableNode.Table.Keys)
                {
                    if (key.Type == SQLDMO_KEY_TYPE.SQLDMOKey_Foreign)
                    {
                        string tableName = key.ReferencedTable.Trim();
                        tableName = tableName.Replace("[dbo].[", "");
                        tableName = tableName.Replace("]", "");
                        TableNode childNode = _tables[tableName];

                        if (childNode != tableNode) // avoid circular references
                        {
                            tableNode.Children[key.ReferencedTable] = childNode;
//                            childNode.Children[tableNode.Name] = tableNode;
                        }
                    }
                }
			}
		}

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Caculates the depth of each table based on its dependencies on other tables.
        /// </summary>
        // ------------------------------------------------------------------------------
        public void CalculateDepths()
        {
            foreach (TableNode table in _tables.Values)
            {
                if (table != null)
                {
                    table.CalculateMaxDepth();
                }
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Prints the tree to the console output.  For debugging.
        /// </summary>
        // ------------------------------------------------------------------------------
        public void OutputTree()
        {
            OutputTree(true);
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Prints the tree to the console output.  For debugging.
        /// </summary>
        // ------------------------------------------------------------------------------
        public void OutputTree(bool showChildren)
		{
            System.Collections.Generic.SortedList<string, string> tableList = new System.Collections.Generic.SortedList<string, string>();

            foreach (TableNode table in _tables.Values)
            {
                if (table != null && !table.Depth.HasValue)
                {
                    tableList.Add(table.Name, table.ToTreeString(0, new ArrayList(), showChildren));
                }
            }
            if (tableList.Count > 0)
            {
                Console.WriteLine("Depth null:");
                foreach (System.Collections.Generic.KeyValuePair<string, string> s in tableList)
                {
                    Console.Write(s.Value);
                }
                Console.WriteLine();
            }

            for (int i = 0; i < 1000; i++)
			{
                tableList.Clear();

				foreach (TableNode table in _tables.Values)
				{
                    if (table != null && table.Depth.HasValue && table.Depth.Value == i)
                    {
                        tableList.Add(table.Name, table.ToTreeString(0, new ArrayList(), showChildren));
                    }
                }
                if (tableList.Count > 0)
                {
                    Console.WriteLine("Depth {0}:", i);
                    foreach (System.Collections.Generic.KeyValuePair<string, string> s in tableList)
                    {
                        Console.Write(s.Value);
                    }
                    Console.WriteLine();
                }
            }
		}

	}
}
