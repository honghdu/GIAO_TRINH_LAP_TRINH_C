//Ví dụ 2.4:
#include <iostream>
#include <iomanip>	// for setprecision()
using namespace std;

int main()
{
    // Hiển thị 20 chữ số sau dấu .
    cout << setprecision(20);
    float f{9.66666666666666666666f};
    cout << f << endl;
    double d{9.66666666666666666666};
    cout << d << endl;
    return 0;
}
