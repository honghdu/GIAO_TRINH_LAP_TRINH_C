//Bài 6.26
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

// Hàm tìm vị trí lẻ cuối cùng trong ma trận
void vtchancuoi(int a[MAX][MAX], int m, int n)
{
    for(int i = m; i >= 1; i--)
        for(int j = n; j >= 1; j--)
			if(a[i][j] % 2 != 0)
            {
                cout << i << ' ' << j;
                return;
            }
    cout << -1 << ' ' << -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> m >> n;
    nhapmatran(a, m, n);
    vtchancuoi(a, m, n);
    return 0;
}
/*
Input
3 5
3 440 8 14 1
9 6 3 20 21
5 11 10 8 30

Output
3 2
*/
