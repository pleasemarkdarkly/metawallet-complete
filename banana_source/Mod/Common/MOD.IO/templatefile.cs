using System;
using System.IO;
using System.Reflection;
using System.Collections;
using System.Collections.Specialized;

namespace MOD.IO
{
	/// <summary>
	/// Summary description for TemplateFile.
	/// </summary>
	public class TemplateFile
	{
		const string DELIMITER_CODE_START = "<%=";
		const string DELIMITER_CODE_END = "%>";
		const string DELIMITER_STATEMENT_END = ";";

		string _path;
		string _template;
		string _content;
		Hashtable _objects;

		public string Content
		{
			get { return _content; }
			set { _content = value; }
		}

		public TemplateFile()
		{
		}

		public void Load(string path)
		{
			if (!File.Exists(path))
				throw new ApplicationException("File not found: " + path);

			_path = path;
			StreamReader reader = File.OpenText(path);
			_template = reader.ReadToEnd();
			reader.Close();
		}


		/// <summary>
		/// Does a simple substitution of {0}, {1} etc. using string.Format()
		/// </summary>
		/// <param name="args"></param>
		/// <returns></returns>
		public string Substitute(params string[] args)
		{
			_content = string.Format(_template, args);
			return _content;
		}


		/// <summary>
		/// Replaces <%=key;%> with value where key and value are specified in args
		/// </summary>
		/// <param name="args"></param>
		/// <returns></returns>
		public void Substitute(NameValueCollection args)
		{
			if (_content == null)
				_content = _template;

			foreach (string key in args.Keys)
				_content = _content.Replace("<%=" + key + ";%>", args[key]);
		}


		/// <summary>
		/// Assumes _template contains constructs of the form
		/// 
		/// <%=entity.Property%>
		/// 
		/// </summary>
		/// <param name="args"></param>
		/// <returns></returns>
		public void Execute(Hashtable args)
		{
			_objects = args;

			if (_content == null)
				_content = _template;

			int i = _content.IndexOf(DELIMITER_CODE_START);
			string code;
			
			while (i > -1)
			{
				int end = _content.IndexOf(DELIMITER_STATEMENT_END + DELIMITER_CODE_END, i);

				if (end == -1)
					throw new ApplicationException(
						string.Format("Template syntax incorrect. File: {0}, position: {1}",
						_path, i));

				code = _content.Substring(i + 3, end - i - 3);

				string evaluatedResult = null;

				try
				{
					evaluatedResult = Evaluate(code);
				}
				catch (Exception e)
				{
					throw new ApplicationException(
						string.Format("Could not process: {0} in template {1}. Error: {2}",
						code, _path, e.Message));
				}
				
				if (evaluatedResult != null)
					_content = _content.Replace(DELIMITER_CODE_START + code + DELIMITER_STATEMENT_END +
						DELIMITER_CODE_END, evaluatedResult);

				i = _content.IndexOf(DELIMITER_CODE_START, i);
			}
		}

		/// <summary>
		/// Currently only supports objectName.Property
		/// </summary>
		/// <param name="code"></param>
		/// <returns></returns>
		protected string Evaluate(string code)
		{
			int i = code.IndexOf(".");

			string objectName = code;
			
			if (i > -1)
				objectName = objectName.Substring(0, code.IndexOf("."));

			object obj = _objects[objectName];

			if (obj == null)
				throw new ApplicationException("Object not found in context: " + objectName);

			i = code.IndexOf(".");
			
			while (i > -1)
			{
				string propertyName;

				int end = code.IndexOf(".", i + 1);

				if (end > -1)
					propertyName = code.Substring(i + 1, end - i - 1);
				else
					propertyName = code.Substring(i + 1);

				PropertyInfo property = obj.GetType().GetProperty(propertyName);

				if (property == null)
					throw new ApplicationException("Could not find property: " + propertyName);

				obj = property.GetValue(obj, new object[] {});
				i = code.IndexOf(".", i + 1);
			}

			return obj.ToString();
		}
	}
}
