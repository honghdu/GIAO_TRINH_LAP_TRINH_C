#include <iostream>
using namespace std;

int main()
{
    bool b = 18;
    int i = b + 2;
    double d = i + 1.99;
    i = d * 2;
    cout << i / 010 << '\n';
    return 0;
}
/*
Khai báo bool b = 18; nên b = 1 và i = b + 2 = 3, d = i + 1.99 = 4.99.
Khi đó, i = d * 2 = 9 (vì i có kiểu số nguyên int)
và i / 010 có nghĩa là i / 8 = 1 (vì 010 là 8 trong hệ bát phân).
Vậy chương trình in ra: 1
*/
