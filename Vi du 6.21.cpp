//Ví dụ 6.21:
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

// Hàm xóa một phần tử tại vị trí k
void xoavt(int a[], int &n, int k)
{
		for(int i = k; i < n - 1; i++)
			a[i] = a[i + 1];
		n--;
}

// Hàm xóa tất cả các phần tử âm trong dãy
void xoaam(int a[], int &n)
{
		for(int i = n - 1; i >= 0; i--)
			if(a[i] < 0)
            	xoavt(a, n, i);
}

int main()
{
    int a[MAX], n;
    cin >> n;
    nhapmang(a, n);
    xoaam(a, n);
    xuatmang(a, n);
    return 0;
}

/*
8
2 -15 -7 90 19 10 5 90
*/
