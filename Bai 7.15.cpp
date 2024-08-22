// Bài 7.15
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double *a;
    a = new double;
    long long b;
    cin >> *a;
    *a = fabs(*a);
    b = *a;
    cout << *a - b;
    return 0;
}
