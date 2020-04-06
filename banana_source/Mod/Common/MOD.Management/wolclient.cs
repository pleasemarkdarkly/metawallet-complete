using System;
using System.Net.Sockets;
using System.Text;

namespace MOD.Management
{
    class WolClient : UdpClient
    {
        //this is needed to send broadcast packet
        public void SetClientToBrodcastMode()
        {
            if (this.Active)
                this.Client.SetSocketOption(SocketOptionLevel.Socket,
                SocketOptionName.Broadcast, 0);
        }
    }
}
 