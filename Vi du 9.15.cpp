//Ví dụ 9.15:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fileInput("inp.txt");
// Kiểm tra nếu xảy ra lỗi khi đọc, ghi dữ liệu
	if(fileInput.fail())
	{
		cout << "Loi mo tep!" << endl;
		return -1;
	}
    while(!fileInput.eof()) // Khi chưa kết thúc tệp
	{
		int n;
		fileInput >> n;
		cout << n << " ";
	}
	cout << endl;
	fileInput.close();
	return 0;
}
