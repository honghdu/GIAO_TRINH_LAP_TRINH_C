//Bài 5.2
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double f(double x)
{
    double fx;
    if(x >= 1)   fx = 5*exp(sqrt(x));
    else    if(x <= -1)   fx = abs(3*x - sin(x));
            else    fx = acos(x*x);
    return fx;
}

int main()
{
    double x;
    cin >> x;
    cout << setprecision(3) << fixed << f(x);
    return 0;
}
