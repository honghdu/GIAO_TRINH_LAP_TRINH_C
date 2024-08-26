//Ví dụ 9.12:
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f; // Khai báo biến tệp
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Mở tệp chuso.dat kiểu nhị phân để ghi dữ liệu
    f.open("chuso.dat", ios::out | ios::binary);

    // Ghi dữ liệu của mảng a vào tệp chuso.dat
    f.write(reinterpret_cast<char *>(a), sizeof(a));
    f.close(); // Đóng tệp chuso.dat
}
