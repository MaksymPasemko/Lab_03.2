#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (x < 5 && b != 0)
		F = a * pow(x + 7, 2) - b;
	if (x > 5 && b == 0)
		F = x - c * a;
	if (!(x < 5 && b != 0) && !(x > 5 && b == 0))
		F = x / c;
	cout << endl;
	cout << "1)F: " << F << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 5 && b != 0)
		F = a * pow(x + 7, 2) - b;
	else
		if (x > 5 && b == 0)
			F = x - c * a;
		else
			F = x / c;

	cout << endl;
	cout << "2)F: " << F << endl;
	return 0;
}
