#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << fixed << setprecision(2)
             << i / 100.0 << " ";
        i++;
    }

    cout << endl;

    return 0;
}

/*
執行結果：

0.01 0.02 0.03 0.04 0.05
*/