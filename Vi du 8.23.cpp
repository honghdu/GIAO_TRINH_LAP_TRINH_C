//Ví dụ 8.23:
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#define MAX 50

typedef struct
{
    int ngay, thang, nam;
} Ngay;

typedef struct
{
    string hoten, chucvu;
    double bacluong;
    Ngay ngaysinh;
} Nhanvien;

// Hàm nhập danh sách các nhân viên sử dụng con trỏ
void nhapds(Nhanvien *nv, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nhap thong tin cho nhan vien " << i + 1;
        cout << "\nHo ten: "; getline(cin, nv[i].hoten);
        cout << "Chuc vu: "; getline(cin, (nv+i)->chucvu);
        cout << "Bac luong: "; cin >> nv[i].bacluong;
        cout << "Ngay sinh:\n";

        cout << " Ngay: "; cin >> nv[i].ngaysinh.ngay;
        cout << " Thang: "; cin >> nv[i].ngaysinh.thang;
        cout << " Nam: "; cin >> nv[i].ngaysinh.nam;
    }
}

// Hàm xuất danh sách các nhân viên sử dụng con trỏ
void xuatds(Nhanvien *nv, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << setw(3) << left << i + 1;
        cout << setw(20) << left << nv[i].hoten;
        cout << setw(15) << left << nv[i].chucvu;
        cout << setw(8) << left << nv[i].bacluong;
        cout << nv[i].ngaysinh.ngay << '/';
        cout << nv[i].ngaysinh.thang << '/';
        cout << nv[i].ngaysinh.nam << '\n';
    }
}
int main()
{
    Nhanvien *nv = new Nhanvien[MAX];
    int n;
    cout << "Nhap so luong nhan vien: "; cin >> n;
    nhapds(nv, n);
    xuatds(nv, n);
    return 0;
}
