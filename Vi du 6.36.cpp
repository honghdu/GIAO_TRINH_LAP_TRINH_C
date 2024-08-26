//Ví dụ 6.36:
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

// Hàm tìm phần tử lớn nhất trong ma trận
int Max(int a[][MAX], int m, int n)
{
    int mm = a[0][0];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] > mm)
                mm = a[i][j];
    return mm;
}

// Hàm tìm phần tử nhỏ nhất trong ma trận
int Min(int a[][MAX], int m, int n)
{
    int mm = a[0][0];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] < mm)
                mm = a[i][j];
    return mm;
}

int main()
{
    int a[MAX][MAX], m, n;
    cin >> m >> n;
    nhapmatran(a, m, n);
    cout << Max(a, m, n) << endl;
    cout << Min(a, m, n) << endl;
    return 0;
}

/*
4 3
5   1   -6
2   10   -30
-3   -1   4
2   -7   10
*/
