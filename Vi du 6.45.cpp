//Ví dụ 6.45:
#include<iostream>
using namespace std;

int main()
{
   	char s1[100], s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100, 'e');
	cout << s1 << endl << s2;
    return 0;
}
