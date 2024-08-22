//Bài 6.12
/*
Ý tưởng:
1. Kiểm tra phần tử đầu tiên của dãy:
    nếu nó lớn hơn x thì chèn x vào vị trí đầu tiên của dãy.
2. Kiểm tra phần tử cuối cùng của dãy:
    nếu nó nhỏ hơn x thì chèn x vào vị trí sau
    phần tử cuối cùng của dãy.
3. Duyệt từ phần tử đầu đến vị trí gần cuối cùng.
    - Nếu có phần tử nào bằng x thì đưa ra vị trí của nó và kết thúc.
    - Nếu nó lớn hơn x và nhỏ hơn phần tử sau nó thì chèn x vào
    vị trí sau vị trí phần tử đang xét và dừng duyệt
4. Xuất ra màn hình dãy sau khi chèn và kết thúc.
*/
#include <iostream>
using namespace std;

const int MAX = 100001;
float a[MAX], x;
int n;

// Hàm chèn số x vào vị trí k trong mảng
void chen(float a[MAX], int &n, float x, int k)
{
    for(int i = n; i >= k; i--)
		a[i+1]=a[i];
	a[k]= x;
	n++;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    if(a[1] > x)   chen(a, n, x, 1);
    else
        if(a[n] < x)   chen(a, n, x, n + 1);
        else
        {
            for(int i = 1; i <= n; i++)
                if(a[i] == x)
                {
                    cout << i;
                    return 0;
                }
                else
                    if(a[i] < x && a[i+1] > x)
                    {
                        chen(a, n, x, i + 1);
                        break;
                    }
        }
     for(int i = 1; i <= n; i++)
        cout << a[i] << ' ';
}

