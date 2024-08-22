//Bài 6.8
#include <iostream>
using namespace std;

const int MAX = 1005;
long long a[MAX];
int n;

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

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = n; i >= 1; i--)
        if(snt(a[i]))
            cout << a[i] << ' ';
    return 0;
}


