//Ví dụ 4.14:
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int i = 2;
    do
    {
        cout << i << ' ';
        i += 2;
    }while(i <= n);
    return 0;
}




