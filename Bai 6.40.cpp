//Bài 6.40
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n ; i++)
    {
        if(i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        if(i % 2 != 0 && s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    cout << s;
    return 0;
}
