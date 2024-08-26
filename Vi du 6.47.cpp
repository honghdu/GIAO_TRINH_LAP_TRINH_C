//Ví dụ 6.47:
#include<iostream>
using namespace std;

int main()
{
   	int sbd;
    char hoten[30];
    cout << "Nhap SBD: "; cin >> sbd;
    cout << "Nhap ho ten: "; gets(cin, hoten);
    cout << "\nSBD: " << sbd;
    cout << "\nHo ten: " << hoten << endl;
    return 0;
}

/*
// Thêm hàm fflush(stdin);
#include<iostream>
using namespace std;

int main()
{
   	int sbd;
    char hoten[30];
    cout << "Nhap SBD: "; cin >> sbd;
    fflush(stdin);
    cout << "Nhap ho ten: "; gets(hoten);
    cout << "\nSBD: " << sbd;
    cout << "\nHo ten: " << hoten << endl;
    return 0;
}
*/
