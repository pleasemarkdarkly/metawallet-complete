using System;
using System.Collections.Generic;
using System.Text;
using System.Xml;
using System.Xml.Serialization;
using System.ComponentModel;
using MOD.Test;
using MOD.Data;

namespace MOD.Test
{
	// ------------------------------------------------------------------------------
	/// <summary>This class is used to hold basic list properties.</summary>
	///
	/// <remarks></remarks>
	// ------------------------------------------------------------------------------
	[Serializable()]
	public class PerformanceTestMetrics
	{
		#region "Fields"

        // for Name property
        private string _perfMetricName = MOD.Data.DefaultValue.String;

		// for TestCount property
		private int _perfCallCount = MOD.Data.DefaultValue.Int;

		// for MinTestTimeInSeconds property
        private double _perfMinCallTimeInSeconds = MOD.Data.DefaultValue.Double;

		// for MaxTestTimeInSeconds property
        private double _perfMaxCallTimeInSeconds = MOD.Data.DefaultValue.Double;

		// for TotalTestTimeInSeconds property
        private double _perfTotalCallTimeInSeconds = MOD.Data.DefaultValue.Double;

		#endregion "Fields"

		#region "Properties"

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the PerfCallCount.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(MOD.Data.DefaultValue.String)]
        [XmlElementAttribute()]
        public virtual string PerfMetricName
        {
            get
            {
                return _perfMetricName;
            }
            set
            {
                if (_perfMetricName != value)
                {
                    _perfMetricName = value;
                }
            }
        }

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the PerfCallCount.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.Int)]
		[XmlElementAttribute()]
		public virtual int PerfCallCount
		{
			get
			{
				return _perfCallCount;
			}
			set
			{
				if (_perfCallCount != value && value >= 0)
				{
					_perfCallCount = value;
				}
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the PerfMinCallTimeInSeconds.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.Double)]
		[XmlElementAttribute()]
		public virtual double PerfMinCallTimeInSeconds
		{
			get
			{
				return _perfMinCallTimeInSeconds;
			}
			set
			{
				if (_perfMinCallTimeInSeconds != value && value >= 0.00)
				{
					_perfMinCallTimeInSeconds = value;
				}
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the PerfMaxCallTimeInSeconds.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.Double)]
		[XmlElementAttribute()]
		public virtual double PerfMaxCallTimeInSeconds
		{
			get
			{
				return _perfMaxCallTimeInSeconds;
			}
			set
			{
				if (_perfMaxCallTimeInSeconds != value && value >= 0.00)
				{
					_perfMaxCallTimeInSeconds = value;
				}
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the PerfTotalCallTimeInSeconds.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.Double)]
		[XmlElementAttribute()]
		public virtual double PerfTotalCallTimeInSeconds
		{
			get
			{
				return _perfTotalCallTimeInSeconds;
			}
			set
			{
				if (_perfTotalCallTimeInSeconds != value && value >= 0.00)
				{
					_perfTotalCallTimeInSeconds = value;
				}
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the PerfAvgCallTimeInSeconds.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.Double)]
		[XmlElementAttribute()]
		public virtual double PerfAvgCallTimeInSeconds
		{
			get
			{
				if (PerfCallCount < 1)
				{
					return 0.00;
				}
				return PerfTotalCallTimeInSeconds / PerfCallCount;
			}
		}

		#endregion "Properties"

		#region "Methods"

		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor.</summary>
		// ------------------------------------------------------------------------------
        public PerformanceTestMetrics()
		{			
		}

		// ------------------------------------------------------------------------------
		/// <summary>This method clears performance metrics.</summary>
		// ------------------------------------------------------------------------------
		public void ClearMetricsResults()
		{
            PerfMetricName = String.Empty;
            PerfCallCount = 0;
            PerfMinCallTimeInSeconds = 0.00;
            PerfMaxCallTimeInSeconds = 0.00;
            PerfTotalCallTimeInSeconds = 0.00;
		}
		// ------------------------------------------------------------------------------
		/// <summary>This method adds a performance metric.</summary>
		// ------------------------------------------------------------------------------
		public void AddMetric(double testTime)
		{
			PerfCallCount++;

            if (PerfMinCallTimeInSeconds == 0.00 || testTime < PerfMinCallTimeInSeconds)
			{
                PerfMinCallTimeInSeconds = testTime;
			}
            if (testTime > PerfMaxCallTimeInSeconds)
			{
                PerfMaxCallTimeInSeconds = testTime;
			}
            PerfTotalCallTimeInSeconds += testTime;
		}

        // ------------------------------------------------------------------------------
        /// <summary>This method returns a string result on the metric.</summary>
        // ------------------------------------------------------------------------------
        public override string ToString()
        {
            if (PerfMetricName == String.Empty)
            {
                throw new InvalidOperationException("PerformanceTestMetrics.ToString: metric was not given a name.");
            }

            string output = String.Empty;

            output += PerfMetricName + " performance -- AVERAGE TIME PER CALL: " + PerfAvgCallTimeInSeconds + "\r\n";
            output += PerfMetricName + " performance -- Min time per call:     " + PerfMinCallTimeInSeconds + "\r\n";
            output += PerfMetricName + " performance -- Max time per call:     " + PerfMaxCallTimeInSeconds + "\r\n";
            output += PerfMetricName + " performance -- Number of calls made:  " + PerfCallCount + "\r\n";
            output += PerfMetricName + " performance -- Total time for calls:  " + PerfTotalCallTimeInSeconds + "\r\n";

            return output;
        }

		#endregion "Methods"
	}
}
