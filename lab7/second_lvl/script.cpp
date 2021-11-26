#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int x, counter = 0;
    float a, b, z, result;

    cout << "Введите x = ";
    cin >> x; cout << endl;

    // Первый вариант
    a = 1.2, b = 7.2, z = exp(x);
        
    if (x < pow(a, 3)) {
        result = a * pow(sin(x), 2) + b * cos(z * x + a);
    }
    else if (x >= pow(a, 3) && x <= b) {
        result = pow(a + b * x, 2) - sin(a + z * x);
    }
    else if (x > b) {
        result = sqrt(x - (sin(b * x + z)));
    }

    cout << "При значениях: а = " << a << ", b = " << b << ", z = " << z << ",  результат = " << result << endl;


    // Второй вариант
    a = -1.5, b = 3.2, z = exp(2*x);

    if (x < pow(a, 3)) {
        result = a * pow(sin(x), 2) + b * cos(z * x + a);
    }
    else if (x >= pow(a, 3) && x <= b) {
        result = pow(a + b * x, 2) - sin(a + z * x);
    }
    else if (x > b) {
        result = sqrt(x - (sin(b * x + z)));
    }

    cout << "При значениях: а = " << a << ", b = " << b << ", z = " << z << ",  результат = " << result << endl;


    // Третий вариант
    a = 1.7, b = 5.5, z = exp(3);

    if (x < pow(a, 3)) {
        result = a * pow(sin(x), 2) + b * cos(z * x + a);
    }
    else if (x >= pow(a, 3) && x <= b) {
        result = pow(a + b * x, 2) - sin(a + z * x);
    }
    else if (x > b) {
        result = sqrt(x - (sin(b * x + z)));
    }

    cout << "При значениях: а = " << a << ", b = " << b << ", z = " << z << ",  результат = " << result << endl;
}



