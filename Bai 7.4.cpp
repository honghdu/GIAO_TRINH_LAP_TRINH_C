// Bài 7.4
#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2, *p3, i = 0, j = 1, k = 2;
    p1 = &i;
    i = *p1 ? 3 : 4;
    p2 = &j;
    j = *p2 + *p1;
    p3 = &k;
    k = *p3 + *p2;
    cout << *p1 << ' ' << *p2 << ' ' << *p3 << '\n';
    return 0;
}


/*
Vì p1 trỏ đến địa chỉ của i nên biểu thức:
    *p1 = i ? 3 : 4; tương đương với
    i = i ? 3 : 4; và i = 0 nên nó trở thành 4.
Vì p2 trỏ đến địa chỉ của j nên *p2 = j
    nghĩa là *p2 = 1. Do đó, j = *p2 + *p1 = 1 + 4 = 5.
Vì p3 trỏ đến địa chỉ của k nên *p3 = k
    nghĩa là *p3 = 2. Do đó, k = *p3 + *p2 = 2 + 5 = 7.
Vì các giá trị của *p1 , *p2 và *p3 lần lượt bằng i, j
    và k, nên chương trình hiển thị: 4 5 7

*/
