#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    double x, sum = 0;
    int k = 2, i = 0;

    cout << "Введите х = ";
    cin >> x;
    cout << endl;
    cout << "Результаты: " << endl;

    while (k <= 9) {
        sum += (tan(x) - pow(x, 2) / k) / (pow(k, 2) - 1);
        k++; i++;
    }

    cout << "Сумма = " << sum << endl;
    cout << "Количество доданков = " << i << endl;
}
