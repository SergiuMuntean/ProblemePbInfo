using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Vocale
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string sir = Console.ReadLine();
            for(int i = 0; i < sir.Length; i++)
            {
                switch(sir[i])
                {
                    case 'a':
                        sir = sir.Replace('a', 'A');
                        break;
                    case 'e':
                        sir = sir.Replace('e', 'E');
                        break;
                    case 'i':
                        sir = sir.Replace('i', 'I');
                        break;
                    case 'o':
                        sir = sir.Replace('o', 'O');
                        break;
                    case 'u':
                        sir = sir.Replace('u', 'U');
                        break;
                }
            }
            Console.WriteLine(sir);
            Console.ReadLine();
        }
    }
}
