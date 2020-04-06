/*<copyright>
 MOD Systems, Inc (c) 2005 All Rights Reserved. 720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 
All Rights Reserved, (c) 2005, covered by Trademark Laws, contents are considered Restricted Secrets 
by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected 
SBUX employees as outlined in the Licensing Agreement between MOD Systems and Starbuck Corporation on 
June 3rd, 2005.   
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, 
read, or have access to any part or whole of software source code.  If you have done so, immediatly 
report yourself to your manager. 
Do not reproduce any portions of this software.  Unauthorized use or disclosure of this information 
could impact MOD System's competitive advantage.   
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel 
or otherwise, to any intellectual property rights is granted in this source code.   
CONFIDENTIAL SOURCE CODE
</copyright>*/

using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Xml;

namespace MOD.Configuration
{
	/// <summary>
	/// Summary description for ConfigConfirmForm.
	/// </summary>
	public class ConfigConfirmForm : System.Windows.Forms.Form
	{
		/// <summary>
		/// Collection of XmlNode objects
		/// </summary>
		private ArrayList _settableValues;

		private System.Windows.Forms.ListView lvConfig;
		private System.Windows.Forms.Button btnOK;
		private System.Windows.Forms.ColumnHeader columnHeader1;
		private System.Windows.Forms.ColumnHeader columnHeader2;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Button btnCancel;
		private System.Windows.Forms.TextBox txtValue;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.ColumnHeader columnHeader3;
		private System.Windows.Forms.Label lblDescription;
		private System.Windows.Forms.Label lblKey;
		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public ArrayList SettableValues
		{
			get { return _settableValues; }
			set { _settableValues = value; }
		}

		public ConfigConfirmForm()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if(components != null)
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.lvConfig = new System.Windows.Forms.ListView();
			this.columnHeader1 = new System.Windows.Forms.ColumnHeader();
			this.columnHeader2 = new System.Windows.Forms.ColumnHeader();
			this.columnHeader3 = new System.Windows.Forms.ColumnHeader();
			this.btnOK = new System.Windows.Forms.Button();
			this.label1 = new System.Windows.Forms.Label();
			this.btnCancel = new System.Windows.Forms.Button();
			this.txtValue = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.lblDescription = new System.Windows.Forms.Label();
			this.lblKey = new System.Windows.Forms.Label();
			this.SuspendLayout();
			// 
			// lvConfig
			// 
			this.lvConfig.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
																					   this.columnHeader1,
																					   this.columnHeader2,
																					   this.columnHeader3});
			this.lvConfig.FullRowSelect = true;
			this.lvConfig.GridLines = true;
			this.lvConfig.Location = new System.Drawing.Point(16, 24);
			this.lvConfig.MultiSelect = false;
			this.lvConfig.Name = "lvConfig";
			this.lvConfig.Size = new System.Drawing.Size(472, 144);
			this.lvConfig.TabIndex = 0;
			this.lvConfig.View = System.Windows.Forms.View.Details;
			this.lvConfig.SelectedIndexChanged += new System.EventHandler(this.lvConfig_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this.columnHeader1.Text = "Name";
			this.columnHeader1.Width = 161;
			// 
			// columnHeader2
			// 
			this.columnHeader2.Text = "Value";
			this.columnHeader2.Width = 182;
			// 
			// columnHeader3
			// 
			this.columnHeader3.Text = "Description";
			this.columnHeader3.Width = 122;
			// 
			// btnOK
			// 
			this.btnOK.Location = new System.Drawing.Point(160, 336);
			this.btnOK.Name = "btnOK";
			this.btnOK.TabIndex = 1;
			this.btnOK.Text = "OK";
			this.btnOK.Click += new System.EventHandler(this.btnOK_Click);
			// 
			// label1
			// 
			this.label1.Location = new System.Drawing.Point(16, 8);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(464, 16);
			this.label1.TabIndex = 2;
			this.label1.Text = "Please confirm the following configuration settings:";
			// 
			// btnCancel
			// 
			this.btnCancel.Location = new System.Drawing.Point(264, 336);
			this.btnCancel.Name = "btnCancel";
			this.btnCancel.TabIndex = 3;
			this.btnCancel.Text = "Cancel";
			this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
			// 
			// txtValue
			// 
			this.txtValue.Location = new System.Drawing.Point(16, 280);
			this.txtValue.Name = "txtValue";
			this.txtValue.Size = new System.Drawing.Size(448, 20);
			this.txtValue.TabIndex = 4;
			this.txtValue.Text = "";
			this.txtValue.TextChanged += new System.EventHandler(this.txtValue_TextChanged);
			// 
			// label2
			// 
			this.label2.Location = new System.Drawing.Point(16, 176);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(464, 16);
			this.label2.TabIndex = 5;
			this.label2.Text = "Select a setting above, then enter the value below";
			// 
			// lblDescription
			// 
			this.lblDescription.Location = new System.Drawing.Point(16, 232);
			this.lblDescription.Name = "lblDescription";
			this.lblDescription.Size = new System.Drawing.Size(436, 32);
			this.lblDescription.TabIndex = 6;
			// 
			// lblKey
			// 
			this.lblKey.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.lblKey.Location = new System.Drawing.Point(16, 208);
			this.lblKey.Name = "lblKey";
			this.lblKey.Size = new System.Drawing.Size(464, 16);
			this.lblKey.TabIndex = 7;
			// 
			// ConfigConfirmForm
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(496, 381);
			this.Controls.Add(this.lblKey);
			this.Controls.Add(this.lblDescription);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.txtValue);
			this.Controls.Add(this.btnCancel);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.btnOK);
			this.Controls.Add(this.lvConfig);
			this.Name = "ConfigConfirmForm";
			this.Text = "ConfigConfirmForm";
			this.Load += new System.EventHandler(this.ConfigConfirmForm_Load);
			this.ResumeLayout(false);

		}
		#endregion

		private void ConfigConfirmForm_Load(object sender, System.EventArgs e)
		{
			foreach (InstallerSettableValue settableValue in _settableValues)
			{
				string key;
				string val;
				string description = string.Empty;
				
				XmlNode node = settableValue.Node;

				// Look for key, then Key, then Name
				if (node.Attributes["key"] == null)
				{
					if (node.Attributes["Key"] == null)
						key = node.Attributes["Name"].Value;
					else
						key = node.Attributes["Key"].Value;
				}
				else
					key = node.Attributes["key"].Value;

				// Look for value, then Value
				if (node.Attributes["value"] == null)
                    val = node.Attributes["Value"].Value;
				else
					val = node.Attributes["value"].Value;

				ListViewItem item = new ListViewItem(
					new string[] {key, val, settableValue.Description});

				lvConfig.Items.Add(item);		
			}
		}

		private void btnOK_Click(object sender, System.EventArgs e)
		{
			for (int i = 0; i < lvConfig.Items.Count; i++)
			{
				string newValue = lvConfig.Items[i].SubItems[1].Text;
				
				XmlNode node = ((InstallerSettableValue)_settableValues[i]).Node;

				if (node.Attributes["value"] == null)
					node.Attributes["Value"].Value = newValue.Trim();
				else
					node.Attributes["value"].Value = newValue.Trim();
			}

			Close();
		}

		private void lvConfig_SelectedIndexChanged(object sender, System.EventArgs e)
		{
			if (lvConfig.SelectedItems.Count == 1)
			{
				lblKey.Text = lvConfig.SelectedItems[0].SubItems[0].Text;
				txtValue.Text = lvConfig.SelectedItems[0].SubItems[1].Text;
				lblDescription.Text = lvConfig.SelectedItems[0].SubItems[2].Text;
			}
		}

		private void txtValue_TextChanged(object sender, System.EventArgs e)
		{
			if (lvConfig.SelectedItems.Count == 1)
				lvConfig.SelectedItems[0].SubItems[1].Text = txtValue.Text;				
		}

		private void btnCancel_Click(object sender, System.EventArgs e)
		{
			Close();
		}
	}
}
