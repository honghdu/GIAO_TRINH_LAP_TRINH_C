//Bài 6.36
/*
#include <iostream>
using namespace std;

int main()
{
    char tmp[100], s1[100] = "Let see";
    char s2[100] = "Is everything OK?";
    tmp = s1;
    s1 = s2;
    s2 = tmp;
    cout << s1 << ' ' << s2 << '\n';
    return 0;
}
/*

/*
Gợi ý trả lời:
Vì xâu kí tự không cho phép
gán trực tiếp nên lệnh tmp = s1; là sai cú pháp.
Tương tự: các lệnh s1 = s2; và s2 = tmp;
cũng sai cú pháp, do đó chương trình sẽ
xảy ra lỗi biên dịch.
=> Cần chuyển lần lượt các phần tử
từ mảng kí tự này sang mảng kí tự kia
*/

#include <iostream>
#include <cstring> // strlen()
using namespace std;

int main()
{
    char tmp[100], s1[100] = "Let see";
    char s2[100] = "Is everything OK?";
    int n1, n2;
    n1 = strlen(s1);
    n2 = strlen(s2);
    for(int i = 0; i < n1; i++)
        tmp[i] = s1[i];
    for(int i = 0; i < n2; i++)
        s1[i] = s1[i];
    for(int i = 0; i < n1; i++)
        s2[i] = tmp[i];
    cout << s1 << ' ' << s2 << '\n';
    return 0;
}
