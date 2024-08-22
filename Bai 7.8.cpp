// Bài 7.8
#include <iostream>
using namespace std;

int main()
{
    float *p1, *p2, i, j, tmp;
    /* Các con trỏ phải được khởi tạo trước khi sử dụng
    để lưu trữ các giá trị đầu vào. */
    p1 = &i;
    p2 = &j;
    cin >> *p1 >> *p2;
    tmp = *p2;
    *p2 = *p1;
    *p1 = tmp;
    if((*p1 - *p2) > 0)   cout << *p1 - *p2 << '\n';
    else    cout << -(*p1 - *p2) << '\n';
    return 0;
}
