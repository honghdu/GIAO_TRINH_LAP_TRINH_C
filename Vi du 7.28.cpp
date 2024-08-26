//Ví dụ 7.28:
#include <iostream>
#define MAX 100
using namespace std;

// Nhập mảng số nguyên a có n phần tử
void nhapmang(int *a, int n)
{
	for(int i = 0; i < n; i++)
		cin >> *(a + i); // Tương ứng với a[i]
}

// Nhập mảng số nguyên a có n phần tử
void xuatmang(int *a, int n)
{
    for(int i = 0; i < n; i++)
        cout << *(a + i) << ' '; // Tương ứng với a[i]
}

int main()
{
    int n, *a;
    a = new int[MAX]; // Cấp phát bộ nhớ động
    cout << "Nhap so phan tu: "; cin >> n;
    cout << "Nhap mang: "; nhapmang(a, n);
    cout << "Mang vua nhap: "; xuatmang(a, n);
    delete[] a; // Giải phóng bộ nhớ
    return 0;
}

/*
8
4 5 -23 70 -29 15 30 7
*/

