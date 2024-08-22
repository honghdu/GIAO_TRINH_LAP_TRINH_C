// Bài 4.4
#include<iostream>

using namespace std ;

int main ()
{
    int i, n;
    unsigned long long s = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
        s += 2 * i - 1;
    cout << s;
    return 0;
}
