//Bài 6.7
#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 10005;
long long a[MAX];
int n;

bool sochinhphuong(long long n)
{
    if(n < 0)   return 0;
    long long i = sqrt(n);
    if(i * i == n)    return 1;
    return 0;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        if(sochinhphuong(a[i]))
            cout << a[i] << ' ';
    return 0;
}


