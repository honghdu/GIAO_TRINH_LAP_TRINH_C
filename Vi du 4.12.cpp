//Ví dụ 4.12:
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(true)
    {
        cout << "Nhap mot so nguyen duong: "; cin >> n;
        if(n > 0)
        {
            cout << "Gia tri cua so nguyen duong: " << n;
            break;
        }
    }
    return 0;
}


