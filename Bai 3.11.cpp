//Bài 3.11
#include<iostream>

using namespace std ;

int main ()
{
    long long t;
    cin >> t;
    if(t <= 12000) cout << 0;
    else
        if(t <= 14000)   cout << (t - 12000)*0.15;
        else
            if(t <= 30000)   cout << (14000 - 12000)*0.15 + (t - 14000)*0.3;
            else    cout << (14000 - 12000)*0.15 + (30000 - 14000)*0.3 + (t - 30000)*0.6;
    return 0;
}
