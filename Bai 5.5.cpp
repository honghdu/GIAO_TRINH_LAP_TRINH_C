//Bài 5.5
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double s1(int n)
{
    double t = 0.0;
    for(int i = 0; i <= n; i++)
        t += (double)1 / (2 * i + 1);
    return t;
}

double s2(int n)
{
    double t = 0.0;
    for(int i = 1; i <= n; i++)
        t = sqrt(2 + t);
    return t;
}

double s3(int n)
{
    double t = 0.0;
    for(int i = 1; i <= n; i++)
        t = sqrt(i + t);
    return t;
}

int main ()
{
    int n;
    cin >> n;
    cout << setprecision(3) << fixed << s1(n) << '\n';
    cout << setprecision(3) << fixed << s2(n) << '\n';
    cout << setprecision(3) << fixed << s3(n) << '\n';
    return 0;
}
