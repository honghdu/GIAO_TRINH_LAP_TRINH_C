//Ví dụ 6.38:
#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 50

// Hàm nhập ma trận a có m dòng và n cột
void nhapmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

// Hàm xuất ma trận a có m dòng và n cột
void xuatmatran(int a[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(8) << a[i][j];
        cout << '\n';
    }
}

// Hàm tính tổng các phần tử chẵn dương
long long tongchan(int a[MAX][MAX], int m, int n)
{
    long long s = 0;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] % 2 == 0 && a[i][j] > 0)
                s += a[i][j];
    return s;
}

int main()
{
    int a[MAX][MAX], m, n;
    cin >> m >> n;
    nhapmatran(a, m, n);
    xuatmatran(a, m, n);
    cout << "\n" << tongchan(a, m, n);
    return 0;
}

/*
4 3
5   1   -6
2   10   -30
-3   -1   4
2   -7   10
*/
