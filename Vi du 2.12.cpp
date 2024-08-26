//Ví dụ 2.12:
#include <iostream>
#include <limits>
using namespace std;
int main()
{
    cout << "int:       " << sizeof(int) << "bytes (";
    cout << numeric_limits <int>::min() << " ... ";
    cout << numeric_limits <int>::max() << ")" << endl;
    cout << "long:      " << sizeof(long) << "bytes (";
    cout << numeric_limits <long>::min() << " ... ";
    cout << numeric_limits <long>::max() << ")" << endl;
    cout << "long long: " << sizeof(long long) << "bytes (";
    cout << numeric_limits <long long>::min() << " ... ";
    cout << numeric_limits <long long>::max() << ")" << endl;
    cout << "float:     " << sizeof(float) << "bytes (";
    cout << numeric_limits <float>::min() << " ... ";
    cout << numeric_limits <float>::max() << ")" << endl;
    cout << "double:    " << sizeof(double) << "bytes (";
    cout << numeric_limits <double>::min() << " ... ";
    cout << numeric_limits <double>::max() << ")" << endl;
    return 0;
}

