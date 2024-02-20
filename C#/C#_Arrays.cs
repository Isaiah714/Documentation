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
          int [] goodNumbers = {1, 4, 14, 26, 38, 43}; // This creates an array using "[]"

          goodNumbers[1] = 50; // Changes one of the values in the array.

          System.Console.WriteLine(goodNumbers[1]); // Prints out one of the values from the array.

          string [] people = new string[5]; // This array creates five slots for each string.
          people[0] = "John"; // Made for the first slot
          people[1] = "Shawn"; // Made for the second slot

          System.Console.WriteLine(people[1]); // Prints out the second slot from the array


        }
    }
}

