#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    double n, factorial, sumIterExpress, sum = 0;
    int iter, k = 0;

    cout << "Введите n = ";
    cin >> n;
    cout << endl;
    cout << "Результаты: " << endl;

    do
    {
        k++;

        for (iter = 1, factorial = 1; iter <= k + 1; iter++) {
            factorial *= iter;
        }

        sumIterExpress = pow(k - 1, k + 1) * (k - 3) / factorial;
        sum += sumIterExpress;

    } while (sumIterExpress < n);

    cout << "Сумма = " << sum << endl;
    cout << "Количество доданков = " << k << endl;
}
