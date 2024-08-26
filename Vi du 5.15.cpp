//Ví dụ 5.15:
#include <iostream>
using namespace std;

int g = 10; // Biến toàn cục

int main()
{
    int g = 5; // Biến cục bộ
    cout << "Toan cuc: " << ::g;
    cout << ", Cuc bo: " << g;
}
