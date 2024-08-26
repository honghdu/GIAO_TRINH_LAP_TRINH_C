//Ví dụ 2.5:
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float f{123456789.0f};
	cout << setprecision(9) << f;
	return 0;
}
