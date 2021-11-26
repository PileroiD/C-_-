#include <iostream>
#include <string>

using namespace std;

int sumOfNumbers(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "rus");

    int counter = 0;

    while (counter < 3) {
        unsigned long long number;
        cout << endl << "Введите любое число: ";
        cin >> number;
        cout << "Сумма чисел " << number << " = " << sumOfNumbers(number) << endl;
        counter++;
    }
}


