//Ví dụ 6.17:
#include<iostream>
using namespace std;

#define MAX 100000

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

// Hàm hoán đổi giá trị của hai số nguyên cho nhau
void hoandoi(int &a, int &b)
{
		int tmp = a;
		a = b;
		b = tmp;
}

// Hàm sắp xếp mảng tăng dần
void sxtang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
		 	if (a[i] > a[j])	hoandoi(a[i], a[j]);
}

// Hàm sắp xếp mảng giảm dần
void sxgiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
		 	if (a[i] < a[j])
				hoandoi(a[i], a[j]);
}

// Hàm sắp xếp các phần tử lẻ giảm dần
void sxlegiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
      for (int j = i + 1; j < n; j++)
		 	if (a[i]%2 != 0 && a[j]%2 != 0 && a[i] < a[j])
				hoandoi(a[i], a[j]);
}

// Hàm sắp xếp các phần tử chia hết cho 3 lên đầu mảng
void sxchia3lendau(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
		 	if (a[i]%3 != 0 && a[j]%3 == 0)
				hoandoi(a[i], a[j]);
}

// Hàm sắp xếp các phần tử chẵn xuống cuối dãy
void sxchancuoi(int a[], int n)
{
    for (int i = n - 1; i > 0; i--)
        for (int j = i - 1; j >= 0; j--)
		 	if (a[i]%2 != 0 && a[j]%2 == 0)
				hoandoi(a[i], a[j]);
}

int main()
{
    int a[MAX], n;
    cin >> n;
    nhapmang(a, n);
    sxtang(a, n);xuatmang(a, n); cout << '\n';
    sxgiam(a, n);xuatmang(a, n); cout << '\n';
    sxlegiam(a, n);xuatmang(a, n); cout << '\n';
    sxchia3lendau(a, n);xuatmang(a, n); cout << '\n';
    sxchancuoi(a, n);xuatmang(a, n); cout << '\n';
    return 0;
}

/*
8
2 6 -7 90 19 10 -15 9
*/
