#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int a[SIZE];
    int i;
    int temp;

    // 設定陣列 a 的值
    i = 0;
    while (i < SIZE) {
        a[i] = i * 100 + 1;
        i++;
    }

    // 印出向右轉之前的陣列
    cout << "右轉前：" << endl;

    i = 0;
    while (i < SIZE) {
        cout << "a[" << i << "]=" << a[i] << " ";
        i++;
    }
    cout << endl;

    // 保存最後一個元素
    temp = a[SIZE - 1];

    // 整個陣列向右移動
    i = SIZE - 1;
    while (i > 0) {
        a[i] = a[i - 1];
        i--;
    }

    // 最後一個元素移到最前面
    a[0] = temp;

    // 印出向右轉之後的陣列
    cout << "右轉後：" << endl;

    i = 0;
    while (i < SIZE) {
        cout << "a[" << i << "]=" << a[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}

/*
執行結果：

右轉前：
a[0]=1 a[1]=101 a[2]=201 a[3]=301 a[4]=401 a[5]=501 a[6]=601 a[7]=701 a[8]=801 a[9]=901
右轉後：
a[0]=901 a[1]=1 a[2]=101 a[3]=201 a[4]=301 a[5]=401 a[6]=501 a[7]=601 a[8]=701 a[9]=801
*/