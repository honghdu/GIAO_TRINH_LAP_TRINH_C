//Bài 5.7
#include <iostream>

using namespace std;

// Ước thực sự lớn nhất của n không vượt quá n/2

int uoclemax(int n)
{
    for(int i = n / 2; i >= 1; i--)
        if(n % i == 0 && i % 2 != 0)
            return i;
}

int main()
{
    int n;
    cin >> n;
    cout << uoclemax(n);
    return 0;
}
