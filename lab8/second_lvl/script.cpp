#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float expressions(int t, int p) {
    float k, x, y;
    k = sqrt(p + pow(t, 2));
    x = p + k;
    y = pow(atan(pow(x, 2)), 3);

    return y;
}

int main() {
    setlocale(LC_ALL, "rus");

    float confirmNum[3];
    int t, p;
    cout << "Введите значение(цифру) t = ";
    cin >> t; cout << endl;
    cout << "Введите значение(цифру) p = ";
    cin >> p; cout << endl;
    
    cout << "Ответ = " << expressions(t, p);

}




