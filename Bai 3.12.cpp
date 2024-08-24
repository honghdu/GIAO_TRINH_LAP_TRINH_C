#include<iostream>
#include<cmath>

using namespace std ;

int main ()
{
    double x, f;
    cin >> x;
    if (x <= -2)    f = cbrt(x);
    else    if (x >= 1)    f = log(x);
            else    f = fabs(12 * x - sin(x)) + (28 * cos(x));
    cout << "f(x) = " << f;
    return 0;
}
