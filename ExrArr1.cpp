#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int a[SIZE];
    int b[SIZE];
    int i;

    // 設定陣列 a 的值
    i = 0;
    while (i < SIZE) {
        a[i] = i * 100 + 1;
        i++;
    }

    // 印出陣列 a
    cout << "array a:" << endl;

    i = 0;
    while (i < SIZE) {
        cout << "a[" << i << "]=" << a[i] << " ";
        i++;
    }
    cout << endl;

    // 將陣列 a 向右轉後抄到陣列 b
    i = 1;
    while (i < SIZE) {
        b[i] = a[i - 1];
        i++;
    }

    b[0] = a[SIZE - 1];

    // 印出陣列 b
    cout << "array b:" << endl;

    i = 0;
    while (i < SIZE) {
        cout << "b[" << i << "]=" << b[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}

/*
執行結果：

array a:
a[0]=1 a[1]=101 a[2]=201 a[3]=301 a[4]=401 a[5]=501 a[6]=601 a[7]=701 a[8]=801 a[9]=901
array b:
b[0]=901 b[1]=1 b[2]=101 b[3]=201 b[4]=301 b[5]=401 b[6]=501 b[7]=601 b[8]=701 b[9]=801
*/