#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n / 100 + (n / 10) % 10 + n % 10;
    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    int n , tram, chuc, donvi;
    cin >> n;
    tram = n / 100;
    chuc = (n % 100) / 10;
    donvi = n % 10;
    cout << donvi << chuc << tram;
    return 0;
}
*/
