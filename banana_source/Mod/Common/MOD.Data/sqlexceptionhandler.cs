using System;
using System.Data.SqlClient;
using System.Text;

namespace MOD.Data
{
	public class SqlExceptionHandler
	{
		public SqlExceptionHandler(Exception e, SqlCommand cmd)
		{
			throw new ApplicationException(GetCommandInfo(cmd,e.Message),e);
		}

        public static string GetCommandInfo(SqlCommand cmd)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(cmd.CommandText);
            foreach(SqlParameter sqlParam in cmd.Parameters)
            {   
                sb.AppendFormat(" {0} = [{1}],", sqlParam.ParameterName, sqlParam.Value == DBNull.Value ? "NULL" : sqlParam.Value.ToString() );
            }
            return sb.ToString();
        }

        public static string GetCommandInfo(SqlCommand cmd, string message)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(message);
            sb.Append(" ");
            sb.Append(GetCommandInfo(cmd));
            return sb.ToString();
        }
	}
}
