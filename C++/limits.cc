#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const* argv[]) {

    // "numeric_limits" displays the maximum value for each datatype.
    cout << "The range for short is from " << numeric_limits<short>::min() << " to "
         << numeric_limits<short>::max() << endl;

    cout << "The range for unsigned short is from " << numeric_limits<unsigned>::min() << " to "
         << numeric_limits<unsigned>::max() << endl;
    
    cout << "The range for int is from " << numeric_limits<int>::min() << " to "
         << numeric_limits<int>::max() << endl;

    cout << "The range for unsigned int short is from " << numeric_limits<unsigned int>::min()
         << " to " << numeric_limits<unsigned int>::max() << endl;

    cout << "The range for unsigned long is from " << numeric_limits<long>::min() << " to "
         << numeric_limits<long>::max() << endl;

    cout << "The range for unsigned float is from " << numeric_limits<float>::min() << " to "
         << numeric_limits<float>::max() << endl;

    cout << "The range (with lowest) for float is from " << numeric_limits<float>::min()
         << " to " << numeric_limits<float>::max() << endl;

    cout << "The range(with lowest) for double is from " << numeric_limits<double>::min() << " to "
         << numeric_limits<double>::max() << endl;

    cout << "The range(with lowest) for long double is from " << numeric_limits<long double>::min()
         << " to " << numeric_limits<long double>::max() << endl;

    return 0;

}
