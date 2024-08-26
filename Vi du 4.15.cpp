//Ví dụ 4.15:
#include<iostream>
using namespace std;
int main ()
{
    int n, i = 1;
    long long s = 0;
    cout << "Nhap 1 so nguyen duong: "; cin >> n;
    do
    {
        s += i;
        i++;
    }while(i <= n);
    cout << "S(" << n << ") = " << s << '\n';
    return 0;
}

