using System;
using System.Data;
using System.Web;
using System.Net.Mail;
using System.Xml;
using System.Xml.Serialization;
using System.Collections;
using System.Text.RegularExpressions;
using System.Text;
using System.Reflection;
using System.IO;

using MOD.Data;

namespace MOD.Data
{
	/// <summary>
	/// Used to replace object references in strings with the object strings.
	/// </summary>
	public class StringTemplate
	{
		string m_s = "";
		static Regex m_reg = new Regex("{(?<replace>[\\w.\\d]+)(|:(?<str>[\\S]+))}", RegexOptions.Multiline);
		NamedObjectCollection m_ReplaceObjects;

		public StringTemplate(string s)
		{
			m_s = s;
		}
		
		public string Replace(NamedObjectCollection noc)
		{
			m_ReplaceObjects = noc;
			string s = m_reg.Replace(m_s, new MatchEvaluator(this.Replace));
			return s;
		}

		/// <summary>
		/// Called by regex.Replace to replace strings in our e-mail messages.
		/// </summary>
		/// <param name="match">Match object</param>
		/// <returns>string to replace</returns>
		private string Replace(Match match)
		{
			if( this.m_ReplaceObjects == null )
			{
				return "";
			}
			
			string[] ss= match.Groups["replace"].Value.Split('.');
			// Find the variable name first.
			object o = m_ReplaceObjects[ss[0]];
			if( o == null )
			{
				return string.Format("{0} Error[{1}] item not found", match.Value, ss[0]);
			}
			for(int i = 1; i < ss.Length; i++)
			{
				Type t = o.GetType();
				MemberInfo[] members = t.GetMember(ss[i]);
				if( members == null || members.Length <= 0)
				{
					return string.Format("{0} Error[{1}] item not found", match.Value, ss[i]);
				}
				switch(	members[0].MemberType )
				{
					case MemberTypes.Field:
						o = ((FieldInfo)members[0]).GetValue(o);
						break;
					case MemberTypes.Property:
						o = ((PropertyInfo)members[0]).GetValue(o, null);
						break;
					default:
						return string.Format("{0} Error[{1}] unsupported type", match.Value, ss[i]);
				}
				if( o == null )
				{
					throw( new NullReferenceException("Object is null, " + match.Groups["replace"].Value + " member " + ss[i]));
				}
			}
			if( match.Groups["str"].Length > 0 )
			{
				return o.GetType().InvokeMember("ToString", System.Reflection.BindingFlags.InvokeMethod, null, o, new object[] {match.Groups["str"].Value } ).ToString();
			}
			return o.ToString();
		}
	}
	/// <summary>
	/// Used to format the mail.
	/// </summary>
	public class MailTemplate
	{
		/// <summary>
		/// Message to send
		/// </summary>
		public string Message;

		/// <summary>
		/// Subject to send
		/// </summary>
		public string Subject;

		/// <summary>
		/// The id of this mail message.
		/// </summary>
		[XmlAttribute("ID")]
		public string MailType;
	}

	/// <summary>
	/// Strongly typed MailInfo collection
	/// </summary>
	public class MailTemplateCollection : CollectionBase
	{
		/// <summary>
		/// Default integer indexer
		/// </summary>
		public MailTemplate this[int i]
		{
			get 
			{
				return (MailTemplate)InnerList[i];
			}
			set 
			{
				InnerList[i] = value;
			}
		}

		/// <summary>
		/// Adds a new item to this collection
		/// </summary>
		/// <param name="o">Object to add</param>
		/// <returns>Count</returns>
		public int Add(MailTemplate o)
		{
			if( o == null )
			{
				throw(new ArgumentException("Argument o can not be null"));
			}
			return InnerList.Add(o);
		}
	}

	/// <summary>
	/// Contains mail message templates
	/// </summary>
	[XmlRoot("Mails")]
	public class MailTemplateContainer
	{
		/// <summary>
		/// Available templates
		/// </summary>
		[XmlElement("Mail")]
		public MailTemplateCollection Mails = new MailTemplateCollection();

		NamedObjectCollection m_ReplaceObjects = null;
		/// <summary>
		/// Creates a new message.  This function will format the message and replace strings
		/// specified in the mail.  Replacements are performed by looking for an object with the given
		/// name and until a string has returned.
		/// </summary>
		/// <param name="mm">MailMessage to set</param>
		/// <param name="MailID">The mail template to use</param>
		/// <param name="col">Replacement variables</param>
		/// <returns>true if message was found</returns>
		public bool CreateMessage(MailMessage mm, string MailID, NamedObjectCollection col)
		{
			m_ReplaceObjects = col;
			MailTemplate temp = null;
			for(int i = 0; i < Mails.Count; i++)
			{
				if( Mails[i].MailType == MailID )
				{
					temp = Mails[i];
					break;
				}
			}

			if( temp == null )
			{
				return false;
			}
			StringTemplate st = new StringTemplate(temp.Message);
			mm.Body = st.Replace(col);
			st = new StringTemplate(temp.Subject);
			mm.Subject = st.Replace(col);

			return true;

		}

	}

	/// <summary>
	/// Summary description for emailer.
	/// </summary>
	public class Emailer
	{
		/// <summary>
		/// Container with all the e-mail template definitions
		/// </summary>
		MailTemplateContainer m_MailCon;

		/// <summary>
		/// Uses the email template 'Template Path' at this time
		/// </summary>
		public Emailer(string templatePath)
		{
			XmlSerializer xml = new XmlSerializer(typeof(MailTemplateContainer));
			StreamReader sr = new StreamReader(templatePath); //ADOT.RegisterConfig.Settings["MailTemplatePath"]);
			m_MailCon = (MailTemplateContainer)xml.Deserialize(sr);
			sr.Close();
		}

		/// <summary>
		/// Send mail
		/// </summary>
		/// <param name="from">From address list</param>
		/// <param name="to">To address list</param>
		/// <param name="messageid"></param>
		/// <param name="col"></param>
		/// <returns></returns>
		public bool Send(string from, string to, string messageid, NamedObjectCollection col)
		{
			MailMessage mm = new MailMessage(new MailAddress(from), new MailAddress(to));
			mm.IsBodyHtml = true;
			m_MailCon.CreateMessage(mm, messageid, col);

			SmtpClient mail = new SmtpClient();
			mail.Send(mm);
			return true;
		}

		/// <summary>
		/// Just send mail
		/// </summary>
		/// <param name="from">from</param>
		/// <param name="to">to</param>
		/// <param name="subject">mail subject</param>
		/// <param name="body">mail body</param>
		/// <returns></returns>
	
		public bool Send(string from, string to, string subject, string body)
		{
			MailMessage mm = new MailMessage(new MailAddress(from), new MailAddress(to));
			mm.Subject = subject;
			mm.Body = body;
			SmtpClient mail = new SmtpClient();
			mail.Send(mm);
			return true;
		}
	}
}
