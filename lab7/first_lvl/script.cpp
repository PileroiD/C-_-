#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int k, x;
    float PI = 3.14;
    double y = 0;
    
    cout << "Введите k = ";
    cin >> k; cout << endl;

    cout << "Введите x = ";
    cin >> x; cout << endl;
    
    switch (k) {
    case 1: 
        y = pow((x + 1), 1 / 5);
        break;
    case 2:
        y = tan(cos(x) + PI / 2);
        break;
    case 3:
        y = exp(pow(2 * x, 2)) + sqrt(abs(1 - x));
        break;
    case 4:
        y = pow(sin(pow(x, 2) + 3), 2);
        break;
    case 5:
        y = cos(3 * pow(x, 2));
        break;
    default:
        cout << "Вы ввели неизвестное число" << endl;
    }

    cout << "y = " << y;
}



