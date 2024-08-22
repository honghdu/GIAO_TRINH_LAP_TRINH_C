//Bài 6.23
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

// Hàm tính tổng các phần tử tại cột k
// Ý tưởng: Duyệt các phần tử các phần tử tại cột thứ k
// và cộng dồn chúng lại.
long long tongcotk(int a[MAX][MAX], int m, int n, int k)
{
    long long s = 0;
	for(int i = 1; i <= m; i++)
        s += a[i][k];
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> m >> n >> k;
    nhapmatran(a, m, n);
    cout << tongcotk(a, m, n, k);
    return 0;
}
