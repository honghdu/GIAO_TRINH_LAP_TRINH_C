// Bài 4.13
#include<iostream>
using namespace std;

int main ()
{
    long long n;
    cin >> n;
    int d = 0, s = 0;
    while(n > 0)
    {
        s += n % 10;
        d++;
        n /= 10;
    }
    cout << d << ' ' << s;
    return 0;
}
