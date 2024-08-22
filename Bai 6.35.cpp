//Bài 6.35
#include <iostream>
using namespace std;

int main()
{
    char s[] = "Right'\0'Wrong";
    cout << s << '\n';
    return 0;
}

/*
Gợi ý trả lời:
Vì '\0' là kí tự kết thúc xâu
nên việc gán giá trị cho chuỗi sẽ kết thúc
khi gặp kí tự này. Do đó, chương trình
chỉ in ra: Right'
*/
