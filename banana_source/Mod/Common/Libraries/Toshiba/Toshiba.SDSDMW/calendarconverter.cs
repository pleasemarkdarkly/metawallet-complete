using System;
using System.Collections.Generic;
using System.Text;

namespace Toshiba.SDSDMW
{
    class CalendarConverter
    {
        private static DateTime _ModifiedJulianDateZero = new DateTime(1858, 11, 17);
        private static long _ModifiedJulianDateZeroTicks = new DateTime(1858, 11, 17).Ticks;

        /// <summary>
        /// Converts a DateTime object to modified julian date
        /// </summary>
        /// <param name="gregorianDate">DateTime object</param>
        /// <returns>Modified Julian Date (days since November 17, 1858)</returns>
        public static double Gregorian2ModifiedJulian(DateTime gregorianDate)
        {
            long ticks = gregorianDate.Ticks - _ModifiedJulianDateZeroTicks;
            double result = ((double)ticks) / ((double)TimeSpan.TicksPerDay);
            return result;
        }

        /// <summary>
        /// Converts a modified julian date to a DateTime object
        /// </summary>
        /// <param name="modifiedJulianDate">Modified Julian Date (days since November 17, 1858)</param>
        /// <returns>DateTime object</returns>
        public static DateTime ModifiedJulian2Gregorian(double modifiedJulianDate)
        {
            return _ModifiedJulianDateZero.AddDays(modifiedJulianDate);
        }
    }
}
