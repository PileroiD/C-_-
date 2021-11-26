#include <iostream>
using namespace std;

int startArrayA[] = { 46, 453, 57, 123, 87, 3, 56, 234, 5, 79 };
int sizeA = sizeof(startArrayA) / sizeof(startArrayA[0]);
int finishArrayB[10];

int countArray(int i) {
    int res = 0;

    for (int iter = i; iter < sizeA; iter++) {
        res += startArrayA[iter];
    }

    return res;
}

int main() {
    setlocale(LC_ALL, "Rus");

    for (int i = 0; i < sizeA; i++) {
        finishArrayB[i] = countArray(i);
    }


    cout << "Ответ: ";
    for (int i = 0; i < 10; i++) {
        cout << finishArrayB[i] << ", ";
    }
    cout << endl;
}
