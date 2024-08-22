#include<iostream>
using namespace std;

int main()
{
    char dau;
    long long i, j;
    cout << "Nhap phep toan va 2 so nguyen: ";
    cin >> dau >> i >> j;
    switch(dau)
    {
        case '+': cout << "Tong: " << i + j; break;
        case '-': cout << "Hieu: " << i - j; break;
        case '*': cout << "Tich: " << i * j; break;
        case '/':
            if(j != 0) cout << "Thuong: " << (double)i / j;
            else cout << "Khong ton tai thuong";
            break;
        default: cout << "Phep toan khong hop le"; break;
    }
    return 0;
}
