#include<iostream>
using namespace std;

int main()
{
    long long gio, phut, giay;
    cin >> giay;
    gio = giay / 3600;
    giay = giay - 3600 * gio;
    phut = giay / 60;
    giay = giay - 60 * phut;
    cout << gio << "h " << phut << "m " << giay << "s";
    return 0;
}
