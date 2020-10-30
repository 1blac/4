#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, b, a, c, xp, xk, dx, F;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    for (x = xp; x <= xk; x += dx) {
        if (x < 3 && b != 0)
			F = (a * (x * x)) - (b * x) + c;
        else
            if (x > 3 && b == 0)
				F = (x - a) / (x - c);
            else
                F = x / c;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}