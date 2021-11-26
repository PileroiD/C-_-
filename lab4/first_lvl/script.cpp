#include <iostream>
#include <cmath>
using namespace std;


int main() {
    setlocale(LC_ALL, "rus");

    double u, x, s = 0;
    int n;

    cout << "Введите целое значение n = ";
    cin >> n;
    cout << "Введите значение x = ";
    cin >> x;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        u = pow(-1, i) * (2 * i - 1) / pow(x, i);
        cout << "Доданок " << i << " = " << u << endl;
        s += u;
    }

    cout << "Сумма = " << s << endl;
}
