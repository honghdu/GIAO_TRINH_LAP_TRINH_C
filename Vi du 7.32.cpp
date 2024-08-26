//Ví dụ 7.32:
#include <iostream>
using namespace std;

// Nhập ma trận a kích thước mxn (m dòng, n cột)
void nhap(int **a, int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

// Cộng hai ma trận a và b, kết quả đưa vào ma trận a
void cong(int **a, int **b, int m, int n)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            a[i][j] += b[i][j];
}

// Xuất ma trận a kích thước mxn
void xuat(int **a, int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
    int **a, **b, m, n;
    cout << "So dong: "; cin >> m;
    cout << "So cot: "; cin >> n;

    // Cấp phát bộ nhớ động cho 2 ma trận a và B
    a = new int*[m];
    b = new int*[m];
    for(int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        b[i] = new int[n];
    }

    // Nhập hai ma trận a và b
    cout << "Nhap ma tran A:\n"; nhap(a, m, n);
    cout << "Nhap ma tran B:\n"; nhap(b, m, n);

    // Cộng hai ma trận và hiển thị ma trận kết quả
    cong(a, b, m, n);
    cout << "\nTong hai ma tran A va B: \n"; xuat(a, m, n);

    // Giải phóng bộ nhớ cho hai ma tran a va b
    for(int i = 0; i < m; i++)
    {
        delete []a[i];
        delete []b[i];
    }
    delete []a;
    delete []b;
    return 0;
}

/*
4 3
5   1   -6
2   10   -30
-3   -1   4
2   -7   10

15   11   5
22   3   -3
-13   1   4
-2   -7   8
*/
