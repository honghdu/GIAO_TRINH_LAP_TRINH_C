//Ví dụ 7.38:
#include <iostream>
using namespace std;

void A(int i) // Dùng biến làm tham số
{
    i = 7;
}
void B(int &i) // Dùng biến tham chiếu làm tham số
{
    i = 20;
}

void C(int *i) // Dùng con trỏ của biến làm tham số
{
    *i = 50;
}
int main()
{
    int a = 1;
    cout << "a = " << a << endl;
    A(a); //Truyền giá trị của biến vào hàm
    cout << "Sau ham A(): a = " << a;
    B(a); //Truyền địa chỉ của biến vào hàm
    cout << "\nSau ham B(): a = " << a;
    C(&a); //Truyền địa chỉ (con trỏ) của biến vào hàm
    cout << "\nSau ham C(): a = " << a;
    return 0;
}
