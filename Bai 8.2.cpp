// Bài 8.2
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Diem
{
    int x, y;
};

struct Tamgiac
{
    Diem p1, p2, p3;
};

// Nhập tọa độ 3 đỉnh của tam giác
void input(Tamgiac &t)
{
    cin >> t.p1.x >> t.p1.y;
    cin >> t.p2.x >> t.p2.y;
    cin >> t.p3.x >> t.p3.y;
}

// Tính khoảng cách giữa hai điểm
double khoangcach(Diem p1, Diem p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) * 1.0 + (p1.y - p2.y) * (p1.y - p2.y) * 1.0);
}

// Kiểm tra xem ba điểm có tạo thành tam giác không?
bool KTtamgiac(Tamgiac t)
{
    double d1, d2, d3;
    d1 = khoangcach(t.p1, t.p2);
    d2 = khoangcach(t.p2, t.p3);
    d3 = khoangcach(t.p3, t.p1);
    return (d1 + d2 > d3 && d2 + d3 > d1 && d3 + d1 > d2);
}

// Tính chu vi tam giác
double chuvi(Tamgiac t)
{
    double d1, d2, d3;
    d1 = khoangcach(t.p1, t.p2);
    d2 = khoangcach(t.p2, t.p3);
    d3 = khoangcach(t.p3, t.p1);
    return d1 + d2 + d3;
}

// Tính diện tích tam giác
double dientich(Tamgiac t)
{
    return 0.5 * fabs((t.p2.x - t.p1.x) * (t.p3.y - t.p1.y) * 1.0 - (t.p3.x - t.p1.x) * (t.p2.y - t.p1.y) * 1.0);
}

int main()
{
    Tamgiac t;
    input(t);
    if (!KTtamgiac(t))  cout << "NO";
    else
    {
        cout << "YES" << endl;
        cout << fixed << setprecision(3);
        cout << chuvi(t) << ' ' << dientich(t);
    }
    return 0;
}
/*
4 5
1 2
-2 -3
*/
