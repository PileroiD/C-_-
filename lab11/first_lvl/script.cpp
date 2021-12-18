#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main() {
    setlocale(LC_ALL, "rus");

    char firstStr[] = "1 3 4 4 9 8 6 5 5 1 3 7";
    int len = sizeof(firstStr) / sizeof(firstStr[0]);
    string result = "";

    for (int i = 0; i < len; i++) {
        if (firstStr[i] != ' ') {
            if (firstStr[i] % 2 != 0) {
                result += firstStr[i];
                result += " ";
            }
        }
    }

    cout << "Изначальный рядок: " << firstStr << endl;
    cout << "Рядок непарных чисел: " << result << endl;

}