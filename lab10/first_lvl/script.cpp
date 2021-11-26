#include <iostream>
#include <string>
using namespace std;


int main() {
    setlocale(LC_ALL, "rus");

    int array[] = { 123, 345, 456, 876, 465, 9748, 123, 234, 345, 976, 876 };
    string resText = "";

    int max_sum = array[0] + array[1];

    for (unsigned int i = 2; i < sizeof(array) / sizeof(array[0]); i++) { 
    
        if (array[i] + array[i - 1] > max_sum){
            max_sum = array[i] + array[i - 1];
            resText = "Самая большая сумма соседних чисел: " + to_string(array[i]) + " + " + to_string(array[i - 1]) + " = " + to_string(max_sum);
        }

    }

    cout << resText << endl;

}

