//Ví dụ 8.20:
#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 50

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

int main()
{
    Nhanvien *nv = new Nhanvien[MAX];
    int n;
    cout << "Nhap so luong nhan vien: "; cin >> n;
    // Nhập danh sách nhân viên
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nhap thong tin cho nhan vien " << i + 1;
        cout << "\nHo ten: "; getline(cin, nv[i].hoten);
        cout << "Chuc vu: "; getline(cin, (nv+i)->chucvu);
        cout << "Bac luong: "; cin >> (*(nv+i)).bacluong;
        cout << "Ngay sinh:\n";
        cout << " Ngay: "; cin >> nv[i].ngaysinh.ngay;
        cout << " Thang: "; cin >> (nv+i)->ngaysinh.thang;
        cout << " Nam: "; cin >> (*(nv+i)).ngaysinh.nam;
    }
    // Xuất danh sách nhân viên
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
    return 0;
}
