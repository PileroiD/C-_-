#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	int x, y;

	cout << "x = ";
	cin >> x;
	cout << endl;
	cout << "y = ";
	cin >> y;

	cout << "Заданы координаты: x=" << x << " y=" << y << endl;

	if ((x > 0) && (y > 0)) cout << "Точка находится в 1 четверти" << endl;
	else if ((x < 0) && (y > 0)) cout << "Точка находится в 2 четверти" << endl;
	else if ((x < 0) && (y < 0)) cout << "Точка находится в 3 четверти" << endl;
	else if ((x > 0) && (y < 0)) cout << "Точка находится в 4 четверти" << endl;
}
