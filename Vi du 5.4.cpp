//Ví dụ 5.4:
#include <iostream>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cout << "Nhap 1 so nguyen: "; cin >> n;
        if(n <= 0)  return 0; // Kết thúc chương trình
        cout << n << '\n'; // else là không cần thiết
    }
    return 0;
}
