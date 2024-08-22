//Bài 6.10
#include <iostream>
using namespace std;

const int MAX = 1005;
int a[MAX], n;

// Hàm sắp xếp mảng a có n phần tử giảm dần
void sxgiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
		 if (a[i] < a[j])
			swap(a[i], a[j]);
}

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a[MAX], n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sxgiam(a, n);
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}
