//Bài 3.14
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a, b, c, p;
    cin >> a >> b >> c;
    if(a + b > c && b + c > a && c + a > b) // Tạo thành tam giác
    {
        p = (a + b + c)/2;
        cout << sqrt(p * (p-a) * (p-b) * (p-c));
    }
    else // Không tạo thành tam giác
        cout << "NO";
    return 0;
}
