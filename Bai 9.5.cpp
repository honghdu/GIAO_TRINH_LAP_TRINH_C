//Bài 9.5:
#include <bits/stdc++.h>
using namespace std;

#define MAX 105

int main()
{
    int a[MAX][MAX], b[MAX][MAX], m, n, p;
    long long c[MAX][MAX];
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if(fopen("BAI5.INP", "r"))
    {
        freopen("BAI5.INP", "r", stdin);
        freopen("BAI5.OUT", "w", stdout);
    }

    cin >> m >> n >> p;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= p; j++)
            cin >> b[i][j];

    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= p; j++)
        {
            c[i][j] = 0;
            for(int k = 1; k <= n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= p; j++)
            cout << c[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
