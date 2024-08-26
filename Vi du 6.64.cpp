//Ví dụ 6.64:
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s = "Hello";
    // Duyệt qua chỉ số
    for(int i = 0; i < (int)s.size(); i++)
        cout << s[i] << ' ';
    cout << endl;
    // Duyệt phạm vi cấu trúc lặp for each
    for(char x : s)
        cout << x << ' ';
    cout << endl;
    // Duyệt qua biến iterator
    for(string::iterator it = s.begin(); it != s.end(); ++it)
        cout << *it << ' ';
    return 0;
}
