//Bài 3.13
#include<iostream>
#include<cmath>

using namespace std ;

int main ()
{
    double x, f;
    cin >> x;
    if (x <= -1)     cout << x;
    else    if (x > 1)    cout << cos(x) + exp(sqrt(x));
            else    cout << asin(x);
    return 0;
}
