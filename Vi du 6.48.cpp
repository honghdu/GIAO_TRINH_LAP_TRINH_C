//Ví dụ 6.48:
#include <iostream>
using namespace std;

int main()
{
    char s[53];
    int i;
    for(i = 0; i < 26; i++)
    {
        s[i] = 'A' + i;
        s[26+i] = 'a' + i;
    }
    s[52] = '\0';
    cout << s << '\n';
    return 0;
}
