//Ví dụ 2.6:
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "THONG KE" << endl << "=======" << endl;
    cout << setiosflags(ios::showpoint);
    cout << setprecision(2) << fixed;
    cout << setw(15) << left << "So thu nhat";
    cout << setw(10) << right << 123.456 << endl;
    cout << setw(15) << left << "So thu hai";
    cout << setw(10) << right << 2453.6 << endl;
    cout << setw(15) << left << "So thu ba";
    cout << setw(10) << right << 3200.0 << endl;
    return 0;
}
