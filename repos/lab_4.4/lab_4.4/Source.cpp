// lab_4.4.cpp
// <Чорний Дмитро>
// Лабораторна робота № 4.4
// Табуляція функції,заданої графіком
// варіант 30

#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main()
{
	double R, dx, x, xk, xp, y;
	cout << "R ="; cin >> R;
	cout << "xk ="; cin >> xk;
	cout << "xp ="; cin >> xp;
	cout << "dx ="; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "|"
		<< setw(7) << "F" << "|" << endl;
	cout << "---------------------------" << endl;

	for (x = xp; x <= xk; x += dx) {
		if (x <= -8 - R)
			y = R;
		else
			if (-8 - R <= x && x <= -8 + R)
				y = R - sqrt(R * R) - (x + 8) * (x + 8);
			else
				if (-8 + R <= x && x <= -4)
					y = R;
				else
					if (-4 <= x && x <= 2)
						y = (-1 / 6 * x) - (2 / 3);
					else
						y = 0;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
	}
	cout << "---------------------------" << endl;
	return 0;
}