//Bai 9.1
// Sử dụng ifstream và ofstream
#include <iostream>
#include <fstream>

using namespace std;

// Hàm tính S(n) = 2 + 3/2 + 4/3 + ... + (n+1)/n
double s(int n)
{
    if(n == 1)    return 2.0;
    return s(n - 1) + (double)(n+1)/n;
}

int main()
{
    int n;

    ifstream input; // Khai báo biến tệp input
    input.open("baitap.inp",ios::in); // Mở tệp bai1.inp để đọc
    if(!input.is_open()) // Nếu không mở được tệp bai1.inp
    {
        cout << "Khong mo duoc tep.";
        exit(1);
    }
    input >> n; // Đọc dữ liệu từ tệp bai1.inp đưa vào biến n
    input.close(); // Đóng tệp bai1.inp

    ofstream output; // Khai báo biến tệp output
    output.open("baitap.out",ios::out); //Mở tệp bai1.out để ghi
    if(!output.is_open()) // Nếu không mở được tệp bai1.inp
    {
        cout << "Khong mo duoc tep.";
        exit(1);
    }
    output << s(n); // Ghi giá trị của S(n) lên tệp bai1.out
    output.close(); // Đóng tệp bai1.out
    return 0;
}

//// Sử dụng fstream
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// Hàm tính S(n) = 1 + 2 + 3 + ... + n
//long long s(int n)
//{
//    if(n == 1)    return 1;
//    return s(n - 1) + n;
//}
//
//int main()
//{
//    int n;
//    fstream f; // Khai báo biến tệp
//
//    f.open("bai1.inp",ios::in); // Mở tệp bai1.inp để đọc
//    if(!f.is_open()) // Nếu không mở được tệp bai1.inp
//    {
//        cout << "Khong mo duoc tep.";
//        exit(1);
//    }
//    f >> n; // Đọc dữ liệu từ tệp bai1.inp đưa vào biến n
//    f.close(); // Đóng tệp bai1.inp
//
//    f.open("bai1.out",ios::out); // Mở tệp bai1.out để ghi
//    if(!f.is_open()) // Nếu không mở được tệp bai1.out
//    {
//        cout << "Khong mo duoc tep.";
//        exit(1);
//    }
//    f << s(n); // Ghi giá trị của S(n) lên tệp bai1.out
//    f.close(); // Đóng tệp bai1.out
//    return 0;
//}
//// Sử dụng freopen
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//// Hàm tính S(n) = 1 + 2 + 3 + ... + n
//long long s(int n)
//{
//    if(n == 1)    return 1;
//    return s(n - 1) + n;
//}
//
//int main()
//{
//    int n;
//    // Mở tệp bai1.inp để đọc dữ liệu
//    freopen("bai1.inp", "r", stdin);
//
//    // Mở tệp bai1.out để đọc dữ liệu
//    freopen("bai1.out", "w", stdout);
//    cin >> n; // Đọc dữ liệu
//    cout << s(n); // Ghi dữ liệu
//    return 0;
//}
//// Sử dụng ifstream và ofstream
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// Hàm tính S(n) = 1 + 2 + 3 + ... + n
//long long s(int n)
//{
//    if(n == 1)    return 1;
//    return s(n - 1) + n;
//}
//
//int main()
//{
//    int n;
//
//    ifstream input; // Khai báo biến tệp input
//    input.open("bai1.inp",ios::in); // Mở tệp bai1.inp để đọc
//    if(!input.is_open()) // Nếu không mở được tệp bai1.inp
//    {
//        cout << "Khong mo duoc tep.";
//        exit(1);
//    }
//    input >> n; // Đọc dữ liệu từ tệp bai1.inp đưa vào biến n
//    input.close(); // Đóng tệp bai1.inp
//
//    ofstream output; // Khai báo biến tệp output
//    output.open("bai1.out",ios::out); //Mở tệp bai1.out để ghi
//    if(!output.is_open()) // Nếu không mở được tệp bai1.inp
//    {
//        cout << "Khong mo duoc tep.";
//        exit(1);
//    }
//    output << s(n); // Ghi giá trị của S(n) lên tệp bai1.out
//    output.close(); // Đóng tệp bai1.out
//    return 0;
//}
//// Sử dụng fstream
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// Hàm tính S(n) = 1 + 2 + 3 + ... + n
//long long s(int n)
//{
//    if(n == 1)    return 1;
//    return s(n - 1) + n;
//}
//
//int main()
//{
//    int n;
//    fstream f; // Khai báo biến tệp
//
//    f.open("bai1.inp",ios::in); // Mở tệp bai1.inp để đọc
//    if(!f.is_open()) // Nếu không mở được tệp bai1.inp
//    {
//        cout << "Khong mo duoc tep.";
//        exit(1);
//    }
//    f >> n; // Đọc dữ liệu từ tệp bai1.inp đưa vào biến n
//    f.close(); // Đóng tệp bai1.inp
//
//    f.open("bai1.out",ios::out); // Mở tệp bai1.out để ghi
//    if(!f.is_open()) // Nếu không mở được tệp bai1.out
//    {
//        cout << "Khong mo duoc tep.";
//        exit(1);
//    }
//    f << s(n); // Ghi giá trị của S(n) lên tệp bai1.out
//    f.close(); // Đóng tệp bai1.out
//    return 0;
//}
//// Sử dụng freopen
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//// Hàm tính S(n) = 1 + 2 + 3 + ... + n
//long long s(int n)
//{
//    if(n == 1)    return 1;
//    return s(n - 1) + n;
//}
//
//int main()
//{
//    int n;
//    // Mở tệp bai1.inp để đọc dữ liệu
//    freopen("bai1.inp", "r", stdin);
//
//    // Mở tệp bai1.out để đọc dữ liệu
//    freopen("bai1.out", "w", stdout);
//    cin >> n; // Đọc dữ liệu
//    cout << s(n); // Ghi dữ liệu
//    return 0;
//}
