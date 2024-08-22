//Bài 6.28
#include<iostream>

using namespace std;

#define MAX 100
int a[MAX][MAX], m;

// Hàm nhập ma trận vuông a cấp m
void nhapmatran(int a[MAX][MAX], int m)
{
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
}

// Hàm xuất ma trận vuông a cấp m
void xuatmatran(int a[MAX][MAX], int m)
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << '\t';
        cout << '\n';
    }
}

// Hàm tính tổng các phần tử trên đường chéo chính
long long tongcheochinh(int a[MAX][MAX], int m)
{
    long long s = 0;
	for(int i = 1; i <= m; i++)
		s += a[i][i];
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> m;
    nhapmatran(a, m);
    xuatmatran(a, m);
    cout << tongcheochinh(a, m);
    return 0;
}

/*
Input
4
3 40 8 10
9 6 -3 20
5 11 10 8
-6 15 2 -4

Output
3       40      8       10
9       6       -3      20
5       11      10      8
-6      15      2       -4
15
*/
