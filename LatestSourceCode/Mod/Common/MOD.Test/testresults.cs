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
	public class TestResults
	{
		#region "Fields"

        // for Populate methods
        private bool _isCollision = false;

        // for GetMany methods
        private int _totalRecords = 0;

        // for GetMany methods
        private bool _totalRecordsExceeded = false;

		// for TestCount property
		private int _testCount = MOD.Data.DefaultValue.Int;

        // for CurrentPerfMetrics
        private PerformanceTestMetrics _curPerfMetrics = null;

        // for PerfMetricsList
        private SortedList<string, PerformanceTestMetrics> _perfMetricsList = null;

		// for ConsoleMessages property
		private string _consoleMessages = String.Empty;

		// for TestExceptions property
		private List<System.Exception> _testExceptions = null;

		#endregion "Fields"

		#region "Properties"

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the TestCount.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(MOD.Data.DefaultValue.Bool)]
        [XmlElementAttribute()]
        public virtual bool IsCollision
        {
            get
            {
                return _isCollision;
            }
            set
            {
                if (_isCollision != value)
                {
                    _isCollision = value;
                }
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the TestCount.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(MOD.Data.DefaultValue.Int)]
        [XmlElementAttribute()]
        public virtual int TotalRecords
        {
            get
            {
                return _totalRecords;
            }
            set
            {
				if (_totalRecords != value && value >= 0)
                {
                    _totalRecords = value;
                }
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This property gets or sets the TestCount.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(MOD.Data.DefaultValue.Bool)]
        [XmlElementAttribute()]
        public virtual bool TotalRecordsExceeded
        {
            get
            {
                return _totalRecordsExceeded;
            }
            set
            {
                if (_totalRecordsExceeded != value)
                {
                    _totalRecordsExceeded = value;
                }
            }
        }

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the TestCount.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.Int)]
		[XmlElementAttribute()]
		public virtual int TestCount
		{
			get
			{
				return _testCount;
			}
			set
			{
				if (_testCount != value && value >= 0)
				{
					_testCount = value;
				}
			}
		}

        // ------------------------------------------------------------------------------
        /// <summary>This property gets the CurrentPerfMetrics.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(null)]
        [XmlElementAttribute()]
        public virtual PerformanceTestMetrics CurrentPerfMetrics
        {
            get
            {
                if (_curPerfMetrics == null)
                {
                    _curPerfMetrics = new PerformanceTestMetrics();
                }
                return _curPerfMetrics;
            }         
        }

        // ------------------------------------------------------------------------------
        /// <summary>This property gets the CurrentPerfMetrics.</summary>
        // ------------------------------------------------------------------------------
        [DefaultValueAttribute(null)]
        [XmlElementAttribute()]
        public virtual SortedList<string, PerformanceTestMetrics> PerfMetricsList
        {
            get
            {
                if (_perfMetricsList == null)
                {
                    _perfMetricsList = new SortedList<string, PerformanceTestMetrics>();
                }
                return _perfMetricsList;
            }
        }

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the ConsoleMessages.</summary>
		// ------------------------------------------------------------------------------
		[DefaultValueAttribute(MOD.Data.DefaultValue.String)]
		[XmlElementAttribute()]
		public virtual string ConsoleMessages
		{
			get
			{
				return _consoleMessages;
			}
			set
			{
				if (_consoleMessages != value)
				{
					_consoleMessages = value;
				}
			}
		}

		// ------------------------------------------------------------------------------
		/// <summary>This property gets or sets the TestExceptions.</summary>
		// ------------------------------------------------------------------------------
		[XmlElementAttribute()]
		public virtual List<System.Exception> TestExceptions
		{
			get
			{
				if (_testExceptions == null)
				{
					_testExceptions = new List<Exception>();
				}
				return _testExceptions;
			}
			set
			{
				if (_testExceptions != value)
				{
					_testExceptions = value;
				}
			}
		}

		#endregion "Properties"

		#region "Methods"

		// ------------------------------------------------------------------------------
		/// <summary>This method is the constructor.</summary>
		// ------------------------------------------------------------------------------
		public TestResults()
		{
			//
			// constructor logic
			//
			TestExceptions = new List<Exception>();
		}
		// ------------------------------------------------------------------------------
		/// <summary>This method clears test results.</summary>
		// ------------------------------------------------------------------------------
		public void ClearTestResults()
		{
            IsCollision = false;
            TotalRecords = 0;
            TotalRecordsExceeded = false;
			TestCount = 0;
			
            TestExceptions = new List<Exception>();

            ResetCurrentPerfMetric();
            _perfMetricsList = new SortedList<string, PerformanceTestMetrics>();

			ConsoleMessages = String.Empty;
		}

        // ------------------------------------------------------------------------------
        /// <summary>This method adds a performance metric.</summary>
        // ------------------------------------------------------------------------------
        public void SetPerfMetricName(string perfMetricName)
        {
            if ((perfMetricName != null) || (perfMetricName != String.Empty))
            {
                CurrentPerfMetrics.PerfMetricName = perfMetricName;
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This method adds a performance metric.</summary>
        // ------------------------------------------------------------------------------
        public void AddPerfMetric(double testTime, List<System.Exception> exceptions, string consoleMessages)
        {
            CurrentPerfMetrics.AddMetric(testTime);

            if (exceptions != null)
            {
                foreach (System.Exception loopException in exceptions)
                {
                    TestExceptions.Add(loopException);
                }
            }

            if (consoleMessages != null)
            {
                ConsoleMessages += consoleMessages;
            }
        }

        // ------------------------------------------------------------------------------
        /// <summary>This method saves the current performance metric.</summary>
        // ------------------------------------------------------------------------------
        public void SaveCurrentPerfMetric()
        {
            PerfMetricsList.Add(CurrentPerfMetrics.PerfMetricName, CurrentPerfMetrics);
        }

        // ------------------------------------------------------------------------------
        /// <summary>This method clears the current performance metric.</summary>
        // ------------------------------------------------------------------------------
        public void ResetCurrentPerfMetric()
        {
            CurrentPerfMetrics.ClearMetricsResults();
        }

        // ------------------------------------------------------------------------------
		/// <summary>This method adds a test result.</summary>
		// ------------------------------------------------------------------------------
		public void SaveCurrentTestResult(List<System.Exception> exceptions, string consoleMessages)
		{
            if (CurrentPerfMetrics.PerfMetricName == String.Empty)
            {
                throw new InvalidOperationException("TestResults.SaveCurrentTestResult: current performance metric was not given a name.");
            }

			TestCount++;

            SaveCurrentPerfMetric();

			if (exceptions != null)
			{
				foreach (System.Exception loopException in exceptions)
				{
					TestExceptions.Add(loopException);
				}
			}

            if (consoleMessages != null)
            {
                ConsoleMessages += consoleMessages;
            }
		}
		#endregion "Methods"
	}
}
