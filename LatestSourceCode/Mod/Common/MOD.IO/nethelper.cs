using System;
using System.Collections.Generic;
using System.Text;

namespace MOD.IO
{
    public class NetHelper
    {
        /// <summary>
        /// Checks to see if the given url points to a valid file.
        /// </summary>
        /// <param name="url"></param>
        /// <param name="timeout">timeout in milliseconds</param>
        /// <returns>True if the file exists, false otherwise</returns>
        public static bool IsResponding(string url, int timeout)
        {
            System.Net.WebResponse resp = null;
            try
            {
                System.Net.WebRequest req = System.Net.HttpWebRequest.Create(url);
                req.Timeout = timeout;
                resp = req.GetResponse();
            }
            catch (System.Net.WebException)
            {
                /*
                            System.Net.HttpWebResponse webResp = (System.Net.HttpWebResponse)ex.Response;
                            if (webResp.StatusCode == System.Net.HttpStatusCode.NotFound)
                            {
                                return false;
                            }
                            throw;
                */
                return false;
            }
            catch (System.Exception)
            {
                return false;
            }
            finally
            {
                if (resp != null)
                {
                    resp.Close();
                }
            }
            return true;
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Replaces the server name in a URL with the specified server name.
        /// </summary>
        // ------------------------------------------------------------------------------
        public static string ReplaceServerName(string url, string hostName)
        {
            Uri oldUri = new Uri(url);
            return oldUri.Scheme + "://" + hostName + oldUri.PathAndQuery;
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Replaces the server name in a URL with the specified server name and port.
        /// If the port is 0, then no port is added.
        /// </summary>
        // ------------------------------------------------------------------------------
        public static string ReplaceServerName(string url, string hostName, int port)
        {
            Uri oldUri = new Uri(url);
            return oldUri.Scheme + "://" + hostName + (port == 0 ? "" : (":" + port)) + oldUri.PathAndQuery;
        }

        // ------------------------------------------------------------------------------
        /// <summary>
        /// Replaces the server name in a URL with the specified server name and port.
        /// If the port is 0 or null, then no port is added.
        /// </summary>
        // ------------------------------------------------------------------------------
        public static string ReplaceServerName(string url, string hostName, int? port)
        {
            Uri oldUri = new Uri(url);
            return oldUri.Scheme + "://" + hostName
                + ((port.HasValue && port.Value != 0) ? (":" + port.Value.ToString()) : "")
                + oldUri.PathAndQuery;
        }

    }
}
