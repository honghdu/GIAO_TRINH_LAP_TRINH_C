// Bài 7.6
#include <iostream>
using namespace std;
int main()
{
    int k = 0, b = 1, c = 2, d = 3, a[3];
    int *p[] = {&k, &b, &c, &d};
    for(int i = 0; i < 3; i++)
    a[*p[i]] = **(p+i+1);
    for(int i = 0; i < 3; i++)
        cout << a[i] << ' ';
}

/*
Gợi ý trả lời: Vì p[0] = &k, p[1] = &b,
p[2] = &c và p[3] = &d, nên các giá trị
của *p[0], * p[1], *p[2] và *p[3]
lần lượt là 0, 1, 2 và 3.
Tổng quát, p+i+1 là con trỏ trỏ tới phần tử p[i+1] .
Hãy theo dõi các lần lặp:
- Lần lặp đầu tiên (i = 0): a[*p[0]] = **(p+1) = *p[1] = b,
    nghĩa là a[0] = 1.
- Lần lặp thứ hai (i = 1): a[*p[1]] = **(p+2) = *p[2] = c,
    nghĩa là a[1] = 2.
- Lần lặp thứ ba (i = 2): a[*p[2]] = **(p+3) = *p[3] = d,
    nghĩa là a[2] = 3.
=> Vì vậy, kết quả chương trình in ra: 1 2 3
*/
