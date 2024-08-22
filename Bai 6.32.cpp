//Bài 6.32
#include<iostream>
using namespace std;

#define MAX 100

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a[MAX][MAX], m, n, t = 1;
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
		if (i % 2 == 0)
			for (int j = 1; j <= n; j++)
            {
				a[i][j] = t;
				t++;
			}
		else
			for (int j = n; j >= 1; j--)
			{
				a[i][j] = t;
				t++;
			}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
		cout << endl;
	}
    return 0;
}
