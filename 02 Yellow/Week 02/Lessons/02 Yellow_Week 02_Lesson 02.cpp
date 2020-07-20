// Основы разработки на C++: желтый пояс. Вторая неделя
// Использование юнит-тестов для отладки программ. Простейший способ создания юнит-тестов на C++
#include "iostream"
#include "cassert"
using namespace std;

int Sum(int x, int y)
{
	return x + y;
}

void TestSum()
{
	assert(Sum(2, 3) == 5);
	assert(Sum(-2, -3) == -5);
	assert(Sum(-2, 0) == -2);
	assert(Sum(-2, 2) == 0);
	cout << "TestSum OK\n";
}

int main()
{
	TestSum();
	return 0;
}
