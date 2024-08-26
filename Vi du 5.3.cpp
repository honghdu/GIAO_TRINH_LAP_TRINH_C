//Ví dụ 5.3:
#include <iostream>
using namespace std;

double chuvi(double rong, double dai); // Khai báo hàm

int main()
{
    double dai, rong;
    cout << "Chuong trinh tinh chu vi cua HCN.\n";
    cout << "Nhap chieu dai: "; cin >> dai;
    cout << "Nhap chieu rong: "; cin >> rong;
    cout << "Chu vi HCN la: " << chuvi(dai, rong); // Lời gọi hàm
    cout << "\nChu vi HCN co chieu dai gap doi, chieu rong gap 3 la: ";
    cout << chuvi(2*dai, 3*rong); // Lời gọi hàm
    return 0;
}

double chuvi(double dai, double rong) // Định nghĩa hàm
{
    return 2 * (dai + rong); // Thân hàm
}

/*
// Chương trình trên cũng có thể viết lại như sau (bỏ qua khai báo hàm)
#include <iostream>
using namespace std;
double chuvi(double dai, double rong) // Định nghĩa hàm
{
    return 2 * (dai + rong); // Thân hàm
}
int main()
{
    double dai, rong;
    cout << "Chuong trinh tinh chu vi cua HCN.\n";
    cout << "Nhap chieu dai: "; cin >> dai;
    cout << "Nhap chieu rong: "; cin >> rong;
    cout << "Chu vi HCN la: " << chuvi(dai, rong); // Lời gọi hàm
    cout << "\nChu vi HCN co chieu dai gap doi, chieu rong gap 3 la: ";
    cout << chuvi(2*dai, 3*rong); // Lời gọi hàm
    return 0;
}
*/
