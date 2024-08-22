// Bài 7.7
#include <iostream>
using namespace std;

int main()
{
    int *p, a[2][5] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for(p = a[1] + 2; p < a[1] + 5; p++)
        *p = 0;
}

/*
Gợi ý trả lời:
Lệnh p = a [1]+2;
    làm cho ptr trỏ đến địa chỉ của a[1][2].
    Vì *p bằng a[1][2], nên lệnh *p = 0;
    tương đương với a[1][2] = 0;
Lệnh p++; làm cho p trỏ đến phần tử tiếp theo
    của hàng hiện tại. Ví dụ: khi p được tăng lần đầu tiên,
    nó trỏ đến địa chỉ của a[1][3]
    và lần tăng tiếp theo làm cho nó trỏ đến
    địa chỉ của a[1][4]. Do đó, mã biến số 0
    thành ba phần tử cuối cùng của hàng thứ hai.

*/
