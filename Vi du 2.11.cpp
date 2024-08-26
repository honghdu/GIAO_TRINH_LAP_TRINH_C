//Ví dụ 2.11:
#include<iostream>
#include<limits>
using namespace std;
int main()
{
    cout << "char: " << sizeof(char) << "bytes (";
    cout << CHAR_MIN << " ... " << CHAR_MAX << ")" << endl;
    cout << "unsigned char: ";
    cout << sizeof (unsigned char) << "bytes (";
    cout << "0 ... " << UCHAR_MAX << ")" << endl;
    cout << "short int: " << sizeof (short int) << "bytes (";
    cout << SHRT_MIN << " ... " << SHRT_MAX << ")" << endl;
    cout << "unsigned short int: ";
    cout << sizeof (unsigned short int) << "bytes (";
    cout << "0 ... " << USHRT_MAX << ")" << endl;
    cout << "int: " << sizeof(int) << "bytes (";
    cout << INT_MIN << " ... " << INT_MAX << ")" << endl;
    cout << "unsigned int: ";
    cout << sizeof (unsigned int) << "bytes (";
    cout << "0 ... " << UINT_MAX << ")" << endl;
    cout << "long: " << sizeof(long) << "bytes (";
    cout << LONG_MIN << " ... " << LONG_MAX << ")" << endl;
    cout << "unsigned long: ";
    cout << sizeof (unsigned long) << "bytes (";
    cout << "0 ... " << ULONG_MAX << ")" << endl;
    cout << "long long: " << sizeof (long long) << "bytes (";
    cout << LLONG_MIN << " ... " << LLONG_MAX << ")" << endl;
    cout << "unsigned long long: ";
    cout << sizeof (unsigned long long) << "bytes (";
    cout << "0 ... " << ULLONG_MAX << ")" << endl;
    return 0;
}
