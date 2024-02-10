using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.NetworkInformation;
using System.Text;
using System.Threading.Tasks;

namespace Cuvinte1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string propozitie = Console.ReadLine();
            string[] cuvinte = propozitie.Split(' ');
            for (int i = 0; i < cuvinte.Length; i++)
            {
                int detect = 0;
                for (int j = 0; j < cuvinte[i].Length; j++)
                {
                    if (cuvinte[i][j] != 'a' && cuvinte[i][j] != 'e' && cuvinte[i][j] != 'i' && cuvinte[i][j] != 'o' && cuvinte[i][j] != 'u' && cuvinte[i][j] != ' ')
                    {
                        detect = 1;
                        break;
                    }
                }
                if (detect == 0)
                {
                    Console.WriteLine(cuvinte[i]);
                }
            }
            Console.ReadLine();
        }
    }
}
