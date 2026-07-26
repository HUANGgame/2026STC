#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << i << "*5=" << i * 5 << endl;
        i++;
    }

    return 0;
}

/*
執行結果：

1*5=5
2*5=10
3*5=15
4*5=20
5*5=25
*/