//Bài 6.43
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    for(int i = n-1; i >= 0; i--)
       cout << s[i];
    return 0;
}
