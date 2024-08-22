// Bài 7.3
#include <iostream>
using namespace std;

int main()
{
    int *p[3], a[4] = {10, 20, 30, 40};
    for(int i = 0; i < 3; i++)
    {
        p[i] = &a[i]+1;
        cout << *p[i] << ' ';
    }
    return 0;
}

/*
Lệnh p[i] = &a[i] + 1; làm cho mỗi phần tử
của p trỏ đến địa chỉ của phần tử tiếp theo sau a[i].
Do đó, khi i là 0, p[0] trỏ đến a[1],
khi nó là 1, p[1] trỏ đến a[2] và khi nó là 2,
p[2] trỏ đến a[3].
Vì vậy chương trình hiển thị: 20 30 40
*/
