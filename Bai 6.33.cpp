//Bài 6.33
#include<iostream>
using namespace std;

#define MAX 100

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int a[MAX][MAX], m, n;
	cin >> m >> n;
    int trai = 1, tren = 1, phai = n, duoi = m, dem = 0, soluong = m*n;
    while (dem < soluong)
    {
        for (int i = trai ; i <= phai ; i++)
            a[trai][i] = ++dem;
        tren++;
        for(int i = tren ; i <= duoi ; i++)
            a[i][phai] = ++dem;
        phai--;
        for (int i = phai ; i >= trai ; i--)
            a[duoi][i] = ++dem;
        duoi--;
        for (int i = duoi ; i >= tren ; i--)
            a[i][trai] = ++dem;
        trai++;
    }
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
		cout << endl;
	}
    return 0;
}
