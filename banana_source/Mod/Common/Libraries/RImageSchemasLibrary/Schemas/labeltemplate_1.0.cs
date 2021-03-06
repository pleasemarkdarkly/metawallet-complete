﻿//------------------------------------------------------------------------------
// <autogenerated>
//     This code was generated by a tool.
//     Runtime Version: 1.1.4322.2032
//
//     Changes to this file may cause incorrect behavior and will be lost if 
//     the code is regenerated.
// </autogenerated>
//------------------------------------------------------------------------------

namespace RImageSchemas.Schemas {
    using System;
    using System.Data;
    using System.Xml;
    using System.Runtime.Serialization;
    
    
    [Serializable()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Diagnostics.DebuggerStepThrough()]
    [System.ComponentModel.ToolboxItem(true)]
    public class LabelTemplate : DataSet {
        
        private LabelInfoDataTable tableLabelInfo;
        
        private MergeFieldsDataTable tableMergeFields;
        
        private DataRelation relationLabelInfo_MergeFields;
        
        public LabelTemplate() {
            this.InitClass();
            System.ComponentModel.CollectionChangeEventHandler schemaChangedHandler = new System.ComponentModel.CollectionChangeEventHandler(this.SchemaChanged);
            this.Tables.CollectionChanged += schemaChangedHandler;
            this.Relations.CollectionChanged += schemaChangedHandler;
        }
        
        protected LabelTemplate(SerializationInfo info, StreamingContext context) {
            string strSchema = ((string)(info.GetValue("XmlSchema", typeof(string))));
            if ((strSchema != null)) {
                DataSet ds = new DataSet();
                ds.ReadXmlSchema(new XmlTextReader(new System.IO.StringReader(strSchema)));
                if ((ds.Tables["LabelInfo"] != null)) {
                    this.Tables.Add(new LabelInfoDataTable(ds.Tables["LabelInfo"]));
                }
                if ((ds.Tables["MergeFields"] != null)) {
                    this.Tables.Add(new MergeFieldsDataTable(ds.Tables["MergeFields"]));
                }
                this.DataSetName = ds.DataSetName;
                this.Prefix = ds.Prefix;
                this.Namespace = ds.Namespace;
                this.Locale = ds.Locale;
                this.CaseSensitive = ds.CaseSensitive;
                this.EnforceConstraints = ds.EnforceConstraints;
                this.Merge(ds, false, System.Data.MissingSchemaAction.Add);
                this.InitVars();
            }
            else {
                this.InitClass();
            }
            this.GetSerializationData(info, context);
            System.ComponentModel.CollectionChangeEventHandler schemaChangedHandler = new System.ComponentModel.CollectionChangeEventHandler(this.SchemaChanged);
            this.Tables.CollectionChanged += schemaChangedHandler;
            this.Relations.CollectionChanged += schemaChangedHandler;
        }
        
        [System.ComponentModel.Browsable(false)]
        [System.ComponentModel.DesignerSerializationVisibilityAttribute(System.ComponentModel.DesignerSerializationVisibility.Content)]
        public LabelInfoDataTable LabelInfo {
            get {
                return this.tableLabelInfo;
            }
        }
        
        [System.ComponentModel.Browsable(false)]
        [System.ComponentModel.DesignerSerializationVisibilityAttribute(System.ComponentModel.DesignerSerializationVisibility.Content)]
        public MergeFieldsDataTable MergeFields {
            get {
                return this.tableMergeFields;
            }
        }
        
        public override DataSet Clone() {
            LabelTemplate cln = ((LabelTemplate)(base.Clone()));
            cln.InitVars();
            return cln;
        }
        
        protected override bool ShouldSerializeTables() {
            return false;
        }
        
        protected override bool ShouldSerializeRelations() {
            return false;
        }
        
        protected override void ReadXmlSerializable(XmlReader reader) {
            this.Reset();
            DataSet ds = new DataSet();
            ds.ReadXml(reader);
            if ((ds.Tables["LabelInfo"] != null)) {
                this.Tables.Add(new LabelInfoDataTable(ds.Tables["LabelInfo"]));
            }
            if ((ds.Tables["MergeFields"] != null)) {
                this.Tables.Add(new MergeFieldsDataTable(ds.Tables["MergeFields"]));
            }
            this.DataSetName = ds.DataSetName;
            this.Prefix = ds.Prefix;
            this.Namespace = ds.Namespace;
            this.Locale = ds.Locale;
            this.CaseSensitive = ds.CaseSensitive;
            this.EnforceConstraints = ds.EnforceConstraints;
            this.Merge(ds, false, System.Data.MissingSchemaAction.Add);
            this.InitVars();
        }
        
        protected override System.Xml.Schema.XmlSchema GetSchemaSerializable() {
            System.IO.MemoryStream stream = new System.IO.MemoryStream();
            this.WriteXmlSchema(new XmlTextWriter(stream, null));
            stream.Position = 0;
            return System.Xml.Schema.XmlSchema.Read(new XmlTextReader(stream), null);
        }
        
        internal void InitVars() {
            this.tableLabelInfo = ((LabelInfoDataTable)(this.Tables["LabelInfo"]));
            if ((this.tableLabelInfo != null)) {
                this.tableLabelInfo.InitVars();
            }
            this.tableMergeFields = ((MergeFieldsDataTable)(this.Tables["MergeFields"]));
            if ((this.tableMergeFields != null)) {
                this.tableMergeFields.InitVars();
            }
            this.relationLabelInfo_MergeFields = this.Relations["LabelInfo_MergeFields"];
        }
        
        private void InitClass() {
            this.DataSetName = "LabelTemplate";
            this.Prefix = "";
            this.Namespace = "";
            this.Locale = new System.Globalization.CultureInfo("en-US");
            this.CaseSensitive = false;
            this.EnforceConstraints = true;
            this.tableLabelInfo = new LabelInfoDataTable();
            this.Tables.Add(this.tableLabelInfo);
            this.tableMergeFields = new MergeFieldsDataTable();
            this.Tables.Add(this.tableMergeFields);
            ForeignKeyConstraint fkc;
            fkc = new ForeignKeyConstraint("LabelInfo_MergeFields", new DataColumn[] {
                        this.tableLabelInfo.LabelInfo_IdColumn}, new DataColumn[] {
                        this.tableMergeFields.LabelInfo_IdColumn});
            this.tableMergeFields.Constraints.Add(fkc);
            fkc.AcceptRejectRule = System.Data.AcceptRejectRule.None;
            fkc.DeleteRule = System.Data.Rule.Cascade;
            fkc.UpdateRule = System.Data.Rule.Cascade;
            this.relationLabelInfo_MergeFields = new DataRelation("LabelInfo_MergeFields", new DataColumn[] {
                        this.tableLabelInfo.LabelInfo_IdColumn}, new DataColumn[] {
                        this.tableMergeFields.LabelInfo_IdColumn}, false);
            this.relationLabelInfo_MergeFields.Nested = true;
            this.Relations.Add(this.relationLabelInfo_MergeFields);
        }
        
        private bool ShouldSerializeLabelInfo() {
            return false;
        }
        
        private bool ShouldSerializeMergeFields() {
            return false;
        }
        
        private void SchemaChanged(object sender, System.ComponentModel.CollectionChangeEventArgs e) {
            if ((e.Action == System.ComponentModel.CollectionChangeAction.Remove)) {
                this.InitVars();
            }
        }
        
        public delegate void LabelInfoRowChangeEventHandler(object sender, LabelInfoRowChangeEvent e);
        
        public delegate void MergeFieldsRowChangeEventHandler(object sender, MergeFieldsRowChangeEvent e);
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class LabelInfoDataTable : DataTable, System.Collections.IEnumerable {
            
            private DataColumn columnDescription;
            
            private DataColumn columnLabelFilename;
            
            private DataColumn columnBitmapFilename;
            
            private DataColumn columnLabelInfo_Id;
            
            internal LabelInfoDataTable() : 
                    base("LabelInfo") {
                this.InitClass();
            }
            
            internal LabelInfoDataTable(DataTable table) : 
                    base(table.TableName) {
                if ((table.CaseSensitive != table.DataSet.CaseSensitive)) {
                    this.CaseSensitive = table.CaseSensitive;
                }
                if ((table.Locale.ToString() != table.DataSet.Locale.ToString())) {
                    this.Locale = table.Locale;
                }
                if ((table.Namespace != table.DataSet.Namespace)) {
                    this.Namespace = table.Namespace;
                }
                this.Prefix = table.Prefix;
                this.MinimumCapacity = table.MinimumCapacity;
                this.DisplayExpression = table.DisplayExpression;
            }
            
            [System.ComponentModel.Browsable(false)]
            public int Count {
                get {
                    return this.Rows.Count;
                }
            }
            
            internal DataColumn DescriptionColumn {
                get {
                    return this.columnDescription;
                }
            }
            
            internal DataColumn LabelFilenameColumn {
                get {
                    return this.columnLabelFilename;
                }
            }
            
            internal DataColumn BitmapFilenameColumn {
                get {
                    return this.columnBitmapFilename;
                }
            }
            
            internal DataColumn LabelInfo_IdColumn {
                get {
                    return this.columnLabelInfo_Id;
                }
            }
            
            public LabelInfoRow this[int index] {
                get {
                    return ((LabelInfoRow)(this.Rows[index]));
                }
            }
            
            public event LabelInfoRowChangeEventHandler LabelInfoRowChanged;
            
            public event LabelInfoRowChangeEventHandler LabelInfoRowChanging;
            
            public event LabelInfoRowChangeEventHandler LabelInfoRowDeleted;
            
            public event LabelInfoRowChangeEventHandler LabelInfoRowDeleting;
            
            public void AddLabelInfoRow(LabelInfoRow row) {
                this.Rows.Add(row);
            }
            
            public LabelInfoRow AddLabelInfoRow(string Description, string LabelFilename, string BitmapFilename) {
                LabelInfoRow rowLabelInfoRow = ((LabelInfoRow)(this.NewRow()));
                rowLabelInfoRow.ItemArray = new object[] {
                        Description,
                        LabelFilename,
                        BitmapFilename,
                        null};
                this.Rows.Add(rowLabelInfoRow);
                return rowLabelInfoRow;
            }
            
            public System.Collections.IEnumerator GetEnumerator() {
                return this.Rows.GetEnumerator();
            }
            
            public override DataTable Clone() {
                LabelInfoDataTable cln = ((LabelInfoDataTable)(base.Clone()));
                cln.InitVars();
                return cln;
            }
            
            protected override DataTable CreateInstance() {
                return new LabelInfoDataTable();
            }
            
            internal void InitVars() {
                this.columnDescription = this.Columns["Description"];
                this.columnLabelFilename = this.Columns["LabelFilename"];
                this.columnBitmapFilename = this.Columns["BitmapFilename"];
                this.columnLabelInfo_Id = this.Columns["LabelInfo_Id"];
            }
            
            private void InitClass() {
                this.columnDescription = new DataColumn("Description", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnDescription);
                this.columnLabelFilename = new DataColumn("LabelFilename", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnLabelFilename);
                this.columnBitmapFilename = new DataColumn("BitmapFilename", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnBitmapFilename);
                this.columnLabelInfo_Id = new DataColumn("LabelInfo_Id", typeof(int), null, System.Data.MappingType.Hidden);
                this.Columns.Add(this.columnLabelInfo_Id);
                this.Constraints.Add(new UniqueConstraint("Constraint1", new DataColumn[] {
                                this.columnLabelInfo_Id}, true));
                this.columnDescription.AllowDBNull = false;
                this.columnDescription.Namespace = "";
                this.columnLabelFilename.AllowDBNull = false;
                this.columnLabelFilename.Namespace = "";
                this.columnBitmapFilename.Namespace = "";
                this.columnLabelInfo_Id.AutoIncrement = true;
                this.columnLabelInfo_Id.AllowDBNull = false;
                this.columnLabelInfo_Id.Unique = true;
            }
            
            public LabelInfoRow NewLabelInfoRow() {
                return ((LabelInfoRow)(this.NewRow()));
            }
            
            protected override DataRow NewRowFromBuilder(DataRowBuilder builder) {
                return new LabelInfoRow(builder);
            }
            
            protected override System.Type GetRowType() {
                return typeof(LabelInfoRow);
            }
            
            protected override void OnRowChanged(DataRowChangeEventArgs e) {
                base.OnRowChanged(e);
                if ((this.LabelInfoRowChanged != null)) {
                    this.LabelInfoRowChanged(this, new LabelInfoRowChangeEvent(((LabelInfoRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowChanging(DataRowChangeEventArgs e) {
                base.OnRowChanging(e);
                if ((this.LabelInfoRowChanging != null)) {
                    this.LabelInfoRowChanging(this, new LabelInfoRowChangeEvent(((LabelInfoRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleted(DataRowChangeEventArgs e) {
                base.OnRowDeleted(e);
                if ((this.LabelInfoRowDeleted != null)) {
                    this.LabelInfoRowDeleted(this, new LabelInfoRowChangeEvent(((LabelInfoRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleting(DataRowChangeEventArgs e) {
                base.OnRowDeleting(e);
                if ((this.LabelInfoRowDeleting != null)) {
                    this.LabelInfoRowDeleting(this, new LabelInfoRowChangeEvent(((LabelInfoRow)(e.Row)), e.Action));
                }
            }
            
            public void RemoveLabelInfoRow(LabelInfoRow row) {
                this.Rows.Remove(row);
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class LabelInfoRow : DataRow {
            
            private LabelInfoDataTable tableLabelInfo;
            
            internal LabelInfoRow(DataRowBuilder rb) : 
                    base(rb) {
                this.tableLabelInfo = ((LabelInfoDataTable)(this.Table));
            }
            
            public string Description {
                get {
                    return ((string)(this[this.tableLabelInfo.DescriptionColumn]));
                }
                set {
                    this[this.tableLabelInfo.DescriptionColumn] = value;
                }
            }
            
            public string LabelFilename {
                get {
                    return ((string)(this[this.tableLabelInfo.LabelFilenameColumn]));
                }
                set {
                    this[this.tableLabelInfo.LabelFilenameColumn] = value;
                }
            }
            
            public string BitmapFilename {
                get {
                    try {
                        return ((string)(this[this.tableLabelInfo.BitmapFilenameColumn]));
                    }
                    catch (InvalidCastException e) {
                        throw new StrongTypingException("Cannot get value because it is DBNull.", e);
                    }
                }
                set {
                    this[this.tableLabelInfo.BitmapFilenameColumn] = value;
                }
            }
            
            public bool IsBitmapFilenameNull() {
                return this.IsNull(this.tableLabelInfo.BitmapFilenameColumn);
            }
            
            public void SetBitmapFilenameNull() {
                this[this.tableLabelInfo.BitmapFilenameColumn] = System.Convert.DBNull;
            }
            
            public MergeFieldsRow[] GetMergeFieldsRows() {
                return ((MergeFieldsRow[])(this.GetChildRows(this.Table.ChildRelations["LabelInfo_MergeFields"])));
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class LabelInfoRowChangeEvent : EventArgs {
            
            private LabelInfoRow eventRow;
            
            private DataRowAction eventAction;
            
            public LabelInfoRowChangeEvent(LabelInfoRow row, DataRowAction action) {
                this.eventRow = row;
                this.eventAction = action;
            }
            
            public LabelInfoRow Row {
                get {
                    return this.eventRow;
                }
            }
            
            public DataRowAction Action {
                get {
                    return this.eventAction;
                }
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class MergeFieldsDataTable : DataTable, System.Collections.IEnumerable {
            
            private DataColumn columnFieldName;
            
            private DataColumn columnFieldData;
            
            private DataColumn columnLabelInfo_Id;
            
            internal MergeFieldsDataTable() : 
                    base("MergeFields") {
                this.InitClass();
            }
            
            internal MergeFieldsDataTable(DataTable table) : 
                    base(table.TableName) {
                if ((table.CaseSensitive != table.DataSet.CaseSensitive)) {
                    this.CaseSensitive = table.CaseSensitive;
                }
                if ((table.Locale.ToString() != table.DataSet.Locale.ToString())) {
                    this.Locale = table.Locale;
                }
                if ((table.Namespace != table.DataSet.Namespace)) {
                    this.Namespace = table.Namespace;
                }
                this.Prefix = table.Prefix;
                this.MinimumCapacity = table.MinimumCapacity;
                this.DisplayExpression = table.DisplayExpression;
            }
            
            [System.ComponentModel.Browsable(false)]
            public int Count {
                get {
                    return this.Rows.Count;
                }
            }
            
            internal DataColumn FieldNameColumn {
                get {
                    return this.columnFieldName;
                }
            }
            
            internal DataColumn FieldDataColumn {
                get {
                    return this.columnFieldData;
                }
            }
            
            internal DataColumn LabelInfo_IdColumn {
                get {
                    return this.columnLabelInfo_Id;
                }
            }
            
            public MergeFieldsRow this[int index] {
                get {
                    return ((MergeFieldsRow)(this.Rows[index]));
                }
            }
            
            public event MergeFieldsRowChangeEventHandler MergeFieldsRowChanged;
            
            public event MergeFieldsRowChangeEventHandler MergeFieldsRowChanging;
            
            public event MergeFieldsRowChangeEventHandler MergeFieldsRowDeleted;
            
            public event MergeFieldsRowChangeEventHandler MergeFieldsRowDeleting;
            
            public void AddMergeFieldsRow(MergeFieldsRow row) {
                this.Rows.Add(row);
            }
            
            public MergeFieldsRow AddMergeFieldsRow(string FieldName, string FieldData, LabelInfoRow parentLabelInfoRowByLabelInfo_MergeFields) {
                MergeFieldsRow rowMergeFieldsRow = ((MergeFieldsRow)(this.NewRow()));
                rowMergeFieldsRow.ItemArray = new object[] {
                        FieldName,
                        FieldData,
                        parentLabelInfoRowByLabelInfo_MergeFields[3]};
                this.Rows.Add(rowMergeFieldsRow);
                return rowMergeFieldsRow;
            }
            
            public System.Collections.IEnumerator GetEnumerator() {
                return this.Rows.GetEnumerator();
            }
            
            public override DataTable Clone() {
                MergeFieldsDataTable cln = ((MergeFieldsDataTable)(base.Clone()));
                cln.InitVars();
                return cln;
            }
            
            protected override DataTable CreateInstance() {
                return new MergeFieldsDataTable();
            }
            
            internal void InitVars() {
                this.columnFieldName = this.Columns["FieldName"];
                this.columnFieldData = this.Columns["FieldData"];
                this.columnLabelInfo_Id = this.Columns["LabelInfo_Id"];
            }
            
            private void InitClass() {
                this.columnFieldName = new DataColumn("FieldName", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnFieldName);
                this.columnFieldData = new DataColumn("FieldData", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnFieldData);
                this.columnLabelInfo_Id = new DataColumn("LabelInfo_Id", typeof(int), null, System.Data.MappingType.Hidden);
                this.Columns.Add(this.columnLabelInfo_Id);
                this.columnFieldName.Namespace = "";
                this.columnFieldData.Namespace = "";
            }
            
            public MergeFieldsRow NewMergeFieldsRow() {
                return ((MergeFieldsRow)(this.NewRow()));
            }
            
            protected override DataRow NewRowFromBuilder(DataRowBuilder builder) {
                return new MergeFieldsRow(builder);
            }
            
            protected override System.Type GetRowType() {
                return typeof(MergeFieldsRow);
            }
            
            protected override void OnRowChanged(DataRowChangeEventArgs e) {
                base.OnRowChanged(e);
                if ((this.MergeFieldsRowChanged != null)) {
                    this.MergeFieldsRowChanged(this, new MergeFieldsRowChangeEvent(((MergeFieldsRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowChanging(DataRowChangeEventArgs e) {
                base.OnRowChanging(e);
                if ((this.MergeFieldsRowChanging != null)) {
                    this.MergeFieldsRowChanging(this, new MergeFieldsRowChangeEvent(((MergeFieldsRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleted(DataRowChangeEventArgs e) {
                base.OnRowDeleted(e);
                if ((this.MergeFieldsRowDeleted != null)) {
                    this.MergeFieldsRowDeleted(this, new MergeFieldsRowChangeEvent(((MergeFieldsRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleting(DataRowChangeEventArgs e) {
                base.OnRowDeleting(e);
                if ((this.MergeFieldsRowDeleting != null)) {
                    this.MergeFieldsRowDeleting(this, new MergeFieldsRowChangeEvent(((MergeFieldsRow)(e.Row)), e.Action));
                }
            }
            
            public void RemoveMergeFieldsRow(MergeFieldsRow row) {
                this.Rows.Remove(row);
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class MergeFieldsRow : DataRow {
            
            private MergeFieldsDataTable tableMergeFields;
            
            internal MergeFieldsRow(DataRowBuilder rb) : 
                    base(rb) {
                this.tableMergeFields = ((MergeFieldsDataTable)(this.Table));
            }
            
            public string FieldName {
                get {
                    try {
                        return ((string)(this[this.tableMergeFields.FieldNameColumn]));
                    }
                    catch (InvalidCastException e) {
                        throw new StrongTypingException("Cannot get value because it is DBNull.", e);
                    }
                }
                set {
                    this[this.tableMergeFields.FieldNameColumn] = value;
                }
            }
            
            public string FieldData {
                get {
                    try {
                        return ((string)(this[this.tableMergeFields.FieldDataColumn]));
                    }
                    catch (InvalidCastException e) {
                        throw new StrongTypingException("Cannot get value because it is DBNull.", e);
                    }
                }
                set {
                    this[this.tableMergeFields.FieldDataColumn] = value;
                }
            }
            
            public LabelInfoRow LabelInfoRow {
                get {
                    return ((LabelInfoRow)(this.GetParentRow(this.Table.ParentRelations["LabelInfo_MergeFields"])));
                }
                set {
                    this.SetParentRow(value, this.Table.ParentRelations["LabelInfo_MergeFields"]);
                }
            }
            
            public bool IsFieldNameNull() {
                return this.IsNull(this.tableMergeFields.FieldNameColumn);
            }
            
            public void SetFieldNameNull() {
                this[this.tableMergeFields.FieldNameColumn] = System.Convert.DBNull;
            }
            
            public bool IsFieldDataNull() {
                return this.IsNull(this.tableMergeFields.FieldDataColumn);
            }
            
            public void SetFieldDataNull() {
                this[this.tableMergeFields.FieldDataColumn] = System.Convert.DBNull;
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class MergeFieldsRowChangeEvent : EventArgs {
            
            private MergeFieldsRow eventRow;
            
            private DataRowAction eventAction;
            
            public MergeFieldsRowChangeEvent(MergeFieldsRow row, DataRowAction action) {
                this.eventRow = row;
                this.eventAction = action;
            }
            
            public MergeFieldsRow Row {
                get {
                    return this.eventRow;
                }
            }
            
            public DataRowAction Action {
                get {
                    return this.eventAction;
                }
            }
        }
    }
}
