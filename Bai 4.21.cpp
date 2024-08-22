// Bài 4.21
#include<iostream>
using namespace std ;

int main ()
{
    int n, d;
    cin >> n;
    while(n >= 2)
    {
        n--;
        d = 0;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
            {
                d = 1;
                break;
            }
        if(d == 0)
        {
            cout << n;
            return 0;
        }
    }
}
