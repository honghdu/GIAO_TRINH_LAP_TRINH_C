//Bài 8.3
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#define MAX 1005

// Xây dựng cấu trúc PHIM
struct PHIM
{
	string maphim, tenphim, tendd;
	int theloai, thoiluong, namsx, soluong;
};

//2. Nhập danh sách n PHIM
void nhap(PHIM *p, int n)
{
	for(int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nhap thong tin cho PHIM " << i + 1 << '\n';
        cout << "Ma phim: "; getline(cin, p[i].maphim);
        cout << "Ten phim: "; getline(cin, p[i].tenphim);
        cout << "Ten dao dien: "; getline(cin, p[i].tendd);
        cout << "Thoi luong: "; cin >> p[i].thoiluong;
        cout << "Nam san xuat: "; cin >> p[i].namsx;
        cout << "So luong: "; cin >> p[i].soluong;
        cout << "The loai (1: Hinh su, 2: Tam ly, 3: Hai): ";
        cin >> p[i].theloai;
	}
}

//3. Xuất danh sách PHIM ra màn hình
void xuat(PHIM *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << setw(3) << left << i + 1;
        cout << setw(10) << left << p[i].maphim;
        cout << setw(20) << left << p[i].tenphim;
        cout << setw(20) << left << p[i].tendd;
        cout << setw(8) << left << p[i].thoiluong;
        cout << setw(8) << left << p[i].namsx;
        cout << setw(8) << left << p[i].soluong;
        cout << setw(10) << left;
        if(p[i].theloai == 1)   cout << "Hinh su";
        else    if(p[i].theloai == 2)   cout << "Tam ly";
                else    cout << "Hai";
        cout << '\n';
    }
}

// 4. Tính tổng số lượng PHIM
long long tongsoPHIM(PHIM *p, int n)
{
	long long s = 0;
	for(int i = 0; i < n; i++)
		s += p[i].soluong;
	return s;
}

// 5. Tìm DS các phim hài có năm sản xuất mới nhất
void phimhaimoinhat(PHIM *p, int n)
{
    int m = 0;
    for(int i = 0; i < n; i++)
        if(p[i].theloai == 3 && p[i].namsx > m)
            m = p[i].namsx;
    for(int i = 0; i < n; i++)
        if(p[i].theloai == 3 && p[i].namsx == m)
        {
            cout << setw(3) << left << i + 1;
            cout << setw(10) << left << p[i].maphim;
            cout << setw(20) << left << p[i].tenphim;
            cout << setw(20) << left << p[i].tendd;
            cout << setw(8) << left << p[i].thoiluong;
            cout << setw(8) << left << p[i].namsx;
            cout << setw(8) << left << p[i].soluong;
            cout << '\n';
        }
}

// 6. Tìm DS các phim có năm sản xuất được nhập từ bàn phím
void namsx(PHIM *p, int n, int namsanxuat)
{
    for(int i = 0; i < n; i++)
        if(p[i].namsx == namsanxuat)
        {
            cout << setw(3) << left << i + 1;
            cout << setw(10) << left << p[i].maphim;
            cout << setw(20) << left << p[i].tenphim;
            cout << setw(20) << left << p[i].tendd;
            cout << setw(8) << left << p[i].thoiluong;
            cout << setw(8) << left << p[i].soluong;
            cout << setw(10) << left;
            if(p[i].theloai == 1)   cout << "Hinh su";
            else    if(p[i].theloai == 2)   cout << "Tam ly";
                    else    cout << "Hai";
            cout << '\n';
        }
}

// 7. Xuất DS các phim của đạo diến
void daodien(PHIM *p, int n, string tendaodien)
{
    for(int i = 0; i < n; i++)
        if(p[i].tendd == tendaodien)
        {
            cout << setw(3) << left << i + 1;
            cout << setw(10) << left << p[i].maphim;
            cout << setw(20) << left << p[i].tenphim;
            cout << setw(8) << left << p[i].thoiluong;
            cout << setw(8) << left << p[i].namsx;
            cout << setw(8) << left << p[i].soluong;
            cout << setw(10) << left;
            if(p[i].theloai == 1)   cout << "Hinh su";
            else    if(p[i].theloai == 2)   cout << "Tam ly";
                    else    cout << "Hai";
            cout << '\n';
        }
}

int main()
{
    int n;
    PHIM *p = new PHIM[MAX];
    cout << "Nhap so luong phim: "; cin >> n;
    cout << "Nhap danh sach phim: "; nhap(p, n);
    cout << "\nDS tat ca cac phim: \n"; xuat(p, n);
    cout << "\nPhim Hai moi nhat: \n"; phimhaimoinhat(p, n);

    int namsanxuat;
    cout << "\nNhap nam san xuat: "; cin >> namsanxuat;
    cout << "\nPhim co nam san xuat " << namsanxuat;
    cout << " la:\n"; namsx(p, n, namsanxuat);

    string tendaodien;
    cin.ignore();
    cout << "\nNhap ten dao dien: "; getline(cin, tendaodien);
    cout << "\nPhim cua dao dien " << tendaodien;
    cout << " la:\n"; daodien(p, n, tendaodien);
    return 0;
}
