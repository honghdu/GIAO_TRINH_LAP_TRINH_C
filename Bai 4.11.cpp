// Bài 4.11
#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
            cout << "*";
        cout << '\n';
    }
    return 0;
}
