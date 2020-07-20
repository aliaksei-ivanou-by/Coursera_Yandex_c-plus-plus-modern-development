// Основы разработки на C++: белый пояс. Первая неделя
// Тренировочное задание по программированию: Чётные числа
#include "iostream"
using namespace std;

int main()
{
	// a <= b, a >= 1, b <= 30000
	int a;
	int b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		if (i % 2 == 0)
		{
			cout << i <<' ';
		}
	}
	return 0;
}
