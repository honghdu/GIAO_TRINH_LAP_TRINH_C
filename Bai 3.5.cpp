#include<iostream>
using namespace std;

int main()
{
    int tmp, mamoi;
    cin >> tmp;
    if(tmp == 1234)
    {
        cin >> tmp;
        cin >> mamoi;
        if(mamoi == tmp)  cout << "\nMa moi da duoc luu";
        else  cout << "\nKhong trung khop";
    }
    else  cout << "\nNhap sai ma";
    return 0;
}
