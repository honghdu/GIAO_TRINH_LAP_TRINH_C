//Ví dụ 7.37:
#include <iostream>
using namespace std;

int main()
{
    char *dong[100]; // Khai báo 100 con trỏ kí tự (100 hàng)

    int n;
    cout << "so dong = "; cin >> n ; // Nhập số dòng thực sự
    fflush(stdin); // Loại dấu enter trong lệnh cin ở trên
    for (int i = 0; i < n; i++)
    {
        dong[i] = new char[80]; // Cấp bộ nhớ cho dòng i
        cin.getline(dong[i], 80); // Nhập dòng i
    }
    for (int i = 0; i < n; i++) // In kết quả
        cout << dong[i] << endl;
    return 0;
}


/*
4
Chot mot ngay CPU nong qua
Biet lam gi khi khong co cool case
Task Manager gio da ngap day
Em ngoi truoc Webcam cuoi tit mat.
*/
