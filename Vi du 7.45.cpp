//Ví dụ 7.45:
#include <iostream>
#include <cstring>
using namespace std;

// Hàm có sử dụng con trỏ hàm như tham số
void hienthi(char s[], int (*Xtype)(int c))
{
    int i = 0;
    while(s[i] != '\0')
    {
        cout << (*Xtype)(s[i]); // Sử dụng con trỏ hàm
        i++;
    }
}

int main()
{
    char s[500];
    cout << "Nhap chuoi: "; cin >> s;
    char c;
    cout << "Nhap hien thi ma chu in (u) hay thuong (l): ";
    cin >> c;
    if(c == 'l') // Hiển thị mã tương ứng với chữ thường
        hienthi(s, tolower);
    else	// Hiển thị mã tương ứng với chữ in
        hienthi(s, toupper);
    return 0;
}
