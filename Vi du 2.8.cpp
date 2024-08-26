//Ví dụ 2.8:
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d1{1.0};
    double d2{0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1};
    cout << setprecision(20) << d1 << ' ' << d2;
    return 0;
}
