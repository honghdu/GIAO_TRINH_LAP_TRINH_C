//Bài 9.2:
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

// Hàm sắp xếp mảng tăng dần
void sxtang(int a[MAX], int n)
{
    int t;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if(fopen("BAI2.INP", "r"))
    {
        freopen("BAI2.INP", "r", stdin);
        freopen("BAI2.OUT", "w", stdout);
    }
    int a[MAX], n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sxtang(a, n);
    // sort(a, a + n);
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}
