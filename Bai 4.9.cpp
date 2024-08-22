// Bài 4.9
#include<iostream>
using namespace std;

int main ()
{
    int a, b, c, nho, lon, giua;
    cin >> a >> b >> c;
    nho = min(a, b);
    lon = max(a, b);
    giua = (a + b + c) - (nho + lon);
    cout << nho << ' ' << giua << ' ' << lon;
    return 0;
}
