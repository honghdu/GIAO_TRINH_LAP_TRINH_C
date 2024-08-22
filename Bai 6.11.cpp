//Bài 6.11
/*
-	Sử dụng một mảng a gồm 105 phần tử để lưu các phần tử của dãy A.
-	Sử dụng một mảng f gồm 105 phần tử,
    trong đó phần tử thứ i của mảng f lưu trữ
    các giá trị lớn nhất của các phần tử của mảng a
    từ vị trí 1 đến vị trí i.
-	Mỗi khi nhập một số n chỉ cần in f[n]
    tương ứng sẽ tiết kiệm được rất nhiều thời gian.
*/
#include <iostream>

using namespace std;

const int MAX = 1e5 + 1;
int a[MAX],f[MAX], i, t, n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    a[0] = 0;
    a[1] = 1;
    f[0] = 0;
    for (i = 1; i <= MAX/2; i++)
    {
         a[2 * i] = a[i];
         a[i * 2 + 1] = a[i] + a[i+1];
    }
    for (i = 1; i <= MAX; i++)
    {
        if(f[i-1] > a[i])   f[i] = f[i-1];
        else f[i] = a[i];
    }
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << f[n] << '\n';
    }
    return 0;
}
