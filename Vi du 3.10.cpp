//Ví dụ 3.10:
#include <iostream>
using namespace std;
int main()
{
    int thang;
    cout << "Nhap vao thang: "; cin >> thang;
    switch(thang)
    {
        case 1: case 2: case 3: cout << "Quy 1"; break;
        case 4: case 5: case 6: cout << "Quy 2 "; break;
        case 7: case 8: case 9: cout << "Quy 3 "; break;
        case 10: case 11: case 12: cout << "Quy 4 "; break;
        default: cout << "Thang khong hop le ";
    }
    return 0;
}


