//Ví dụ 3.1:
#include <iostream>
using namespace std;
int main()
{
    float a, b, m;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    m = a;
    if(b > m)
    {
        m = b;
    }
    cout << "So lon = " << m;
    return 0;
}

