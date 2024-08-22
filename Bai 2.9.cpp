#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double dai, rong;
    cin >> dai >> rong;
    cout << setprecision(3) << fixed << 2 *(dai + rong) << ' ' << dai * rong;
    return 0;
}
