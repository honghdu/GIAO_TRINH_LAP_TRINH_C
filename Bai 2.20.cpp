#include<iostream>
using namespace std;

int main()
{
    int a, b, u, v, x, y;
    cin >> a >> b >> u >> v >> x >> y;
    cout << (long long)(a + u) * (x - y) + (long long)(b + v) * y;
    return 0;
}
