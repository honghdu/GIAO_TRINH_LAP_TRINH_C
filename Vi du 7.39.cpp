//Ví dụ 7.39:
#include <iostream>
using namespace std;

void hoandoi(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "Truoc khi hoan doi: a = " << a << ", b = " << b;
    hoandoi(&a, &b);
    cout << "\nSau khi hoan doi: a = " << a << ", b = " << b;
    return 0;
}

