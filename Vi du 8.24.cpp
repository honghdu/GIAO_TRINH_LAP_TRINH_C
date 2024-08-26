//Ví dụ 8.24:
#include <iostream>
using namespace std;
// Khai báo kiểu cấu trúc số phức
struct Sophuc
{
    float thuc;
    float ao;
};
// Hàm cộng 2 số phức, trả lại một số phức
Sophuc Cong(Sophuc x, Sophuc y)
{
    Sophuc kq;
    kq.thuc = x.thuc + y.thuc;
    kq.ao = x.ao + y.ao;
    return kq;
}

// Hàm trừ 2 số phức, trả lại một số phức
Sophuc Tru(Sophuc x, Sophuc y)
{
    Sophuc kq;
    kq.thuc = x.thuc - y.thuc;
    kq.ao = x.ao - y.ao;
    return kq;
}

// Hàm in một số phức dạng (r + im)
void In(Sophuc x)
{
    cout << "(" << x.thuc << ", " << x.ao << ")" << endl;
}

int main()
{
    Sophuc x, y, z, k;
    cout << "x = " ; cin >> x.thuc >> x.ao;
    cout << "y = " ; cin >> y.thuc >> y.ao;
    z = Cong(x, y);
    k = Tru(x, y);
    cout << "x + y = " ; In(z);
    cout << "x - y = " ; In(k);
    return 0;
}
