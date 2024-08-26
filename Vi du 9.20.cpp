//Ví dụ 9.20:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char c;
    // Khai báo và mở tệp ra để đọc
    ifstream f("dulieu.txt", ios::in);
    if(!f) // Mở tệp không thành công
    {
        cout << "Khong mo duoc tep\n";
        exit(1);
    }
    // Đọc dữ liệu từ tệp ra màn hình
    int i = 1;
    do
    {
        cout << "\nSo ki tu dich chuyen: "; cin >> i;
        // Dịch chuyển con trỏ tệp từ vị trí hiện thời
        f.seekg(sizeof(char)*i, ios::cur);
        if(f)
        {
            f >> c;	// Đọc kí tự từ tệp
            // Ghi kí tự ra màn hình
            cout << "Vi tri: " << f.tellg() << ' ' << c;
        }
        else //  Ra khỏi phạm vi tệp
        {
            f.clear();	// Về vị trí đầu tệp
        }
    }while(i);
    f.close(); // Đóng tệp
}



