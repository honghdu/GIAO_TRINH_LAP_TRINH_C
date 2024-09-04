//Bài 9.5:
#include <bits/stdc++.h>
using namespace std;

#define MAX 105

int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], m, n, p, k;
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if(fopen("BAI5.INP", "r"))
    {
        freopen("BAI5.INP", "r", stdin);
        freopen("BAI5.OUT", "w", stdout);
    }

    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    cin >> p >> k;
    for(int i = 1; i <= p; i++)
        for(int j = 1; j <= k; j++)
            cin >> b[i][j];
    if(n == p)
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= k; j++)
        {
            c[i][j] = 0;
            for(int h = 1; h <= n; h++)
                c[i][j] += a[i][h] * b[h][j];
        }

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= k; j++)
            cout << c[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
