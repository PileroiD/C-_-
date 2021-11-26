#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int a, b, c, counter = 0;
    bool result;

    do
    {
        a = 3; b = 5; c = 4;
        result = (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(a, 2) == pow(c, 2) + pow(b, 2)) ? true : false;
        if (result) {
            cout << "Числа " << a << ", " << b << ", " << c << " являются тройкой Пифагора" << endl;
        }

        a = 3; b = 8; c = 11;
        result = (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(a, 2) == pow(c, 2) + pow(b, 2)) ? true : false;
        if (result) {
            cout << "Числа " << a << ", " << b << ", " << c << " являются тройкой Пифагора" << endl;
        }

        a = 13; b = 5; c = 12;
        result = (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(a, 2) == pow(c, 2) + pow(b, 2)) ? true : false;
        if (result) {
            cout << "Числа " << a << ", " << b << ", " << c << " являются тройкой Пифагора" << endl;
        }
    } while (false);
    
}


