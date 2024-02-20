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
          System.Console.Write("Enter a number: ");

          int num1 = Convert.ToInt32(Console.ReadLine()); // This line of code converts a string into an integer.

          System.Console.Write("Enter another number: ");

          int num2 = Convert.ToInt32(Console.ReadLine()); // This line of code converts a string into an integer.

          System.Console.WriteLine(num1 + " + " + num2 + " = " + (num1 + num2));


        }
    }
}

