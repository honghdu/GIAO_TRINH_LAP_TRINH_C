#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    i = i + i;
    i = 2 * i;
    cout << i + i << ' ' << i << '\n' ;
    return 0;
}
/*
Gợi ý trả lời: Ban đầu i = 100 nên i = i + i = 100 + 100 = 200
và sau đó i = 2 * i = 2 * 200 = 400.
Vì vậy chương trình in ra: 800 400
*/
