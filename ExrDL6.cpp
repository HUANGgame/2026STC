#include <iostream>
using namespace std;

int main() {
    int row = 1;

    while (row <= 5) {
        cout << row << ":";

        int column = 1;

        while (column <= row) {
            cout << "#";
            column++;
        }

        cout << endl;
        row++;
    }

    return 0;
}

/*
執行結果：

1:#
2:##
3:###
4:####
5:#####
*/