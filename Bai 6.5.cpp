//Bài 6.5
#include <iostream>
#include <iomanip>
using namespace std;

#define MAX 1005
double x, s = 0;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        s += x;
    }
    cout << setprecision(2) << fixed << s/n;
    return 0;
}
