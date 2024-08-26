//Ví dụ 9.14:
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input("chuoi.inp");
	char line[1000];
     // Khi chưa tới cuối tệp thì tiếp tục đọc
	while(!input.eof())
	{
		input.getline(line, 1000);
		cout << line << endl;
	}
	input.close();
      return 0;
}
