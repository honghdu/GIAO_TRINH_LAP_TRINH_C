//Ví dụ 5.17:
#include <iostream>
using namespace std;

double s(int n)
{
	if(n == 1)	return 1.0;
	return s(n-1) + (double) 1/(n*n);
}

int main()
{
    int n;
    cin >> n;
    cout << s(n);
}
