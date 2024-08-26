//Ví dụ 9.8:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int output;
    // Khai báo và mở tệp để đọc dữ liệu
    ifstream infile("songuyen.txt", ios::in); 
    if(!infile) // Nếu không mở được tệp
    {
        cout << "\nKhong mo duoc tep.";
        exit(1);
    }
    while(infile >> output) // Đọc kí tự từ tệp tin
    {
        cout << output << ' '; // Ghi kí tự ra màn hình
    }
    infile.close(); // Đóng tệp
    return 0;
}


