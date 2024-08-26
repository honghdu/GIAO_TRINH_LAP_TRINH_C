//Ví dụ 6.13:
#include <iostream>
using namespace std;

#define MAX 10000

int vtmin(int a[], int n)
{
		int vtm = 0;
		for(int i = 1; i < n; i++)
            if(a[i] < a[vtm])		vtm = i;
    	return vtm;
}

int vtmax(int a[], int n)
{
		int vtm = 0;
		for(int i = 1; i < n; i++)
        if(a[i] > a[vtm])	vtm = i;
    	return vtm;
}

int main()
{
    int a[MAX], n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << vtmin(a, n) << '\n';
    cout << vtmax(a, n) << '\n';
    return 0;
}
