//Ví dụ 4.16:
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    do
    {
        cout << "Nhap mot so nguyen duong: ";
        cin >> n;
    } while (n <= 0);
    cout << "Gia tri cua so vua nhap: " << n;
    return 0;
}
