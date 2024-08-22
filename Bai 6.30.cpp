//Bài 6.30
#include<iostream>
using namespace std;
#define MAX 100

// Hàm nhập ma trận a cấp m x n
void nhapmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
}

// Hàm xuất ma trận a cấp m x n
void xuatmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << '\t';
        cout << '\n';
    }
}

// Hàm tính tổng hai ma trận
void tong(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n)
{
     for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], m, n;
    cin >> m >> n;
    nhapmatran(a, m, n);
    nhapmatran(b, m, n);
    tong(a, b, c, m, n);
    xuatmatran(c, m, n);
    return 0;
}

/*
Input
2 3
1 -1 1
0 2 1

5 3 8
4 -2 1

Output
6   2   9
4   0   2
*/
