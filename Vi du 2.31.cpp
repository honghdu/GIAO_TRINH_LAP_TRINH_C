//Ví dụ 2.31:
#include <iostream>
using namespace std;

int main()
{
    int n = 212;
    cout << "Dich phai 1 bit: " << (n >> 1) << "\n";
    cout << "Dich phai 2 bits: " << (n >> 2) << "\n";
    cout << "Dich phai 3 bits: " << (n >> 3) << "\n";
    cout << "Dich phai 4 bits: " << (n >> 4) << "\n";
    cout << "\n";
    cout << "Dich trai 1 bit: " << (n << 1) << "\n";
    cout << "Dich trai 2 bits: " << (n << 2) << "\n";
    cout << "Dich trai 3 bits: " << (n << 3) << "\n";
    cout << "Dich trai 4 bits: " << (n << 4) << "\n";
    return 0;
}
