#include <iostream>
using namespace std;

int main() {
    double w, h, bmi;

    cout << "請輸入體重(kg)：";
    if (!(cin >> w) || w <= 0) {
        cout << "輸入錯誤" << endl;
        return 0;
    }

    cout << "請輸入身高(m)：";
    if (!(cin >> h) || h <= 0) {
        cout << "輸入錯誤" << endl;
        return 0;
    }

    bmi = w / (h * h);

    cout << "BMI = " << bmi << endl;
    cout << "BMI正常範圍：18.5～24" << endl;

    return 0;
}

/*
執行結果：

請輸入體重(kg)：70
請輸入身高(m)：1.75
BMI = 22.8571
BMI正常範圍：18.5～24
*/
