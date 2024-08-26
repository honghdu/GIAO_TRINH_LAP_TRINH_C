//Ví dụ 6.32:
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

// Hàm kiểm tra số n có phải là số nguyên tố hay không?
bool songuyento(int n)
{
    if(n < 2)	return 0;
    for(int i = 2; i * i <= n; i++)
	  if(n%i == 0)   return 0;
    return 1;
}

// Hàm kiểm tra xem phần tử x có trong ma trận hay không?
bool toannguyento(int a[MAX][MAX], int m, int n)
{
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				if(!songuyento(a[i][j]))
					return 0;
		return 1;
}

int main()
{
    int a[MAX][MAX], m, n;
    cin >> m >> n;
    nhapmatran(a, m, n);
    if(toannguyento(a, m, n))    cout << "YES";
    else    cout << "NO";
    return 0;
}

/*
4 3
5   1   6
2   7   10
3   1   4
2   7   10
*/
