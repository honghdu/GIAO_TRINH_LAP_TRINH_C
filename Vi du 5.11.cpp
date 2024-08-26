//Ví dụ 5.11:
#include<iostream>
using namespace std;

void test();

int main()
{
    int i = 10;
    test();
    cout << "Trong main = " << i << '\n';
    return 0;
}

void test()
{
    int i = 200;
    cout << "Trong test = " << i << '\n';
}
