using System;
using MySql.Data;
using MySql.Data.MySqlClient;
using System.Text;

namespace MOD.Data
{
	public class MySqlExceptionHandler
	{
		public MySqlExceptionHandler(Exception e, MySqlCommand cmd)
		{
			throw new ApplicationException(GetCommandInfo(cmd,e.Message),e);
		}

        public static string GetCommandInfo(MySqlCommand cmd)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(cmd.CommandText);
            foreach(MySqlParameter sqlParam in cmd.Parameters)
            {   
                sb.AppendFormat(" {0} = [{1}],", sqlParam.ParameterName, sqlParam.Value == DBNull.Value ? "NULL" : sqlParam.Value.ToString() );
            }
            return sb.ToString();
        }

        public static string GetCommandInfo(MySqlCommand cmd, string message)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(message);
            sb.Append(" ");
            sb.Append(GetCommandInfo(cmd));
            return sb.ToString();
        }
	}
}
