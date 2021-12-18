#include <iostream>
#include <ctime>
using namespace std;

void main() {
    setlocale(LC_ALL, "rus");

    srand(time(NULL));

    const int ROW = 2;
    const int COL = 6;
    int arr[ROW][COL]{ {12, -13, 14, -15, 16, -17}, {99, -98, -65, -34, 34, 1} };
    
    int minNums = 0;
    int maxNums = 0;

    for (int i = 0; i < COL; i++) {
        if (arr[0][i] > 0) {
            maxNums += arr[0][i];
        } 
        else if (arr[0][i] < 0) {
            minNums += arr[0][i];
        }
    }

    cout << "Сумма отрицательных элементов: " << minNums << endl;
    cout << "Сумма положительных элементов: " << maxNums << endl;
}
