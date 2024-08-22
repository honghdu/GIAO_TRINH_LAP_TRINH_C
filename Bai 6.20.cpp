//Bài 6.20
/*
Ý tưởng:
-	Sử dụng một mảng d không quá 100 phần tử
    (vì số hiệu màu tất có giá trị không quá 100),
    mỗi phần tử của nó có chỉ số là số hiệu màu của chiếc tất,
    giá trị của nó là số lượng chiếc tất có màu tương ứng với số hiệu đó.
-	Mỗi khi nhập vào số hiệu màu của một chiếc tất
    thì đếm luôn số lượng chiếc tất đó đến thời điểm hiện tại.
    Như vậy, khi quá trình nhập kết thúc thì mảng d đã chứa
    số lượng chiếc tất của số hiệu màu tương ứng.
-	Số lượng đôi tất được ghép chính là tổng của
    tất cả các đôi tất cùng màu.
-	Với input trên thì mảng d có hình ảnh như sau:
Số hiệu màu (i)	    0	1	2	3	4	5	6	7	8	9	…	99	100
Số chiếc tất (d[i])	0	3	3	1	0	0	1	0	0	0	0	0	0
*/
#include <iostream>
using namespace std;

int d[1001], x, s = 0;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    while(cin >> x)
    {
        d[x]++;
    }
    for(int i = 1; i <= 1000; i++)
        s += d[i] / 2;
    cout << s;
}



