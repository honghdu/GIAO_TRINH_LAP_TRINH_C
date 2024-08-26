//Ví dụ 3.2:
#include <iostream>
using namespace std;

int main()
{
    float a, b, m;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    if(a > b)
    {
        m = a;
    }
    else
    {
        m = b;
    }
    cout << "So lon = " << m;
    return 0;
}


