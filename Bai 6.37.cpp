//Bài 6.37
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    for(int i = 0; i < n; i++)
        if(s[i] >= '0' && s[i] <= '9')
        // if(s[i] >= 48 && s[i] <= 57)
        // if(isdigit(s[i])
        {
            cout << "Yes";
            return 0;
        }
    cout << "No";
    return 0;
}
