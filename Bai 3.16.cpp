//Bài 3.16
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b > c && b + c > a && c + a > b) // Tạo thành tam giác
    {
        if(a == b || b == c || c == a) // Tạo thành tam giác cân
            cout << "No";
        else    cout << "Yes";
    }
    else // Không tạo thành tam giác
        cout << "No";
    return 0;
}
