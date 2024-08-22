//Bài 6.13
/*
Ý tưởng: Sử dụng một mảng để lưu trữ các bit của số.
    Sử dụng kỹ thuật bù hai để hiển thị các bit của số âm.
    Ví dụ: nếu người dùng nhập -5 thì:
    -	Chuyển -5 thành số dương là đối của nó (tức là 5).
    -	Đảo ngược các bit của nó (tức là 101 trở thành
        11111111111111111111111111111010 ).
    -	Cộng thêm 1 (tức trở thành 11111111111111111111111111111011
        chính là dạng nhị phân của -5).
*/
#include<iostream>
using namespace std;

int main()
{
    int i, x;
    bool b[32];
    unsigned int n;
    cin >> x;
    if(x < 0)
    {
        x = -x;
        x = ~x; // Đảo ngược các bit của x
        x++;
    }
    n = x;
    i = 0;
    while(n > 0)
    {
        b[i] = n & 1;
        n >>= 1; // Dịch phải bit, tương đương với n /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
        cout << b[j];
    return 0;
}

