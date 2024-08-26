//Ví dụ 6.39:
#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 100
// Hàm nhập ma trận a có m dòng và n cột
void nhapmatran(float a[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

// Hàm xuất ma trận a có m dòng và n cột
void xuatmatran(float a[MAX][MAX], int m, int n)
{
    cout << setiosflags(ios::showpoint);
    cout << setprecision(2) << fixed;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(8) << a[i][j];
        cout << '\n';
    }
}

// Hàm tìm giá trị lớn phần tử lớn nhất trong ma trận
float lonnhat(float a[MAX][MAX], int m, int n)
{
    float amax = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > amax)
                amax = a[i][j];
    return amax;
}

// Hàm tìm giá trị lớn phần tử lớn nhất trong ma trận
void vitrimax(float a[MAX][MAX], int m, int n)
{
    int imax = 0, jmax = 0;
    float amax = lonnhat(a, m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == amax)
                cout << "[" << i << "][" << j << "]" << " ";
}

int main()
{
    float a[MAX][MAX];
    int m, n;
    cin >> m >> n;
    nhapmatran(a, m, n);
    xuatmatran(a, m, n);
    cout << '\n' << lonnhat(a, m, n) << '\n';
    vitrimax(a, m, n);
    return 0;
}

/*
4 3
5   1   -6
2   10   -30
-3   -1   4
2   -7   10
*/
