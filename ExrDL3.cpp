#include <iostream>
using namespace std;

int main() {
    int number = 1;

    while (number <= 16) {
        cout << number << " ";
        number += 3;
    }

    cout << endl;

    return 0;
}

/*
執行結果：

1 4 7 10 13 16
*/