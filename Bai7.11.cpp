// Bài 7.11
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double *p, c;
    p = new double[32];
    for(int i = 0; i <= 30; i++)
        cin >> *(p + i);
    cin >> c;
    for(int i = 0; i <= 30; i++)
        if(*(p+i) < c)
        {
            cout << i + 1;
            break;
        }
    return 0;
}
/*
8 27 22.67 26.1 32.2 -2.6 16 -2.5 19.1 15.8 14.8 4 38 36.5 11.1 -10.2 45 22 40 11.7 24 41.71 32 -2.26 10 14.16 -6 6.71 14.4 38.9 34.6
*/
