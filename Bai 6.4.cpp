//Bài 6.4
#include <iostream>
using namespace std;

#define MAX 100005
int a[MAX], n, d = 0;

// Tìm giá trị nhỏ nhhất
int Min(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < m)	m = a[i];
    return m;
}

// Tìm giá tri lớn nhất
int Max(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > m)	m = a[i];
    return m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    d = Max(a, n) - Min(a, n);
    for(int i = 0; i < n; i++)
    {
        if (a[i] > d)   cout<< '-' << a[i]- d << ' ';
        else
            if (a[i] == d) cout << 0 << ' ';
            else    cout << '+' << d - a[i] << ' ';
    }
    return 0;
}
