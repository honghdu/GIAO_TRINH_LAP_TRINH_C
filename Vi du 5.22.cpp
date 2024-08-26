//Ví dụ 5.22:
#include<iostream>
using namespace std;

void dec_to_hex(long long n)
{
    if(n < 16)
    {
        if(n < 10)  cout << n;
        else   cout << (char)(55 + n);
    }
    else
    {
        dec_to_hex(n / 16);
        int r = n % 16;
        if(r < 10)   cout << r;
        else  cout << (char)(55 + r);
    }
}

int main()
{
    int n;
    cin >> n;
    dec_to_hex(n);
    return 0;
}
