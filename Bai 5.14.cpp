//Bài 5.14
// Cách dùng hàm kiểm tra số nguyên tố
// như bài 5.13 không đảm bảo vì độ phức tạp O(n*căn bậc 2 của n)
// Phải dùng sàng nguyên tố
// Tham khảo:
// https://wiki.vnoi.info/algo/algebra/primality_check.md
// https://wiki.vnoi.info/algo/algebra/prime_sieve.md
#include<iostream>
using namespace std;

bool p[10005];

void sang(int n)
{
    for (int i = 2; i <= n; i++)
        p[i] = true;
    for (int i = 2; i * i <= n; i++)
        if (p[i])
            for (int j = i * i; j <= n; j += i)
                p[j] = false;
}

int main ()
{
    int a, b, d = 0;
    cin >> a >> b;
    sang(b);
    for(int i = a; i <= b; i++)
        if(p[i])  d++;
    cout << d;
}
