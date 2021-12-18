#include <iostream>
using namespace std;

void main() {
    setlocale(LC_ALL, "rus");

    const int ROW = 5;
    const int COL = 4;

    int arr[ROW][COL]{};
    int lastRowSum = 1;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = 2 - i - j;
        }
    }

    cout << "Исходный массив: " << endl << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr[i][j] << '\t';
        }

        cout << endl;
    }
    
    for (int i = 4; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            lastRowSum *= arr[i][j];
        }
        break;
    }

    cout << endl << "Произведение элементов пятого рядка таблицы: " << lastRowSum << endl;

}
