//Ví dụ 4.20:
#include <iostream>
using namespace std;

int main()
{
    int n;
    while (1)
    {
        cout << "Nhap n > 0: ";
        cin >> n;
        if (n <= 0)
	   {
            cout << "Ket thuc vong lap";
            break; // Kết thúc cấu trúc lặp khi n <= 0
        }
    }
    return 0;
}

