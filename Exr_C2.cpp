#include <iostream>
using namespace std;

int main() {
    long long B;
    long long factorial = 1;
    int k = 1;

    cout << "請輸入整數B：";
    cin >> B;

    cout << "中間過程：" << endl;
    cout << k << "! = " << factorial << endl;

    while (factorial < B) {
        k++;
        factorial = factorial * k;

        cout << k << "! = " << factorial << endl;
    }

    cout << "最小的k是 " << k << endl;

    return 0;
}

/*
執行結果：

請輸入整數B：100
中間過程：
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
最小的k是 5
*/