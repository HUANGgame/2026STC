#include <iostream>
using namespace std;

int main() {
    int A;
    int i = 1;

    cout << "請輸入整數A：";
    cin >> A;

    while (i < A) {
        cout << "(" << i << ") ";
        i++;
    }

    cout << "OK" << endl;

    return 0;
}

/*
執行結果：

請輸入整數A：5
(1) (2) (3) (4) OK

請輸入整數A：0
OK
*/