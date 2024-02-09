using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PozitiiPBinfo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string sir = Console.ReadLine();
            int contor = 0;
            for(int i = 1; i < sir.Length - 2; i++)
            {
                int detect = 0;
                if (sir[i] == 'a' || sir[i] == 'e' || sir[i] == 'i' || sir[i] == 'o' || sir[i] == 'u')
                {
                    detect = 1;
                }
                if(detect == 1)
                {
                    if (sir[i - 1] != 'a' && sir[i - 1] != 'e' && sir[i - 1] != 'i' && sir[i - 1] != 'o' && sir[i - 1] != 'u' && sir[i - 1] != ' ')
                    {
                        if(sir[i + 1] != 'a' && sir[i + 1] != 'e' && sir[i + 1] != 'i' && sir[i + 1] != 'o' && sir[i + 1] != 'u' && sir[i + 1] != ' ')
                        {
                            contor++;
                            i++;
                        }
                    }
                }
            }
            Console.WriteLine(contor);
            Console.ReadLine();
        }
    }
}
