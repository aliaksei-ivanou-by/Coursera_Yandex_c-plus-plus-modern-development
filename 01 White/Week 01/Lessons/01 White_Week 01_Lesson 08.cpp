// Основы разработки на C++: белый пояс. Первая неделя
// Операции. Операции: деление, инкременты
#include "iostream"
#include "vector"
#include "string"
using namespace std;

int main()
{
	int a1 = 11;
	int b1 = 3;
	cout << a1 / b1;

	cout << '\n';

	int a2 = 11;
	double b2 = 3;
	cout << a2 / b2;

	cout << '\n';

	double a3 = 11;
	int b3 = 3;
	cout << a3 / b3;

	cout << '\n';

	int x1 = 5;
	x1 = x1 + 2;
	cout << x1;

	cout << '\n';

	int x2 = 5;
	x2 += 2;
	cout << x2;

	cout << '\n';

	int x3 = 5;
	x3 += 2;
	x3 -= 2;
	x3 *= 2;
	x3 /= 2;
	cout << x3;

	cout << '\n';

	int x4 = 5;
	x4 +=1;
	cout << x4;

	cout << '\n';

	int x5 = 5;
	x5++;
	cout << x5;

	cout << '\n';

	int x6 = 5;
	++x6;
	cout << x6;

	cout << '\n';

	int c1 = 5;
	int a4 = c1++;
	int b4 = ++c1;
	cout << "a4 - " << a4 << '\n';
	cout << "b4 - " << b4;

	cout << '\n';

	int c2 = 5;
	int a5 = c2--;
	int b5 = --c2;
	cout << "a5 - " << a5 << '\n';
	cout << "b5 - " << b5;
	return 0;
}
