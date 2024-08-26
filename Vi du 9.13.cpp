//Ví dụ 9.13:
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f; // Khai báo biến tệp
    int a[10];

    // Mở tệp chuso.dat kiểu nhị phân để đọc dữ liệu
    f.open("chuso.dat", ios::in | ios::binary);

    // Đọc dữ liệu từ tệp chuso.dat và đưa vào mảng a
    f.read(reinterpret_cast<char *>(a), sizeof(a));
    f.close(); // Đóng tệp chuso.dat

    // Xuất nội dung của mảng a1 ra màn hình
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}
