//Bài 5.6
#include <iostream>

using namespace std;

// Nếu i là ước của n thì n/i cũng là ước của n
// Giả sử i <= n/i tương đương i * i <= n
// Nếu i == n/i tương đương i * i == n thì chỉ tính 1 ước là i

long long tonguoc(long long n)
{
    long long s = 0;
    for(long long i = 1; i * i <= n; i++)
        if(n % i == 0)
        {
            s += i;
            if(i * i != n)  s += n/i;
        }
    return s;
}

long long demuocle(long long n)
{
    long long d = 0, j;
    for(long long i = 1; i * i <= n; i++)
        if(n % i == 0)
        {
            if(i % 2 != 0)  d++;
            j = n / i;
            if(j != i && j % 2 != 0)  d++;
        }
    return d;
}

long long tichuochan(long long n)
{
    long long t = 1, j;
    for(long long i = 1; i * i <= n; i++)
        if(n % i == 0)
        {
            if(i % 2 == 0)  t *= i;
            j = n / i;
            if(j != i && j % 2 == 0)  t *= j;
        }
    return t;
}


int main()
{
    long long n;
    cin >> n;
    cout << tonguoc(n) << '\n';
    cout << demuocle(n) << '\n';
    cout << tichuochan(n) << '\n';
    return 0;
}
