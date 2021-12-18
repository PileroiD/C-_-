#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int arr[100000];
    int size = sizeof(arr) / sizeof(arr[0]);
    int tempIndex, tempObj, counter = 0;
    float resTime;
    clock_t start, finish;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    start = clock();

    do
    {
        tempIndex = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i - 1] > arr[i]) {
                tempObj = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tempObj;
                tempIndex = 1;
            }
            counter++;
        }
    } while (tempIndex);

    finish = clock();
    resTime = (float)(finish - start) / CLOCKS_PER_SEC;

    cout << "Методом обмена массив был отсортирован за " << resTime << "s." << endl;
    cout << "Итераций было: " << counter << endl;

}
