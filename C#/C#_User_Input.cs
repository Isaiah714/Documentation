using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
           System.Console.Write("Enter you name: "); // This allows the user to input data.

           string name = Console.ReadLine(); // This stores the data into a variable.

           System.Console.Write("Enter you age: ");

           string age = Console.ReadLine();

           System.Console.WriteLine("Hello " + name + "\n");

           System.Console.WriteLine("You are " + age + " years old.");


        }
    }
}

