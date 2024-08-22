// Bài 4.20
#include<iostream>
using namespace std ;

int main ()
{
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            cout << i;
            n /= i;
            if(n > 1)   cout << "*";
        }
    }
    if(n > 1)  cout << n;
    return 0;
}
