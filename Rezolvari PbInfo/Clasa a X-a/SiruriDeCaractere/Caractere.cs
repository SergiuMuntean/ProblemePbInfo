using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Caractere
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string sir1 = Console.ReadLine();
            string sir2 = Console.ReadLine();
            int value1 = sir1.Length;
            int value2 = sir2.Length;
            if (value1 < value2)
            {
                int aux = value1;
                value1 = value2;
                value2 = aux;
            }
            for(int i = 0; i < value1; i++)
            {
                if (sir2.Contains(sir1[i]))
                {
                    Console.Write(sir1[i]);
                }
            }
            Console.ReadLine();
        }
    }
}
