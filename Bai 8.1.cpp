//Bài 8.1
#include <iostream>
using namespace std;

#define MAX 100

struct PHANSO
{
	int tu, mau;
};

//Hàm tìm ước chung lớn nhất của 2 số a, b
int UCLN(int a, int b)
{
    while(b != 0)
    {
      int r = a % b;
      a = b;
      b = r;
    }
    return a;
}

// Hàm rút gọn phân số
PHANSO rutgon(PHANSO x)
{
	int d = UCLN(x.tu, x.mau);
	x.tu /= d;
	x.mau /= d;
	return x;
}

// Hàm tính tổng 2 phân số
PHANSO tong(PHANSO x1, PHANSO x2)
{
	PHANSO x;
	x.tu =  x1.tu*x2.mau + x1.mau*x2.tu;
	x.mau = x1.mau*x2.mau;
	return rutgon(x);
}

// Hàm tính hiệu 2 phân số
PHANSO hieu(PHANSO x1, PHANSO x2)
{
	PHANSO x;
	x.tu = x1.tu*x2.mau - x1.mau*x2.tu;
	x.mau = x1.mau*x2.mau;
	return rutgon(x);
}

// Hàm tính tích 2 phân số
PHANSO tich(PHANSO x1, PHANSO x2)
{
	PHANSO x;
	x.tu = x1.tu * x2.tu;
	x.mau = x1.mau * x2.mau;
	return rutgon(x);
}

// Hàm tính thương 2 phân số
PHANSO thuong(PHANSO x1, PHANSO x2)
{
	PHANSO x;
	x.tu = x1.tu * x2.mau;
	x.mau = x1.mau * x2.tu;
	return rutgon(x);
}

// Hàm kiểm tra phân số m có nhỏ hơn phân số n không?
bool nho(PHANSO x1, PHANSO x2)
{
	if ((double) x1.tu / x1.mau < (double) x2.tu / x2.mau)
		return true;
	return false;
}

int main ()
{
	int n;
	PHANSO *ps = new PHANSO[MAX], x;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
	    cin >> ps[i].tu >> ps[i].mau;
	    ps[i] = rutgon(ps[i]);
	}
	x = tong(ps[0], ps[1]);
	cout << x.tu << "/" << x.mau << '\n';

	x = hieu(ps[0], ps[1]);
	cout << x.tu << "/" << x.mau << '\n';

	x = tich(ps[0], ps[1]);
	cout << x.tu << "/" << x.mau << '\n';

	x = thuong(ps[0], ps[1]);
	cout << x.tu << "/" << x.mau << '\n';

	x = ps[0];
	for (int i = 1; i < n; i++)
		if (nho(ps[i], x))	x = ps[i];
	cout << x.tu << "/" << x.mau;
	return 0;
}
