//Ví dụ 6.31:
#include<iostream>
#include<iomanip>
using namespace std;

#define MAX 100

// Hàm nhập ma trận số nguyên a có m dòng, n cột
void nhapmatran(int a[MAX][MAX], int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

// Hàm xuất ma trận số nguyên a có m dòng, n cột
void xuatmatran(int a[MAX][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
            cout << setw(8) << a[i][j];
        cout << '\n';
    }
}

// Hàm kiểm tra xem phần tử x có trong ma trận hay không?
bool timkiem(int a[MAX][MAX], int m, int n, int x)
{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] == x)	return 1;
		return 0;
}

int main()
{
    int a[MAX][MAX], m, n, x;
    cin >> m >> n >> x;
    nhapmatran(a, m, n);
    xuatmatran(a, m, n);
    if(timkiem(a, m, n, x))    cout << "YES";
    else    cout << "NO";
    return 0;
}

/*
4 3 20
-5  1   6
2   7   10
-3  1   -4
2   7   10
*/
