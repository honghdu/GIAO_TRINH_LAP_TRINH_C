// Bài 4.5
#include<iostream>
#include<iomanip>

using namespace std ;

int main ()
{
    int i, n;
    double s = 0.0;
    cin >> n;
    for(i = 1; i <= n; i++)
        s += (double)1 / i;
    cout << setprecision(3) << fixed << s;
    return 0;
}
