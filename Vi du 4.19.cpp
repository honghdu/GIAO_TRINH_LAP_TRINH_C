//Ví dụ 4.19:
#include <iostream>
using namespace std;

int main ()
{
    int a = 10;
    while (a < 20)
    {
        cout << a << " ";
        a++;
        if (a > 15)  break; // Kết thúc cấu trúc lặp khi a > 15
    }
    return 0;
}

