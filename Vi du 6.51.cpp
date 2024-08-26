//Ví dụ 6.51:
#include<iostream>
#include<cstring>
using namespace std;

// Xóa kí tự tại vị trí k
void xoakytu(char s[], int k)
{
	int n=strlen(s);
	for(int i = k; i < n-1; i++)
		s[i] = s[i+1];
	s[n-1] = '\0';
}

// Chuẩn hoá xâu
void chuanhoa(char s[])
{
    for(int i = strlen(s)- 1; i > 0; i--)
        if(s[i] == ' ' && s[i-1] == ' ')	xoakytu(s,i);
    int n = strlen(s);
    if(s[0] == ' ')	xoakytu(s, 0);
    if(s[n-1] == ' ')	xoakytu(s, n-1);
    if(s[0] >= 'a' && s[0] <= 'z')	s[0] = s[0] - 32;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z')
            s[i+1] = s[i+1] - 32;
        if(s[i] != ' ' && s[i+1] >= 'A' && s[i+1] <= 'Z')
            s[i+1] = s[i+1] + 32;
    }
}

int main()
{
    char s[50];
    gets(s);
    chuanhoa(s);
    cout << s;
    return 0;
}

/*
// Cách 2: Sử dụng các hàm hỗ trợ
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50], s1[50] = "";
    gets(s);
    char *token = strtok(s, " "); // Tách các từ
    while(token != NULL)
    {
        strlwr(token); // Đổi từ thành thường
        // Đổi chữ cái đầu thành hoa
        token[0] = toupper(token[0]);
        strcat(s1, token); // Nối từ vào chuỗi kết quả s1
        token = strtok(NULL, " ");
        // Nếu chưa phải từ cuối thì nối thêm dấu cách
        if(token != NULL)   strcat(s1, " ");
    }
    strcpy(s, s1);
    cout << s;
    return 0;
}
*/
