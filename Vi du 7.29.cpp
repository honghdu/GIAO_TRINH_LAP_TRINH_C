//Ví dụ 7.29:
#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    float a[MAX][MAX], *p;
    int m, n, i, j;
    p = (float*)a;
    cout << "Nhap so dong, so cot cua ma tran: ";
    cin >> m >> n;

    cout << "Nhap ma tran:\n";
    for (i = 0; i < m * n; i++)
        cin >> *(p+i); // Nhập ma trận như dãy mxn phần tử

    cout << "\nMa tran vua nhap:\n";
    for(i = 0; i < m; i++) // In ma trận
    {
        for(j = 0; j < n; j++)
            cout << *(p + i * n + j) << '\t';
        cout << endl;
    }
    return 0;
}

/*
4 3
5   1   -6
2   10   -30
-3   -1   4
2   -7   10
*/
