//Ví dụ 5.10:
#include<iostream>
using namespace std;

void hoandoi(int &x, int &y)
{
    int tam = x;
    x = y;
    y = tam;
}

int main()
{
    int a = 5, b = 20;
    cout << "Ban dau: a = " << a << ", b = " << b;
    hoandoi(a, b);
    cout << "\nSau hoan doi: a = " << a << ", b = " << b;
}

