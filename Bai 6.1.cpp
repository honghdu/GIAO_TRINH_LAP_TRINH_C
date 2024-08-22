//Bài 6.1
#include<iostream>

using namespace std;

int main()
{
    int i, s, a[] = {5, 6, 7, 8, 9};
    double b[] = {3.1, 1.9, 0.5, -4.1, -0.9};
    s = 0;
    for(i = 0; a[i] = b[i]; i++)
        s += a[i];
    cout << s << '\n';
    return 0;
}
/*
Gợi ý trả lời: Điều kiện a[i] = b[i] tương đương với (a[i] = b[i]) != 0,
nghĩa là các phần tử của b được sao chép sang các phần tử tương ứng
của a miễn là a[i] không trở thành 0. Nếu a[i] = 0 thì vòng lặp kết thúc.
Vì a có kiểu dữ liệu là int nên chỉ phần nguyên của phần tử b sẽ được
lưu trữ vào phần tử a tương ứng. Do đó, khi giá trị 0,5 được sao chép,
a[2] = 0 và vòng lặp kết thúc. Giá trị của a[3] và a[4] không bị thay đổi.
Kết quả là chương trình xuất ra tổng của a[0] và a[1], tức là 3 + 1 = 4.
*/
