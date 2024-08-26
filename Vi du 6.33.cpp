//Ví dụ 6.33:
#include<iostream>
using namespace std;

#define MAX 100

// Hàm nhập ma trận số nguyên a có m dòng, n cột
void nhapmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

// Hàm tính tổng các phần tử trên dòng d
long long tongdong(int a[MAX][MAX], int m, int n, int d)
{
		long long s = 0;
		for(int j = 0; j < n; j++)
			s += a[d][j];
		return s;
}

int main()
{
    int a[MAX][MAX], m, n, d;
    cin >> m >> n >> d;
    nhapmatran(a, m, n);
    cout << tongdong(a, m, n, d);
    return 0;
}

/*
4 3 2
5   1   6
2   7   10
3   1   4
2   7   10
*/
