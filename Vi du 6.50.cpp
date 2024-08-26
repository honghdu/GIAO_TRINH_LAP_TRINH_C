//Ví dụ 6.50:
#include <iostream>
using namespace std;

int main()
{
      int n;
	cin >> n;
	while(n--)
      {
		char s[21];
		cin >> s;
		cout << char(s[0] - 32);
	}
	return 0;
}
