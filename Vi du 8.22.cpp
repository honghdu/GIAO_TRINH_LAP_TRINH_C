//Ví dụ 8.22:
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct Ngay
{
    int ngay, thang, nam;
};

struct Nhanvien
{
    string hoten, chucvu;
    double bacluong;
    Ngay ngaysinh;
};

/* - Hàm nhập thông tin cho một nhân viên
   - Phải truyền tham biến cho biến nv vì sau khi nhập thông tin cho nhân viên, nội dung của biến nv thay đổi */
void nhap(Nhanvien *nv)
{
    cout << "Ho ten: "; getline(cin, nv->hoten);
    cout << "Chuc vu: "; getline(cin, nv->chucvu);
    cout << "Bac luong: "; cin >> nv->bacluong;
    cout << "Ngay sinh:\n";
    cout << " Ngay: "; cin >> nv->ngaysinh.ngay;
    cout << " Thang: "; cin >> nv->ngaysinh.thang;
    cout << " Nam: "; cin >> nv->ngaysinh.nam;
}

// Hàm in thông tin của một nhân viên
void xuat(Nhanvien *nv)
{
    cout << setw(20) << left << nv->hoten;
    cout << setw(15) << left << nv->chucvu;
    cout << setw(8) << left << nv->bacluong;
    cout << nv->ngaysinh.ngay << '/';
    cout << nv->ngaysinh.thang << '/';
    cout << nv->ngaysinh.nam << '\n';
}

int main()
{
    Nhanvien *nv = new Nhanvien;
    nhap(nv);
    xuat(nv);
    delete nv;
    return 0;
}
