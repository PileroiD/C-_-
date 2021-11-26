#include <iostream>
#include<string>
using namespace std;

string temp;
string stopFlag;

string newString(string newStr) {

    cout << "Введите любой символ: ";
    cin >> temp; cout << endl;

    cout << "Чтобы остановить выполнение программы, нажмите - n. Продолжить - Enter: ";
    cin.ignore(); 
    getline(cin, stopFlag); cout << endl;

    newStr += temp;
    cout << "Новая строка = " << newStr << endl;

    if (stopFlag != "n") {
        newString(newStr);
    }
    else if (stopFlag == "n") {
        return newStr;
    }

}


int main() {
    setlocale(LC_ALL, "rus");

    string prevStr = "";

    newString(prevStr);
}

