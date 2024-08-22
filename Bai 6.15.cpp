//Bài 6.15
#include <iostream>
using namespace std;

const int MAX = 1000005;
int a[MAX], n, m, d = 0;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    m = a[n];
    for(int i = n - 1; i >= 1; i--)
        if(a[i] > m)
        {
            d++;
            m = a[i];
        }
    cout << d;
    return 0;
}
