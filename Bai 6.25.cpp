//Bài 6.25
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

// Hàm tìm giá trị lớn nhất trong ma trận
int Max(int a[MAX][MAX], int m, int n)
{
    int mm = INT_MIN;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
			if(a[i][j] > mm)
                mm = a[i][j];
    return mm;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> m >> n;
    nhapmatran(a, m, n);
    int mm = Max(a, m, n);
    cout << mm << endl;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
			if(a[i][j] == mm)
                cout << "[" << i << "," << j << "] ";
    return 0;
}
/*
Input
3 5
3 40 8 40 1
9 6 40 7 21
40 12 7 9 3

Output
40
[1,2] [1,4] [2,3] [3,1]
*/
