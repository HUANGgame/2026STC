#include <iostream>
using namespace std;

int main() {
    int number = 2;

    while (number <= 128) {
        cout << number << " ";
        number *= 2;
    }

    cout << endl;

    return 0;
}

/*
執行結果：

2 4 8 16 32 64 128
*/