using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cuvant
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string cuvant = Console.ReadLine();
            int detect = 0;
            for(int i = 0; i < cuvant.Length; i++)
            {
                if (cuvant[i] == 'a' || cuvant[i] == 'e' || cuvant[i] == 'o' || cuvant[i] == 'u')
                {
                    detect = 1;
                    break;
                }
            }
            int contor = 0;
            for(int i = 0; i < cuvant.Length; i++)
            {
                if (cuvant[i] == 'i')
                {
                    contor++;
                }
            }
            if(contor == cuvant.Length)
            {
                detect = 1;
            }
            if(detect == 1)
            {
                Console.WriteLine("NU");
            }
            else
            {
                Console.WriteLine("DA");
            }
            Console.ReadLine();
        }
    }
}
