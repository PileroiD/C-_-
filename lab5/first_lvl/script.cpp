#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    double x, factorial, sumIterExpress, sum = 0;
    int iter, k = 0;

    cout << "Введите х = ";
    cin >> x;
    cout << endl;
    cout << "Результаты: " << endl;

    do
    {
        k++;

        for (iter = 1, factorial = 1; iter <= k + 2; iter++) {
            factorial *= iter;
        }

        sumIterExpress = pow(-1, k + 1) * pow(x, k + 3) / (pow(k, 2) * factorial);
        sum += sumIterExpress;

    } while (fabs(sumIterExpress) >= 1e-4);

    cout << "Сумма = " << sum << endl;
    cout << "Количество доданков = " << k << endl;
}
