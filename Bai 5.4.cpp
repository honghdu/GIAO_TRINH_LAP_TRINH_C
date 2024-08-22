//Bài 5.4
#include<iostream>

using namespace std;

long long s(int n)
{
    long long t = 0;
    for(int i = 1; i <= n; i++)
        t += (long long) i * i * i;
    return t;
}

int main ()
{
    int n;
    cin >> n;
    cout << s(n);
    return 0;
}
