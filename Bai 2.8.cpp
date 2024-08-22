#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a;
    cin >> a;
    cout << setprecision(2) << fixed << 4 * a << ' ' << a * a;
    return 0;
}
