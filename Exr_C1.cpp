#include <iostream>
using namespace std;

int main() {
    long long B, N;
    long long S = 0;
    long long formulaS = 0;

    cout << "請輸入整數B：";
    cin >> B;

    cout << "請輸入整數N：";
    cin >> N;

    if (N > 0) {
        long long i = B + 1;

        while (i <= B + N) {
            S = S + i * i;
            i++;
        }

        formulaS =
            ((B + N) * (B + N + 1) * (2 * (B + N) + 1)
            - B * (B + 1) * (2 * B + 1)) / 6;
    }

    cout << "用迴圈計算S = " << S << endl;
    cout << "用公式驗算S = " << formulaS << endl;

    return 0;
}

/*
執行結果：

請輸入整數B：2
請輸入整數N：3
用迴圈計算S = 50
用公式驗算S = 50

計算內容：
S = 3平方 + 4平方 + 5平方
  = 9 + 16 + 25
  = 50
*/