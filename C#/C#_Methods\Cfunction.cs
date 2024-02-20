using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Transactions;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
          Custom("peanut gun"); // Calls the method with the appropiate information.
        }
        static void Custom(string trinket) /* "void" is what allows you to create a method/customfunction.
                                               You can put parameters inside the function to allow only 
                                               certain information to be passed into the method.*/
        {
            System.Console.WriteLine("I got you a " + trinket);
        }
    }
}

