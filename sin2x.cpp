#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;

    cout << "請輸入x：";
    cin >> x;

    cout << "sin(2x) = " << sin(2 * x) << endl;
    cout << "2sin(x)cos(x) = "
         << 2 * sin(x) * cos(x) << endl;

    return 0;
}

/*
執行結果：

請輸入x：1
sin(2x) = 0.909297
2sin(x)cos(x) = 0.909297
*/