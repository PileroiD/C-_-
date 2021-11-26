#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int x;
    float a = 0.5, b = 1.5, c = 3.2, y;

    cout << "x = ";
    cin >> x;
    cout << endl;

    if ((a + b) > x) y = sin(exp(a + b)) + pow(x, 2);
    else if ((a + b) == x) y = atan(a * b * c) + pow(x, 1/3);
    else if ((a + b) < x) y = asin(pow(cos(sqrt(abs(x))), 2));

    cout << "Ответ = " << y;
}
