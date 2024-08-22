//Bài 6.38
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    char x;
    getline(cin, s);
    cin >> x;
    int n = s.size();
    for(int i = 0; i < n; i++)
        if(s[i] == x)
            cout << i + 1 << ' ';
    return 0;
}
