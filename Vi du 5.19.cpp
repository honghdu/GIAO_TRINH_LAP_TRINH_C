//Ví dụ 5.19:
#include<iostream>
using namespace std;

int UCLN(int x, int y)
{
    if (x == y)  return x;
    if (x < y) return UCLN(x, y - x);
    if (x > y) return UCLN(x - y, y);
}

int UCLN1(int x, int y)
{
    if (y == 0)  return x;
    return UCLN1(y, x % y);
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << UCLN(x, y) << endl;
    cout << UCLN1(x, y);
    return 0;
}
