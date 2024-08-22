// Bài 7.1
#include <iostream>
using namespace std;

int main()
{
    int *p, i = 10, j = 20, k = 30;
    p = &i;
    *p = 40;
    p = &j;
    *p += i;
    p = &k;
    *p += i + j;
    cout << i << ' ' << j << ' ' << k << '\n';
    return 0;
}

/*
Gợi ý trả lời:
Lệnh: int *p, i = 10, j = 20, k = 30;
    là khai báo con trỏ p
    và i, j, k đồng thời gán giá trị cho chúng
Lệnh: p = &i; cho con trỏ p trỏ đến địa chỉ của biến i
Lệnh: *p = 40; gán giá trị cho ô địa chỉ
    mà p trỏ đến là 40, có nghĩa là i = 40
Lệnh: p = &j; cho con trỏ p trỏ đến địa chỉ của biến j
*p += i; tăng giá trị cho ô địa chỉ mà p trỏ đến
    1 lượng là i = 40, có nghĩa là j = 20 + 40 = 60
Lệnh: p = &k; cho con trỏ p trỏ đến địa chỉ của biến k
Lệnh: *p += i + j; tăng giá trị cho ô địa chỉ mà p trỏ đến
    1 lượng là i + j = 40 + 60, có nghĩa là k = 30 + 60 = 130
=> Vì vậy chương trình hiển thị: 40 60 130
*/
