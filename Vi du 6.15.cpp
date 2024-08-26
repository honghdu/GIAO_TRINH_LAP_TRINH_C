//Ví dụ 6.15:
#include<iostream>
using namespace std;

#define MAX 100 // Khai báo hằng MAX chứa số phần tử tối đa của mảng

// Hàm nhập mảng số nguyên a có n phần tử
void nhapmang(int a[MAX], int n)
{
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

// Hàm xuất mảng số nguyên a có n phần tử
void xuatmang(int a[MAX], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

// Hàm xuất mảng từ cuối về đầu có thể để trống số lượng phần tử của mảng
void xuatmangnguoc(int a[], int n)
{
    for(int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
}

int main ()
{
    int n, a[MAX];
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    cout << "Nhap mang: "; nhapmang(a, n);
    cout << "\nMang xuoi: "; xuatmang(a, n);
    cout << "\nMang nguoc: "; xuatmangnguoc(a, n);
    return 0;
}
