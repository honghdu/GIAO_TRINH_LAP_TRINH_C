// Bài 4.12
#include<iostream>
using namespace std;

int main ()
{
    char c;
    int hoa = 0, thuong = 0, so = 0, khac = 0;
    do
    {
        cin >> c;
        if(c >= 'A' && c <= 'Z')    hoa++;
        else    if(c >= 'a' && c <= 'z')    thuong++;
                else    if(c >= '0' && c <= '9')    so++;
                        else khac++;
    }while(c != '.');
    cout << hoa << ' ' << thuong << ' ' << so << ' ' << khac;
    return 0;
}

/*
// Cách khác:
#include<iostream>
using namespace std;

int main ()
{
    char c;
    int hoa = 0, thuong = 0, so = 0, khac = 0;
    do
    {
        cin >> c;
        if(isupper(c))    hoa++;
        else    if(islower(c))    thuong++;
                else    if(isdigit(c))    so++;
                        else khac++;
    }while(c != '.');
    cout << hoa << ' ' << thuong << ' ' << so << ' ' << khac;
    return 0;
}
*/
