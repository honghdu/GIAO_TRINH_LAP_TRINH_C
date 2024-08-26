//Ví dụ 4.21:
#include <iostream>
using namespace std;
int main()
{
    for (int k = 10; k <= 20; k++)
    {
        if (k%3 == 0 || k%5 == 0)
            continue;
        cout << k << " ";
    }
    return 0;
}


