//Ví dụ 2.7:
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d{0.1}; // d = 0.1
    cout << d << ' ' << setprecision(20) << d;
    return 0;
}
