#include<iostream>

using namespace std;

int main()
{
    double m, gia;
    cout << "Nhap khoi luong nuoc: "; cin >> m;
    if(m <= 10)    gia = 7 * m;
    else
        if(m <= 30)    gia = 7 * 10 + 10 * (m - 10);
        else
            if(m <= 40)
                gia = 7 * 10 + 10 * 20 + 12 * (m - 30);
            else
                gia = 7 * 10 + 10 * 20 + 12 * 10 + 15 *(m-40);
    gia += 10;
    cout << "So tien: " << gia;
    return 0;
}
