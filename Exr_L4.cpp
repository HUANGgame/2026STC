#include <iostream>
using namespace std;

int main() {
    int number = 10000;
    int count = 0;

    while (number <= 19999) {
        int i = 1;

        while (i * i < number) {
            i++;
        }

        if (i * i == number) {
            count++;
        }

        number++;
    }

    cout << "10000到19999之間共有"
         << count
         << "個完全平方數"
         << endl;

    return 0;
}

/*
執行結果：

10000到19999之間共有42個完全平方數
*/