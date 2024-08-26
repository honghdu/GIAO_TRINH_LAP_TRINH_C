//Ví dụ 6.35:
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

// Hàm đếm các phần tử lẻ âm trong ma trận
int demleam(int a[MAX][MAX], int m, int n)
{
    int d = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] % 2 != 0 && a[i][j] < 0)
                d++;
    return d;
}

int main()
{
    int a[MAX][MAX], m, n;
    cin >> m >> n;
    nhapmatran(a, m, n);
    cout << demleam(a, m, n);
    return 0;
}

/*
4 3
5   1   -6
2   7   -10
-3   -1   4
2   -7   10
*/
