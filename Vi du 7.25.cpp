//Ví dụ 7.25:
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5}, *p,  i;
    p = a;
    for (i = 0; i < 5; i++)
        cout << *(p + i) << ' ';
    cout << '\n';
    for (p = a; p <= a + 4; p++)
        cout << *p << ' ';
    return 0;
}

