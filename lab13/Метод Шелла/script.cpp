#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int arr[100000];
    int size = sizeof(arr) / sizeof(arr[0]);
    int step = size / 2;
    int counter = 0;
    float resTime;
    clock_t start, finish;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    start = clock();

    while (step > 0) {
        for (int i = 0; i < (size - step); i++) {
            int j = i;
            while (j >= 0 && arr[j] > arr[j + step]) {
                int c = arr[j];
                arr[j] = arr[j + step];
                arr[j + step] = c;
                j--;
            }
            counter++;
        }
        step /= 2;
    }

    finish = clock();
    resTime = (float)(finish - start) / CLOCKS_PER_SEC;

    cout << "Методом Шелла массив был отсортирован за " << resTime << "s." << endl;
    cout << "Итераций было: " << counter << endl;

}

