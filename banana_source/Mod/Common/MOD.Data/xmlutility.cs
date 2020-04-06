/****************************************************************************************
// ADOT (C) 2004
// XmlUtility.cs - Some functionality that I was sick of writing over and over again.
*****************************************************************************************/
using System;
using System.Xml;
using System.Xml.Xsl;
using System.IO;

namespace MOD.Data
{
	/// <summary>
	/// Summary description for XmlUtility.
	/// </summary>
	public class XmlUtility
	{
		/// <summary>
		/// Default constructor does nothing.
		/// </summary>
		public XmlUtility()
		{
		}

        /// <summary>
        /// Do an XML transform using the xsltFile, string version of the input xml, and the
        /// arguments passed in.  Primarily a helper function
        /// </summary>
        /// <param name="xmlDocumentURL">Full path to xml file</param>
        /// <returns>XML document</returns>
        public static XmlDocument GetXmlDocument(string xmlDocumentURL)
        {
            // get site map xml path and load xml document
            XmlDocument xmlDocument = new XmlDocument();
            xmlDocument.Load(xmlDocumentURL);
            return xmlDocument;
        }

        /// <summary>
        /// Get xml nodes that are present in the input document.
        /// </summary>
        /// <param name="attributeName">Node attribute to match for retrieval.</param>
        /// <param name="attributeValue">Node attribute value to match for retrieval.</param>
        /// <param name="inputXmlNode">Xml node to filter matching child nodes.</param>
        /// <returns>Child nodes in input document.</returns>
        public static XmlNode GetXmlNodeFromDocument(string attributeName, string attributeValue, XmlDocument inputXmlDocument, XmlNode skipNode)
        {
            XmlNode foundNode = null;

            foreach (XmlNode loopNode in inputXmlDocument.DocumentElement.ChildNodes)
            {
                foreach (XmlAttribute loopAttribute in loopNode.Attributes)
                {
                    if (loopAttribute.Name.ToLower() == attributeName.ToLower() && loopAttribute.Value.ToLower() == attributeValue.ToLower())
                    {
                        if (skipNode == null || skipNode != loopNode)
                        {
                            foundNode = loopNode;
                            break;
                        }
                    }
                }
                if (foundNode == null)
                {
                    foundNode = GetXmlNodeFromNode(attributeName, attributeValue, loopNode, skipNode);
                }
                if (foundNode != null)
                {
                    break;
                }
            }
            return foundNode;
        }

		/// <summary>
		/// Get xml nodes that are present in the input document.
		/// </summary>
		/// <param name="attributeName">Node attribute to match for retrieval.</param>
		/// <param name="attributeValue">Node attribute value to match for retrieval.</param>
		/// <param name="inputXmlNode">Xml node to filter matching child nodes.</param>
		/// <returns>Child nodes in input document.</returns>
		public static XmlNode GetXmlNodeFromDocument(string nodeName, string attributeName, string attributeValue, XmlDocument inputXmlDocument, XmlNode skipNode)
		{
			XmlNode foundNode = null;

			foreach (XmlNode loopNode in inputXmlDocument.DocumentElement.ChildNodes)
			{
				if (loopNode.Name.ToLower() == nodeName.ToLower())
				{
					foreach (XmlAttribute loopAttribute in loopNode.Attributes)
					{
						if (loopAttribute.Name.ToLower() == attributeName.ToLower() && loopAttribute.Value.ToLower() == attributeValue.ToLower())
						{
							if (skipNode == null || skipNode != loopNode)
							{
								foundNode = loopNode;
								break;
							}
						}
					}
				}
				if (foundNode == null)
				{
					foundNode = GetXmlNodeFromNode(nodeName, attributeName, attributeValue, loopNode, skipNode);
				}
				if (foundNode != null)
				{
					break;
				}
			}
			return foundNode;
		}

		/// <summary>
        /// Get xml nodes that are present in the input node.
        /// </summary>
        /// <param name="attributeName">Node attribute to match for retrieval.</param>
        /// <param name="attributeValue">Node attribute value to match for retrieval.</param>
        /// <param name="inputXmlNode">Xml node to filter matching child nodes.</param>
        /// <returns>Child nodes in input node.</returns>
        public static XmlNode GetXmlNodeFromNode(string attributeName, string attributeValue, XmlNode inputXmlNode, XmlNode skipNode)
        {
            XmlNode foundNode = null;

            foreach (XmlNode loopNode in inputXmlNode.ChildNodes)
            {
                foreach (XmlAttribute loopAttribute in loopNode.Attributes)
                {
                    if (loopAttribute.Name.ToLower() == attributeName.ToLower() && loopAttribute.Value.ToLower() == attributeValue.ToLower())
                    {
                        if (skipNode == null || skipNode != loopNode)
                        {
                            foundNode = loopNode;
                            break;
                        }
                    }
                }
                if (foundNode == null)
                {
                    foundNode = GetXmlNodeFromNode(attributeName, attributeValue, loopNode, skipNode);
                }
                if (foundNode != null)
                {
                    break;
                }
            }
            return foundNode;
        }

		/// <summary>
		/// Get xml nodes that are present in the input node.
		/// </summary>
		/// <param name="attributeName">Node attribute to match for retrieval.</param>
		/// <param name="attributeValue">Node attribute value to match for retrieval.</param>
		/// <param name="inputXmlNode">Xml node to filter matching child nodes.</param>
		/// <returns>Child nodes in input node.</returns>
		public static XmlNode GetXmlNodeFromNode(string nodeName, string attributeName, string attributeValue, XmlNode inputXmlNode, XmlNode skipNode)
		{
			XmlNode foundNode = null;

			foreach (XmlNode loopNode in inputXmlNode.ChildNodes)
			{
				if (loopNode.Name.ToLower() == nodeName.ToLower())
				{
					if (attributeName != "")
					{
						foreach (XmlAttribute loopAttribute in loopNode.Attributes)
						{
							if (loopAttribute.Name.ToLower() == attributeName.ToLower() && loopAttribute.Value.ToLower() == attributeValue.ToLower())
							{
								if (skipNode == null || skipNode != loopNode)
								{
									foundNode = loopNode;
									break;
								}
							}
						}
					}
					else
					{
						if (loopNode.InnerText.ToLower() == attributeValue.ToLower())
						{
							foundNode = loopNode;
							break;
						}
					}
				}
				if (foundNode == null)
				{
					foundNode = GetXmlNodeFromNode(nodeName, attributeName, attributeValue, loopNode, skipNode);
				}
				if (foundNode != null)
				{
					break;
				}
			}
			return foundNode;
		}

		/// <summary>
        /// Remove xml nodes that are present in the input document.
        /// </summary>
        /// <param name="attributeName">Node attribute to match for removal.</param>
        /// <param name="attributeValue">Node attribute value to match for removal.</param>
        /// <param name="inputXmlNode">Xml node to filter matching child nodes.</param>
        /// <returns>Removed child nodes in input document.</returns>
        public static bool RemoveXmlNodeFromDocument(string attributeName, string attributeValue, XmlDocument inputXmlDocument)
        {
            bool isNodeRemoved = false;

            foreach (XmlNode loopNode in inputXmlDocument.DocumentElement.ChildNodes)
            {
                foreach (XmlAttribute loopAttribute in loopNode.Attributes)
                {
                    if (loopAttribute.Name.ToLower() == attributeName.ToLower() && loopAttribute.Value.ToLower() == attributeValue.ToLower())
                    {
                        inputXmlDocument.DocumentElement.RemoveChild(loopNode);
                        isNodeRemoved = true;
                        break;
                    }
                }
                if (isNodeRemoved != true)
                {
                    isNodeRemoved = RemoveXmlNodeFromNode(attributeName, attributeValue, loopNode);
                }
                if (isNodeRemoved == true)
                {
                    break;
                }
            }
            return isNodeRemoved;
        }

        /// <summary>
        /// Remove xml nodes that are present in the input node.
        /// </summary>
        /// <param name="attributeName">Node attribute to match for removal.</param>
        /// <param name="attributeValue">Node attribute value to match for removal.</param>
        /// <param name="inputXmlNode">Xml node to filter matching child nodes.</param>
        /// <returns>Removed child nodes in input node.</returns>
        public static bool RemoveXmlNodeFromNode(string attributeName, string attributeValue, XmlNode inputXmlNode)
        {
            bool isNodeRemoved = false;

            foreach (XmlNode loopNode in inputXmlNode.ChildNodes)
            {
                foreach (XmlAttribute loopAttribute in loopNode.Attributes)
                {
                    if (loopAttribute.Name.ToLower() == attributeName.ToLower() && loopAttribute.Value.ToLower() == attributeValue.ToLower())
                    {
                        inputXmlNode.RemoveChild(loopNode);
                        isNodeRemoved = true;
                        break;
                    }
                }
                if (isNodeRemoved != true)
                {
                    isNodeRemoved = RemoveXmlNodeFromNode(attributeName, attributeValue, loopNode);
                }
                if (isNodeRemoved == true)
                {
                    break;
                }
            }
            return isNodeRemoved;
        }

        /// <summary>
        /// Create an xml node in the document context of the input document.
        /// </summary>
        /// <param name="inputDocument">The input document.</param>
        /// <param name="inputNode">The input node.</param>
        /// <returns>A new xml node.</returns>
        public static XmlNode CreateItemXmlNode(XmlDocument inputDocument, string elementName, XmlNode inputXmlNode)
        {
            // create an item node with input node attributes
            XmlNode newNode = inputDocument.CreateNode(System.Xml.XmlNodeType.Element, elementName, inputDocument.NamespaceURI);

            XmlAttribute newAttribute = null;

            foreach (XmlAttribute loopAttribute in inputXmlNode.Attributes)
            {
                newAttribute = inputDocument.CreateAttribute("", loopAttribute.Name, inputDocument.NamespaceURI);
                newAttribute.Value = loopAttribute.Value;
                newNode.Attributes.Append(newAttribute);
            }

            return newNode;
        }

        /// <summary>
        /// Do an XML transform using the xsltFile, string version of the input xml, and the
        /// arguments passed in.  Primarily a helper function
        /// </summary>
        /// <param name="xsltFile">Full path to xml file</param>
        /// <param name="xmlString">xml to transform</param>
        /// <param name="list">argument list to use</param>
        /// <returns>Transformed XML</returns>
        public static string Transform(XmlDocument doc, string xsltFile, XsltArgumentList list)
        {
			XslCompiledTransform trans = new XslCompiledTransform();

            trans.Load(xsltFile);

			StringWriter sw = new StringWriter();
            trans.Transform(doc.CreateNavigator(), list, sw);
            return sw.ToString();
        }

        /// <summary>
		/// Do an XML transform using the xsltFile, string version of the input xml, and the
		/// arguments passed in.  Primarily a helper function
		/// </summary>
		/// <param name="xsltFile">Full path to xml file</param>
		/// <param name="xmlString">xml to transform</param>
		/// <param name="list">argument list to use</param>
		/// <returns>Transformed XML</returns>
		public static string Transform( string xsltFile, string xmlString, XsltArgumentList list)
		{
            XmlDocument doc = GetXmlDocument(xmlString);

			return Transform(doc, xsltFile, list);
		}

		/// <summary>
		/// Convert an UTF16 encoded XML string to a
		/// UTF-8 XML string.
		/// </summary>
		/// <param name="sXml">XML string to convert.</param>
		/// <returns>UTF8 encoded XML string</returns>
		public static string ToUTF8(string sXml)
		{
			// Convert from UTF-16 to UTF-8
			StringWriter sw = new StringWriter();
			XmlTextWriter xtw = new XmlTextWriter(sw);
			XmlDocument doc = new XmlDocument();
			doc.LoadXml( sXml );

			XmlDeclaration dec = (XmlDeclaration)doc.FirstChild;
			dec.Encoding = "UTF-8";
			doc.WriteTo(xtw);

			return sw.ToString();
		}

		public static void WriteIndented(XmlDocument doc, TextWriter io)
		{
			XmlTextWriter xtw = new XmlTextWriter(io);
			xtw.Formatting = Formatting.Indented;
			doc.WriteContentTo(xtw);
		}
	}
}
