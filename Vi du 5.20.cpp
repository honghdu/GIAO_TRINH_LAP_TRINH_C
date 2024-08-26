//Ví dụ 5.20:
#include<iostream>
using namespace std;

int C(int n, int k)
{
   if(n == k || k == 0)   return 1;
      return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << C(n, k);
    return 0;
}
