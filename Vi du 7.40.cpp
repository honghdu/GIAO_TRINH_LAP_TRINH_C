//Ví dụ 7.40:
#include <iostream>
using namespace std;

// Hàm hoán đổi hai giá trị nguyên x và y
void hoandoi(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

// Hàm đảo ngược mảng
void daonguoc(int* a, int n)
{
    for (int i = 0; i < n / 2; ++i)
        hoandoi(&a[i], &a[n - i -1]);
}

// Hàm xuất các phần tử trong mảng
void xuat(int a[], int n)
{
    for(short i = 0; i < n; i++)
        cout << a[i] << ' ';
}

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5};
    int n = sizeof a / sizeof(int); // Lấy độ dài mảng ban đầu
    daonguoc(a, n);
    xuat(a, n); // In mảng kết quả
    return 0;
}

