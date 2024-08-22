//Bài 6.41
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size(), t = 0;
    for(int i = 0; i < n ; i++)
        if(s[i] >= '0' && s[i] <= '9')
            t += (int)s[i] - 48;
    cout << t;
    return 0;
}
