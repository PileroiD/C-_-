#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int startArray[] = { 1, 9, 8, 7, 6, 5, 4, 3, 2 };
    int firstElement = startArray[0];
    int sizeArray = sizeof(startArray) / sizeof(startArray[0]);

    for (int i = 1; i < sizeArray; i++) {
        startArray[i - 1] = startArray[i];
    }

    startArray[sizeArray - 1] = firstElement;

    cout << "Массив: ";
    for (int iter = 0; iter < sizeArray; iter++) {
        cout << startArray[iter] << ", ";
    }
    cout << endl;
}
