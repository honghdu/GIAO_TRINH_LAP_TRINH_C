//Bài 5.10
#include <iostream>

using namespace std;

// Hàm tìm chữ số nhỏ nhất của số n
int chusomin(long long n)
{
    int cs, m = 10;
    while(n > 0)
    {
        cs = n % 10;
        n /= 10;
        if(cs < m)
            m = cs;
    }
    return m;
}

int main()
{
    int t;
    long long n;
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> n;
        cout << chusomin(n) << '\n';
    }
    return 0;
}
