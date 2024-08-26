//Ví dụ 5.7:
#include <iostream>
using namespace std;

void test();

int main()
{
    cout << "\nGoi lan 1: "; test();
    cout << "\nGoi lan 2: "; test();
    return 0;
}

void test()
{
    for(int i = 0; i < 2; i++)
        cout << "Xin chao, ";
}
