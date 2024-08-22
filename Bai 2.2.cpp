/*
#include <iostream>
using namespace std;

#define NUM 30;

int main()
{
    int j = 4.5;
    unsigned float i = 1.23;
    double j = 6.7;
    k = 10;
    cout << "Xin chao << '\n';
    return 5;
}
*/

/*
//Cách 1
#include <iostream>
using namespace std;

#define NUM 30

int main()
{
    double j = 4.5;
    float i = 1.23;
    j = 6.7;
    int k = 10;
    cout << "Xin chao" << '\n';
    return 5;
}
*/

//cách 2
#include <iostream>
using namespace std;

int main()
{
    cout << "Xin chao" << '\n';
    return 5;
}

// Có thể có nhiều cách khác
/*
#define NUM 30;	Sai vì thừa dấu ;	=> #define NUM 30
int j = 4.5;	Không sai vì C++ vẫn cho phép gán giá trị thực cho biến số nguyên, phần phân số sẽ bị cắt bỏ và j = 4.
unsigned float i = 1.23;	Sai vì không thể khai báo biến dấu phẩy động không dấu.	=> float i = 1.23;
double j = 6.7;	Sai vì biến j đã được sử dụng.	=> double d = 6.7;
k = 10;	Sai vì k chưa được khai báo.	=> int k = 10;
cout << "Xin chao << '\n';	Sai vì thiếu " sau chữ Xin chao.	cout << " Xin chao" << '\n';
return 5;	Không sai vì chương trình vẫn có thể trả về giá trị khác 0.
*/
