/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using SQLDMO;

namespace MOD.Data.Reflection
{
    // ------------------------------------------------------------------------------
    /// <summary>
	/// The TableNode class is used by the DataDependencyTree to calculate table depths.
	/// </summary>
    // ------------------------------------------------------------------------------
    public class TableNode 
	{
        private Dictionary<string, TableNode> _children = new Dictionary<string, TableNode>();
		private int? _depth = null;
        private Table2 _table;

        // ------------------------------------------------------------------------------
        /// <summary>
        /// The SQL object that represents the table
        /// </summary>
        // ------------------------------------------------------------------------------
        public Table2 Table
        {
            get { return _table; }
            set { _table = value; }
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// The collection of tables that are "children" of this table, i.e., tables that
        /// this table has a foreign key relationship with.  This should probably be called
        /// "Parents", but oh well.
        /// </summary>
        // ------------------------------------------------------------------------------
        public Dictionary<string, TableNode> Children
		{
			get { return _children; }
		}

        // ------------------------------------------------------------------------------
        /// <summary>
        /// The name of the table in the database
        /// </summary>
        // ------------------------------------------------------------------------------
        public string Name
        {
            get { return _table.Name; }
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// The depth of the table.  This is computed by traversing the list of tables this
        /// table points to, counting levels of pointing.  A table that refers to no other
        /// table has a depth 0, a table that refers to a table of depth 0 has a depth of 1,
        /// etc.
        /// </summary>
        // ------------------------------------------------------------------------------
        public int? Depth
        {
            get { return _depth; }
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Constuctor
        /// </summary>
        // ------------------------------------------------------------------------------
        public TableNode(Table2 table)
		{
            _table = table;
		}

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Calculates and stores the depth of this table
        /// </summary>
        // ------------------------------------------------------------------------------
        public int CalculateMaxDepth()
        {
            return CalculateMaxDepth(new ArrayList());
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Calculates and stores the depth of this table
        /// </summary>
        // ------------------------------------------------------------------------------
        private int CalculateMaxDepth(ArrayList visitedTables)
		{
            if (_depth.HasValue)
            {
                // The depth has already been calculated, so move on.
                return _depth.Value;
            }

            if (_children.Count == 0)
            {
                // No children, no depth.
                _depth = 0;
                return 0;
            }

            int maxDepth = 0;

            // Find the max depth of the children tables
            foreach (TableNode table in _children.Values)
			{
                if (table == null)
                    continue;

				int depth;

                if (!table.Depth.HasValue)
                {
                    if (visitedTables.Contains(table.Name))
                    {
                        // This is a circular reference, so just treat is as depth 1.
                        depth = 1;
                    }
                    else
                    {
                        visitedTables.Add(table.Name);
                        depth = table.CalculateMaxDepth(visitedTables) + 1;
                        visitedTables.Remove(table.Name);
                    }
                }
                else
                {
                    depth = table.Depth.Value + 1;
                }

                if (depth > maxDepth)
                    maxDepth = depth;
            }

			_depth = maxDepth;

			return maxDepth;
		}

        // ------------------------------------------------------------------------------
        /// <summary>
        /// For debugging.  Returns a string of the table and its children.
        /// </summary>
        // ------------------------------------------------------------------------------
        public override string ToString()
		{
			StringBuilder sb = new StringBuilder();

			sb.AppendFormat("{0}\n", _table.Name);

            foreach (Table table in _children.Values)
			{
				if (table != null)
					sb.AppendFormat("\t{0}\n", table.Name);
			}

			return sb.ToString();
		}

        // ------------------------------------------------------------------------------
        /// <summary>
        /// For debugging.  Returns a string of the table and its children.
        /// </summary>
        // ------------------------------------------------------------------------------
        public string ToTreeString(int depth, ArrayList visitedTables, bool showChildren)
		{
			StringBuilder sb = new StringBuilder();

			for (int i = 0; i < depth + 1; i++)
				sb.Append(" ");

			sb.Append(Name);
			sb.Append("\r\n");

            if (showChildren)
            {
                foreach (TableNode table in _children.Values)
                {
                    if (table == null) continue;

                    if (visitedTables.Contains(table.Name))
                    {
                        for (int i = 0; i < depth + 2; i++)
                            sb.Append(" ");

                        sb.AppendFormat(table.Name + "*\r\n");
                        continue;
                    }

                    visitedTables.Add(table.Name);
                    sb.Append(table.ToTreeString(depth + 1, visitedTables, true));
                }
            }

			return sb.ToString();
		}
	}
}
