//Bai 5.1
#include <iostream>

using namespace std;

//Hàm tìm ước chung lớn nhất của 2 số a, b
int UCLN(int a, int b)
{
    while (b != 0)
    {
        if (a > b)    a %= b;
        else    b %= a;
    }
    return a;
}

//Hàm tìm bội chung nhỏ nhất của 2 số a, b
long long BCNN(int a, int b)
{
    return (long long) a * b / UCLN(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << BCNN(a, b);
    return 0;
}
