//Ví dụ 3.9:
#include <iostream>
using namespace std;
int main ()
{
    char diem;
    cout << "Nhap diem chu cua sinh vien (A, B, C, D, F): ";
    cin >> diem;
    switch(diem)
    {
        case 'A': cout << "Xuat sac"; break;
        case 'B': cout << "Gioi"; break;
        case 'C': cout << "Kha"; break;
        case 'D': cout << "Trung Binh"; break;
        case 'F': cout << "Yeu"; break;
        default: cout << "Diem khong hop le";
    }
    return 0;
}

