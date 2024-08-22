// Bài 7.12
#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int i, imax, imin;
    float *p, Max, Min, a[SIZE];
    Max = -1;
    Min = 11;
    for(i = 0; i < SIZE; i++)
    {
        p = a + i;
        do // Kiểm tra điểm trong miền [0, 10]
        {
            cin >> *p;
        } while(*p > 10 || *p < 0);
        if(*p > Max)
        {
            Max = *p;
            imax = i;
        }
        if(*p < Min)
        {
            Min = *p;
            imin = i;
        }
    }
    cout << Max << ' ' << imax + 1 << '\n';
    cout << Min << ' ' << imin + 1;
    return 0;
}
