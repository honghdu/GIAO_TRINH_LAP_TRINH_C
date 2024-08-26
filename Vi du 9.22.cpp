//Ví dụ 9.22:
#include<iostream>
using namespace std;

// Hàm tính tích các chữ số khác 0
int tichcs(int n)
{
    int t = 1;
    while(n > 0)
    {
        if(n % 10 != 0)
        t *= n % 10;
        n = n/10;
    }
    return t;
}

int main()
{
    int n;
    if(fopen("BAI2.INP", "r"))
    {
        freopen("BAI2.INP", "r", stdin);
        freopen("BAI2.OUT", "w", stdout);
    }
    cin >> n;
    cout << tichcs(n);
    return 0;
}
