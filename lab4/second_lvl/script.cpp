#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    double y = 0, z = 0;
    float x1 = 3.5, x2 = 10.5;

    for (float h = 0.2; x1 <= x2; x1 += h) {
        y += cos(1.5 * x1) * log(2.5 * x1);
        z += exp(1 / sqrt(x1)) * sin(x1);

        cout << "x = " << x1 << "    " << "y = " << y << "    " << "z = " << z << endl;
    }
}
