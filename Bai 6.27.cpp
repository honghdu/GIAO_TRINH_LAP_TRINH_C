//Bài 6.27
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

// Hàm tính tổng các phần tử lớn nhất trên mỗi dòng
long long tongmaxdong(int a[MAX][MAX], int m, int n)
{
	int i, j, Max;
	long long s = 0;
	for(i = 1; i <= m; i++)
	{
		Max = a[i][1];
		for(j = 2; j <= n; j++)
			if(a[i][j] > Max)	Max = a[i][j];
		s += Max;
	}
	return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> m >> n;
    nhapmatran(a, m, n);
    cout << tongmaxdong(a, m, n);
    return 0;
}
/*
Input
3 5
3 -4 8 4 1
9 6 -40 7 21
12 12 7 9 3

Output
41
*/
