//Bài 5.9
#include <iostream>

using namespace std;

/* Hàm kiểm tra n có toàn chữ số lẻ không?
Nếu toàn chữ số lẻ trả về 1 (true), ngược lại trả về 0 (false) */
bool toanle(long long n)
{
    int cs;
    while(n > 0)
    {
        cs = n % 10;
        n /= 10;
        if(cs % 2 == 0)
            return 0;
    }
    return 1;
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
        if(toanle(n))   cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}
