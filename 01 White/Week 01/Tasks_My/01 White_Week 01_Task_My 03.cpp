// Основы разработки на C++: белый пояс. Первая неделя
// Задание по программированию: Уравнение
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
	// a*x^2 + b*x + c = 0
	double a;
	double b;
	double c;
	cin >> a >> b >> c;
	double d;
	double x1;
	double x2;
	d=b*b-4*a*c;
	if (a != 0 && b != 0 && c != 0)
	{
		if (d < 0)
		{
			cout << "";
		}
		else
			if (d > 0)
			{
				x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
				x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
				cout << x1 << ' ' << x2;
			}
			else
				if (d == 0)
				{
					x1 = (-b)/(2*a);
					x2 = x1;
					cout << x1;
				}
	}
	else
	{
		if (b == 0 && c == 0 && a == 0)
		{
			x1 = 0;
			x2 = 0;
			cout << x1;
		}
		if (b == 0 && c != 0 && a != 0)
		{
			if (-c / a > 0)
			{
				x1 = -sqrt(-c / a);
				x2 = sqrt(-c / a);
				cout << x1 << ' ' << x2;
			}
			else
			{
				cout << "";
			}
		}
		if (b != 0 && c == 0 && a != 0)
		{
			x1 = 0;
			x2 = -b / a;
			cout << x1 << ' ' << x2;
		}
		if (b != 0 && c != 0 && a == 0)
		{
			x1 = -c / b;
			x2 = x1;
			cout << x1;
		}
	}
	return 0;
}
