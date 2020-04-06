/*<copyright>
MOD Systems, Inc (c) 2006 All Rights Reserved. 
720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 

All Rights Reserved, (c) 2006, covered by Trademark Laws, contents are considered Restricted Secrets by MOD Systems.  The contents may only be viewed by MOD Systems Engineers (employees) and selected Starbucks employees as outlined in the Licensing Agreement between MOD Systems and Starbucks Corporation on June 3rd, 2005.   

No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, read, or have access to any part or whole of software source code, configuration files, log files or performance information, including process naming conventions or benchmarks.  

No rights to reproduce this software, configuration files, of log files are granted.  Unauthorized use or disclosure of this information could impact MOD System's competitive advantage.   

Information in this document is considered trade secret.  No license, expressed or implied, by estoppel or otherwise, to any intellectual property rights is granted in this source code, configuration file, or log file.   


</copyright>*/

using System;
using System.Collections;

namespace MOD.Management.Interface
{
	public interface IBaseConfig : IEnumerable
	{
		string this[string key] { get; set; }
		IBaseConfig Parent { get; }
	}

	public interface ICollectorConfig : IBaseConfig
	{
		string Name { get; }
		string AttributeName { get; }
		int Interval { get; }
	}

	public interface ICollectorGroupConfig : IBaseConfig
	{
		string Name { get; }
		string EventName { get; }
		//string Instance { get; }
		ICollectorConfig[] Collectors { get; }
	}

	public interface IInstanceConfig : IBaseConfig
	{
		int SystemStatusTypeCode { get; }
		bool IsAggregate { get; }
		string Name { get; }
		ICollectorGroupConfig[] Groups { get; }
		IInstanceConfig[] ChildInstances { get; }
	}

	public delegate void NotifyResult(Collector collector, Notification notification);
	public delegate void NotifyException(Collector collector, Exception ex);

	public abstract class AsyncCollector : Collector
	{
		public QueryState State;

		public enum QueryState
		{
			Waiting,
			Querying,
			Ready,
			Failed,
		}

		public event NotifyResult OnResult;
		public event NotifyException OnException;

		public override Notification Poll()
		{
			throw new ApplicationException("Not Supported.  Call BeginPoll() instead.");			
		}

		abstract public void BeginPoll();

		protected void RaiseOnResult( Notification notification )
		{
			if(OnResult != null)
				OnResult( this, notification );
		}

		protected void RaiseOnException( Exception ex )
		{
			if(OnException != null)
				OnException( this, ex );
		}

	}

	/// <summary>
	/// Subclass for specialized devices to derive off of.
	/// </summary>
	public abstract class Collector
	{
		private string _name;
		private int _queryInterval = 10*1000;

		public string Name
		{
			get { return _name; }
			set { _name = value; }
		}

		public int QueryInterval
		{
			get { return _queryInterval; }
			set { _queryInterval = value; }
		}



		abstract public Notification Poll();
		virtual public void Configure(ICollectorConfig config)
		{
			Name = config.Name;
			QueryInterval = config.Interval;
		}

		private ArrayList _filters = new ArrayList();

		public void AddFilter( INotificationFilter filter )
		{
			_filters.Add( filter );
		}

		public Notification ApplyFilterChain( Notification notification )
		{
			foreach(INotificationFilter filter in _filters)
				notification = filter.Filter( notification );

			return notification;
		}
	}

	public interface INotificationFilter
	{
		Notification Filter( Notification notification );
		void Configure(IBaseConfig config);
	}

}
