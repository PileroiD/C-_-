#include <iostream>
#include <ctime>
using namespace std;

void main() {
    setlocale(LC_ALL, "rus");

    srand(time(NULL));

    const int ROW = 4;
    const int COL = 4;
    int arr[ROW][COL]{};
    int tempRowArray[ROW];
    int tempColArray[COL];

    // Формирование массива
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    cout << "Исходный массив: " << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;

    // Берем все элементы первой колонки 
    for (int i = 0; i < ROW; i++) {
        tempColArray[i] = arr[i][0];
    }


    // Берем все элементы последней строки
    for (int i = 0; i < COL; i++) {
        tempRowArray[i] = arr[ROW - 1][i];
    }

    // Меняем колонку
    for (int i = 0; i < ROW; i++) {
        arr[i][0] = tempRowArray[i];
    }

    // Меняем строку
    for (int i = 0; i < ROW; i++) {
        arr[ROW - 1][i] = tempColArray[i];
    }

    cout << "Новый массив: " << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;

    // arr[ROW-1][0] выводится не правильно, тк был перезаписан
}
