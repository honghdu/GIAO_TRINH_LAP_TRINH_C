// Bài 4.15
#include<iostream>
using namespace std;

int main ()
{
    int n, d = 0, s = 0;
    do
    {
        cin >> n;
        d++;
        s += n;
    }while(s <= 100);
    cout << s << '\n' << d;
    return 0;
}
