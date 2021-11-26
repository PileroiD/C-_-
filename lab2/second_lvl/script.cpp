#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	int y, w;
	float v;

	cout << "y=";
	cin >> y;
	cout << endl;
	cout << "w=";
	cin >> w;

	v = pow((y + 2 * w), 3) / log(y + 0.75);

	cout << "Ответ=" << v;
}
