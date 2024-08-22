//Bài 5.13
/*
// Cách 1: dùng hàm kiểm tra số nguyên tố (bài này cho phép)
// vì độ phức tạp O(n*căn bậc 2 của n)
// Tham khảo: https://wiki.vnoi.info/algo/algebra/primality_check.md
#include<iostream>
using namespace std;

bool snt(int n)
{
    if(n < 2)   return false;
    if (n == 2 || n == 3)   return true;
    if (n % 2 == 0 || n % 3 == 0)   return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main ()
{
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
        if(snt(i))  cout << i << " ";
}
*/

// Cách 2: dùng sàng nguyên tố (tốt hơn)
// Tham khảo: https://wiki.vnoi.info/algo/algebra/prime_sieve.md
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
    int a, b;
    cin >> a >> b;
    sang(b);
    for(int i = a; i <= b; i++)
        if(p[i])  cout << i << " ";
}
