//Bài 6.3
#include <iostream>
#include <iomanip>
using namespace std;

#define MAX 10005
int a[MAX], n, d = 0;
long long s = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >>n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (a[i] < 0)
        {
            s += a[i];
            d++;
        }
    if (d == 0) cout << 0;
    else   cout << setprecision(2)<< fixed <<  double(s)/d;
}
