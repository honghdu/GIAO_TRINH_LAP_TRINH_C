//Ví dụ 9.9:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int data;
    // Khai báo và mở tệp nguồn để đọc dữ liệu
    ifstream infile("songuyen.txt", ios::in);
    if(!infile)
    {
        cout << "\nKhong mo duoc tep.";
        exit(1);
    }
    // Khai báo và mở tệp đích để ghi dữ liệu
    ofstream outfile("songuyen.OUT", ios::out);
    if(!outfile)
    {
        cout << "\nKhong tao duoc tep.";
        exit(1);
    }
    // Đọc số từ tệp nguồn và ghi vào tệp đích
    while(infile >> data)
    {
        outfile << data << ' ';
    }
    infile.close();
    outfile.close();
    return 0;
}

