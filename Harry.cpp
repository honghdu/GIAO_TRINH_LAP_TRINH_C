#include<bits/stdc++.h>
using namespace std;

int main()
{
    int g, s, k, n, p, q, r;
    long long sotien, tienmua, tiencon;
    cin >> g >> s >> k;
    cin >> n;
    sotien = 17*29*g + 29*s + k;
    for(int i = 1; i <= n; i++)
    {
        cin >> p >> q >> r;
        tienmua = 17*29*p + 29*q + r;
        tiencon = sotien - tienmua;
        sotien = tiencon;
        if(tiencon < 0)
        {
            cout << -1;
            return 0;
        }
    }
    g = tiencon/(17 * 29);
    tiencon = tiencon - 17 * 29 * g;
    s = tiencon/29;
    k = tiencon - 29 * s;
    cout << g << " " << s << " " << k;
}
