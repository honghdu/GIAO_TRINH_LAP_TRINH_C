// Bài 7.2
#include <iostream>
using namespace std;

int main()
{
    int *p, j = 1, a[] = {j, j+1, j+2, j+3};
    for(int i = 0; i < 3; i++)
    {
        p = a+i;
        cout << a[*p] << ' ';
    }
    return 0;
}


/*
Gợi ý trả lời:
Lệnh: int *p, j = 1, a[] = {j, j+1, j+2, j+3};
    là khai báo con trỏ p
    khai báo và gán giá trị cho biến j = 1
    khai báo mảng a gồm 4 phần tử
    có giá trị lần lượt là: 1 2 3 4
Lệnh: for(int i = 0; i < 3; i++)
    duyệt các phần tử từ vị trí 0 đến 2 trong mảng a
Lệnh: p = a+i; cho con trỏ p trỏ đến ô địa chỉ của phần tử a[i]
Lệnh: cout << a[*p] << ' '; in ra giá trị của phần tử a ở vị trí a[i]
=> Vì vậy chương trình hiển thị: 2 3 4
*/
