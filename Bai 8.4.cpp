//Bài 8.4
#include <bits/stdc++.h>
using namespace std;
#define MAX 1005

struct NHANVIEN
{
    string manv, hoten;
    bool gt;
    double hsluong, luongcb, thuong, phat;
};

// Nhập danh sách n nhân viên
void nhap(NHANVIEN nv[MAX], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cin.ignore();
        cout << "Nhap nhan vien " << i << endl;
        cout << "Ma nhan vien: "; getline(cin, nv[i].manv);
        cout << "Ho ten: "; getline(cin, nv[i].hoten);
        cout << "Gioi tinh: "; cin >> nv[i].gt;
        cout << "He so luong: "; cin >> nv[i].hsluong;
        cout << "Luong: "; cin >> nv[i].luongcb;
        cout << "Thuong: "; cin >> nv[i].thuong;
        cout << "Phat: "; cin >> nv[i].phat;
    }
}

// Xuất danh sách toàn bộ nhân viên
void xuat(NHANVIEN nv[MAX], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << setw(10) << left << nv[i].manv;
        cout << setw(20) << left << nv[i].hoten;
        if(nv[i].gt == 0)  cout << setw(8) << left << "Nam";
        else    cout << setw(8) << left << "Nu";
        cout << setw(10) << left;
        cout << setprecision(2) << fixed << nv[i].hsluong;
        cout << setw(15) << left;
        cout << setprecision(2) << fixed << nv[i].luongcb;
        cout << setw(15) << left;
        cout << setprecision(2) << fixed << nv[i].thuong;
        cout << setw(15) << left;
        cout << setprecision(2) << fixed << nv[i].phat;
        cout << endl;
    }
}

// 3. Xuất danh sách nhân viên có hệ số lương cao nhất
void xuat3(NHANVIEN nv[MAX], int n)
{
    double hsl = 0;
    for(int i = 1; i <= n; i++)
        if(nv[i].hsluong > hsl)
            hsl = nv[i].hsluong;
    for(int i = 1; i <= n; i++)
        if(nv[i].hsluong == hsl)
        {
            cout << setw(10) << left << nv[i].manv;
            cout << setw(20) << left << nv[i].hoten;
            if(nv[i].gt == 0)  cout << setw(8) << left << "Nam";
            else    cout << setw(8) << left << "Nu";
            cout << setw(10) << left;
            cout << setprecision(2) << fixed << nv[i].hsluong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].luongcb;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].thuong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].phat;
            cout << endl;
        }
}

// 4. Xuất danh sách nhân viên nữ có thực lĩnh cao nhất
void xuat4(NHANVIEN nv[MAX], int n)
{
    double thuclinh[MAX] = {0}, m = 0;
    for(int i = 1; i <= n; i++)
    {
        thuclinh[i] = nv[i].hsluong * nv[i].luongcb + nv[i].thuong - nv[i].phat;
        if(nv[i].gt == 1 && thuclinh[i] > m)   m = thuclinh[i];
    }

    for(int i = 1; i <= n; i++)

        if(nv[i].gt == 1 && thuclinh[i] == m)
        {
            cout << setw(10) << left << nv[i].manv;
            cout << setw(20) << left << nv[i].hoten;
            if(nv[i].gt == 0)  cout << setw(8) << left << "Nam";
            else    cout << setw(8) << left << "Nu";
            cout << setw(10) << left;
            cout << setprecision(2) << fixed << nv[i].hsluong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].luongcb;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].thuong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].phat;
            cout << endl;
        }
}

// 5. Xuất danh sách nhân viên có lương cơ bản >= số x
void xuat5(NHANVIEN nv[MAX], int n, double x)
{
    for(int i = 1; i <= n; i++)
        if(nv[i].luongcb >= x)
        {
            cout << setw(10) << left << nv[i].manv;
            cout << setw(20) << left << nv[i].hoten;
            if(nv[i].gt == 0)   cout << setw(8) << left << "Nam";
            else    cout << setw(8) << left << "Nu";
            cout << setw(10) << left;
            cout << setprecision(2) << fixed << nv[i].hsluong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].luongcb;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].thuong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].phat;
            cout << endl;
        }
}

// 6. Xuất thông tin nhân viên có tên vừa nhập
void xuat6(NHANVIEN nv[MAX], int n, string s)
{
    for(int i = 1; i <= n; i++)
        if(nv[i].hoten == s)
        {
            cout << setw(10) << left << nv[i].manv;
            if(nv[i].gt == 0)   cout << setw(8) << left << "Nam";
            else    cout << setw(8) << left << "Nu";
            cout << setw(10) << left;
            cout << setprecision(2) << fixed << nv[i].hsluong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].luongcb;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].thuong;
            cout << setw(15) << left;
            cout << setprecision(2) << fixed << nv[i].phat;
            cout << endl;
        }
}

int main ()
{
    int n;
    NHANVIEN nv[MAX];
    cout << "Nhap so nhan vien: "; cin >> n;
    cout << "Nhap danh sach nhan vien: \n";
    nhap(nv, n);
    cout << "Danh sach vua nhap la: \n";
    xuat(nv, n);
    cout << "Danh sach nhan vien Nam co he so luong cao nhat: \n";
    xuat3(nv, n);
    cout << "Danh sach nhan vien Nu co thuc linh cao nhat: \n";
    xuat4(nv, n);
    double x;
    cout << "Nhap 1 so x = "; cin >> x;
    cout << "Danh sach nhan vien luong co ban >= " << x << ": \n";
    xuat5(nv, n, x);
    string s;
    cout << "Nhap ten nhan vien can biet thong tin: ";
    cin.ignore();
    getline(cin, s);
    cout << "Thong tin cua nhan vien " << s << ": \n";
    xuat6(nv, n, s);
}

