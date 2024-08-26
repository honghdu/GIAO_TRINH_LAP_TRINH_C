//Ví dụ 6.14:
#include <iostream>
using namespace std;

#define MAX 10000

int main()
{
    int a[MAX], b[MAX], n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        b[i] = a[i];
    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';
    return 0;
}
