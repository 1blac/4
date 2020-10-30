// lab_4.5.cpp
// <Чорний Дмитро>
// Лабораторна робота № 4.5
// Попадання у плоску фігуру
// варіант 30

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double а; // вхідний аргумент
	double b; // вхідний параметр
	double R;
	double x;
	double y;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "b = "; cin >> b;
		cout << "а = "; cin >> а;
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((а * b) - (pow(x, 2) + pow(y, 2)) <= R * R) ||
			((pow(x, 2) + pow(y, 2)) <= (x > 0 && x < а) && (y > 0 && y < b)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}cout << endl << fixed;
}