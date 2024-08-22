//Bài 6.2
#include <iostream>
using namespace std;

#define MAX 100005
int a[MAX], n, x, d = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (x == a[i]) d++;
    }
    cout << d;
    return 0;
}
