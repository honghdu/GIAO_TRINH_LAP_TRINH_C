//Ví dụ 5.14:
#include<iostream>
using namespace std;

void tang();
void giam();
int g = 0;

int main()
{
    tang();
    g += 2;
    giam();
    cout << g << '\n';
    return 0;
}

void tang()
{
    g++;
}

void giam()
{
    g--;
}


