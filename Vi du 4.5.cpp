//Ví dụ 4.5:
#include<iostream>
using namespace std;
int main ()
{
    int n;
    long long s = 0;
    cout << "Nhap 1 so nguyen duong: "; cin >> n;
    for(int i = 1; i <= n; i++)
        s += i;
    cout << "S(" << n << ") = " << s << '\n';
    return 0;
}
