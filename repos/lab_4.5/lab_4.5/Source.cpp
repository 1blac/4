// lab_4.5.cpp
// <������ ������>
// ����������� ������ � 4.5
// ��������� � ������ ������
// ������ 30

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double �; // ������� ��������
	double b; // ������� ��������
	double R;
	double x;
	double y;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "b = "; cin >> b;
		cout << "� = "; cin >> �;
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((� * b) - (pow(x, 2) + pow(y, 2)) <= R * R) ||
			((pow(x, 2) + pow(y, 2)) <= (x > 0 && x < �) && (y > 0 && y < b)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}cout << endl << fixed;
}