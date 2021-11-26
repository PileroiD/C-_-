#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int x;
    float y;

    cout << "x = ";
    cin >> x;
    cout << endl;

    if (x <= -2) y = 4 * x + 3;
    else if ((x > -2) && (x < 4)) y = 2 * pow(x, 2) - 4;
    else if (x >= 4) y = pow(x, 2) - 2;

    cout << "Ответ = " << y;
}
