// Bài 7.13
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, *p[3] = {&a, &b, &c};
    cin >> *p[0] >> *p[1];
    do
    {
        cin >> *p[2];
    } while((*p[2] <= *p[0]) || (*p[2] <= *p[1]));
    if((*p[0])*(*p[0]) + (*p[1])*(*p[1]) == (*p[2])*(*p[2]))
        cout << "VUONG";
    else
        if((*p[0])*(*p[0]) + (*p[1])*(*p[1]) < (*p[2])*(*p[2]))
            cout << "TU";
        else  cout << "NHON";
    return 0;
}

