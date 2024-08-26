//Ví dụ 4.18:
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for(i = 1; i < 3; i++) // (1)
    {
        j = 0;
        while(j < i) // (2)
        {
            if(i + j == 1)    break;
            cout << "Two ";
            j++;
        }
        cout << "One ";
    }
    cout << i << ' ' << j << '\n';
    return 0;
}

