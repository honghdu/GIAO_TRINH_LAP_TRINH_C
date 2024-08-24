#include<iostream>
using namespace std;

int main()
{
    int tmp, mamoi;
    cin >> tmp;
    if(tmp == 1234)
    {
        cin >> tmp;
        cin >> mamoi;
        if(mamoi == tmp)  cout << "\nSAVE";
        else  cout << "\nNO";
    }
    else  cout << "\nWRONG";
    return 0;
}
