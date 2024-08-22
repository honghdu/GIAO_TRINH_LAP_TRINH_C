// Bài 4.1
#include<iostream>
using namespace std;

int main ()
{
    int i, j, k;
    for(i = 0; i < 2; i++)
    {
        cout << "? ";
        for(j = i+1; j; j--)
        {
            cout << "! ";
            for(k = i; k < j+1; k++)
            	cout << "* ";
        }
    }
    return 0;
}

/*
-	Lần lặp đầu tiên của vòng lặp ngoài (i=0):
    Vì điều kiện (i < 2) là đúng nên chương trình in ra ?
    và vòng lặp bên trong được thực thi.
+	Lần lặp đầu tiên của vòng lặp bên trong (j=1):
    Điều kiện j tương ứng với (j!=0) là đúng.
    Vì vậy, chương trình in ra !.
+	Thực thi vòng lặp bên trong (k=0):
    Vòng lặp được thực hiện hai lần với k=0 và k=1
    và chương trình in ra hai * .
+	Lần lặp thứ hai của vòng lặp bên trong (j=0):
    Vì điều kiện (j ! = 0) sai nên vòng lặp kết thúc.
-	Các lần lặp tiếp theo được thực hiện theo cách tương tự.
-	Cuối cùng, chương trình in ra: ? ! * * ? ! * * ! *
*/
