#include <iostream>
// This is a library that includes Formatting options for Outputs
#include <iomanip>

using namespace std;

int main(int argc, char const* argv[]) {

    //flush : flushes the output buffer to its destination.
    cout << "This is a peaceful message...." << endl << flush;
    //After this flush, we're sure that at this line, the message has been sent
    // to the stream. This may be important in some application. 

    cout << "#@---------------------------------------------------------------------------@#" << endl;

    cout << endl;
    cout << "Joe" << " " << "23" << endl;
    cout << "Sam" << " " << "45" << endl;

    cout << endl;

    int col_width(14);

    // The "right" sets the outputs position more on the right side of the terminal. 
    cout << right;
    // "setfill" is a function that will the spaces with characters.
    cout << setfill('-');
    // "setw" is a function that will set the distance between outputs. 
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << endl;
    cout << setw(col_width) << "Gray" << setw(col_width) << "Joe" << endl;
    cout << setw(col_width) << "Miles" << setw(col_width) << "Sam" << endl;

    cout << endl;

    cout << "#@---------------------------------------------------------------------------@#" << endl;

    cout << endl;

    //boolalpha and noboolapha : control bool output format : 1/0 true/false

    bool condition{true};
    bool condition2{false};

    cout << "condition: " << condition << endl;
    cout << "condition2: " << condition2 << endl;

    cout << endl;
    cout << boolalpha;
    cout << "condition: " << condition << endl;
    cout << "condition2: " << condition2 << endl;

    // "nobooalpha" removes boolalpha where it no longer just prints true or false. 
    cout << endl;
    cout << noboolalpha;
    cout << "condition: " << condition << endl;
    cout << "condition2: " << condition2 << endl;

    cout << endl;

    cout << "#@---------------------------------------------------------------------------@#" << endl;

    cout << endl;

    int pos_num{34};
    int neg_num{-45};

    cout << "Positive number: " << pos_num << endl;
    cout << "Negative number: " << neg_num << endl;

    cout << endl;
    // "showpos" shows the plus sign for a positive number.
    cout << showpos;
    cout << "Positive number: " << pos_num << endl;
    cout << "Negative number: " << neg_num << endl;

    cout << endl;
    // "noshowpos" disables "showpos" where it no longer shows the plus sign. 
    cout << noshowpos;
    cout << "Positive number: " << pos_num << endl;
    cout << "Negative number: " << neg_num << endl;

    cout << endl;

    cout << "#@---------------------------------------------------------------------------@#" << endl;

    cout << endl;
    
    int pos_int{717171};

    cout << "default base fomrat: " << endl;
    cout << "pos_int: " << pos_int << endl;

    cout << endl;
    cout << "pos_int in different bases: " << endl;
    // "dec" outputs the number in decimal format.
    cout << "pos_int (dec): " << dec << pos_int << endl;
    // "hex" outputs the number in hexidecimal foramt. 
    cout << "pos_int (hex): " << hex << pos_int << endl;
    // "oct" outputs the numbers in baseline format.
    cout << "pos_int (oct): " << oct << pos_int << endl;

    cout << endl;

    cout << "#@---------------------------------------------------------------------------@#" << endl;

    cout << endl;



    return 0;
    
}
