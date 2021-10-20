// lab_4.3.cpp
// Квецко Вікторія
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 11
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c, x, xp, xk, dx, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x < 1 && c != 0)
			F = a * pow(x, 2) + b / c;
		else
			if (x > 1.5 && c == 0)
				F = (x - a) / pow((x - c), 2);
			else
				F = pow(x, 2) / pow(c, 2);

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;

		x += dx;
	}

	cout << "----------------------" << endl;

	return 0;
}
