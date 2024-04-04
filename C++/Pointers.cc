#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

   int * p_number{}; // Will intialize with nullptr
   double * p_fractional_number{};

   //Explicitly intialize with nullptr
   int * p_number1{nullptr};
   int * p_fractional_number1{nullptr};

   //Pointers to different variables are of the same size
   cout << "sizeof(int): " << sizeof(int) << endl;
   cout << "sizeof(double): " << sizeof(double) << endl;
   cout << "sizeof(double*): " << sizeof(double*) << endl;
   cout << "sizeof(int*): " << sizeof(int*) << endl;
   cout << "sizeof(p_number1): " << sizeof(p_number1) << endl;
   cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << endl;

   int int_var{43};
   int *p_int{&int_var}; // The address of operator (&)

   cout << "Int var: " << int_var << endl;
   cout << "p_int (Address in memory): " << p_int << endl;

   //You can also change the address stored in a pointer any time
   int int_var1{65};
   p_int = &int_var1; // Assign a different to the pointer
   cout << "p_int (with different address): " << p_int << endl;

   //Dereferencing a pointer: 
   int* p_int2{nullptr};
   int int_data{56};
   p_int2 = &int_data;

   cout << "value: " << *p_int2 << endl; // Dereferencing a pointer

    return 0;
}
