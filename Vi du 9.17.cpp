//Ví dụ 9.17:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char output;
    ifstream fileIn("dulieu.txt", ios::in);
    if(!fileIn)
    {
        cout << "Khong mo duoc tep\n";
        exit(1);
    }
    // Đọc dữ liệu từ tệp ra màn hình
    // Ghi vi trí con trỏ tệp ra màn hình cứ sau 5 lần đọc kí tự
    int i = 0;
    while(fileIn)
    {
        fileIn >> output; // Đọc kí tự từ tệp
        cout << output; // Ghi kí tự ra màn hình
        if(i % 5 == 0) // Ghi ra vị trí con trỏ tệp
        {
             cout << "\nVi tri con tro tep: ";
             cout << fileIn.tellg() << endl;
        }
        i++;
    }
    cout << endl;
    fileIn.close(); // Đóng tệp
}

