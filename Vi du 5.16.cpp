//Ví dụ 5.16:
#include <iostream>
using namespace std;

long long gt(int n)
{
     long long kq = 1;
	for (int i = 1; i <= n; i++)
        kq *= i;
	return kq;
}

long long giaithua(int n)
{
	if (n == 1)	return 1;
	return n * giaithua(n-1);
}


int main()
{
    int n;
    cin >> n;
    cout << gt(n) << '\n';
    cout << giaithua(n);
}
