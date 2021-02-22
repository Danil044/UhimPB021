using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dz1
{
    class Program
    {
       
        static void Main(string[] args)
        {
                Console.WriteLine("N > 0");

                Console.WriteLine("Enter N");
                string N = Console.ReadLine();

                Console.WriteLine();

                if (Convert.ToInt32(N) < 0)
                {
                    Console.WriteLine("Conditions were not met");
                    
                    Console.ReadKey();
                    return;

                }

                Console.WriteLine("The resulting number");

                for (int i = N.Length - 1; i >= 0; i--)
                {

                    Console.Write(N[i]);

                }


                Console.ReadKey();
       
        }
    }
}