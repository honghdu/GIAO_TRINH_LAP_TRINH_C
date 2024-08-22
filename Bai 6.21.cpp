//Bài 6.21
/*
Ý tưởng:
-	Sử dụng một mảng d để đánh dấu loại xe,
    trong đó: chỉ số của mảng thể hiện mã xe.
-	Đầu tiên tất cả các phần tử mảng (các mã xe)
    đều có giá trị 0 (quy ước là chưa có mã xe đó).
    Mỗi khi có một xe đi qua thì sẽ đặt lại
    mã xe đó bằng 1 (quy ước là đã có mã xe đó).
-	Mỗi khi có một mã xe thì kiểm tra: nếu mã đó chưa có thì đếm.
Ví dụ:
Input	                    Output
2 7 2 5 4 5 2 5 4 5 5	    4
Tương ứng với input trên thì hình ảnh mảng d như sau:
Mã số xe (i)	0	1	2	3	4	5	6	7	8	9	…	999	1000
Đánh dấu (d[i])	0	0	1	0	1	1	0	1	0	0	0	0	0
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
        if(d[x] == 0) s++;
        d[x]= 1;
    }
    cout << s;
    return 0;
}


