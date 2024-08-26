//Ví dụ 4.6:
#include<iostream>
using namespace std;
int main ()
{
    for(char c = 'a'; c <= 'z'; c++)
        cout << c << ' ';

    cout << '\n';
    for(char c = 'Z'; c >= 'A'; c--)
        cout << c << ' ';
    return 0;
}
