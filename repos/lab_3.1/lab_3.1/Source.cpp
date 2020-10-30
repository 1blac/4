// Lab_3.1.cpp
// < Чорний Дмитро Остапович >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 30
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	A = (x * x) * cos(x / 2);

	// спосіб 1: розгалуження в скороченій формі
	if (x < -5)
		B = x / 5 - exp(fabs(x));
	if (-1 < x && x < 1)
		B = (x * x * x) / 4 + 1;
	if (x >= 1)
		B = (1 / tan(log(x)));

	y = A + B;

	cout << endl;

	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x < -5)
		B = x / 5 - exp(fabs(x));
	else
		if (-1 < x && x < 1)
			B = (x * x * x) / 4 + 1;
		else
			B = (1 / tan(log(x)));

	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}