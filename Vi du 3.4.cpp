//Ví dụ 3.4:
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, i;
    cout << "Nhap vao mot so nguyen: "; cin >> n;
    i = sqrt(n);
    if (i * i == n)  cout << n << " la so chinh phuong";
    else  cout << n << " khong la so chinh phuong";
    return 0;
}



