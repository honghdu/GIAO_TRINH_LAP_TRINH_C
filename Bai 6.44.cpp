//Bài 6.44
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n, m, t = 0;
    n = s.size();
    for(int i = 0; i < n; i++)
       t += (int)s[i] - 48;
    if(t < 10)  cout << t;
    else
    {
        m = 0;
        while(t > 0)
        {
            m += t % 10;
            t /= 10;
            if(t == 0 && m >= 10)
            {
                t = m;
                m = 0;
            }
        }
        cout << m;
    }
    return 0;
}
