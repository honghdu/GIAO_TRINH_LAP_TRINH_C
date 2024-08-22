// Bài 7.14
#include <iostream>
using namespace std;

int main()
{
    int i, j, *a;
    a = new int[25];
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if(i == j)  *(a + 5*i + j) = 1;
            else    *(a + 5*i + j) = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
            cout << *(a + 5*i + j) << ' ';
        cout << '\n';
    }
    delete[] a;
    return 0;
}
