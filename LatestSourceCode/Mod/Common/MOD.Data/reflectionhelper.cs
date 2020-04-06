using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;
using System.Reflection;
using System.Collections.Specialized;

namespace MOD.Data
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to copy business objects using reflection.
	/// Do not use this for copying SortableLists!  Use the corresponding SortableList constructor.  For example:
	/// 
	/// DON’T DO THIS:
	/// 
 	///       BLL.SortableList<BLL.Assets.Album> currentList = (BLL.SortableList<BLL.Assets.Album>)Session["Assets/AlbumWorkingSet"];
	/// 
	///       BLL.SortableList<BLL.Assets.Album> newList = new BLL.SortableList<BLL.Assets.Album>();
	/// 
	///       ReflectionHelper.Copy(currentList , newList , true);
	/// 
	/// DO THIS:
	/// 
	///       BLL.SortableList<BLL.Assets.Album> currentList = (BLL.SortableList<BLL.Assets.Album>)Session["Assets/AlbumWorkingSet"];
	/// 
	///       BLL.SortableList<BLL.Assets.Album> newList = new MOD.MMS.AssetSolution.BLL.SortableList<Album>(currentList , true);
	/// </summary>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	public class ReflectionHelper
    {
        /// <summary>
        /// TODO: Threadsafe access
        /// </summary>
        private static Hashtable _fieldMapCache = new Hashtable();

        #region Static Methods
        /// <summary>
        /// Copies the specified object to the specified destination object.
        /// The objects do not have to be of the same type, fields will be mapped based on names.
        /// This method does *not* perform a recursive copy.
        /// </summary>
        /// <param name="source"></param>
        /// <param name="dest"></param>
        /// <returns>The same dest object reference passed in.</returns>
        public static object Copy(object source, object dest)
        {
            return Copy(source, dest, false);
        }

		/// <summary>
		/// Copies the specified object to the specified destination object.
		/// The objects do not have to be of the same type, fields will be mapped based on names.
		/// This method does *not* perform a recursive copy.
		/// </summary>
		/// <param name="source"></param>
		/// <param name="dest"></param>
		/// <returns>The same dest object reference passed in.</returns>
		public static object CopyFromRemote(object source, object dest)
		{
			return CopyFromRemote(source, dest, false);
		}

		/// <summary>
        /// Copies the specified object to the specified destination object.
        /// The objects do not have to be of the same type, fields will be mapped based on names.
        /// </summary>
        /// <param name="source"></param>
        /// <param name="dest"></param>
        /// <param name="recursive">Indicates whether reference fields should be processed recursively.</param>
        /// <returns>The same dest object reference passed in.</returns>
        public static object Copy(object source, object dest, bool recursive)
        {
            if (source == null || dest == null)
            {
				throw new ApplicationException("Must be valid object references in order to copy.");
            }

            Hashtable processed = new Hashtable(50, new ReferenceEqualityComparer());

            return Copy(source, dest, recursive, source.GetType(), dest.GetType(), processed);
        }

		/// <summary>
		/// Copies the specified object to the specified destination object.
		/// The objects do not have to be of the same type, fields will be mapped based on names.
		/// </summary>
		/// <param name="source"></param>
		/// <param name="dest"></param>
		/// <param name="recursive">Indicates whether reference fields should be processed recursively.</param>
		/// <returns>The same dest object reference passed in.</returns>
		public static object CopyFromRemote(object source, object dest, bool recursive)
		{
			if (source == null || dest == null)
			{
				throw new ApplicationException("Must be valid object references in order to copy.");
			}

			Hashtable processed = new Hashtable(50, new ReferenceEqualityComparer());

			return CopyFromRemote(source, dest, recursive, source.GetType(), dest.GetType(), processed);
		}

		/// <summary>
        /// Copies the specified object to the specified destination object.
        /// The objects do not have to be of the same type, fields will be mapped based on names.
        /// Contains special handling for converting SortableLists (IList) to SortableObjectCollections (CollectionBase)
        /// and vice versa.
        /// </summary>
        /// <param name="source"></param>
        /// <param name="dest"></param>
        /// <param name="recursive">Indicates whether reference fields should be processed recursively.</param>
        /// <param name="sourceType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
        /// to pull the field names from.</param>
        /// <param name="destType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
        /// to pull the field names from.</param>
        /// <returns>The same dest object reference passed in.</returns>
        public static object Copy(object source, object dest, bool recursive, Type sourceType, Type destType)
        {
            if (source == null || dest == null)
            {
                throw new ApplicationException("Must be valid object references in order to copy.");
            }

            Hashtable processed = new Hashtable(50, new ReferenceEqualityComparer());

            return Copy(source, dest, recursive, sourceType, destType, processed);
        }

		/// <summary>
		/// Copies the specified object to the specified destination object.
		/// The objects do not have to be of the same type, fields will be mapped based on names.
		/// Contains special handling for converting SortableLists (IList) to SortableObjectCollections (CollectionBase)
		/// and vice versa.
		/// </summary>
		/// <param name="source"></param>
		/// <param name="dest"></param>
		/// <param name="recursive">Indicates whether reference fields should be processed recursively.</param>
		/// <param name="sourceType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
		/// to pull the field names from.</param>
		/// <param name="destType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
		/// to pull the field names from.</param>
		/// <returns>The same dest object reference passed in.</returns>
		public static object CopyFromRemote(object source, object dest, bool recursive, Type sourceType, Type destType)
		{
			if (source == null || dest == null)
			{
				throw new ApplicationException("Must be valid object references in order to copy.");
			}

			Hashtable processed = new Hashtable(50, new ReferenceEqualityComparer());

			return CopyFromRemote(source, dest, recursive, sourceType, destType, processed);
		}

		/// <summary>
        /// Copies the specified object to the specified destination object.
        /// The objects do not have to be of the same type, fields will be mapped based on names.
        /// Contains special handling for converting SortableLists (IList) to SortableObjectCollections (CollectionBase)
        /// and vice versa.
        /// </summary>
        /// <param name="source">source object</param>
        /// <param name="dest">destination object</param>
        /// <param name="recursive">Indicates whether reference fields should be processed recursively.</param>
        /// <param name="sourceType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
        /// to pull the field names from.</param>
        /// <param name="destType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
        /// to pull the field names from.</param>
        /// <param name="processed">An collection of objects that have already processed, used to avoid infinite loops due to 
        /// circular references.</param>
        /// <returns>The same dest object reference passed in.</returns>
        public static object Copy(object source, object dest, bool recursive, Type sourceType, Type destType, Hashtable processed)
        {
            if (source == null || dest == null)
            {
                throw new ApplicationException("Must be valid object references in order to copy.");
            }

            BindingFlags bindingFlags = BindingFlags.Instance | BindingFlags.NonPublic |
                BindingFlags.FlattenHierarchy;

            Dictionary<string, string> map = BuildFieldMap(sourceType, destType, true);

            foreach (FieldInfo sourceField in sourceType.GetFields(bindingFlags))
            {
                FieldInfo destField;

                if (!map.ContainsKey(sourceField.Name))
                {
                    System.Diagnostics.Debug.WriteLine(string.Format("Could not find field: {0}.{1}",
                        sourceType.Name, sourceField.Name));
                }
                else
                {
                    destField = destType.GetField(map[sourceField.Name], bindingFlags);

                    // Copy non-reference properties
                    if (destField.FieldType.IsValueType || destField.FieldType == typeof(string))
                    {
                        destField.SetValue(dest, sourceField.GetValue(source));
                    }
                    else if (recursive)// Recurse References 
                    {
                        //Type[] interfaces = destField.FieldType.FindInterfaces(
                        //    System.Reflection.TypeFilter.Equals, typeof(IList));
                        //if (interfaces.Length > 0) // presumed to be SortableList

                        // Special case, use list constructor
                        // TODO, put an attribute on the SortableList type instead
                        if (destField.FieldType.Name.Contains("SortableList") ||
							(destField.FieldType.BaseType != null && destField.FieldType.BaseType.Name.Contains("SortableList")))
                        {
                            // use SortableList constructor, passing source value (SortableObjectCollection) 
                            // as an argument
                            object sourceValue = sourceField.GetValue(source);
                            object child = null;

                            if (sourceValue != null)
                            {
                                child = Activator.CreateInstance(destField.FieldType,
                                    sourceValue, recursive, processed);
                            }

                            destField.SetValue(dest, child);
                        }
						else if (destField.FieldType.BaseType != null && destField.FieldType.BaseType == typeof(CollectionBase)) // presumed to be SortableObjectCollection
                        {
                            // presume copying from BLL SortableList (IList)
                            // to SortableObjectCollection (CollectionBase)
                            IList sourceList = (IList)sourceField.GetValue(source);

                            if (sourceList != null)
                            {
                                if (sourceList.Count == 0)
                                {
                                    destField.SetValue(dest, new SortableObjectCollection());
                                }
                                else if (sourceList[0] != null)
                                {
                                    object firstItem = sourceList[0];

                                    object[] attributes = firstItem.GetType().GetCustomAttributes(typeof(DataTransformAttribute), true);

                                    if (attributes.Length > 0)
                                    {
                                        string destTypeName;
                                        destTypeName = ((DataTransformAttribute)attributes[0]).Name;
                                        SortableObjectCollection childList = new SortableObjectCollection();

                                        foreach (object o in sourceList)
                                        {
                                            if (processed.Contains(o) && processed[o].GetType().FullName == destTypeName)
                                            {
                                                childList.Add(processed[o]);
                                            }
                                            else
                                            {
                                                // Assembly.GetCallingAssembly().FullName
                                                object childObject = destType.Assembly.CreateInstance(destTypeName);
                                                processed[o] = childObject;
                                                Copy(o, childObject, recursive, o.GetType(), childObject.GetType(), processed);
                                                childList.Add(childObject);
                                            }
                                        }

                                        destField.SetValue(dest, childList);
                                    }
                                    //else throw new ApplicationException(
                                    //    string.Format("Cannot copy SortableObjectCollection member ({0}) because destination type unknown.",
                                    //    firstItem.GetType().Name));
                                }
                            }
                        }
                        else if (destField.FieldType == typeof(System.Byte[])) // special handling for byte array
                        {
                            byte[] sourceArray = (byte[])sourceField.GetValue(source);

                            if (sourceArray != null)
                            {
                                byte[] destArray = new byte[sourceArray.Length];

                                for (int i = 0; i < destArray.Length; i++)
                                {
                                    destArray[i] = sourceArray[i];
                                }

                                destField.SetValue(dest, destArray);
                            }
                        }
                        else
                        {
                            object sourcefieldValue = sourceField.GetValue(source);
                            
                            if (sourcefieldValue != null)
                            {
                                if (processed.Contains(sourcefieldValue) && 
                                    processed[sourcefieldValue].GetType().FullName == destField.GetType().FullName)
                                {
                                    destField.SetValue(dest, processed[sourcefieldValue]);
                                }
                                else
                                {
                                    object child = Activator.CreateInstance(destField.FieldType);
                                    processed[sourcefieldValue] = child;
                                    destField.SetValue(dest, child);
                                    Copy(sourceField.GetValue(source), child, recursive, sourceField.FieldType, destField.FieldType, processed);
                                }
                            }
                        }
                    }
                }
            }

            return dest;
        }

		/// <summary>
		/// Copies the specified object to the specified destination object.
		/// The objects do not have to be of the same type, fields will be mapped based on names.
		/// Contains special handling for converting SortableLists (IList) to SortableObjectCollections (CollectionBase)
		/// and vice versa.
		/// </summary>
		/// <param name="source">source object</param>
		/// <param name="dest">destination object</param>
		/// <param name="recursive">Indicates whether reference fields should be processed recursively.</param>
		/// <param name="sourceType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
		/// to pull the field names from.</param>
		/// <param name="destType">If necessary, specify sourceType to explicitly indicate which level of the inheritance hierarchy
		/// to pull the field names from.</param>
		/// <param name="processed">An collection of objects that have already processed, used to avoid infinite loops due to 
		/// circular references.</param>
		/// <returns>The same dest object reference passed in.</returns>
		public static object CopyFromRemote(object source, object dest, bool recursive, Type sourceType, Type destType, Hashtable processed)
		{
			if (source == null || dest == null)
			{
				throw new ApplicationException("Must be valid object references in order to copy.");
			}

			BindingFlags bindingFlags = BindingFlags.Instance | BindingFlags.NonPublic |
				BindingFlags.FlattenHierarchy;

			Dictionary<string, string> map = BuildFieldMapRemote(sourceType, destType, true);

			Type t = sourceType;
			do
			{
				foreach (FieldInfo sourceField in t.GetFields(bindingFlags))
				{
					FieldInfo destField;

					if (!map.ContainsKey(sourceField.Name))
					{
						System.Diagnostics.Debug.WriteLine(string.Format("Could not find field: {0}.{1}",
							t.Name, sourceField.Name));
					}
                    else if (sourceField.Name.StartsWith("Timestamp") || sourceField.Name.StartsWith("timestamp"))
                    {
                        // Don't copy the timestamp field, since it's a byte[] in SQL Server and a DateTime? in MySQL.
                        continue;
                    }
                    else
					{
						destField = destType.GetField(map[sourceField.Name], bindingFlags);

						// Copy non-reference properties
						if (destField.FieldType.IsValueType || destField.FieldType == typeof(string))
						{
							destField.SetValue(dest, sourceField.GetValue(source));
						}
						else if (recursive)// Recurse References 
						{
							//Type[] interfaces = destField.FieldType.FindInterfaces(
							//    System.Reflection.TypeFilter.Equals, typeof(IList));
							//if (interfaces.Length > 0) // presumed to be SortableList

							// Special case, use list constructor
							// TODO, put an attribute on the SortableList type instead
							if (destField.FieldType.Name.Contains("SortableList") ||
								(destField.FieldType.BaseType != null && destField.FieldType.BaseType.Name.Contains("SortableList")))
							{
								// use SortableList constructor, passing source value (SortableObjectCollection) 
								// as an argument
								object sourceValue = sourceField.GetValue(source);
								object child = null;

								if (sourceValue != null)
								{
									child = Activator.CreateInstance(destField.FieldType,
										sourceValue, recursive, processed);
                                }

								destField.SetValue(dest, child);
							}
							else if (destField.FieldType.BaseType != null && destField.FieldType.BaseType == typeof(CollectionBase)) // presumed to be SortableObjectCollection
							{
								// presume copying from BLL SortableList (IList)
								// to SortableObjectCollection (CollectionBase)
								IList sourceList = (IList)sourceField.GetValue(source);

								if (sourceList != null)
								{
									if (sourceList.Count == 0)
									{
										destField.SetValue(dest, new SortableObjectCollection());
									}
									else if (sourceList[0] != null)
									{
										object firstItem = sourceList[0];

										object[] attributes = firstItem.GetType().GetCustomAttributes(typeof(DataTransformAttribute), true);

										if (attributes.Length > 0)
										{
											string destTypeName;
											destTypeName = ((DataTransformAttribute)attributes[0]).Name;
											SortableObjectCollection childList = new SortableObjectCollection();

											foreach (object o in sourceList)
											{
												if (processed.Contains(o) && processed[o].GetType().FullName == destTypeName)
												{
													childList.Add(processed[o]);
												}
												else
												{
													// Assembly.GetCallingAssembly().FullName
													object childObject = destType.Assembly.CreateInstance(destTypeName);
													processed[o] = childObject;
													CopyFromRemote(o, childObject, recursive, o.GetType(), childObject.GetType(), processed);
													childList.Add(childObject);
												}
											}

											destField.SetValue(dest, childList);
										}
										//else throw new ApplicationException(
										//    string.Format("Cannot copy SortableObjectCollection member ({0}) because destination type unknown.",
										//    firstItem.GetType().Name));
									}
								}
							}
							else if (destField.FieldType == typeof(System.Byte[])) // special handling for byte array
							{
								byte[] sourceArray = (byte[])sourceField.GetValue(source);

								if (sourceArray != null)
								{
									byte[] destArray = new byte[sourceArray.Length];

									for (int i = 0; i < destArray.Length; i++)
									{
										destArray[i] = sourceArray[i];
									}

									destField.SetValue(dest, destArray);
								}
							}
							else
							{
								object sourcefieldValue = sourceField.GetValue(source);

								if (sourcefieldValue != null)
								{
									if (processed.Contains(sourcefieldValue) &&
										processed[sourcefieldValue].GetType().FullName == destField.GetType().FullName)
									{
										destField.SetValue(dest, processed[sourcefieldValue]);
									}
									else
									{
										object child = Activator.CreateInstance(destField.FieldType);
										processed[sourcefieldValue] = child;
										destField.SetValue(dest, child);
										CopyFromRemote(sourceField.GetValue(source), child, recursive, sourceField.FieldType, destField.FieldType, processed);
									}
								}
							}
						}
					}
				}
				t = t.BaseType;
			} while (t != null);

			return dest;
		}

		/// <summary>
        /// First looks at A in order to map fields to B, then maps B to A. The DataTransform attribute from the first 
        /// type as an alternate name when doing the mapping.
        /// </summary>
        /// <param name="typeA"></param>
        /// <param name="typeB"></param>
        /// <param name="strict">Not used, intended to throw an exception if any fields don't match - but
        /// currently there are a lot that don't match.</param>
        /// <returns></returns>
        private static Dictionary<string, string> BuildFieldMap(Type typeA, Type typeB, bool strict)
        {
            string cacheKey = typeA.ToString() + " " + typeB.ToString();

            if (_fieldMapCache.Contains(cacheKey))
            {
                return (Dictionary<string, string>)_fieldMapCache[cacheKey];
            }
            else
            {
                Dictionary<string, string> map = new Dictionary<string, string>();
                Dictionary<string, string> unmappedFields = new Dictionary<string, string>();

                BuildFieldMapFromAToB(typeA, typeB, ref map, ref unmappedFields);
                BuildFieldMapFromAToB(typeB, typeA, ref map, ref unmappedFields);

                if (strict && unmappedFields.Count > 0)
                {
                    string message = "Field name mismatches:\n";

                    foreach (string key in unmappedFields.Keys)
                    {
                        message += string.Format("\t{0}.{1}\n",
                            unmappedFields[key], key);
                    }

                    System.Diagnostics.Debug.Write(message);
                }

                lock (_fieldMapCache)
                {
                    _fieldMapCache[cacheKey] = map;
                }

                return map;
            }
        }

		/// <summary>
		/// First looks at A in order to map fields to B, then maps B to A. The DataTransform attribute from the first 
		/// type as an alternate name when doing the mapping.
		/// </summary>
		/// <param name="typeA"></param>
		/// <param name="typeB"></param>
		/// <param name="strict">Not used, intended to throw an exception if any fields don't match - but
		/// currently there are a lot that don't match.</param>
		/// <returns></returns>
		private static Dictionary<string, string> BuildFieldMapRemote(Type typeA, Type typeB, bool strict)
		{
			string cacheKey = typeA.ToString() + " remote " + typeB.ToString();

			if (_fieldMapCache.Contains(cacheKey))
			{
				return (Dictionary<string, string>)_fieldMapCache[cacheKey];
			}
			else
			{
				Dictionary<string, string> map = new Dictionary<string, string>();
				Dictionary<string, string> unmappedFields = new Dictionary<string, string>();

				BuildFieldMapFromRemoteAToB(typeA, typeB, ref map, ref unmappedFields);
				BuildFieldMapFromRemoteAToB(typeB, typeA, ref map, ref unmappedFields);

				if (strict && unmappedFields.Count > 0)
				{
					string message = "Field name mismatches:\n";

					foreach (string key in unmappedFields.Keys)
					{
						message += string.Format("\t{0}.{1}\n",
							unmappedFields[key], key);
					}

					System.Diagnostics.Debug.Write(message);
				}

				lock (_fieldMapCache)
				{
					_fieldMapCache[cacheKey] = map;
				}

				return map;
			}
		}

		/// <summary>
        /// Map fields from one type to another based on type.
        /// TODO: It would be a big performance gain to cache this. It would also be nice to output it to a file,
        /// so that we could verify the mappings being made.
        /// </summary>
        /// <param name="typeA"></param>
        /// <param name="typeB"></param>
        /// <param name="map"></param>
        /// <param name="unmappedFields"></param>
        private static void BuildFieldMapFromAToB(Type typeA, Type typeB, ref Dictionary<string, string> map,
            ref Dictionary<string, string> unmappedFields)
        {
            foreach (FieldInfo fieldA in typeA.GetFields(BindingFlags.Instance |
                BindingFlags.NonPublic | BindingFlags.FlattenHierarchy))
            {
                FieldInfo fieldB = null;

                // Look for the DataTransformAttribute on object A
                object[] attributes = fieldA.GetCustomAttributes(typeof(DataTransformAttribute), true);

                if (attributes != null && attributes.Length > 0 && ((DataTransformAttribute)attributes[0]).Name != null)
                {
                    DataTransformAttribute attribute = (DataTransformAttribute)attributes[0];
                    fieldB = typeB.GetField(attribute.Name,
                        BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy);
                }

                if (fieldB == null) // look for field with same name
                {
                    fieldB = typeB.GetField(fieldA.Name,
                        BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy);
                }

                if (fieldB == null && !unmappedFields.ContainsKey(fieldA.Name))
                {
                    unmappedFields.Add(fieldA.Name, typeA.FullName);
                }
                else if (fieldB != null)
                {
                    if (!map.ContainsKey(fieldA.Name))
                    {
                        map.Add(fieldA.Name, fieldB.Name);
                        unmappedFields.Remove(fieldA.Name);
                    }

                    if (map[fieldA.Name] != fieldB.Name)
                        throw new ApplicationException(string.Format("Field name mismatch: {0}.{1} -> {2} or {3}?",
                            typeA.Name, fieldA.Name, map[fieldA.Name], fieldB.Name));
                }
            }

            Dictionary<string, string> bidirectionalMap = new Dictionary<string, string>();

            // make map bi-directional
            foreach (string key in map.Keys)
            {
                string val = map[key];
                bidirectionalMap[key] = val;
                bidirectionalMap[val] = key;
                unmappedFields.Remove(val);
            }

            map = bidirectionalMap;
        }
		/// <summary>
		/// Map fields from one type to another based on type.
		/// TODO: It would be a big performance gain to cache this. It would also be nice to output it to a file,
		/// so that we could verify the mappings being made.
		/// </summary>
		/// <param name="typeA"></param>
		/// <param name="typeB"></param>
		/// <param name="map"></param>
		/// <param name="unmappedFields"></param>
		private static void BuildFieldMapFromRemoteAToB(Type typeA, Type typeB, ref Dictionary<string, string> map,
			ref Dictionary<string, string> unmappedFields)
		{
			Type t = typeA;
			do
			{
				foreach (FieldInfo fieldA in t.GetFields(BindingFlags.Instance |
					BindingFlags.NonPublic | BindingFlags.FlattenHierarchy))
				{
					// TODO: remote field names end in field, is this always true?
					string fieldAName = fieldA.Name;
					if (fieldA.Name.EndsWith("Field") == true)
					{
						fieldAName = "_" + fieldA.Name.Substring(0, fieldA.Name.Length - 5);
					}
					FieldInfo fieldB = null;

					// Look for the DataTransformAttribute on object A
					object[] attributes = fieldA.GetCustomAttributes(typeof(DataTransformAttribute), true);

					if (attributes != null && attributes.Length > 0 && ((DataTransformAttribute)attributes[0]).Name != null)
					{
						DataTransformAttribute attribute = (DataTransformAttribute)attributes[0];
						fieldB = typeB.GetField(attribute.Name,
							BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy);
					}

					if (fieldB == null) // look for field with same name
					{
						fieldB = typeB.GetField(fieldAName,
							BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy);
					}

					if (fieldB == null && !unmappedFields.ContainsKey(fieldA.Name))
					{
						unmappedFields.Add(fieldA.Name, t.FullName);
					}
					else if (fieldB != null)
					{
						if (!map.ContainsKey(fieldA.Name))
						{
							map.Add(fieldA.Name, fieldB.Name);
							unmappedFields.Remove(fieldA.Name);
						}

						if (map[fieldA.Name] != fieldB.Name)
							throw new ApplicationException(string.Format("Field name mismatch: {0}.{1} -> {2} or {3}?",
								t.Name, fieldA.Name, map[fieldA.Name], fieldB.Name));
					}
				}
				t = t.BaseType;
			} while (t != null);

			Dictionary<string, string> bidirectionalMap = new Dictionary<string, string>();

			// make map bi-directional
			foreach (string key in map.Keys)
			{
				string val = map[key];
				bidirectionalMap[key] = val;
				bidirectionalMap[val] = key;
				unmappedFields.Remove(val);
			}

			map = bidirectionalMap;
		}
		#endregion
   }
}
