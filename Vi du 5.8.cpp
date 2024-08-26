//Ví dụ 5.8:
#include <iostream>
using namespace std;

int tong(int x, int y); // Khai báo hàm. Khi đó x, y là các tham số

int main ()
{
    int a = 10, b = 20;
    cin >> a >> b;
    int t = tong(a, b); // a, b là các đối số
    cout << "Tong la: " << t;
    return 0;
}

// Định nghĩa hàm
int tong(int x, int y)
{
    return x + y;
}
