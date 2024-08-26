//Ví dụ 6.10:
#include <iostream>
using namespace std;

#define MAX 10000

int vtdau(int a[], int n, int x)
{
	 	for(int i = 0; i < n; i++)
			if(a[i] == x)	return i;
	 	return -1;
}

int main()
{
    int a[MAX], n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << vtdau(a, n, x);
    return 0;
}
