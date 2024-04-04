#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

   //int scores[10];

   //cout << "scores[0]: " << scores[0] << endl;
   //cout << "scores[1]: " << scores[1] << endl;

   /*for (size_t i{0}; i < 10; ++i) {
    cout << "scores [" << i << "] : " << scores[i] << endl; 
   }*/

   /*Write data into an array
   scores[0] = 20;
   scores[1] = 21;
   scores[2] = 22;*/

   /*for (size_t i{0}; i < 10; ++i) {
    cout << "scores [" << i << "] : " << scores[i] << endl; 
   }*/

   /*for(size_t i{0}; i < 10; ++i) {
    scores[i] = i * 10;
   }*/

   /*for (size_t i{0}; i < 10; ++i) {
    cout << "scores [" << i << "] : " << scores[i] << endl; 
   }*/

   //Omit the size of the array at declaration
   /*int class_sizes[] {1, 2, 34, 56, 23, 46, 78, 104};

   //Will print this with a range bases for loop
   for (auto value : class_sizes){
    cout << "value: " << value << endl;
   }*/

   int scores [] {2, 5, 8, 2, 5, 6, 9};
   int sum {0};

   for (int element : scores){
    sum += element;
   }
   cout << "Score sum: " << sum << endl;

    return 0;
}
