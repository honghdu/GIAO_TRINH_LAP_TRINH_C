//Ví dụ 8.14:
#include <iostream>
using namespace std;

struct Ngay
{
    int ngay, thang, nam;
};

struct Nhanvien
{
    string hoten, chucvu;
    float bacluong;
    Ngay ngaysinh;
};

int main()
{
    Nhanvien nv1 = {"Le Van Nam", "Cong nhan", 3.4, 5, 10, 1990};
    Nhanvien nv2, *p1, *p2;
    // Cho con trỏ p1 trỏ đến địa chỉ của biến nv1
    p1 = &nv1;
    // Truy cập đến các thành phần của thực thể nv1
    cout << p1->hoten << '\n';

    cout << p1->chucvu << '\n';
    cout << p1->bacluong << '\n';
    cout << p1->ngaysinh.ngay << '/';
    cout << p1->ngaysinh.thang << '/';
    cout << p1->ngaysinh.nam << '\n';
    // Cho con trỏ p2 trỏ đến địa chỉ của biến nv2
    p2 = &nv2;
    /* Gán con trỏ p2 bằng con trỏ p1. Qua đó tiến hành sao chép nội dung của biến nv1 vào nội dung của biến nv2 */
    *p2 = *p1;
    cout << '\n';
    cout << nv2.hoten << '\n';
    cout << nv2.chucvu << '\n';
    cout << nv2.bacluong << '\n';
    cout << nv2.ngaysinh.ngay << '/';
    cout << nv2.ngaysinh.thang << '/';
    cout << nv2.ngaysinh.nam << '\n';
    return 0;
}


