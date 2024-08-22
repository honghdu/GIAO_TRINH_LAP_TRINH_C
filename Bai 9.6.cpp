//Bài 9.6:
#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if(fopen("BAI6.INP", "r"))
    {
        freopen("BAI6.INP", "r", stdin);
        freopen("BAI6.OUT", "w", stdout);
    }
    string s[MAX];
    int n, i = 1;
    while(getline(cin, s[i]))   i++;
    n = i - 1;
    cout << n << '\n';
    for(i = 1; i <= n; i++)
        cout << s[i].size() << '\n';
    return 0;
}
