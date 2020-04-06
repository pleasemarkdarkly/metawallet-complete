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

//**************************************************************//
// Paul Wilson -- www.WilsonDotNet.com -- Paul@WilsonDotNet.com //
// Feel free to use and modify -- just leave these credit lines //
// I also always appreciate any other public credit you provide //
//**************************************************************//
using System;
using System.Collections;
using System.ComponentModel;
using System.Configuration;
using System.Web;
using System.Web.UI;
using System.Web.UI.Design;


namespace Wilson.MasterPages
{
	public interface IMayRenameMyTemplateFile
	{
		string GetNewTemplate(string templateFile);
	}

	[ToolboxData("<{0}:MasterPage runat=server></{0}:MasterPage>"),
		ToolboxItem(typeof(WebControlToolboxItem)),
		Designer(typeof(ContainerControlDesigner))]
	public class MasterPage : System.Web.UI.HtmlControls.HtmlContainerControl
	{
		private string templateFile;
		private string defaultContent;

		private Control template = null;
		private ContentRegion defaults = new ContentRegion();
		private ArrayList contents = new ArrayList();

		[Category("MasterPage"), Description("Path of Template User Control")] 
		public string TemplateFile {
			get { return this.templateFile; }
			set { this.templateFile = value; }
		}

		[Category("MasterPage"), Description("Control ID for Default Content")] 
		public string DefaultContent {
			get { return this.defaultContent; }
			set { this.defaultContent = value; }
		}

		public MasterPage() {
			this.templateFile = ConfigurationManager.AppSettings["Wilson.MasterPages.TemplateFile"];
			this.defaultContent = ConfigurationManager.AppSettings["Wilson.MasterPages.DefaultContent"];
			if (this.defaultContent == null) {
				this.defaultContent = "Content";
			}
		}

		protected override void AddParsedSubObject(object obj) {
			if (obj is Wilson.MasterPages.ContentRegion) {
				this.contents.Add(obj);
			}
			else {
				this.defaults.Controls.Add((Control)obj);
			}
		}

		protected override void OnInit(EventArgs e) {
			this.BuildMasterPage();
			this.BuildContents();
			base.OnInit(e);
		}

		private void BuildMasterPage() {
			if(NamingContainer is IMayRenameMyTemplateFile)
				TemplateFile = (NamingContainer as IMayRenameMyTemplateFile).GetNewTemplate(TemplateFile);

			if (TemplateFile == null || TemplateFile == "") {
				throw new Exception("TemplateFile Property for MasterPage must be Defined");
			}
			this.template = this.Page.LoadControl(this.templateFile);
			this.template.ID = this.ID + "_Template";
			
			int count = this.template.Controls.Count;
			for (int index = 0; index < count; index++) {
				Control control = this.template.Controls[0];
				this.template.Controls.Remove(control);
				if (control.Visible) {
					this.Controls.Add(control);
				}
			}
			this.Controls.AddAt(0, this.template);
		}

		private void BuildContents() {
			if (this.defaults.HasControls()) {
				this.defaults.ID = this.defaultContent;
				this.contents.Add(this.defaults);
			}

			foreach (ContentRegion content in this.contents) {
				Control region = this.FindControl(content.ID);
				if (region == null || !(region is Wilson.MasterPages.ContentRegion)) {
					throw new Exception("ContentRegion with ID '" + content.ID + "' must be Defined");
				}
				region.Controls.Clear();
				
				int count = content.Controls.Count;
				for (int index = 0; index < count; index++) {
					Control control = content.Controls[0];
					content.Controls.Remove(control);
					region.Controls.Add(control);
				}
			}
		}

		protected override void RenderBeginTag(System.Web.UI.HtmlTextWriter writer) {}
		protected override void RenderEndTag(System.Web.UI.HtmlTextWriter writer) {}
	}
}
