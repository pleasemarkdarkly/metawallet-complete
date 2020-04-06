using Microsoft.Win32;
using System;
using System.Configuration;
using System.ComponentModel;
using System.Collections;
using System.Collections.Specialized;
using System.Xml;
using System.Xml.Serialization;
using System.IO;
using System.Text;

using Microsoft.Practices.EnterpriseLibrary.Security.Cryptography;

namespace MOD.Data
{
	/// <summary>
	/// Summary description for Serialization.
	/// </summary>
	public class Serialization
	{
		// ------------------------------------------------------------------
		/// <summary>This method serializes an object into xml (string) data.</summary>
		/// 
		/// <param name="sourceObject">The object to be serialized</param>
		/// <param name="destinationString">The string to write the serialized object to</param>
		// ------------------------------------------------------------------
		public static void Serialize(object sourceObject, ref string destinationString)
		{
			// serialize into destination string
			destinationString = Serialize(sourceObject);
		}
		// ------------------------------------------------------------------
		/// <summary>This method serializes an object into xml (string) data.</summary>
		/// 
		/// <param name="sourceObject">The object to be serialized</param>
		/// <param name="destinationString">The string to write the serialized object to</param>
		// ------------------------------------------------------------------
		public static string Serialize(object sourceObject)
		{
			// set up serializer and string writer
			XmlSerializer serializer = new XmlSerializer(sourceObject.GetType());
			StringWriter writer = new StringWriter();

			// serialize into destination string
			serializer.Serialize(writer, sourceObject);
			return writer.ToString();
		}

		// ------------------------------------------------------------------
		/// <summary>This method deserializes xml (string) data into a destination object.</summary>
		/// 
		/// <param name="sourceString">The string to de-serialize</param>
		/// <param name="destinationObject">The object to store the deserialized object</param>
		// ------------------------------------------------------------------
		public static void Deserialize(string sourceString, ref object destinationObject) 
		{
			// set up serializer and string reader
			XmlSerializer serializer = new XmlSerializer(destinationObject.GetType());
			StringReader reader = new StringReader(sourceString);

			// serialize into destination object
			destinationObject = serializer.Deserialize(reader);
		}
		
		// ------------------------------------------------------------------
		/// <summary>This method deserializes xml (string) data into a return object.</summary>
		/// 
		/// <param name="sourceString">The string to be deserialized</param>
		/// <param name="objectType">The type of object for the string to be deserialized into</param>
		/// <returns>The deserialized xml in an object of the type specified by "objectType"</returns>
		// ------------------------------------------------------------------
		public static object Deserialize(string sourceString, System.Type objectType) 
		{
			// set up serializer and string reader
			XmlSerializer serializer = new XmlSerializer(objectType);
			StringReader reader = new StringReader(sourceString);

			// serialize into destination object
			object destinationObject = serializer.Deserialize(reader);
			return destinationObject;
		}
		
		public Serialization()
		{
			//
			// TODO: Add constructor logic here
			//
		}
	}
}
