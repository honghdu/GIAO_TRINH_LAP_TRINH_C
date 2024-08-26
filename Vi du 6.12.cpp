//Ví dụ 6.12:
#include <iostream>
using namespace std;

#define MAX 10000

void vt(int a[], int n, int x)
{
    int d = 0;
    for(int i = 0; i < n; i++)
        if(a[i] == x)
        {
            	cout << i << " ";
				d++;
        }
    if(d == 0)  cout << -1;
}

int main()
{
    int a[MAX], n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vt(a, n, x);
    return 0;
}
