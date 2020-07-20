// Основы разработки на C++: белый пояс. Первая неделя
// Тренировочное задание по программированию: Расчёт стоимости товара
#include "iostream"
using namespace std;

int main()
{
	double n;
	double a;
	double b;
	double x;
	double y;
	cin >> n >> a >> b >> x >> y;
	x = x / 100;
	y = y / 100;
	if (n <= a)
	{
		cout << n;
	}
	else
		if (n > a && n <= b)
		{
			cout << n-n*x;
		}
		else
		{
			cout << n-n*y;
		}
	return 0;
}
