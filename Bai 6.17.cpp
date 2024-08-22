//Bài 6.17
#include <iostream>

using namespace std;

const int MAX = 105;
long long a[MAX];
int n;

// Hàm tìm giá trị lớn nhất trong mảng
long long Max(long long a[MAX], int n)
{
    long long m = a[1];
    for(int i = 2; i <= n; i++)
        if(a[i] > m)  m = a[i];
    return m;
}

// Hàm tìm giá trị nhỏ nhất trong mảng
long long Min(long long a[MAX], int n)
{
    long long m = a[1];
    for(int i = 2; i <= n; i++)
        if(a[i] < m)  m = a[i];
    return m;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    long long nho, lon;
    nho = Min(a, n);
    lon = Max(a, n);
    for(int i = 1; i <= n; i++)
        if(a[i] == nho) a[i] = lon;
        else    if(a[i] == lon) a[i] = nho;
     for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}


