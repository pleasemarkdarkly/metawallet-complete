﻿//------------------------------------------------------------------------------
// <autogenerated>
//     This code was generated by a tool.
//     Runtime Version: 1.1.4322.2032
//
//     Changes to this file may cause incorrect behavior and will be lost if 
//     the code is regenerated.
// </autogenerated>
//------------------------------------------------------------------------------

namespace RImageSchemas.DataSets {
    using System;
    using System.Data;
    using System.Xml;
    using System.Runtime.Serialization;
    
    
    [Serializable()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Diagnostics.DebuggerStepThrough()]
    [System.ComponentModel.ToolboxItem(true)]
    public class EditList : DataSet {
        
        private BasePathDataTable tableBasePath;
        
        private CDPathDataTable tableCDPath;
        
        private DstFileDataTable tableDstFile;
        
        private DataRelation relationCDPath_DstFile;
        
        private DataRelation relationBasePath_CDPath;
        
        public EditList() {
            this.InitClass();
            System.ComponentModel.CollectionChangeEventHandler schemaChangedHandler = new System.ComponentModel.CollectionChangeEventHandler(this.SchemaChanged);
            this.Tables.CollectionChanged += schemaChangedHandler;
            this.Relations.CollectionChanged += schemaChangedHandler;
        }
        
        protected EditList(SerializationInfo info, StreamingContext context) {
            string strSchema = ((string)(info.GetValue("XmlSchema", typeof(string))));
            if ((strSchema != null)) {
                DataSet ds = new DataSet();
                ds.ReadXmlSchema(new XmlTextReader(new System.IO.StringReader(strSchema)));
                if ((ds.Tables["BasePath"] != null)) {
                    this.Tables.Add(new BasePathDataTable(ds.Tables["BasePath"]));
                }
                if ((ds.Tables["CDPath"] != null)) {
                    this.Tables.Add(new CDPathDataTable(ds.Tables["CDPath"]));
                }
                if ((ds.Tables["DstFile"] != null)) {
                    this.Tables.Add(new DstFileDataTable(ds.Tables["DstFile"]));
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
        public BasePathDataTable BasePath {
            get {
                return this.tableBasePath;
            }
        }
        
        [System.ComponentModel.Browsable(false)]
        [System.ComponentModel.DesignerSerializationVisibilityAttribute(System.ComponentModel.DesignerSerializationVisibility.Content)]
        public CDPathDataTable CDPath {
            get {
                return this.tableCDPath;
            }
        }
        
        [System.ComponentModel.Browsable(false)]
        [System.ComponentModel.DesignerSerializationVisibilityAttribute(System.ComponentModel.DesignerSerializationVisibility.Content)]
        public DstFileDataTable DstFile {
            get {
                return this.tableDstFile;
            }
        }
        
        public override DataSet Clone() {
            EditList cln = ((EditList)(base.Clone()));
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
            if ((ds.Tables["BasePath"] != null)) {
                this.Tables.Add(new BasePathDataTable(ds.Tables["BasePath"]));
            }
            if ((ds.Tables["CDPath"] != null)) {
                this.Tables.Add(new CDPathDataTable(ds.Tables["CDPath"]));
            }
            if ((ds.Tables["DstFile"] != null)) {
                this.Tables.Add(new DstFileDataTable(ds.Tables["DstFile"]));
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
            this.tableBasePath = ((BasePathDataTable)(this.Tables["BasePath"]));
            if ((this.tableBasePath != null)) {
                this.tableBasePath.InitVars();
            }
            this.tableCDPath = ((CDPathDataTable)(this.Tables["CDPath"]));
            if ((this.tableCDPath != null)) {
                this.tableCDPath.InitVars();
            }
            this.tableDstFile = ((DstFileDataTable)(this.Tables["DstFile"]));
            if ((this.tableDstFile != null)) {
                this.tableDstFile.InitVars();
            }
            this.relationCDPath_DstFile = this.Relations["CDPath_DstFile"];
            this.relationBasePath_CDPath = this.Relations["BasePath_CDPath"];
        }
        
        private void InitClass() {
            this.DataSetName = "EditList";
            this.Prefix = "";
            this.Namespace = "";
            this.Locale = new System.Globalization.CultureInfo("en-US");
            this.CaseSensitive = false;
            this.EnforceConstraints = true;
            this.tableBasePath = new BasePathDataTable();
            this.Tables.Add(this.tableBasePath);
            this.tableCDPath = new CDPathDataTable();
            this.Tables.Add(this.tableCDPath);
            this.tableDstFile = new DstFileDataTable();
            this.Tables.Add(this.tableDstFile);
            ForeignKeyConstraint fkc;
            fkc = new ForeignKeyConstraint("BasePath_CDPath", new DataColumn[] {
                        this.tableBasePath.BasePath_IdColumn}, new DataColumn[] {
                        this.tableCDPath.BasePath_IdColumn});
            this.tableCDPath.Constraints.Add(fkc);
            fkc.AcceptRejectRule = System.Data.AcceptRejectRule.None;
            fkc.DeleteRule = System.Data.Rule.Cascade;
            fkc.UpdateRule = System.Data.Rule.Cascade;
            fkc = new ForeignKeyConstraint("CDPath_DstFile", new DataColumn[] {
                        this.tableCDPath.CDPath_IdColumn}, new DataColumn[] {
                        this.tableDstFile.CDPath_IdColumn});
            this.tableDstFile.Constraints.Add(fkc);
            fkc.AcceptRejectRule = System.Data.AcceptRejectRule.None;
            fkc.DeleteRule = System.Data.Rule.Cascade;
            fkc.UpdateRule = System.Data.Rule.Cascade;
            this.relationCDPath_DstFile = new DataRelation("CDPath_DstFile", new DataColumn[] {
                        this.tableCDPath.CDPath_IdColumn}, new DataColumn[] {
                        this.tableDstFile.CDPath_IdColumn}, false);
            this.relationCDPath_DstFile.Nested = true;
            this.Relations.Add(this.relationCDPath_DstFile);
            this.relationBasePath_CDPath = new DataRelation("BasePath_CDPath", new DataColumn[] {
                        this.tableBasePath.BasePath_IdColumn}, new DataColumn[] {
                        this.tableCDPath.BasePath_IdColumn}, false);
            this.relationBasePath_CDPath.Nested = true;
            this.Relations.Add(this.relationBasePath_CDPath);
        }
        
        private bool ShouldSerializeBasePath() {
            return false;
        }
        
        private bool ShouldSerializeCDPath() {
            return false;
        }
        
        private bool ShouldSerializeDstFile() {
            return false;
        }
        
        private void SchemaChanged(object sender, System.ComponentModel.CollectionChangeEventArgs e) {
            if ((e.Action == System.ComponentModel.CollectionChangeAction.Remove)) {
                this.InitVars();
            }
        }
        
        public delegate void BasePathRowChangeEventHandler(object sender, BasePathRowChangeEvent e);
        
        public delegate void CDPathRowChangeEventHandler(object sender, CDPathRowChangeEvent e);
        
        public delegate void DstFileRowChangeEventHandler(object sender, DstFileRowChangeEvent e);
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class BasePathDataTable : DataTable, System.Collections.IEnumerable {
            
            private DataColumn columnBPath;
            
            private DataColumn columnSystemDst;
            
            private DataColumn columnBasePath_Id;
            
            internal BasePathDataTable() : 
                    base("BasePath") {
                this.InitClass();
            }
            
            internal BasePathDataTable(DataTable table) : 
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
            
            internal DataColumn BPathColumn {
                get {
                    return this.columnBPath;
                }
            }
            
            internal DataColumn SystemDstColumn {
                get {
                    return this.columnSystemDst;
                }
            }
            
            internal DataColumn BasePath_IdColumn {
                get {
                    return this.columnBasePath_Id;
                }
            }
            
            public BasePathRow this[int index] {
                get {
                    return ((BasePathRow)(this.Rows[index]));
                }
            }
            
            public event BasePathRowChangeEventHandler BasePathRowChanged;
            
            public event BasePathRowChangeEventHandler BasePathRowChanging;
            
            public event BasePathRowChangeEventHandler BasePathRowDeleted;
            
            public event BasePathRowChangeEventHandler BasePathRowDeleting;
            
            public void AddBasePathRow(BasePathRow row) {
                this.Rows.Add(row);
            }
            
            public BasePathRow AddBasePathRow(string BPath, string SystemDst) {
                BasePathRow rowBasePathRow = ((BasePathRow)(this.NewRow()));
                rowBasePathRow.ItemArray = new object[] {
                        BPath,
                        SystemDst,
                        null};
                this.Rows.Add(rowBasePathRow);
                return rowBasePathRow;
            }
            
            public System.Collections.IEnumerator GetEnumerator() {
                return this.Rows.GetEnumerator();
            }
            
            public override DataTable Clone() {
                BasePathDataTable cln = ((BasePathDataTable)(base.Clone()));
                cln.InitVars();
                return cln;
            }
            
            protected override DataTable CreateInstance() {
                return new BasePathDataTable();
            }
            
            internal void InitVars() {
                this.columnBPath = this.Columns["BPath"];
                this.columnSystemDst = this.Columns["SystemDst"];
                this.columnBasePath_Id = this.Columns["BasePath_Id"];
            }
            
            private void InitClass() {
                this.columnBPath = new DataColumn("BPath", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnBPath);
                this.columnSystemDst = new DataColumn("SystemDst", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnSystemDst);
                this.columnBasePath_Id = new DataColumn("BasePath_Id", typeof(int), null, System.Data.MappingType.Hidden);
                this.Columns.Add(this.columnBasePath_Id);
                this.Constraints.Add(new UniqueConstraint("Constraint1", new DataColumn[] {
                                this.columnBasePath_Id}, true));
                this.columnBPath.AllowDBNull = false;
                this.columnBPath.Namespace = "";
                this.columnSystemDst.Namespace = "";
                this.columnSystemDst.DefaultValue = "BOTH";
                this.columnBasePath_Id.AutoIncrement = true;
                this.columnBasePath_Id.AllowDBNull = false;
                this.columnBasePath_Id.Unique = true;
            }
            
            public BasePathRow NewBasePathRow() {
                return ((BasePathRow)(this.NewRow()));
            }
            
            protected override DataRow NewRowFromBuilder(DataRowBuilder builder) {
                return new BasePathRow(builder);
            }
            
            protected override System.Type GetRowType() {
                return typeof(BasePathRow);
            }
            
            protected override void OnRowChanged(DataRowChangeEventArgs e) {
                base.OnRowChanged(e);
                if ((this.BasePathRowChanged != null)) {
                    this.BasePathRowChanged(this, new BasePathRowChangeEvent(((BasePathRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowChanging(DataRowChangeEventArgs e) {
                base.OnRowChanging(e);
                if ((this.BasePathRowChanging != null)) {
                    this.BasePathRowChanging(this, new BasePathRowChangeEvent(((BasePathRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleted(DataRowChangeEventArgs e) {
                base.OnRowDeleted(e);
                if ((this.BasePathRowDeleted != null)) {
                    this.BasePathRowDeleted(this, new BasePathRowChangeEvent(((BasePathRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleting(DataRowChangeEventArgs e) {
                base.OnRowDeleting(e);
                if ((this.BasePathRowDeleting != null)) {
                    this.BasePathRowDeleting(this, new BasePathRowChangeEvent(((BasePathRow)(e.Row)), e.Action));
                }
            }
            
            public void RemoveBasePathRow(BasePathRow row) {
                this.Rows.Remove(row);
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class BasePathRow : DataRow {
            
            private BasePathDataTable tableBasePath;
            
            internal BasePathRow(DataRowBuilder rb) : 
                    base(rb) {
                this.tableBasePath = ((BasePathDataTable)(this.Table));
            }
            
            public string BPath {
                get {
                    return ((string)(this[this.tableBasePath.BPathColumn]));
                }
                set {
                    this[this.tableBasePath.BPathColumn] = value;
                }
            }
            
            public string SystemDst {
                get {
                    try {
                        return ((string)(this[this.tableBasePath.SystemDstColumn]));
                    }
                    catch (InvalidCastException e) {
                        throw new StrongTypingException("Cannot get value because it is DBNull.", e);
                    }
                }
                set {
                    this[this.tableBasePath.SystemDstColumn] = value;
                }
            }
            
            public bool IsSystemDstNull() {
                return this.IsNull(this.tableBasePath.SystemDstColumn);
            }
            
            public void SetSystemDstNull() {
                this[this.tableBasePath.SystemDstColumn] = System.Convert.DBNull;
            }
            
            public CDPathRow[] GetCDPathRows() {
                return ((CDPathRow[])(this.GetChildRows(this.Table.ChildRelations["BasePath_CDPath"])));
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class BasePathRowChangeEvent : EventArgs {
            
            private BasePathRow eventRow;
            
            private DataRowAction eventAction;
            
            public BasePathRowChangeEvent(BasePathRow row, DataRowAction action) {
                this.eventRow = row;
                this.eventAction = action;
            }
            
            public BasePathRow Row {
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
        public class CDPathDataTable : DataTable, System.Collections.IEnumerable {
            
            private DataColumn columnCDDir;
            
            private DataColumn columnCDPath_Id;
            
            private DataColumn columnBasePath_Id;
            
            internal CDPathDataTable() : 
                    base("CDPath") {
                this.InitClass();
            }
            
            internal CDPathDataTable(DataTable table) : 
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
            
            internal DataColumn CDDirColumn {
                get {
                    return this.columnCDDir;
                }
            }
            
            internal DataColumn CDPath_IdColumn {
                get {
                    return this.columnCDPath_Id;
                }
            }
            
            internal DataColumn BasePath_IdColumn {
                get {
                    return this.columnBasePath_Id;
                }
            }
            
            public CDPathRow this[int index] {
                get {
                    return ((CDPathRow)(this.Rows[index]));
                }
            }
            
            public event CDPathRowChangeEventHandler CDPathRowChanged;
            
            public event CDPathRowChangeEventHandler CDPathRowChanging;
            
            public event CDPathRowChangeEventHandler CDPathRowDeleted;
            
            public event CDPathRowChangeEventHandler CDPathRowDeleting;
            
            public void AddCDPathRow(CDPathRow row) {
                this.Rows.Add(row);
            }
            
            public CDPathRow AddCDPathRow(string CDDir, BasePathRow parentBasePathRowByBasePath_CDPath) {
                CDPathRow rowCDPathRow = ((CDPathRow)(this.NewRow()));
                rowCDPathRow.ItemArray = new object[] {
                        CDDir,
                        null,
                        parentBasePathRowByBasePath_CDPath[2]};
                this.Rows.Add(rowCDPathRow);
                return rowCDPathRow;
            }
            
            public System.Collections.IEnumerator GetEnumerator() {
                return this.Rows.GetEnumerator();
            }
            
            public override DataTable Clone() {
                CDPathDataTable cln = ((CDPathDataTable)(base.Clone()));
                cln.InitVars();
                return cln;
            }
            
            protected override DataTable CreateInstance() {
                return new CDPathDataTable();
            }
            
            internal void InitVars() {
                this.columnCDDir = this.Columns["CDDir"];
                this.columnCDPath_Id = this.Columns["CDPath_Id"];
                this.columnBasePath_Id = this.Columns["BasePath_Id"];
            }
            
            private void InitClass() {
                this.columnCDDir = new DataColumn("CDDir", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnCDDir);
                this.columnCDPath_Id = new DataColumn("CDPath_Id", typeof(int), null, System.Data.MappingType.Hidden);
                this.Columns.Add(this.columnCDPath_Id);
                this.columnBasePath_Id = new DataColumn("BasePath_Id", typeof(int), null, System.Data.MappingType.Hidden);
                this.Columns.Add(this.columnBasePath_Id);
                this.Constraints.Add(new UniqueConstraint("Constraint1", new DataColumn[] {
                                this.columnCDPath_Id}, true));
                this.columnCDDir.Namespace = "";
                this.columnCDDir.DefaultValue = "/";
                this.columnCDPath_Id.AutoIncrement = true;
                this.columnCDPath_Id.AllowDBNull = false;
                this.columnCDPath_Id.Unique = true;
            }
            
            public CDPathRow NewCDPathRow() {
                return ((CDPathRow)(this.NewRow()));
            }
            
            protected override DataRow NewRowFromBuilder(DataRowBuilder builder) {
                return new CDPathRow(builder);
            }
            
            protected override System.Type GetRowType() {
                return typeof(CDPathRow);
            }
            
            protected override void OnRowChanged(DataRowChangeEventArgs e) {
                base.OnRowChanged(e);
                if ((this.CDPathRowChanged != null)) {
                    this.CDPathRowChanged(this, new CDPathRowChangeEvent(((CDPathRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowChanging(DataRowChangeEventArgs e) {
                base.OnRowChanging(e);
                if ((this.CDPathRowChanging != null)) {
                    this.CDPathRowChanging(this, new CDPathRowChangeEvent(((CDPathRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleted(DataRowChangeEventArgs e) {
                base.OnRowDeleted(e);
                if ((this.CDPathRowDeleted != null)) {
                    this.CDPathRowDeleted(this, new CDPathRowChangeEvent(((CDPathRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleting(DataRowChangeEventArgs e) {
                base.OnRowDeleting(e);
                if ((this.CDPathRowDeleting != null)) {
                    this.CDPathRowDeleting(this, new CDPathRowChangeEvent(((CDPathRow)(e.Row)), e.Action));
                }
            }
            
            public void RemoveCDPathRow(CDPathRow row) {
                this.Rows.Remove(row);
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class CDPathRow : DataRow {
            
            private CDPathDataTable tableCDPath;
            
            internal CDPathRow(DataRowBuilder rb) : 
                    base(rb) {
                this.tableCDPath = ((CDPathDataTable)(this.Table));
            }
            
            public string CDDir {
                get {
                    try {
                        return ((string)(this[this.tableCDPath.CDDirColumn]));
                    }
                    catch (InvalidCastException e) {
                        throw new StrongTypingException("Cannot get value because it is DBNull.", e);
                    }
                }
                set {
                    this[this.tableCDPath.CDDirColumn] = value;
                }
            }
            
            public BasePathRow BasePathRow {
                get {
                    return ((BasePathRow)(this.GetParentRow(this.Table.ParentRelations["BasePath_CDPath"])));
                }
                set {
                    this.SetParentRow(value, this.Table.ParentRelations["BasePath_CDPath"]);
                }
            }
            
            public bool IsCDDirNull() {
                return this.IsNull(this.tableCDPath.CDDirColumn);
            }
            
            public void SetCDDirNull() {
                this[this.tableCDPath.CDDirColumn] = System.Convert.DBNull;
            }
            
            public DstFileRow[] GetDstFileRows() {
                return ((DstFileRow[])(this.GetChildRows(this.Table.ChildRelations["CDPath_DstFile"])));
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class CDPathRowChangeEvent : EventArgs {
            
            private CDPathRow eventRow;
            
            private DataRowAction eventAction;
            
            public CDPathRowChangeEvent(CDPathRow row, DataRowAction action) {
                this.eventRow = row;
                this.eventAction = action;
            }
            
            public CDPathRow Row {
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
        public class DstFileDataTable : DataTable, System.Collections.IEnumerable {
            
            private DataColumn columnDstFileName;
            
            private DataColumn columnSourceOverride;
            
            private DataColumn columnCDPath_Id;
            
            internal DstFileDataTable() : 
                    base("DstFile") {
                this.InitClass();
            }
            
            internal DstFileDataTable(DataTable table) : 
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
            
            internal DataColumn DstFileNameColumn {
                get {
                    return this.columnDstFileName;
                }
            }
            
            internal DataColumn SourceOverrideColumn {
                get {
                    return this.columnSourceOverride;
                }
            }
            
            internal DataColumn CDPath_IdColumn {
                get {
                    return this.columnCDPath_Id;
                }
            }
            
            public DstFileRow this[int index] {
                get {
                    return ((DstFileRow)(this.Rows[index]));
                }
            }
            
            public event DstFileRowChangeEventHandler DstFileRowChanged;
            
            public event DstFileRowChangeEventHandler DstFileRowChanging;
            
            public event DstFileRowChangeEventHandler DstFileRowDeleted;
            
            public event DstFileRowChangeEventHandler DstFileRowDeleting;
            
            public void AddDstFileRow(DstFileRow row) {
                this.Rows.Add(row);
            }
            
            public DstFileRow AddDstFileRow(string DstFileName, string SourceOverride, CDPathRow parentCDPathRowByCDPath_DstFile) {
                DstFileRow rowDstFileRow = ((DstFileRow)(this.NewRow()));
                rowDstFileRow.ItemArray = new object[] {
                        DstFileName,
                        SourceOverride,
                        parentCDPathRowByCDPath_DstFile[1]};
                this.Rows.Add(rowDstFileRow);
                return rowDstFileRow;
            }
            
            public System.Collections.IEnumerator GetEnumerator() {
                return this.Rows.GetEnumerator();
            }
            
            public override DataTable Clone() {
                DstFileDataTable cln = ((DstFileDataTable)(base.Clone()));
                cln.InitVars();
                return cln;
            }
            
            protected override DataTable CreateInstance() {
                return new DstFileDataTable();
            }
            
            internal void InitVars() {
                this.columnDstFileName = this.Columns["DstFileName"];
                this.columnSourceOverride = this.Columns["SourceOverride"];
                this.columnCDPath_Id = this.Columns["CDPath_Id"];
            }
            
            private void InitClass() {
                this.columnDstFileName = new DataColumn("DstFileName", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnDstFileName);
                this.columnSourceOverride = new DataColumn("SourceOverride", typeof(string), null, System.Data.MappingType.Attribute);
                this.Columns.Add(this.columnSourceOverride);
                this.columnCDPath_Id = new DataColumn("CDPath_Id", typeof(int), null, System.Data.MappingType.Hidden);
                this.Columns.Add(this.columnCDPath_Id);
                this.columnDstFileName.AllowDBNull = false;
                this.columnDstFileName.Namespace = "";
                this.columnSourceOverride.Namespace = "";
            }
            
            public DstFileRow NewDstFileRow() {
                return ((DstFileRow)(this.NewRow()));
            }
            
            protected override DataRow NewRowFromBuilder(DataRowBuilder builder) {
                return new DstFileRow(builder);
            }
            
            protected override System.Type GetRowType() {
                return typeof(DstFileRow);
            }
            
            protected override void OnRowChanged(DataRowChangeEventArgs e) {
                base.OnRowChanged(e);
                if ((this.DstFileRowChanged != null)) {
                    this.DstFileRowChanged(this, new DstFileRowChangeEvent(((DstFileRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowChanging(DataRowChangeEventArgs e) {
                base.OnRowChanging(e);
                if ((this.DstFileRowChanging != null)) {
                    this.DstFileRowChanging(this, new DstFileRowChangeEvent(((DstFileRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleted(DataRowChangeEventArgs e) {
                base.OnRowDeleted(e);
                if ((this.DstFileRowDeleted != null)) {
                    this.DstFileRowDeleted(this, new DstFileRowChangeEvent(((DstFileRow)(e.Row)), e.Action));
                }
            }
            
            protected override void OnRowDeleting(DataRowChangeEventArgs e) {
                base.OnRowDeleting(e);
                if ((this.DstFileRowDeleting != null)) {
                    this.DstFileRowDeleting(this, new DstFileRowChangeEvent(((DstFileRow)(e.Row)), e.Action));
                }
            }
            
            public void RemoveDstFileRow(DstFileRow row) {
                this.Rows.Remove(row);
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class DstFileRow : DataRow {
            
            private DstFileDataTable tableDstFile;
            
            internal DstFileRow(DataRowBuilder rb) : 
                    base(rb) {
                this.tableDstFile = ((DstFileDataTable)(this.Table));
            }
            
            public string DstFileName {
                get {
                    return ((string)(this[this.tableDstFile.DstFileNameColumn]));
                }
                set {
                    this[this.tableDstFile.DstFileNameColumn] = value;
                }
            }
            
            public string SourceOverride {
                get {
                    try {
                        return ((string)(this[this.tableDstFile.SourceOverrideColumn]));
                    }
                    catch (InvalidCastException e) {
                        throw new StrongTypingException("Cannot get value because it is DBNull.", e);
                    }
                }
                set {
                    this[this.tableDstFile.SourceOverrideColumn] = value;
                }
            }
            
            public CDPathRow CDPathRow {
                get {
                    return ((CDPathRow)(this.GetParentRow(this.Table.ParentRelations["CDPath_DstFile"])));
                }
                set {
                    this.SetParentRow(value, this.Table.ParentRelations["CDPath_DstFile"]);
                }
            }
            
            public bool IsSourceOverrideNull() {
                return this.IsNull(this.tableDstFile.SourceOverrideColumn);
            }
            
            public void SetSourceOverrideNull() {
                this[this.tableDstFile.SourceOverrideColumn] = System.Convert.DBNull;
            }
        }
        
        [System.Diagnostics.DebuggerStepThrough()]
        public class DstFileRowChangeEvent : EventArgs {
            
            private DstFileRow eventRow;
            
            private DataRowAction eventAction;
            
            public DstFileRowChangeEvent(DstFileRow row, DataRowAction action) {
                this.eventRow = row;
                this.eventAction = action;
            }
            
            public DstFileRow Row {
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