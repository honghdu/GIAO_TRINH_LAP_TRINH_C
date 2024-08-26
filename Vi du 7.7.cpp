//Ví dụ 7.7:
#include <iostream>
using namespace std;

int main()
{
    int *p, a = 10;
    p = &a;
    cout << *p << ' ';
    *p = 20;
    cout << a;
    return 0;
}

