// Bài 4.7
#include<iostream>
#include<cmath>

using namespace std ;

int main ()
{
    int n;
    double pi;
    n = 1;
    while (1.0 / (n * n) >= 0.000001)
    {
        pi += 1.0 / (n * n);
        n++;
    }
    cout << sqrt(6 * pi);
    return 0;
}
