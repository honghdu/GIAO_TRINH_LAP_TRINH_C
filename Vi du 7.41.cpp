//Ví dụ 7.41:
#include <iostream>
#include <cstring>
using namespace std;

// Hàm hoán đổi hai kí tự x và y
void hoandoi(char *x, char *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

// Hàm đảo ngược xâu
void daonguoc(char* s)
{
    int n = strlen(s); // Lấy độ dài của xâu
    for (int i = 0; i < n / 2; ++i)
        hoandoi(&s[i], &s[n - i -1]);
}

int main()
{
    char s[10] = "Xin chao";
    daonguoc(s);
    cout << s;
    return 0;
}
