#include<iostream>
using namespace std;

int main()
{
    int a = -2, b = 2, c;
    c = ((a+b) == !b);
    a = -((a < c) || (--b == c));
    cout << (!(a != -c)&&(b+a >= c)&&((a+c)%2||(-a+c-b)));
    cout << '\n';
    return 0;
}
