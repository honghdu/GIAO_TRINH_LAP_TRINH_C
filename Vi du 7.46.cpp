//Ví dụ 7.46:
#include <iostream>
using namespace std;

void cong(float a, float b)
{
    cout << a << " + " << b << " = " << a + b << endl;
}

void tru(float a, float b)
{
    cout << a << " - " << b << " = " << a - b << endl;
}

void nhan(float a, float b)
{
    cout << a << " x " << b << " = " << a * b << endl;
}

void chia(float a, float b)
{
    cout << a << " : " << b << " = " << a / b << endl;
}
int main()
{
    // khai báo, khởi tạo 4 con trỏ
    void (*f[4])(float, float) = {cong, tru, nhan, chia};
    float m, n;
    cout << "Nhap 2 so thuc: " ; cin >> m >> n ;
    for (int i = 0; i < 4; i++)
        f[i](m, n);
}
