//Ví dụ 5.18:
#include <iostream>
using namespace std;

long long fibo(int n)
{
	if (n == 1 || n == 2) 	return 1; // Điều kiện dừng
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << fibo(i) << ' ';
}
