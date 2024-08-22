//Bài 5.12
#include <iostream>
using namespace std;

// Nếu i là ước của n thì n/i cũng là ước của n
// Giả sử i <= n/i tương đương i * i <= n
// Nếu i == n/i tương đương i * i == n thì chỉ tính 1 ước là i

bool sohoanhao(int n)
{
    long long s = 1;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
        {
             s += i;
            if(i * i != n)  s += n/i;
        }
    if(s == n) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    if(sohoanhao(n))  cout << "YES";
    else   cout << "NO";
    return 0;
}
