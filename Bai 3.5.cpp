#include<iostream>
using namespace std;

int main()
{
    int tmp, mamoi;
    cout << "Nhap ma pin: "; cin >> tmp;
    if(tmp == 1234)
    {
        cout << "Nhap ma moi: "; cin >> tmp;
        cout << "Nhap lai ma moi: "; cin >> mamoi;
        if(mamoi == tmp)  cout << "\nMa moi da duoc luu";
        else  cout << "\nKhong trung khop";
    }
    else  cout << "\nNhap sai ma";
    return 0;
}
