//Bài 9.4:
#include <bits/stdc++.h>
using namespace std;

#define MAX 105

int main()
{
    int a[MAX][MAX], b[MAX][MAX], m, n;
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if(fopen("MATRAN.INP", "r"))
    {
        freopen("MATRAN.INP", "r", stdin);
        freopen("MATRANTONG.OUT", "w", stdout);
    }
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> b[i][j];

    cout << m << ' ' << n << '\n';
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] + b[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
