using System;
using System.Text;
using System.Globalization;
using System.Net;

namespace MOD.Management
{
    public class WolHelper
    {
        public static void Wake(string macAddress)
        {
			macAddress = macAddress.Trim();
			macAddress = macAddress.Replace(":", string.Empty);

            WolClient client = new WolClient();

            client.Connect(new IPAddress(0xffffffff),  //255.255.255.255  i.e broadcast
                0xffff); // port=65535

            client.SetClientToBrodcastMode();

            //set sending bites
            int counter = 0;

            //buffer to be send
            byte[] bytes = new byte[1024];   

            //first 6 bytes should be 0xFF
            for (int y = 0; y < 6; y++)
                bytes[counter++] = 0xFF;

			//now write mac address
			for (int z = 0; z < 6; z++)
			{
				bytes[counter++] =
					byte.Parse(macAddress.Substring(0, 2),
					NumberStyles.HexNumber);
			}

			//now write magic 0x0842
			bytes[counter++] = 0x08;
			bytes[counter++] = 0x42;

			//another 6 bytes of 0xFF
			for (int y = 0; y < 6; y++)
				bytes[counter++] = 0xFF;

            //now repeat MAC 16 times
            for (int y = 0; y < 16; y++)
            {
                int i = 0;
                
                for (int z = 0; z < 6; z++)
                {
                    bytes[counter++] =
                        byte.Parse(macAddress.Substring(i, 2),
                        NumberStyles.HexNumber);
                    i += 2;
                }
            }

            //now send wake up packet
            int reterned_value = client.Send(bytes, 6 + 6 + 2 + 6 + (6 * 16));
        }
    }
}
