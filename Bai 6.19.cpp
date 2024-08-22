//Bài 6.19
/*
Ý tưởng: Việc sắp xếp lại dãy được chhia thành hai công đoạn
1. Sắp xếp các phần tử chia hết cho 3 xuống cuối mảng
2. Xem xét các phần tử chia hết cho 3 không đúng
trật tự tăng dần thì hoán đổi giá trị của chúng cho nhau.
*/
#include <iostream>
using namespace std;

#define MAX 10005

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a[MAX], n;
    cin >> n;
    // Nhập mảng
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    // Sắp xếp các phần tử chẵn xuống cuối mảng
    for (int i = n; i > 1; i--)
        for (int j = i - 1; j >= 1; j--)
		if (a[i]%2 != 0 && a[j]%2 == 0)
			swap(a[i], a[j]);
	// Sắp xếp các phần tử chẵn tăng dần
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(a[i]%2 == 0 && a[j]%2 == 0 && a[i] > a[j])
                swap(a[i], a[j]);
    // Xuất mảng
    for(int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}
