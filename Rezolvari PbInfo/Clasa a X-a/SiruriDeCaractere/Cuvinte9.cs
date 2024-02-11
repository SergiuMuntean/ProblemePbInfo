using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.NetworkInformation;
using System.Text;
using System.Threading.Tasks;

namespace Cuvinte9
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string text = Console.ReadLine();
            string[] cuvinte = text.Split(' ');
            string max = "0";
            int detect = 0;
            for(int i = 0; i < cuvinte.Length; i++)
            {
                if (char.IsDigit(cuvinte[i][0]))
                {
                    detect = 1;
                    if (cuvinte[i][0] > max[0])
                    {
                        max = cuvinte[i];
                    }
               }
            }
            if(detect == 0)
            {
                Console.Write("nu exista");
            }
            else
            {
                Console.Write(max);
            }
            Console.ReadLine();
        }
    }
}
