//Ví dụ 3.5:
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d;
    cout << "\nNhap a, b, c: "; cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if(d < 0)	cout << "\nPhuong trinh vo nghiem ";
    else
        if (d == 0)
        {
            cout << "\nPhuong trinh co nghiem kep: ";
            cout << -b / (2 * a);
        }
        else
        {
            cout << "\nPhuong trinh co hai nghiem: ";
            cout << (-b + sqrt(d)) / (2 * a) << " va ";
            cout << (-b - sqrt(d) / (2 * a);
        }
    return 0;
}
