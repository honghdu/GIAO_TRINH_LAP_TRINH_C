// Bài 4.3
#include<iostream>

using namespace std ;

int main ()
{
    int i, n;
    unsigned long long s = 1;
    cin >> n;
    for(i = 0; i <= n; i++)
        s *= 2 * i + 1;
    cout << s;
    return 0;
}
