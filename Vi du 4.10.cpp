//Ví dụ 4.10:
#include<iostream>
using namespace std;

int main ()
{
    int n;
    long long s = 0;
    cout << "Nhap 1 so nguyen duong: "; cin >> n;
    int i = 1;
    while (i <= n)
    {
         s += i;
         i++;
    }
    cout << "S(" << n << ") = " << s << '\n';
    return 0;
}




