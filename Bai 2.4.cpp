#include <iostream>
using namespace std;

int main()
{
    int k;
    float i = 3.9, j = 1.2;
    k = i + (int)j;
    cout << k - (int)((int)i + j) << '\n';
    return 0;
}
/*
Vì giá trị của (int)j là 1
nên ta có k = 3.9+1 = 4 (không phải 4.9, vì k là int).
Tương tự, chúng ta có (int)(( int ) 3.9 + 1.2)
= ( int )(3 + 1.2) = ( int )(4.2) = 4 .
Do đó, chương trình in ra: 0
*/
