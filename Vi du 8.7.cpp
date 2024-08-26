//Ví dụ 8.7:
#include <iostream>
using namespace std;

typedef struct
{
    int ngay, thang, nam;
} Ngay;

typedef struct
{
    string hoten, chucvu;
    float bacluong;
    Ngay ngaysinh;
} Nhanvien;

int main()
{
    Nhanvien nv;
    cout << "Ho ten: "; getline(cin, nv.hoten);
    cout << "Chuc vu: "; getline(cin, nv.chucvu);
    cout << "Bac luong: "; cin >> nv.bacluong;
    cout << "Ngay sinh:\n";
    cout << " Ngay: "; cin >> nv.ngaysinh.ngay;
    cout << " Thang: "; cin >> nv.ngaysinh.thang;
    cout << " Nam: "; cin >> nv.ngaysinh.nam;
    cout << nv.hoten << '\n';
    cout << nv.chucvu << '\n';
    cout << nv.bacluong << '\n';
    cout << nv.ngaysinh.ngay << '/';
    cout << nv.ngaysinh.thang << '/';
    cout << nv.ngaysinh.nam << '\n';
    return 0;
}

