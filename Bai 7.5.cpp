// Bài 7.5
#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2, i = 10, j = 20;
    p1 = &i;
    p2 = &j;
    p2 = p1;
    *p1 = *p1 + *p2;
    *p2 *= 2;
    cout << *p1 + *p2 << '\n';
    return 0;
}

/*
Gợi ý trả lời:
Lệnh p2 = p1; làm cho p2 trỏ đến cùng một địa chỉ
    mà p1 trỏ tới, tức là địa chỉ của i.
    Do đó, *p2 = i. Vì cả hai con trỏ đều trỏ đến
    địa chỉ của i, nên lệnh *p1 = *p1 + *p2;
    tương đương với i = i + i = 10 + 10 = 20.
Tương tự, câu lệnh *p2 *= 2; tương đương với
    *p2 = 2*(*p2); nghĩa là, i = 2 * i = 2 * 20 = 40.
    Kết quả là chương trình hiển thị kết quả của
    *p1 + *p2 = i + i = 40 + 40, tức là 80.
*/
