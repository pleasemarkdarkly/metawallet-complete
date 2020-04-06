/****************************************************************************************
 * ADOT (c) 2004
// Validate.cs - Some strange validating stuff that is not complete.
*****************************************************************************************/

using System;
using System.Xml.Serialization;
using System.Xml;
using System.Text.RegularExpressions;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;

using MOD.Data;

namespace MOD.Data
{
	/// <summary>
	/// Base class used for form validation
	/// </summary>
	public abstract class Validator
	{
		/// <summary>
		/// All base classes must declare this member.
		/// </summary>
		/// <param name="o">Object to validate</param>
		/// <returns>true if valid otherwise false</returns>
		public abstract bool Validate(object o);
	}

	/// <summary>
	/// Validate Text objects.
	/// </summary>
	public class ValidateText : Validator
	{
		/// <summary>
		/// Regular expression
		/// </summary>
		[XmlAttribute]
		public string RegText;

		/// <summary>
		/// Can the text object to nothing?
		/// </summary>
		[XmlAttribute]
		public bool CanBeBlank = true;

		/// <summary>
		/// True if all conditions are met.
		/// </summary>
		/// <param name="o">string to validate</param>
		/// <returns>true if string is valid otherwise false</returns>
		public override bool Validate(object o)
		{
			if( o == null && CanBeBlank)
			{
				return true;
			}
			if( o.ToString() == "" && CanBeBlank )
			{
				return true;
			}

			Regex reg = new Regex(RegText);
			Match m = reg.Match(o.ToString());

			return m.Success;
		}
	}

	/// <summary>
	/// Validate integers.
	/// </summary>
	public class ValidateInt : Validator
	{
		/// <summary>
		/// Maximum value for integer.
		/// </summary>
		[XmlAttribute]
		public int Max = int.MaxValue;

		/// <summary>
		/// Minimum value for integer
		/// </summary>
		[XmlAttribute]
		public int Min = int.MinValue;

		/// <summary>
		/// Can it be Zero, or not filled out at all?
		/// </summary>
		[XmlAttribute]
		public bool CanBeNull = true;

		/// <summary>
		/// Validate function for integer
		/// </summary>
		/// <param name="o">integer to check</param>
		/// <returns>true if all conditions are met</returns>
		public override bool Validate(object o)
		{
			if( o == null && CanBeNull)
			{
				return true;
			}
			int i;
			try 
			{
				i = Convert.ToInt32(o);
			}
			catch
			{
				return false;
			}
			if( i < Min || i > Max)
			{
				return false;
			}
			return true;
		}
	}

	public class ValidateStringParam : Label, IValidator
	{
		string _errorMsg;
		bool _isValid = false;
		public SqlProcAdapter Procedures;
		public string ProcedureName;
		public string ParameterName;
		public string ControlToValidate;

		protected override void OnInit(EventArgs e)
		{
			base.OnInit (e);
			Page.Validators.Add(this);
		}

		#region IValidator Members

		public void Validate()
		{
			SqlProc proc = Procedures.GetProcedure(ProcedureName);
			if( proc == null )
			{
				Text = ErrorMessage;
				Style["color"] = "red";
				return;
			}
			foreach(ProcedureParam parm in proc.Parameters)
			{
				if( parm.Name == ParameterName )
				{
					Control ctl = Page.FindControl(ControlToValidate);
					if( ctl == null )
					{
						throw(new Exception("Unable to find control " + ControlToValidate));
					}

					if( ctl is TextBox )
					{
						if( ((TextBox)ctl).Text.Length < parm.Length )
						{
							_isValid = true;
						}
					} 
					else if( ctl is System.Web.UI.HtmlControls.HtmlInputControl )
					{
						
						if( ((System.Web.UI.HtmlControls.HtmlInputControl)ctl).Value.Length < parm.Length )
						{
							_isValid = true;
						}
					}
					else if( ctl is System.Web.UI.HtmlControls.HtmlTextArea )
					{
						if( ((System.Web.UI.HtmlControls.HtmlTextArea)ctl).Value.Length < parm.Length )
						{
							_isValid = true;
						}
					} 
					else 
					{
						throw(new Exception("Validation control does not support control " + ControlToValidate + " " + ctl.GetType().ToString()));
					}
					if( !_isValid )
					{
						Text = ErrorMessage;
						Style["color"] = "red";
					}

				}
			}
		}

		public bool IsValid
		{
			get
			{
				return _isValid;
			}
			set
			{
				_isValid = value;
			}
		}

		public string ErrorMessage
		{
			get
			{
				return _errorMsg;
			}
			set
			{
				_errorMsg = value;
			}
		}

		#endregion
	}



	public class ValidateMessage : IValidator
	{
		string m_sError;
		#region IValidator Members

		public void Validate()
		{
		}

		public ValidateMessage() {}

		public ValidateMessage(string msg)
		{
			m_sError = msg;
		}

		public bool IsValid
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public string ErrorMessage
		{
			get
			{
				return m_sError;
			}
			set
			{
				m_sError = value;
			}
		}

		#endregion

	}


	public class CustomCBValidator : Label, IValidator
	{
		bool m_IsValid = false;
		string m_sError = "";

		public string ControlToValidate;

		public CustomCBValidator()
		{
			m_sError = "";
		}
		
		protected override void OnInit(EventArgs e)
		{
			base.OnInit (e);
			this.Page.Validators.Add(this);
		}

		#region IValidator Members
		
		public void Validate()
		{
			if( ControlToValidate == null )
			{
				return;
			}

			Control ctl = Page.FindControl(ControlToValidate);
			if( typeof(CheckBox).IsInstanceOfType(ctl) )
			{
				m_IsValid = ((CheckBox)ctl).Checked;
			} 
			else if( typeof(HtmlInputCheckBox).IsInstanceOfType(ctl) )
			{
				m_IsValid = ((HtmlInputCheckBox)ctl).Checked;
			} 

			Visible = false;
			if( !m_IsValid)
			{
				Visible = true;
				this.Style["color"] = "red";
				this.Text = ErrorMessage;
			}
		}

		public bool IsValid
		{
			get
			{
				return m_IsValid;
			}
			set
			{
				m_IsValid = value;
			}
		}

		public string ErrorMessage
		{
			get
			{
				return m_sError;
			}
			set
			{
				m_sError = value;
			}
		}

		#endregion
	}

}

