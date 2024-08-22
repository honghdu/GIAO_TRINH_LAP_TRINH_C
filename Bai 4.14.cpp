// Bài 4.14
// Bản sửa
#include<iostream>
using namespace std;

int main ()
{
    int n;
    do
    {
        cin >> n;
        if(n >= 0 && n <= 255)
            cout << n << '\n';
    }while(n >= 0 && n <= 255);
    return 0;
}


/*
// Bản gốc: phải dùng kiến thức về mảng
#include<iostream>
using namespace std;

int main ()
{
    bool a[10];
    int n, m, i;
    do
    {
        cin >> n;
        m = n;
        if(m >= 0 && m <= 255)
        {
            for(i = 1; i <= 8; i++)
                a[i] = 0;
            i = 0;
            while(m > 0)
            {
                i++;
                a[i] = m % 2;
                m /= 2;
            }
            for(i = 8; i >= 1; i--)
                cout << a[i];
            cout << '\n';
        }
    }while(n >= 0 && n <= 255);
    return 0;
}

*/
