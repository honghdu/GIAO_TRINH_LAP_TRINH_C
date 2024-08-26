//Ví dụ 9.21:
#include<iostream>
#include<iomanip>
using namespace std;

// Hàm tính f(x, n) = x + x^2 + x^3 + ... + x^n
double f(double x, int n)
{
    double s = 0.0, t = 1.0;
    for(int i = 1; i <= n; i++)
    {
        t *= x;
        s += t;
    }
    return s;
}

int main()
{
    double x;
    int n;
    if(fopen("BAI1.INP", "r"))
    {
        freopen("BAI1.INP", "r", stdin);
        freopen("BAI1.OUT", "w", stdout);
    }
    cin >> x >> n;
    cout << setprecision(3) << fixed << f(x, n);
    return 0;
}
