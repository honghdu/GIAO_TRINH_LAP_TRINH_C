//Bài 6.42
#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int main()
{
    string s[100];
    int n = 0;
    do
    {
        n++;
        cin >> s[n];
    }while(s[n] != ".");
    n--;
    sort(s + 1, s + n + 1);
    for(int i = 1; i <= n ; i++)
       cout << s[i] << '\n';
    return 0;
}
