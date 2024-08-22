// Bài 4.19
#include<iostream>
using namespace std ;

int main ()
{
    int i, n;
    cin >> n;
    if (n < 2)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}
