//Ví dụ 6.19:
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

// Hàm tìm giá tri lớn nhất trong mảng
int Max(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > m)		m = a[i];
    return m;
}


// Hàm chèn phần tử x vào vị trí k
void chenvt(int a[MAX], int &n, int x, int k)
{
		for(int i = n; i > k; i--)
			a[i] = a[i - 1];
		a[k] = x;
		n++;
}

// Hàm thêm phần tử x vào sau phần tử lớn nhất
void chensaumax(int a[], int &n, int x)
{
		int m = Max(a, n); // Max là hàm lấy giá trị lớn nhất
		for(int i = n - 1; i >= 0; i--)
			if(a[i] == m)	chenvt(a, n, x, i + 1);
}

int main()
{
    int a[MAX], n, x;
    cin >> n >> x;
    nhapmang(a, n);
    chensaumax(a, n, x);
    xuatmang(a, n);
    return 0;
}

/*
8 -100
2 6 -7 90 19 10 -15 90
*/
