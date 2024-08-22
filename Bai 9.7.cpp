//Bài 9.7:
#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

typedef struct
{
    string mahang, tenhang;
    int soluong, soluongton, tgbaohanh;
    long long dongia;
} MATHANG;

void nhap(MATHANG mh[MAX], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cin.ignore(); // xoa bo nho dem
        cout << "Nhap thong tin cho mat hang thu: " << i << "\n";
        cout << "Ma hang: "; getline(cin, mh[i].mahang);
        cout << "Ten hang: "; getline(cin, mh[i].tenhang);
        cout << "So luong: "; cin >> mh[i].soluong;
        cout << "Don gia: "; cin >> mh[i].dongia;
        cout << "So luong ton: "; cin >> mh[i].soluongton;
        cout << "Thoi gian bao hanh (thang): "; cin >> mh[i].tgbaohanh;
    }
}

void xuat(MATHANG mh[MAX], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << setw(12) << left << mh[i].mahang;
        cout << setw(20) << left << mh[i].tenhang;
        cout << setw(6) << mh[i].soluong;
        cout << setw(10) << mh[i].dongia;
        cout << setw(6) << mh[i].soluongton;
        cout << setw(6) << mh[i].tgbaohanh;
        cout << '\n';
    }
}

void giathapnhat(MATHANG mh[MAX], int n)
{
    long long m = mh[1].dongia;
    for(int i = 2; i <= n; i++)
        if(mh[i].dongia < m)
            m = mh[i].dongia;
    for(int i = 2; i <= n; i++)
        if(mh[i].dongia == m)
        {
            cout << setw(12) << left << mh[i].mahang;
            cout << setw(20) << left << mh[i].tenhang;
            cout << setw(6) << mh[i].soluong;
            cout << setw(10) << mh[i].dongia;
            cout << setw(6) << mh[i].soluongton;
            cout << setw(6) << mh[i].tgbaohanh;
            cout << '\n';
        }
}

void toncaonhat(MATHANG mh[MAX], int n)
{
    int m = mh[1].soluongton;
    for(int i = 2; i <= n; i++)
        if(mh[i].soluongton > m)
            m = mh[i].soluongton;
    for(int i = 2; i <= n; i++)
        if(mh[i].soluongton == m)
        {
            cout << setw(12) << left << mh[i].mahang;
            cout << setw(20) << left << mh[i].tenhang;
            cout << setw(6) << mh[i].soluong;
            cout << setw(10) << mh[i].dongia;
            cout << setw(6) << mh[i].soluongton;
            cout << setw(6) << mh[i].tgbaohanh;
            cout << '\n';
        }
}

int main ()
{
	int n;
	MATHANG mh[MAX];
	cout << "Nhap so luong mat hang: "; cin >> n;
    cout << "Nhap danh sach mat hang: \n"; nhap(mh, n);
    // Xuat danh sach mat hang da nhap
    freopen("MATHANG.OUT", "w", stdout);
    xuat(mh, n);

    freopen("RETON.OUT", "w", stdout);
    cout << "\nDanh sach hang co gia thap nhat: \n";
    giathapnhat(mh, n);
    cout << "\nDanh sach hang ton nhieu nhat: \n";
    toncaonhat(mh, n);
}
