#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int y, x;
    float v;

    cout << "y=";
    cin >> y;
    cout << endl;
    cout << "x=";
    cin >> x;

    v = log(y + 0.95) + sin(pow(x, 4));

    cout << "Ответ = " << v;
}
