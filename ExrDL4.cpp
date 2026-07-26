#include <iostream>
using namespace std;

int main() {
    char letter = 'A';

    while (letter <= 'Z') {
        cout << letter;
        letter++;
    }

    cout << endl;

    return 0;
}

/*
執行結果：

ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/