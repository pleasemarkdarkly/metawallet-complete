using System;
using System.Data;
using System.Collections;
using System.Reflection;

namespace MOD.Data
{
	/// <summary>
	/// Summary description for converter.
	/// </summary>
	public class CollectionToDataTable
	{
		ICollection m_Col = null;
		DataTable _table;
		public CollectionToDataTable(ICollection col)
		{
			m_Col = col;
			Create();
		}

		public DataTable Table
		{
			get { return _table; }
		}

		public void Create()
		{
			IEnumerator e = m_Col.GetEnumerator();
			if( !e.MoveNext() )
			{
				return;
			}
			object o = e.Current;
			Type t = o.GetType();
			MemberInfo[] members = t.GetMembers();
			MemberInfo mi;
			ArrayList al = new ArrayList();

			DataTable dt = new DataTable();
			int i = 0;
			for(i = 0; i < members.Length; i++)
			{
				switch( members[i].MemberType )
				{
					case MemberTypes.Property:
						if( ((PropertyInfo)members[i]).CanRead )
						{
							al.Add(members[i]);
							dt.Columns.Add(members[i].Name, ((PropertyInfo)members[i]).PropertyType);
						}
						break;
					case MemberTypes.Field:
						if( ((FieldInfo)members[i]).IsPublic )
						{
							al.Add(members[i]);
							dt.Columns.Add(members[i].Name, ((FieldInfo)members[i]).FieldType);
						}
						break;
				}
			}

			// Fill table with collection
			do 
			{
				o = e.Current;
				DataRow dr = dt.NewRow();
				dt.Rows.Add(dr);

				for(i = 0; i < al.Count; i++)
				{
					mi = (MemberInfo)al[i];
					object val = null;
					switch(mi.MemberType)
					{
						case MemberTypes.Property:
							val = ((PropertyInfo)mi).GetValue(o, null);
							break;
						case MemberTypes.Field:
							val = ((FieldInfo)mi).GetValue(o);
							break;
						default:
							continue;
					}
					dr[mi.Name] = val;
				}
			} while(e.MoveNext());
			_table = dt;
		}
	}
}
