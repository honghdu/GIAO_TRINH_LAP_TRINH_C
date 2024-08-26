//Ví dụ 6.62:
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sbd;
    string hoten;
    cout << "Nhap SBD: "; cin >> sbd;
    cin.ignore();
    cout << "Nhap ho ten: "; getline(cin, hoten);
    cout << "SBD: " << sbd;
    cout << "\nHo ten: " << hoten;
    return 0;
}
