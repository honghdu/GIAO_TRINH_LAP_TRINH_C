//Ví dụ 6.18:
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
// Hàm chèn phần tử x vào vị trí k
void chenvt(int a[MAX], int &n, int x, int k)
{
		for(int i = n; i > k; i--)
			a[i] = a[i - 1];
		a[k] = x;
		n++;
}

int main()
{
    int a[MAX], n, x, k;
    cin >> n >> x >> k;
    nhapmang(a, n);
    chenvt(a, n, x, k);
    xuatmang(a, n);
    return 0;
}

/*
8 100 5
2 6 -7 90 19 10 -15 9
*/
