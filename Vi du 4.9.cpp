//Ví dụ 4.9:
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    while (n % 5 != 0)	n--;
    i = n;
    while (i >= 5)
    {
       cout << i << ' ';
       i -= 5;
    }
    return 0;
}



