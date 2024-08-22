//Bài 5.11
#include<iostream>
#include<cmath>

using namespace std;

bool sochinhphuong(long long n)
{
    long long i = sqrt(n);
    if(i * i == n) return 1;
    return 0;
}

int main()
{
    long long n;
    cin >> n;
    if(sochinhphuong(n))	cout << "YES";
    else	cout << "NO";
    return 0;
}
