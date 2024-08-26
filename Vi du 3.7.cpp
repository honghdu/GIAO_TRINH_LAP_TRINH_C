//Ví dụ 3.7:
#include<iostream>
using namespace std;

int main()
{
    double a1, a2, a3, m;
    cout << "Nhap vao 3 so thuc: "; cin >> a1 >> a2 >> a3;
    m = a1;
    if(a2 > m)    m = a2;
    if(a3 > m)    m = a3;
    cout << "So lon nhat: " << m;
    return 0;
}
