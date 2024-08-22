#include<iostream>
using namespace std;

int main()
{
    int i = -3, j = 2, k = 3, m = 0;
    if(i = -1)    m++;
    if(j = 4)    m++;
    if(k = 5)    m++;
    if(k = 0)    m++;
    if(i < m)    m++;
    cout << m << '\n';
    return 0;
}

/*
Toán tử = là toán tử gán không phải là toán tử bằng (==).
Vì vậy, các biểu thức điều kiện trong 4 lệnh if đầu tiên
các biến được gán các giá trị tương ứng, kết quả i = -1, j = 4, k = 0.
Các biểu thức điều kiện trong 3 lệnh if đầu đều có giá trị khác 0 (đúng)
nên m đều được tăng 1 đơn vị, kết quả m = 3
k = 0 (sai) nên m không được tăng.
Vì i = -1 và m = 3 nên biểu thức (i < m) đúng, nên m = 4.
Kết quả chương trình in ra: 4
*/
