//Ví dụ 7.11:
#include <iostream>
using namespace std;

int main()
{
    float a[100], *p, *q ;
    p = a ; // p trỏ đến mảng a (tức p trỏ đến a[0])
    q = &a[3] ; // q trỏ đến phần tử thứ 3 (a[3])
    cout << (p < q) ; // 1
    cout << (p + 3 == q) ; // 1
    cout << (p > q - 1) ; // 0
    cout << (p >= q - 2) ; // 0
    return 0;
}

