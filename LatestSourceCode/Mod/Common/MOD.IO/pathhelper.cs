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
using System.IO;

namespace MOD.IO
{
	/// <summary>
	/// Summary description for Path.
	/// </summary>
	public class PathHelper
	{
		public static string Parent(string path)
		{
			int i = IndexOfLastBackslash(path);

			if (i > -1)
				return path.Substring(0, i);
			else 
				return null;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <example>
		/// "C:\Test\Temp\" returns "Temp"
		/// </example>
		/// <param name="path"></param>
		/// <returns></returns>
		public static string Current(string path)
		{
			return 
				TrimTrailingBackslash(
					path.Substring(
						IndexOfLastBackslash(path) + 1));

		}

		public static string TrimTrailingBackslash(string path)
		{
			while (path.EndsWith(Path.DirectorySeparatorChar.ToString()))
				path = path.Substring(0, path.Length - 1);

			return path;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <remarks>First trims any trailing backslashes</remarks>
		/// <param name="path"></param>
		/// <returns></returns>
		private static int IndexOfLastBackslash(string path)
		{
			path = TrimTrailingBackslash(path);
			return path.LastIndexOf(Path.DirectorySeparatorChar.ToString(), path.Length);
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="path1"></param>
		/// <param name="path2"></param>
		/// <param name="delimiter">Use Path.DirectorySeparatorChar for backslash, or
		/// Path.AltDirectorySeparatorChar for front slash</param>
		/// <returns></returns>
		public static string Combine(string path1, string path2, char delimiter)
		{
			if (path1 == null) return path2;
			if (path2 == null) return path1;

			if (path1.EndsWith(delimiter.ToString()) || path2.StartsWith(delimiter.ToString()))
				return path1 + path2;
			else
				return path1 + delimiter.ToString() + path2;
		}



        /// <summary>
        /// Returns a relative pathname to a specified file to be used with the Feature file group.
        /// </summary>
        /// <param name="subgroup"></param>
        /// <param name="itemID"></param>
        /// <param name="fileName"></param>
        /// <returns></returns>
        public static string GenerateRelativePath(string a, string b, string c)
        {
            return string.Format("{0}/{1}/{2}", a, b, c);
        }
	}
}
