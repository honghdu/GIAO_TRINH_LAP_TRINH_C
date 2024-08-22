#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if(a == 0)
    {
        if(b == 0) cout << "Phuong trinh co vo so nghiem";
        else  cout << "Phuong trinh vo nghiem";
    }
    else
    {
        cout << setprecision(3) << fixed;
        cout << "Phuong trinh co nghiem: " << -b/a;
    }
    return 0;
}
