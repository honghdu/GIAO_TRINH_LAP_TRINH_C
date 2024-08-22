//Bài 6.24
#include<iostream>
using namespace std;

#define MAX 51
int a[MAX][MAX], m, n, k;

// Hàm nhập ma trận a cấp m x n
void nhapmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
}

// Hàm xuất ma trận va cấp m x n
void xuatmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << '\t';
        cout << '\n';
    }
}

// Hàm tính tổng các phần tử tại dòng k
long long tongdong(int a[MAX][MAX], int m, int n, int k)
{
    long long s = 0;
	for(int j = 1; j <= n; j++)
			s += a[k][j];
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> m >> n >> k;
    nhapmatran(a, m, n);
    xuatmatran(a, m, n);
    cout << tongdong(a, m, n, k);
    return 0;
}
