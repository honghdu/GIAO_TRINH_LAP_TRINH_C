/*
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, k;
    cout << "Nhap 3 so nguyen: ";
    cin >> i >> j >> k;
    cout << setprecision(3) << fixed;
    cout << "Trung binh: " << i + j + k / 3 << '\n';
    return 0;
}
*/
/*
Chương trình in ra kết quả không đúng vì:
     Sai mức ưu tiên phép toán và kiểu dữ liệu.
Biểu thức i + j + k / 3 sẽ tính giá trị biểu thức k / 3 trước
sau đó mới tính giá trị của biểu thức i + j + k / 3 sau.
Do đó, biểu thức được sửa lại thành (i + j + k) / 3.
Tuy nhiên do i, j và k đều là các biến nguyên
nên biểu thức (i + j + k) / 3 chỉ nhận được phần nguyên của phép chia.
Vì vậy biểu thức cần được viết lại như sau:
    (double) (i + j + k) / 3 hoặc (i + j + k) / 3.0.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, k;
    cout << "Nhap 3 so nguyen: ";
    cin >> i >> j >> k;
    cout << setprecision(3) << fixed;
    cout << "Trung binh: " << (double) (i + j + k) / 3 << '\n';
    return 0;
}
