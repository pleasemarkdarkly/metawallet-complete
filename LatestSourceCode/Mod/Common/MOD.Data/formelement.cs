using System;
using System.Data;
using System.Data.SqlClient;
using System.Xml.Serialization;
using System.Xml;
using System.Text;
using System.IO;
using System.Text.RegularExpressions;
using System.Collections.Specialized;
using System.Collections;
using System.Reflection;

namespace MOD.Data
{
    /// <summary>
    /// The Base class for form elements.
    /// This class contains all shared values.
    /// </summary>
    public abstract class FormElement
    {
        /// <summary>
        /// Base properties for all FormElements
        /// </summary>
        [XmlAttribute]
        public string Name;

        /// <summary>
        /// Users must fill out this field
        /// </summary>
        [XmlAttribute]
        public bool Required;

        /// <summary>
        /// Title for the field.
        /// </summary>
        [XmlAttribute]
        public string Title;

        /// <summary>
        /// Type of the Value, number, string, datetime.
        /// </summary>
        [XmlAttribute]
        public string ValueType;

        /// <summary>
        /// DataRow column this object should be initialized from.
        /// </summary>
        [XmlAttribute]
        public string Column;

        /// <summary>
        /// When printed out then the field is marked as display:none;
        /// </summary>
        [XmlAttribute]
        public bool Hidden;

        /// <summary>
        /// Validators that can be used to validate this entry.
        /// </summary>
        [XmlElement("ValidateText", typeof(ValidateText))]
        [XmlElement("ValidateInt", typeof(ValidateInt))]
        public Validator[] Validators;

        /// <summary>
        /// Validator event handler.
        /// </summary>
        public event EventHandler Validating;

        /// <summary>
        /// List of HTML attributes to be applied to the printed form element.
        /// </summary>
        [XmlElement("Attribute", typeof(HtmlAttribute))]
        public HtmlAttribute[] Attributes;

        /// <summary>
        /// Generic function to print attribute name/value pairs.
        /// </summary>
        /// <returns>Returns a string with all HTML attributes from teh attributes array</returns>
        public virtual string PrintAttributes()
        {
            if (Attributes == null)
            {
                return "";
            }
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < Attributes.Length; i++)
            {
                sb.Append(string.Format("{0}=\"{1}\" ", Attributes[i].Name, Attributes[i].Value));
            }
            return sb.ToString();
        }

        /// <summary>
        /// This function validates the value that was input to this form object.
        /// </summary>
        /// <param name="s">Text to use for validation</param>
        /// <param name="o">Object to validate</param>
        /// <returns>true passed in object is valid, otherwise false.</returns>
        public bool ValidateEvent(string s, object o)
        {
            // Call predefined validating classes.
            if (Validators != null)
            {
                for (int i = 0; i < Validators.Length; i++)
                {
                    if (!Validators[i].Validate(o))
                    {
                        return false;
                    }
                }
            }

            // Call custom validate event handlers.
            if (Validating != null)
            {
                FormElementValidateArgs v = new FormElementValidateArgs();
                v.ValidateText = s;
                v.Value = o;
                Validating(this, v);
                if (!v.IsValid)
                {
                    return false;
                }
            }
            return true;
        }

        /// <summary>
        /// Column value can be an index or text ordinal, this function will try the
        /// index first, if this fails then the text version will be tried.  If either
        /// method fails then a blank string is returned.
        /// </summary>
        /// <param name="row">Row to retrieve column data from</param>
        /// <returns>object of the column</returns>
        public virtual object GetColumn(DataRow row)
        {
            object o = "";
            if (row != null)
            {
                try
                {
                    o = row[int.Parse(Column)];
                }
                catch
                {
                    try
                    {
                        o = row[Column];
                    }
                    catch
                    {
                        o = "";
                    }
                }
            }
            return o;
        }

        /// <summary>
        /// Derived classes mus contain this function.  This function is used to
        /// spit out the HTML for the specific type of object being.
        /// created.
        /// </summary>
        /// <param name="baseName">ID for the form element</param>
        /// <param name="dr">DataRow being used to print out the HTML</param>
        /// <returns>HTML code for the object</returns>
        public abstract string HtmlText(string baseName, DataRow dr);

        /// <summary>
        /// Validate a row.  This is used to validate stuff coming from a datarow.
        /// </summary>
        /// <param name="dr">DataRow to validate.  The Column attribute determines which
        /// column to validate</param>
        /// <returns>true if the column is valid or else false</returns>
        public virtual bool Validate(DataRow dr)
        {
            if (dr == null)
            {
                // No validating to do
                return true;
            }
            return ValidateEvent("", GetColumn(dr));
        }

    }
}
