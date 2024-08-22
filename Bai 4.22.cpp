// Bài 4.22
#include<iostream>
using namespace std ;

int main ()
{
    int a, b, n, d, dem = 0;
    cin >> a >> b;
    for(int n = a; n <= b; n++)
    {
        d = 0;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
            {
                d = 1;
                break;
            }
        if(d == 0)
            dem++;
    }
    cout << dem;
}
