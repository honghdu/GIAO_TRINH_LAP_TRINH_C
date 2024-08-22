// Bài 7.10
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 31; // Tháng 1 có 31 ngày
    int i;
    double t, a[SIZE];
    cin >> t; // Mức nhiệt độ chuẩn
    //Nhiệt độ của 31 ngày trong tháng
    for(i = 0; i < SIZE; i++)
        cin >> *(a + i);

    for(i = 0; i < SIZE; i++)
        if(*(a + i) < t)   break;
    if(i == SIZE)  cout << "NO";
    else  cout << i + 1;
    return 0;
}
