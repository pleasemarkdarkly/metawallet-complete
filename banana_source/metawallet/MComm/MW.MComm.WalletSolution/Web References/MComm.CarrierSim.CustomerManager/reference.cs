﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:2.0.50727.42
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// 
// This source code was auto-generated by Microsoft.VSDesigner, Version 2.0.50727.42.
// 
#pragma warning disable 1591

namespace MW.MComm.WalletSolution.MComm.CarrierSim.CustomerManager {
    using System.Diagnostics;
    using System.Web.Services;
    using System.ComponentModel;
    using System.Web.Services.Protocols;
    using System;
    using System.Xml.Serialization;
    
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Web.Services.WebServiceBindingAttribute(Name="CustomerManagerSoap", Namespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager")]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(StatusObject))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(BusinessObject))]
    public partial class CustomerManager : System.Web.Services.Protocols.SoapHttpClientProtocol {
        
        private System.Threading.SendOrPostCallback UpsertOneCustomerOperationCompleted;
        
        private System.Threading.SendOrPostCallback DeleteOneCustomerOperationCompleted;
        
        private System.Threading.SendOrPostCallback GetOneCustomerOperationCompleted;
        
        private System.Threading.SendOrPostCallback GetAllCustomerDataOperationCompleted;
        
        private System.Threading.SendOrPostCallback GetAllCustomerDataByCriteriaOperationCompleted;
        
        private System.Threading.SendOrPostCallback GetManyCustomerDataByCriteriaOperationCompleted;
        
        private bool useDefaultCredentialsSetExplicitly;
        
        /// <remarks/>
        public CustomerManager() {
            this.Url = global::MW.MComm.WalletSolution.Properties.Settings.Default.MW_MComm_WalletSolution_MComm_CarrierSim_CustomerManager_CustomerManager;
            if ((this.IsLocalFileSystemWebService(this.Url) == true)) {
                this.UseDefaultCredentials = true;
                this.useDefaultCredentialsSetExplicitly = false;
            }
            else {
                this.useDefaultCredentialsSetExplicitly = true;
            }
        }
        
        public new string Url {
            get {
                return base.Url;
            }
            set {
                if ((((this.IsLocalFileSystemWebService(base.Url) == true) 
                            && (this.useDefaultCredentialsSetExplicitly == false)) 
                            && (this.IsLocalFileSystemWebService(value) == false))) {
                    base.UseDefaultCredentials = false;
                }
                base.Url = value;
            }
        }
        
        public new bool UseDefaultCredentials {
            get {
                return base.UseDefaultCredentials;
            }
            set {
                base.UseDefaultCredentials = value;
                this.useDefaultCredentialsSetExplicitly = true;
            }
        }
        
        /// <remarks/>
        public event UpsertOneCustomerCompletedEventHandler UpsertOneCustomerCompleted;
        
        /// <remarks/>
        public event DeleteOneCustomerCompletedEventHandler DeleteOneCustomerCompleted;
        
        /// <remarks/>
        public event GetOneCustomerCompletedEventHandler GetOneCustomerCompleted;
        
        /// <remarks/>
        public event GetAllCustomerDataCompletedEventHandler GetAllCustomerDataCompleted;
        
        /// <remarks/>
        public event GetAllCustomerDataByCriteriaCompletedEventHandler GetAllCustomerDataByCriteriaCompleted;
        
        /// <remarks/>
        public event GetManyCustomerDataByCriteriaCompletedEventHandler GetManyCustomerDataByCriteriaCompleted;
        
        /// <remarks/>
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager/Up" +
            "sertOneCustomer", RequestNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", ResponseNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Wrapped)]
        public CustomerResults UpsertOneCustomer(Customer item, bool performCascadeOperation) {
            object[] results = this.Invoke("UpsertOneCustomer", new object[] {
                        item,
                        performCascadeOperation});
            return ((CustomerResults)(results[0]));
        }
        
        /// <remarks/>
        public void UpsertOneCustomerAsync(Customer item, bool performCascadeOperation) {
            this.UpsertOneCustomerAsync(item, performCascadeOperation, null);
        }
        
        /// <remarks/>
        public void UpsertOneCustomerAsync(Customer item, bool performCascadeOperation, object userState) {
            if ((this.UpsertOneCustomerOperationCompleted == null)) {
                this.UpsertOneCustomerOperationCompleted = new System.Threading.SendOrPostCallback(this.OnUpsertOneCustomerOperationCompleted);
            }
            this.InvokeAsync("UpsertOneCustomer", new object[] {
                        item,
                        performCascadeOperation}, this.UpsertOneCustomerOperationCompleted, userState);
        }
        
        private void OnUpsertOneCustomerOperationCompleted(object arg) {
            if ((this.UpsertOneCustomerCompleted != null)) {
                System.Web.Services.Protocols.InvokeCompletedEventArgs invokeArgs = ((System.Web.Services.Protocols.InvokeCompletedEventArgs)(arg));
                this.UpsertOneCustomerCompleted(this, new UpsertOneCustomerCompletedEventArgs(invokeArgs.Results, invokeArgs.Error, invokeArgs.Cancelled, invokeArgs.UserState));
            }
        }
        
        /// <remarks/>
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager/De" +
            "leteOneCustomer", RequestNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", ResponseNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Wrapped)]
        public CustomerResults DeleteOneCustomer(Customer item, bool performCascadeOperation) {
            object[] results = this.Invoke("DeleteOneCustomer", new object[] {
                        item,
                        performCascadeOperation});
            return ((CustomerResults)(results[0]));
        }
        
        /// <remarks/>
        public void DeleteOneCustomerAsync(Customer item, bool performCascadeOperation) {
            this.DeleteOneCustomerAsync(item, performCascadeOperation, null);
        }
        
        /// <remarks/>
        public void DeleteOneCustomerAsync(Customer item, bool performCascadeOperation, object userState) {
            if ((this.DeleteOneCustomerOperationCompleted == null)) {
                this.DeleteOneCustomerOperationCompleted = new System.Threading.SendOrPostCallback(this.OnDeleteOneCustomerOperationCompleted);
            }
            this.InvokeAsync("DeleteOneCustomer", new object[] {
                        item,
                        performCascadeOperation}, this.DeleteOneCustomerOperationCompleted, userState);
        }
        
        private void OnDeleteOneCustomerOperationCompleted(object arg) {
            if ((this.DeleteOneCustomerCompleted != null)) {
                System.Web.Services.Protocols.InvokeCompletedEventArgs invokeArgs = ((System.Web.Services.Protocols.InvokeCompletedEventArgs)(arg));
                this.DeleteOneCustomerCompleted(this, new DeleteOneCustomerCompletedEventArgs(invokeArgs.Results, invokeArgs.Error, invokeArgs.Cancelled, invokeArgs.UserState));
            }
        }
        
        /// <remarks/>
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager/Ge" +
            "tOneCustomer", RequestNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", ResponseNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Wrapped)]
        public CustomerResults GetOneCustomer(string customerID, string sortColumn, string sortDirection) {
            object[] results = this.Invoke("GetOneCustomer", new object[] {
                        customerID,
                        sortColumn,
                        sortDirection});
            return ((CustomerResults)(results[0]));
        }
        
        /// <remarks/>
        public void GetOneCustomerAsync(string customerID, string sortColumn, string sortDirection) {
            this.GetOneCustomerAsync(customerID, sortColumn, sortDirection, null);
        }
        
        /// <remarks/>
        public void GetOneCustomerAsync(string customerID, string sortColumn, string sortDirection, object userState) {
            if ((this.GetOneCustomerOperationCompleted == null)) {
                this.GetOneCustomerOperationCompleted = new System.Threading.SendOrPostCallback(this.OnGetOneCustomerOperationCompleted);
            }
            this.InvokeAsync("GetOneCustomer", new object[] {
                        customerID,
                        sortColumn,
                        sortDirection}, this.GetOneCustomerOperationCompleted, userState);
        }
        
        private void OnGetOneCustomerOperationCompleted(object arg) {
            if ((this.GetOneCustomerCompleted != null)) {
                System.Web.Services.Protocols.InvokeCompletedEventArgs invokeArgs = ((System.Web.Services.Protocols.InvokeCompletedEventArgs)(arg));
                this.GetOneCustomerCompleted(this, new GetOneCustomerCompletedEventArgs(invokeArgs.Results, invokeArgs.Error, invokeArgs.Cancelled, invokeArgs.UserState));
            }
        }
        
        /// <remarks/>
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager/Ge" +
            "tAllCustomerData", RequestNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", ResponseNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Wrapped)]
        public CustomerResults GetAllCustomerData(string sortColumn, string sortDirection) {
            object[] results = this.Invoke("GetAllCustomerData", new object[] {
                        sortColumn,
                        sortDirection});
            return ((CustomerResults)(results[0]));
        }
        
        /// <remarks/>
        public void GetAllCustomerDataAsync(string sortColumn, string sortDirection) {
            this.GetAllCustomerDataAsync(sortColumn, sortDirection, null);
        }
        
        /// <remarks/>
        public void GetAllCustomerDataAsync(string sortColumn, string sortDirection, object userState) {
            if ((this.GetAllCustomerDataOperationCompleted == null)) {
                this.GetAllCustomerDataOperationCompleted = new System.Threading.SendOrPostCallback(this.OnGetAllCustomerDataOperationCompleted);
            }
            this.InvokeAsync("GetAllCustomerData", new object[] {
                        sortColumn,
                        sortDirection}, this.GetAllCustomerDataOperationCompleted, userState);
        }
        
        private void OnGetAllCustomerDataOperationCompleted(object arg) {
            if ((this.GetAllCustomerDataCompleted != null)) {
                System.Web.Services.Protocols.InvokeCompletedEventArgs invokeArgs = ((System.Web.Services.Protocols.InvokeCompletedEventArgs)(arg));
                this.GetAllCustomerDataCompleted(this, new GetAllCustomerDataCompletedEventArgs(invokeArgs.Results, invokeArgs.Error, invokeArgs.Cancelled, invokeArgs.UserState));
            }
        }
        
        /// <remarks/>
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager/Ge" +
            "tAllCustomerDataByCriteria", RequestNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", ResponseNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Wrapped)]
        public CustomerResults GetAllCustomerDataByCriteria(string lastModifiedDateStart, string lastModifiedDateEnd, string storedValueBalance, string name, string storedValueLockedBalance, string sortColumn, string sortDirection) {
            object[] results = this.Invoke("GetAllCustomerDataByCriteria", new object[] {
                        lastModifiedDateStart,
                        lastModifiedDateEnd,
                        storedValueBalance,
                        name,
                        storedValueLockedBalance,
                        sortColumn,
                        sortDirection});
            return ((CustomerResults)(results[0]));
        }
        
        /// <remarks/>
        public void GetAllCustomerDataByCriteriaAsync(string lastModifiedDateStart, string lastModifiedDateEnd, string storedValueBalance, string name, string storedValueLockedBalance, string sortColumn, string sortDirection) {
            this.GetAllCustomerDataByCriteriaAsync(lastModifiedDateStart, lastModifiedDateEnd, storedValueBalance, name, storedValueLockedBalance, sortColumn, sortDirection, null);
        }
        
        /// <remarks/>
        public void GetAllCustomerDataByCriteriaAsync(string lastModifiedDateStart, string lastModifiedDateEnd, string storedValueBalance, string name, string storedValueLockedBalance, string sortColumn, string sortDirection, object userState) {
            if ((this.GetAllCustomerDataByCriteriaOperationCompleted == null)) {
                this.GetAllCustomerDataByCriteriaOperationCompleted = new System.Threading.SendOrPostCallback(this.OnGetAllCustomerDataByCriteriaOperationCompleted);
            }
            this.InvokeAsync("GetAllCustomerDataByCriteria", new object[] {
                        lastModifiedDateStart,
                        lastModifiedDateEnd,
                        storedValueBalance,
                        name,
                        storedValueLockedBalance,
                        sortColumn,
                        sortDirection}, this.GetAllCustomerDataByCriteriaOperationCompleted, userState);
        }
        
        private void OnGetAllCustomerDataByCriteriaOperationCompleted(object arg) {
            if ((this.GetAllCustomerDataByCriteriaCompleted != null)) {
                System.Web.Services.Protocols.InvokeCompletedEventArgs invokeArgs = ((System.Web.Services.Protocols.InvokeCompletedEventArgs)(arg));
                this.GetAllCustomerDataByCriteriaCompleted(this, new GetAllCustomerDataByCriteriaCompletedEventArgs(invokeArgs.Results, invokeArgs.Error, invokeArgs.Cancelled, invokeArgs.UserState));
            }
        }
        
        /// <remarks/>
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager/Ge" +
            "tManyCustomerDataByCriteria", RequestNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", ResponseNamespace="http://modsystems.com/MW.MComm.CarrierSim.WebService/Customers/CustomerManager", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Wrapped)]
        public CustomerResults GetManyCustomerDataByCriteria(string lastModifiedDateStart, string lastModifiedDateEnd, string storedValueBalance, string name, string storedValueLockedBalance, int startIndex, int pageSize, int maximumListSize, string sortColumn, string sortDirection) {
            object[] results = this.Invoke("GetManyCustomerDataByCriteria", new object[] {
                        lastModifiedDateStart,
                        lastModifiedDateEnd,
                        storedValueBalance,
                        name,
                        storedValueLockedBalance,
                        startIndex,
                        pageSize,
                        maximumListSize,
                        sortColumn,
                        sortDirection});
            return ((CustomerResults)(results[0]));
        }
        
        /// <remarks/>
        public void GetManyCustomerDataByCriteriaAsync(string lastModifiedDateStart, string lastModifiedDateEnd, string storedValueBalance, string name, string storedValueLockedBalance, int startIndex, int pageSize, int maximumListSize, string sortColumn, string sortDirection) {
            this.GetManyCustomerDataByCriteriaAsync(lastModifiedDateStart, lastModifiedDateEnd, storedValueBalance, name, storedValueLockedBalance, startIndex, pageSize, maximumListSize, sortColumn, sortDirection, null);
        }
        
        /// <remarks/>
        public void GetManyCustomerDataByCriteriaAsync(string lastModifiedDateStart, string lastModifiedDateEnd, string storedValueBalance, string name, string storedValueLockedBalance, int startIndex, int pageSize, int maximumListSize, string sortColumn, string sortDirection, object userState) {
            if ((this.GetManyCustomerDataByCriteriaOperationCompleted == null)) {
                this.GetManyCustomerDataByCriteriaOperationCompleted = new System.Threading.SendOrPostCallback(this.OnGetManyCustomerDataByCriteriaOperationCompleted);
            }
            this.InvokeAsync("GetManyCustomerDataByCriteria", new object[] {
                        lastModifiedDateStart,
                        lastModifiedDateEnd,
                        storedValueBalance,
                        name,
                        storedValueLockedBalance,
                        startIndex,
                        pageSize,
                        maximumListSize,
                        sortColumn,
                        sortDirection}, this.GetManyCustomerDataByCriteriaOperationCompleted, userState);
        }
        
        private void OnGetManyCustomerDataByCriteriaOperationCompleted(object arg) {
            if ((this.GetManyCustomerDataByCriteriaCompleted != null)) {
                System.Web.Services.Protocols.InvokeCompletedEventArgs invokeArgs = ((System.Web.Services.Protocols.InvokeCompletedEventArgs)(arg));
                this.GetManyCustomerDataByCriteriaCompleted(this, new GetManyCustomerDataByCriteriaCompletedEventArgs(invokeArgs.Results, invokeArgs.Error, invokeArgs.Cancelled, invokeArgs.UserState));
            }
        }
        
        /// <remarks/>
        public new void CancelAsync(object userState) {
            base.CancelAsync(userState);
        }
        
        private bool IsLocalFileSystemWebService(string url) {
            if (((url == null) 
                        || (url == string.Empty))) {
                return false;
            }
            System.Uri wsUri = new System.Uri(url);
            if (((wsUri.Port >= 1024) 
                        && (string.Compare(wsUri.Host, "localHost", System.StringComparison.OrdinalIgnoreCase) == 0))) {
                return true;
            }
            return false;
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "2.0.50727.42")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://modsystems.com/MW.MComm.CarrierSim/Customers/DataTypes")]
    public partial class Customer : PersistedBusinessObject {
        
        private System.Guid customerIDField;
        
        private string nameField;
        
        private string addressField;
        
        private float storedValueBalanceField;
        
        private float storedValueLockedBalanceField;
        
        private Phone[] phoneListField;
        
        public Customer() {
            this.storedValueBalanceField = ((float)(0F));
            this.storedValueLockedBalanceField = ((float)(0F));
        }
        
        /// <remarks/>
        public System.Guid CustomerID {
            get {
                return this.customerIDField;
            }
            set {
                this.customerIDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(IsNullable=true)]
        public string Name {
            get {
                return this.nameField;
            }
            set {
                this.nameField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(IsNullable=true)]
        public string Address {
            get {
                return this.addressField;
            }
            set {
                this.addressField = value;
            }
        }
        
        /// <remarks/>
        [System.ComponentModel.DefaultValueAttribute(typeof(float), "0")]
        public float StoredValueBalance {
            get {
                return this.storedValueBalanceField;
            }
            set {
                this.storedValueBalanceField = value;
            }
        }
        
        /// <remarks/>
        [System.ComponentModel.DefaultValueAttribute(typeof(float), "0")]
        public float StoredValueLockedBalance {
            get {
                return this.storedValueLockedBalanceField;
            }
            set {
                this.storedValueLockedBalanceField = value;
            }
        }
        
        /// <remarks/>
        public Phone[] PhoneList {
            get {
                return this.phoneListField;
            }
            set {
                this.phoneListField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "2.0.50727.42")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://modsystems.com/MW.MComm.CarrierSim/Customers/DataTypes")]
    public partial class Phone : PersistedBusinessObject {
        
        private string phoneNumberField;
        
        private System.Guid customerIDField;
        
        private float balanceField;
        
        private System.Guid phoneIDField;
        
        private string nameField;
        
        private float storedValueBalanceField;
        
        private float storedValueLockedBalanceField;
        
        public Phone() {
            this.phoneNumberField = "";
            this.balanceField = ((float)(0F));
            this.storedValueBalanceField = ((float)(0F));
            this.storedValueLockedBalanceField = ((float)(0F));
        }
        
        /// <remarks/>
        [System.ComponentModel.DefaultValueAttribute("")]
        public string PhoneNumber {
            get {
                return this.phoneNumberField;
            }
            set {
                this.phoneNumberField = value;
            }
        }
        
        /// <remarks/>
        public System.Guid CustomerID {
            get {
                return this.customerIDField;
            }
            set {
                this.customerIDField = value;
            }
        }
        
        /// <remarks/>
        [System.ComponentModel.DefaultValueAttribute(typeof(float), "0")]
        public float Balance {
            get {
                return this.balanceField;
            }
            set {
                this.balanceField = value;
            }
        }
        
        /// <remarks/>
        public System.Guid PhoneID {
            get {
                return this.phoneIDField;
            }
            set {
                this.phoneIDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(IsNullable=true)]
        public string Name {
            get {
                return this.nameField;
            }
            set {
                this.nameField = value;
            }
        }
        
        /// <remarks/>
        [System.ComponentModel.DefaultValueAttribute(typeof(float), "0")]
        public float StoredValueBalance {
            get {
                return this.storedValueBalanceField;
            }
            set {
                this.storedValueBalanceField = value;
            }
        }
        
        /// <remarks/>
        [System.ComponentModel.DefaultValueAttribute(typeof(float), "0")]
        public float StoredValueLockedBalance {
            get {
                return this.storedValueLockedBalanceField;
            }
            set {
                this.storedValueLockedBalanceField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(Phone))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(Customer))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "2.0.50727.42")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://modsystems.com/MW.MComm.CarrierSim/Customers/DataTypes")]
    public partial class PersistedBusinessObject : BusinessObject {
        
        private System.Nullable<System.Guid> createdByUserIDField;
        
        private System.Nullable<System.DateTime> createdDateField;
        
        private System.Nullable<System.Guid> lastModifiedByUserIDField;
        
        private System.Nullable<System.DateTime> lastModifiedDateField;
        
        private byte[] timestampField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(IsNullable=true)]
        public System.Nullable<System.Guid> CreatedByUserID {
            get {
                return this.createdByUserIDField;
            }
            set {
                this.createdByUserIDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(IsNullable=true)]
        public System.Nullable<System.DateTime> CreatedDate {
            get {
                return this.createdDateField;
            }
            set {
                this.createdDateField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(IsNullable=true)]
        public System.Nullable<System.Guid> LastModifiedByUserID {
            get {
                return this.lastModifiedByUserIDField;
            }
            set {
                this.lastModifiedByUserIDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(IsNullable=true)]
        public System.Nullable<System.DateTime> LastModifiedDate {
            get {
                return this.lastModifiedDateField;
            }
            set {
                this.lastModifiedDateField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(DataType="base64Binary", IsNullable=true)]
        public byte[] Timestamp {
            get {
                return this.timestampField;
            }
            set {
                this.timestampField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(PersistedBusinessObject))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(Phone))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(Customer))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "2.0.50727.42")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://modsystems.com/MW.MComm.CarrierSim/Customers/DataTypes")]
    public partial class BusinessObject {
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CustomerResults))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "2.0.50727.42")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://modsystems.com/MW.MComm.CarrierSim/Customers/DataTypes")]
    public partial class StatusObject {
        
        private int statusCodeField;
        
        private string statusDescriptionField;
        
        private int totalRecordsField;
        
        private bool maximumListSizeExceededField;
        
        public StatusObject() {
            this.statusDescriptionField = "";
        }
        
        /// <remarks/>
        public int StatusCode {
            get {
                return this.statusCodeField;
            }
            set {
                this.statusCodeField = value;
            }
        }
        
        /// <remarks/>
        [System.ComponentModel.DefaultValueAttribute("")]
        public string StatusDescription {
            get {
                return this.statusDescriptionField;
            }
            set {
                this.statusDescriptionField = value;
            }
        }
        
        /// <remarks/>
        public int TotalRecords {
            get {
                return this.totalRecordsField;
            }
            set {
                this.totalRecordsField = value;
            }
        }
        
        /// <remarks/>
        public bool MaximumListSizeExceeded {
            get {
                return this.maximumListSizeExceededField;
            }
            set {
                this.maximumListSizeExceededField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "2.0.50727.42")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://modsystems.com/MW.MComm.CarrierSim/Customers/DataTypes")]
    public partial class CustomerResults : StatusObject {
        
        private Customer[] resultsField;
        
        /// <remarks/>
        public Customer[] Results {
            get {
                return this.resultsField;
            }
            set {
                this.resultsField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    public delegate void UpsertOneCustomerCompletedEventHandler(object sender, UpsertOneCustomerCompletedEventArgs e);
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    public partial class UpsertOneCustomerCompletedEventArgs : System.ComponentModel.AsyncCompletedEventArgs {
        
        private object[] results;
        
        internal UpsertOneCustomerCompletedEventArgs(object[] results, System.Exception exception, bool cancelled, object userState) : 
                base(exception, cancelled, userState) {
            this.results = results;
        }
        
        /// <remarks/>
        public CustomerResults Result {
            get {
                this.RaiseExceptionIfNecessary();
                return ((CustomerResults)(this.results[0]));
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    public delegate void DeleteOneCustomerCompletedEventHandler(object sender, DeleteOneCustomerCompletedEventArgs e);
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    public partial class DeleteOneCustomerCompletedEventArgs : System.ComponentModel.AsyncCompletedEventArgs {
        
        private object[] results;
        
        internal DeleteOneCustomerCompletedEventArgs(object[] results, System.Exception exception, bool cancelled, object userState) : 
                base(exception, cancelled, userState) {
            this.results = results;
        }
        
        /// <remarks/>
        public CustomerResults Result {
            get {
                this.RaiseExceptionIfNecessary();
                return ((CustomerResults)(this.results[0]));
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    public delegate void GetOneCustomerCompletedEventHandler(object sender, GetOneCustomerCompletedEventArgs e);
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    public partial class GetOneCustomerCompletedEventArgs : System.ComponentModel.AsyncCompletedEventArgs {
        
        private object[] results;
        
        internal GetOneCustomerCompletedEventArgs(object[] results, System.Exception exception, bool cancelled, object userState) : 
                base(exception, cancelled, userState) {
            this.results = results;
        }
        
        /// <remarks/>
        public CustomerResults Result {
            get {
                this.RaiseExceptionIfNecessary();
                return ((CustomerResults)(this.results[0]));
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    public delegate void GetAllCustomerDataCompletedEventHandler(object sender, GetAllCustomerDataCompletedEventArgs e);
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    public partial class GetAllCustomerDataCompletedEventArgs : System.ComponentModel.AsyncCompletedEventArgs {
        
        private object[] results;
        
        internal GetAllCustomerDataCompletedEventArgs(object[] results, System.Exception exception, bool cancelled, object userState) : 
                base(exception, cancelled, userState) {
            this.results = results;
        }
        
        /// <remarks/>
        public CustomerResults Result {
            get {
                this.RaiseExceptionIfNecessary();
                return ((CustomerResults)(this.results[0]));
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    public delegate void GetAllCustomerDataByCriteriaCompletedEventHandler(object sender, GetAllCustomerDataByCriteriaCompletedEventArgs e);
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    public partial class GetAllCustomerDataByCriteriaCompletedEventArgs : System.ComponentModel.AsyncCompletedEventArgs {
        
        private object[] results;
        
        internal GetAllCustomerDataByCriteriaCompletedEventArgs(object[] results, System.Exception exception, bool cancelled, object userState) : 
                base(exception, cancelled, userState) {
            this.results = results;
        }
        
        /// <remarks/>
        public CustomerResults Result {
            get {
                this.RaiseExceptionIfNecessary();
                return ((CustomerResults)(this.results[0]));
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    public delegate void GetManyCustomerDataByCriteriaCompletedEventHandler(object sender, GetManyCustomerDataByCriteriaCompletedEventArgs e);
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Web.Services", "2.0.50727.42")]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    public partial class GetManyCustomerDataByCriteriaCompletedEventArgs : System.ComponentModel.AsyncCompletedEventArgs {
        
        private object[] results;
        
        internal GetManyCustomerDataByCriteriaCompletedEventArgs(object[] results, System.Exception exception, bool cancelled, object userState) : 
                base(exception, cancelled, userState) {
            this.results = results;
        }
        
        /// <remarks/>
        public CustomerResults Result {
            get {
                this.RaiseExceptionIfNecessary();
                return ((CustomerResults)(this.results[0]));
            }
        }
    }
}

#pragma warning restore 1591