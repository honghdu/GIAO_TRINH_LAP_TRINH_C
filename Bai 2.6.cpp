#include<iostream>
using namespace std;

int main()
{
    int a = 4, b = 6, c;
    a = (a <= (b - 2)) + (b > (a + 1));
    b = (a == 2) > ((b - 3 ) < 3);
    c = (b != 0);
    cout << a << ' ' << b << ' ' << c << '\n';
}

/*
Vì a = 4 và b = 6 nên a = (4 <= (6-2 ) + ( 6 > (4+1) = 2 . Dó đó (a == 2) là đúng.
Vì b = 6 , nên ( (b - 3) < 3 ) là sai. Vì vậy, b = (1 > 0) = 1.
Vì b = 1 nên c = 1.
Kết quả chương trình in ra: 2 1 1
*/
