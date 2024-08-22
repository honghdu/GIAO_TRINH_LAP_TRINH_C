//Bài 6.39
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        if(s[0] >= 'a' && s[0] <= 'z')
        // if(isdigit(s[0])
            s[0] -= 32;
        cout << s << ' ';
    }
    return 0;
}
