//Ví dụ 5.21:
#include<iostream>
using namespace std;

void dec_to_bin(long long n)
{
    if(n < 2)
        cout << n;
    else
    {
        dec_to_bin(n / 2);
        cout << n % 2;
    }
}
 
int main()
{
    int n;
    cin >> n;
    dec_to_bin(n);
    return 0;
}
