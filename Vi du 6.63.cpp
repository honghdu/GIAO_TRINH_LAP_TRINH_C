//Ví dụ 6.63:
#include<iostream>
#include<string.h>
using namespace std;

//Hàm đếm số lượng ký tự c trong xâu s
int demsokytu(string s, char c)
{
    int n = s.size();
    int dem = 0;
    for(int i = 0; i < n; i++)
        if(s[i] == c)	dem++;
    return dem;
}

int main()
{
    string s;
    char c;
    getline(cin, s);
    cin >> c;
    cout << s.size() << ' ' << demsokytu(s, c);
    return 0;
}
