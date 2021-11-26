#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	int y, x, d;
	float r;

	cout << "y=";
	cin >> y;
	cout << endl;
	cout << "x=";
	cin >> x;
	cout << endl;
	cout << "d=";
	cin >> d;

	r = (pow(cos(y), 3) + pow(2, x) * d) / (exp(y) + log(pow(sin(x), 2) + 7.4));

	cout << "Ответ=" << r;
}
