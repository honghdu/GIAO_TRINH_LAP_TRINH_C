//Bài 6.34
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

// Hàm tìm ma trận chuyển vị của ma trận a cấp m x n
void chuyenvi(int a[MAX][MAX], int b[MAX][MAX], int m, int n)
{
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            b[j][i] = a[i][j];
}


int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int a[MAX][MAX], b[MAX][MAX], m, n;
	cin >> m >> n;
    nhapmatran(a, m, n);
    chuyenvi(a, b, m, n);
	xuatmatran(b, n, m);
    return 0;
}

/*
Input
3 5
13 	4 	8 	14 	1
9 	6 	3 	7 	21
5 	12 	17 	9 	3

Output
13 	9 	5
4 	6 	12
8 	3 	17
14 	7 	9
1 	21 	3
*/
