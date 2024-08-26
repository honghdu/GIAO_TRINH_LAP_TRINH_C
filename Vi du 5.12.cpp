//Ví dụ 5.12:
#include<iostream>
using namespace std;

void test(int i, int j);

int main()
{
    int i = 100, j = 100;
    test(i, j);
    cout << i << ' ' << j << '\n';
    return 0;
}

void test(int i, int j)
{
    int a = 2000;
    i = j = a;
}
