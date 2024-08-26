//Ví dụ 6.9:
#include <iostream>
using namespace std;

#define MAX 10000

int Min(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < m)		m = a[i];
    return m;
}

int Max(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > m)		m = a[i];
    return m;
}

int main()
{
    int a[MAX], n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << Min(a, n) << ' ' << Max(a, n);
    return 0;
}
