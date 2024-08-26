//Ví dụ 9.10:
#include <iostream>
#include <fstream>
using namespace std;

struct Ngay
{
    int ngay, thang, nam ;
};

struct Nhanvien
{
    string hoten, chucvu;
    float bacluong ;
    Ngay ngaysinh;
};

int main()
{
    int n;
    Nhanvien nv;
    cout << "Nhap so luong nhan vien: "; cin >> n;
    // Khai báo và mở tệp
    ofstream of("Nhanvien.txt", ios::out|ios::binary);
    if(!of) // Không mở được tệp
    {
        cout << "\nKhong tao duoc tep.";
        exit(1);
    }
    // Nhập dữ liệu từ bàn phím và ghi vào tệp Nhanvien.txt
    for(int i = 0; i < n; i++)
    {
        // Nhập dữ liệu từ bàn phím
        cout << "Nhan vien thu " << i+1 << endl;
        cin.ignore();
        cout << "Ho ten: "; getline(cin, nv.hoten);
        cout << "Chuc vu: "; getline(cin, nv.chucvu);
        cout << "Bac luong: "; cin >> nv.bacluong;
        cout << "Ngay sinh:\n";
        cout << " - Ngay: "; cin >> nv.ngaysinh.ngay;
        cout << " - Thang: "; cin >> nv.ngaysinh.thang;
        cout << " - Nam: "; cin >> nv.ngaysinh.nam;
        // Ghi dữ liệu vào tệp
        of << nv.hoten << ' ';
        of << nv.chucvu << ' ';
        of << nv.bacluong << ' ';
        of << nv.ngaysinh.ngay << ' ';
        of << nv.ngaysinh.thang << ' ';
        of << nv.ngaysinh.nam << endl;
    }
    of.close(); // Đóng tệp
    return 0;
}


