using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Acronim
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string propozitie = Console.ReadLine();
            string[] cuvinte = propozitie.Split(' ');
            for(int i = 0; i < cuvinte.Length; i++)
            {
                if (Char.IsUpper(cuvinte[i], 0))
                {
                    Console.Write(cuvinte[i][0]);
                }
            }
        Console.ReadLine();
        }
    }
}
