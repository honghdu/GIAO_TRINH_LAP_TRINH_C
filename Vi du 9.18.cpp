//Ví dụ 9.18:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char input;
    ofstream fileOut("dulieu.txt", ios::out);
    if(!fileOut)
    {
        cout << "Khong the mo duoc tep\n";
        exit(1);
    }
    // Ghi dữ liệu vào tệp
    // Hiện ra màn hình sau khi ghi được 5 kí tự
    int i = 0;
    do
    {
        cin >> input; // Đọc kí tự từ tệp
        fileOut << input; // Ghi kí tự ra màn hình
        if(i % 5 == 0) // Ghi ra vị trí con trỏ tệp
        {
             cout << "\nVi tri con tro tep: ";
             cout << fileOut.tellp() << endl;
        }
        i++;
     }while(input != 'e' && fileOut);
     fileOut << endl;
     fileOut.close(); // Đóng tệp
}


