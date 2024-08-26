//Ví dụ 6.34:
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

// Hàm tính trung bình các phần tử trên cột k
double tbcot(int a[MAX][MAX], int m, int n, int k)
{
		long long s = 0;
		for(int i = 0; i < m; i++)
			s += a[i][k];
		return (double) s / m;
}

int main()
{
    int a[MAX][MAX], m, n, k;
    cin >> m >> n >> k;
    nhapmatran(a, m, n);
    cout << tbcot(a, m, n, k);
    return 0;
}

/*
4 3 1
5   1   6
2   7   10
3   1   4
2   7   10
*/
