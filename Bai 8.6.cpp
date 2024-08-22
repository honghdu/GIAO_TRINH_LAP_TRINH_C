//Bài 8.6
#include <bits/stdc++.h>
using namespace std;

// 1. Xây dựng cấu trúc điện
struct DIEN
{
	string mahd, tenkh;
	int kythu, kw;
};

// 2. Nhập danh sách n khách hàng sử dụng
void nhap(DIEN *d, int n)
{
    for(int i = 1; i <= n; i++)
    {
        cin.ignore();
        cout << "Nhap thong tin khach hang " << i << endl;
        cout << "Ma hoa don: "; getline(cin, d[i].mahd);
        cout << "Ho ten khach hang: "; getline(cin, d[i].tenkh);
        cout << "Ky thu: "; cin >> d[i].kythu;
        cout << "So kw dien: "; cin >> d[i].kw;
    }
}

// 3. Xuất danh sách tất cả khách hàng
void xuat3(DIEN *d, int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << setw(10) << left << d[i].mahd;
        cout << setw(20) << left << d[i].tenkh;
        cout << setw(6) << right << d[i].kythu;
        cout << setw(6) << right << d[i].kw;
        cout << endl;
    }
}

// 4. Xuất danh sách tất cả khách hàng gồm thông tin tiền điện
void xuat4(DIEN *d, int n)
{
    long long tien;
    for(int i = 1; i <= n; i++)
    {
        if(d[i].kw <= 100)  tien = 2000*d[i].kw;
        else
            if(d[i].kw <= 150)
                tien = 2000*100 + 2500*(d[i].kw - 100);
            else
                if(d[i].kw <= 200)
                    tien = 2000*100 + 2500*50 + 3000*(d[i].kw - 150);
                else
                    tien = 2000*100 + 2500*50 + 3000*50 + 3500*(d[i].kw - 200);
        cout << setw(10) << left << d[i].mahd;
        cout << setw(20) << left << d[i].tenkh;
        cout << setw(6) << right << d[i].kythu;
        cout << setw(6) << right << d[i].kw;
        cout << setw(15) << right << tien;
        cout << endl;
    }
}


int main ()
{
    int n;
    DIEN *d = new DIEN[10000];
    cout << "Nhap so khach hang dung dien: "; cin >> n;
    cout << "Nhap danh sach khach hang: \n";
    nhap(d, n);
    cout << "Danh sach khach hang vua nhap: \n";
    xuat3(d, n);
    cout << "Danh sach khach hang gom thong ti tien dien: \n";
    xuat4(d, n);
    delete[] d;
    return 0;
}
