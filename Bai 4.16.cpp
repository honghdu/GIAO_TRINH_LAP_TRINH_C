// Bài 4.16
#include<iostream>
using namespace std;

int main ()
{
    int n;
    for(int i = 111; i <= 999; i++)
    {
        n = i;
        while(n >= 10)  n /= 10;
        if(n != 4 && i % 10 != 6)
            cout << i << ' ';
    }
    return 0;
}
