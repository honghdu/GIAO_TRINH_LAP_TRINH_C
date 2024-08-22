//Bài 8.5
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005

// 1. Xây dựng cấu trúc vé tàu
struct VETAU
{
	string mave, gadi, gaden, loaitau, ngaykhoihanh;
	int loaichongoi, giave, giamgia;
};

int n;
VETAU vt[MAX];

// 2. Nhập danh sách n vé tàu
void nhap(VETAU vt[MAX], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cin.ignore();
        cout << "Nhap ve tau " << i << endl;
        cout << "Ma ve: "; getline(cin, vt[i].mave);
        cout << "Ga di: "; getline(cin, vt[i].gadi);
        cout << "Ga den: "; getline(cin, vt[i].gaden);
        cout << "Loai tau: "; getline(cin, vt[i].loaitau);
        cout << "Ngay khoi hanh (dd/mm/yy): ";
        getline(cin, vt[i].ngaykhoihanh);
        cout << "Loai cho ngoi (1: ngoi cung, 2: ngoi men, 3: nam cung, 4: nam mem): ";
        cin >> vt[i].loaichongoi;
        cout << "Gia ve: "; cin >> vt[i].giave;
        cout << "Phan tram giam gia: "; cin >> vt[i].giamgia;
    }
}

// 3. Xuất danh sách các vé tàu có ga đến là "Hue" và ga đi từ "Thanh Hoa"
void xuat3(VETAU vt[MAX], int n)
{
    for(int i = 1; i <= n; i++)
        if(vt[i].gadi == "Thanh Hoa" && vt[i].gaden == "Hue")
        {
            cout << setw(10) << left << vt[i].mave;
            cout << setw(12) << left << vt[i].gadi;
            cout << setw(12) << left << vt[i].gaden;
            cout << setw(12) << left << vt[i].loaitau;
            cout << setw(10) << left << vt[i].ngaykhoihanh;
            if(vt[i].loaichongoi == 1)  cout << setw(10) << left << "Nam cung";
            else    if(vt[i].loaichongoi == 2)
                        cout << setw(10) << left << "Ngoi mem";
                    else    if(vt[i].loaichongoi == 3)
                                cout << setw(10) << left << "Nam cung";
                            else    cout << setw(10) << left << "Nam mem";
            cout << setw(10) << right << vt[i].giave;
            cout << setw(6) << right << vt[i].giamgia << "%";
            cout << endl;
        }
}

// 4. Danh sách các vé tàu có ga đến là "Ha Noi" đi vào ngày nào đó
void xuat4(VETAU vt[MAX], int n, string ngay)
{
    for(int i = 1; i <= n; i++)
        if(vt[i].ngaykhoihanh == ngay && vt[i].gaden == "Ha Noi")
        {
            cout << setw(10) << left << vt[i].mave;
            cout << setw(12) << left << vt[i].gadi;
            cout << setw(12) << left << vt[i].loaitau;
            if(vt[i].loaichongoi == 1)  cout << setw(10) << left << "Nam cung";
            else    if(vt[i].loaichongoi == 2)
                        cout << setw(10) << left << "Ngoi mem";
                    else    if(vt[i].loaichongoi == 3)
                                cout << setw(10) << left << "Nam cung";
                            else    cout << setw(10) << left << "Nam mem";
            cout << setw(10) << right << vt[i].giave;
            cout << setw(6) << right << vt[i].giamgia << "%";
            cout << endl;
        }
}

// 5. Số lượng khách đi tàu loại chỗ ngồi là nằm cứng
int soluong(VETAU vt[MAX], int n)
{
    int d = 0;
    for(int i = 1; i <= n; i++)
        if(vt[i].loaichongoi == 3)
            d++;
    return d;
}

// 6. Danh sách vé có phần trăm giảm giá lớn hơn phần trăm giảm giá nào đó
void xuat6(VETAU vt[MAX], int n, int giam)
{
    for(int i = 1; i <= n; i++)
        if(vt[i].giamgia > giam)
        {
            cout << setw(10) << left << vt[i].mave;
            cout << setw(12) << left << vt[i].gadi;
            cout << setw(12) << left << vt[i].loaitau;
            if(vt[i].loaichongoi == 1)  cout << setw(10) << left << "Nam cung";
            else    if(vt[i].loaichongoi == 2)
                        cout << setw(10) << left << "Ngoi mem";
                    else    if(vt[i].loaichongoi == 3)
                                cout << setw(10) << left << "Nam cung";
                            else    cout << setw(10) << left << "Nam mem";
            cout << setw(10) << right << vt[i].giave;
            cout << setw(6) << right << vt[i].giamgia << "%";
            cout << endl;
        }
}

int main ()
{
    cout << "Nhap so ve tau: "; cin >> n;
    cout << "Nhap danh sach cac ve tau: \n";
    nhap(vt, n);
    cout << "Danh sach ve tau co ga den la Hue, ga di la Thanh Hoa: \n";
    xuat3(vt, n);
    string ngay;
    cout << "\nNhap 1 ngay di: "; cin.ignore(); getline(cin, ngay);
    cout << "Danh sach ve tau co ga den la Ha Noi di vao ngay " << ngay << ": \n";
    xuat4(vt, n, ngay);
    cout << "So luong khach di tau loai cho ngoi nam cung: " << soluong(vt, n);
    int giam;
    cout << "\nNhap phan tram giam gia: "; cin >> giam;
    cout << "Danh sach ve tau co phan tram giam gia lon hon: " << giam << "\n";
    xuat6(vt, n, giam);
    return 0;
}

