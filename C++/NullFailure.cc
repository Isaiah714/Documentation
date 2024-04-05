#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    /*
   int * data{new int [100000000000000]};*/ 
    /*
   for (size_t i{0}; i < 100000 ; ++i) {

        try{
            int * data{new int [100000]};
        }catch(exception&ex) {
            cout << "Someting went wrong: " << ex.what() << endl;
        }

   }*/

   //nothrow
   for (size_t i {0}; i < 100; ++i) {
    int * data{new(nothrow) int[100000]};

    if(data!=nullptr){
        cout << "Data allocated" << endl;
    } else{
        cout << "Data allocation failed" << endl;
    }

    
   }
   

    return 0;
}
