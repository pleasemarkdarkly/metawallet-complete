using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.Serialization;

namespace MOD.Amazon
{
    public class NoExactMatchException : RequestException
    {
        public NoExactMatchException(string message)
            : base(message)
        {
        }
    }
}
