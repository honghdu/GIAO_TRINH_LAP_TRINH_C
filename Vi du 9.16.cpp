//Ví dụ 9.16:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Khai báo biến tệp input và mở tệp "inp.txt"
	ifstream input("inp.txt");
	//tạo biến tệp output để ghi dữ liệu vào tệp "out.txt"
	fstream output;
	output.open("out.txt", ios::out);
    // Kiểm tra việc mở tệp có thành công không
	if(input.is_open() && output.is_open())
		cout << "Mo thanh cong!!" << endl;
	else	cout << "Mo that bai!!" << endl;
	input.close();
	output.close();
	return 0;
}
