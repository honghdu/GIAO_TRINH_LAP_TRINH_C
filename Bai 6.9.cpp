//Bài 6.9
#include <iostream>

using namespace std;

const int MAX = 1005;
int a[MAX], n, d = 0;

// Hàm kiểm tra số nguyên tố
bool snt(int n)
{
    if(n < 2)   return false;
    if (n == 2 || n == 3)   return true;
    if (n % 2 == 0 || n % 3 == 0)   return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Tìm giá tri lớn nhất
int Max(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > m)	m = a[i];
    return m;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        if(snt(a[i]))
        {
            cout << i << ' ';
            d++;
        }
    if(d == 0)  cout << -1;
    if(snt(Max(a, n)))  cout << "\nYES";
    else    cout << "\nNO";
    return 0;
}


