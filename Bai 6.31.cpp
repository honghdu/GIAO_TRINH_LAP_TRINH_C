//Bài 6.31
#include <iostream>
#include <iomanip>

using namespace std;

#define MAX 50

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

// Hàm tính tích hai ma trận
void tich(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n, int p)
{
     for (int i = 1; i <= m; i++)
        for (int j = 1; j <= p; j++)
        {
            c[i][j] = 0;
            for (int k = 1; k <= n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], m, n, p;
    cin >> m >> n >> p;
    nhapmatran(a, m, n);
    nhapmatran(b, n, p);
    tich(a, b, c, m, n, p);
    xuatmatran(c, m, p);
    return 0;
}

/*
Input
2 3 2
1 -1 1
0 2 1

1 0
2 -2
2 3

Output
1   5
6   -1
*/

