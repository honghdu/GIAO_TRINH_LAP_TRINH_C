//Bài 6.6
#include <iostream>
using namespace std;

#define MAX 10005

/* Hàm tìm vị trí phần tử chẵn đầu tiên
 Nếu không có trả về giá trị -1 */
int chanDau(long long a[], int n)
{
    for(int i = 1; i <= n; i++)
        if(a[i] % 2 == 0)
            return i;
    return -1;
}

/* Hàm tìm vị trí phần tử chẵn cuối cùng
 Nếu không có trả về giá trị -1 */
int chanCuoi(long long a[], int n)
{
    for(int i = n; i >= 1; i--)
        if(a[i] % 2 == 0)
            return i;
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long a[MAX];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << chanDau(a, n) << ' ' << chanCuoi(a, n);
    return 0;
}
