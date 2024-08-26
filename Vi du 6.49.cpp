//Ví dụ 6.49:
#include <iostream>
#include <cstring> // Thư viện chứa các hàm cho mảng kí tự char
using namespace std;

bool doixung1(char s[]) // Cách 1
{
    int l = 0, r = strlen(s) - 1;
    while(l <= r)
    {
        if(s[l] != s[r])   return 0;
        ++l;
        --r;
    }
    return 1;
}

bool doixung2(char s[]) // Cách 2
{
    int n = strlen(s);
    for(int i = 0; i < n / 2; i++)
        if(s[i] != s[n - i - 1])
            return 0;
    return 1;
}

int main()
{
    char s[1000], s1[1000];
    gets(s);
    if(doixung1(s)) cout << "\nXau doi xung";
    else    cout << "\nXau khong doi xung";
    if(doixung2(s)) cout << "\nXau doi xung";
    else    cout << "\nXau khong doi xung";
    strcpy(s1, s);
    strrev(s); // Cách 3
    if(strcmp(s, s1) == 0)  cout << "\nXau doi xung";
    else    cout << "\nXau khong doi xung";
    return 0;
}
