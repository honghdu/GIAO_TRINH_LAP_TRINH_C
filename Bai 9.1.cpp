//Bai 9.1
#include <bits/stdc++.h>

using namespace std;

// Hàm tính S(n) = 1 + 2 + 3 + ... + n
double s(int n)
{
    double t = 0;
    for(int i =1; i <= n; i++)
        t += (double)(i+1)/i;
    return t;
}

int main()
{
    int n;
    #define name "bai1"
    if(fopen(name".INP", "r"))
    {
        freopen(name".INP", "r", stdin);
        freopen(name".OUT", "w", stdout);
    }
    cin >> n;
    cout << setprecision(3) << fixed << s(n);
    return 0;
}
