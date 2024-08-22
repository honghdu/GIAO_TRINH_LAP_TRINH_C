//Bài 6.14
#include <iostream>
using namespace std;

const int MAX = 1005;
int a[MAX], n, d = 0;

int main ()
{
    n = 1;
    while(cin >> a[n])  n++;
    for(int i = 2; i < n; i++)
        if(a[i] > a[i-1] && a[i] > a[i+1])
            d++;
    cout << d;
    return 0;
}
