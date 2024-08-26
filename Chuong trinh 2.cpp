//Chương trình 2:

#include<iostream>
using namespace std;

int main()
{
	int a, b, c; // Khai báo 3 biến số nguyên
	cout << "Nhap so he Octal: "; cin >> oct >> a;
	cout << "Nhap so he Hexadecimal: "; cin >> hex >> b;
	cout << "Nhap so he Decimal: "; cin >> dec >> c;
	cout << "Tong o he Decimal: " << dec << a + b + c;
	return 0;
}
