#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    long long num;
    int first, result = 0;

    cin >> num;

    first = num;

    while (first > 10) {
        first /= 10;
    }

    do
    {   
        if ((num % 10) == first) {
            result++;
        }

    } while ((num /= 10) > 0);

    cout << endl;
    cout << "цифра "<< first <<" встречается " << result << " раз" << endl;
}
