//Ví dụ 9.7:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int input;
    // Khai báo và mở tệp để ghi dữ liệu
    ofstream outfile("songuyen.txt", ios::out);
    if(!outfile) // Không mở được tệp
    {
        cout << "\nKhong tao duoc tep.";
        exit(1);
    }
    do // Ghi dữ liệu vào tệp
    {
        cin >> input; // Nhập dữ liệu từ bàn phím
        outfile << input << ' '; // Ghi dữ liệu vào tệp
    }while(input != 0);
    outfile.close(); // Đóng tệp
    return 0;
}

