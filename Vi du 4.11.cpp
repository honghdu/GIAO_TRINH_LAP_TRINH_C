//Ví dụ 4.11:
#include<iostream>
using namespace std;
int main ()
{
    char c = 'a';
    while (c <= 'z')
    {
        cout << c << ' ';
        c++;
    }
    cout << '\n';
    c = 'Z';
    while (c >= 'A')
    {
        cout << c << ' ';
        c--;
    }
    return 0;
}

