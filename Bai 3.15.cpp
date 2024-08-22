//Bài 3.15
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && a + b + c == 180) // Tạo thành 3 góc của tam giác
    {
        if(max({a, b, c}) > 90) // Tạo thành tam giác tù
            cout << "TU";
        else
            if(max({a, b, c}) == 90) // Tạo thành tam giác vuong
                cout << "VUONG";
            else
                cout << "NHON";
    }
    else // Không tạo thành 3 góc của tam giác
        cout << "No";
    return 0;
}
