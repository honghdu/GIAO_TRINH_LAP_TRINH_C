//Ví dụ 2.32:
#include <iostream>
#include <bitset> //for bitset
using namespace std;

int main()
{
    bitset<4> x { 0b0100 };
    x >>= 1;
    cout << x;
    return 0;
}
