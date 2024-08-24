#include<iostream>

using namespace std;

int main()
{
    long long a, b, d1, d2, d3, x, t;
    cin >> a >> b >> d1 >> d2 >> d3 >> x;
    if(x <= a)    t = x * d1;
    else
        if(x <= b)    t = a * d1 + (x - a) * d2;
        else
            gia = a * d1 + (b - a) * d2 + (x - b) * d3;
    cout << t;
    return 0;
}
