//Bài 6.22

#include <iostream>
using namespace std;

#define MAX 1000000
int d[2*MAX], x, n, m = 0;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        d[x + MAX]++;
    }
    for(int i = 0; i <= 2 * MAX; i++)
        if(d[i] > m)    m = d[i];
    for(int i = 0; i <= 2 * MAX; i++)
        if(d[i] == m)
        {
            cout << i - MAX;
            return 0;
        }
}


