//Bài 3.17
#include<iostream>
using namespace std;

int main()
{
    int d;
    cin >> d;
    switch(d)
    {
        case 0:
        case 1:
        case 2:
        case 3: cout << "Kem"; break;
        case 4: cout << "Yeu"; break;
        case 5:
        case 6: cout << "Trung binh"; break;
        case 7: cout << "Kha"; break;
        case 8: cout << "Tot"; break;
        case 9:
        case 10: cout << "Xuat sac"; break;
        default: cout << "Diem khong hop le"; break;
    }
    return 0;
}
