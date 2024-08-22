// Bài 4.2
#include<iostream>

using namespace std ;

int main ()
{
    int n;
    unsigned long long f = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
        f *= i;
    cout << f;
    return 0;
}
