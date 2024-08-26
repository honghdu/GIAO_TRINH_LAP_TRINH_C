//Ví dụ 6.16:
#include<iostream>
#include<time.h> // for rand()
using namespace std;

#define M 100000
#define MAX 100

// Hàm phát sinh các phần tử mảng
void phatsinh(int a[], int n)
{
   for(int i = 0; i < n; i++)
	 a[i] = rand() % M + 1;
}

// Hàm xuất mảng a có n phần tử
void xuatmang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[MAX], n;
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    srand((unsigned int)time(NULL)); phatsinh(a, n);
    cout << "\nCac gia tri trong mang: "; xuatmang(a, n);
    return 0;
}
