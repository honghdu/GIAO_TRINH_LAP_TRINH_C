//Ví dụ 6.37:
#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 100

// Hàm nhập ma trận số nguyên a có m dòng, n cột
void nhapmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

// Hàm xuất ma trận số nguyên a có m dòng, n cột
void xuatmatran(int a[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
            cout << setw(8) << a[i][j];
        cout << '\n';
    }
}

// Hàm sao chép ma trận
void saochep(int a[MAX][MAX], int b[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            b[i][j] = a[i][j];
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX], m, n;
    cin >> m >> n;
    nhapmatran(a, m, n);
    saochep(a, b, m, n);
    xuatmatran(b, m, n);
    return 0;
}

/*
4 3
5   1   -6
2   10   -30
-3   -1   4
2   -7   10
*/
