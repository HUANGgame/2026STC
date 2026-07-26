#include <iostream>
using namespace std;

int main() {
    int A;

    cout << "請輸入整數A：";
    cin >> A;

    while (A > 0) {
        cout << "(" << A << ") ";
        A--;
    }

    cout << "OK" << endl;

    return 0;
}

/*
執行結果：

請輸入整數A：5
(5) (4) (3) (2) (1) OK

請輸入整數A：0
OK
*/