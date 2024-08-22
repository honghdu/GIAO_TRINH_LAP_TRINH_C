// Bài 4.6
#include<iostream>

using namespace std ;

int main ()
{
    int n = 0;
    double s = 0;
    while (s < 2.101999)
    {
        n++;
        s += 1.0 / (2*n - 1);
    }
    cout << n;
    return 0;
}
