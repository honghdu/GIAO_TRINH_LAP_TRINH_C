//Bài 9.3:
#include <bits/stdc++.h>
using namespace std;

#define MAX 300

// Chèn số x vào vị trí k trong dãy
void chenxk(int *a, int &n, int x, int k)
{
	for(int i = n; i > k; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
}

/* Kiểm tra xem số x có trong dãy tăng dần không
- Nếu có in ra vị trí xuất hiện của số x
- Nếu không thì chèn số x vào dãy, sao cho
 không làm mất tính tăng dần của dãy, (trả về -1)
 */
int chenxtang(int *a, int &n, int x)
{
	for(int i = 0; i < n; i++)
		if(a[i] == x)
			return i;

     if(a[n - 1] < x)    chenxk(a, n, x, n);
	if(a[0] > x)	chenxk(a, n, x, 0);
	for(int i = n - 1; i > 0; i--)
		if(a[i] > x && a[i - 1] < x)
			chenxk(a, n, x, i);
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if(fopen("BAI3.INP", "r"))
    {
        freopen("BAI3.INP", "r", stdin);
        freopen("BAI3.OUT", "w", stdout);
    }
    int a[MAX], n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    chenxtang(a, n, x);
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}
