//Ví dụ 8.8:
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
    Nhanvien nv1, nv2 = {"Le Van Nam", "Cong nhan", 3.4, 25, 10, 1990};
    nv1 = nv2;
    cout << nv1.hoten << '\n';
    cout << nv1.chucvu << '\n';
    cout << nv1.bacluong << '\n';
    cout << nv1.ngaysinh.ngay << '/';
    cout << nv1.ngaysinh.thang << '/';
    cout << nv1.ngaysinh.nam << '\n';
    return 0;
}

