using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsPractice
{
    class PrintStars
    {
        static void Main(string[] args)
        {
            

            int x = int.Parse(Console.ReadLine());
            int y = int.Parse(Console.ReadLine());

            if (x > 0)
            {
                if (y > 0)
                    Console.WriteLine("1");
                else if (y < 0)
                    Console.WriteLine("4");
            }
            else
            {
                if (y > 0)
                    Console.WriteLine("2");
                else if (y < 0)
                    Console.WriteLine("3");
            }
        }
    }
}
