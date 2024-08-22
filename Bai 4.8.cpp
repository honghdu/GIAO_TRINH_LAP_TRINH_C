// Bài 4.8
#include<iostream>
using namespace std;

int main ()
{
    int a, b, nho, lon, s = 0;
    cin >> a >> b;
    if(a < b)
    {
        nho = a;
        lon = b;
    }
    else
    {
        nho = b;
        lon = a;
    }
    for(int i = nho + 1; i < lon; i++)
        s += i;
    cout << s;
    return 0;
}

/*
// Cách khác
#include<iostream>
using namespace std;

int main ()
{
    int a, b, nho, lon, s = 0;
    cin >> a >> b;
    nho = min(a, b);
    lon = max(a, b);
    for(int i = nho + 1; i < lon; i++)
        s += i;
    cout << s;
    return 0;
}
*/
