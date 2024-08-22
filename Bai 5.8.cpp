//Bài 5.8
#include <iostream>

using namespace std;

// Hàm đếm số chữ số chẵn của số n
int demchusochan(long long n)
{
    int cs, d = 0;
    while(n > 0)
    {
        cs = n % 10;
        n /= 10;
        if(cs % 2 == 0)
            d++;
    }
    return d;
}

int main()
{
    long long n;
    cin >> n;
    cout << demchusochan(n);
    return 0;
}
