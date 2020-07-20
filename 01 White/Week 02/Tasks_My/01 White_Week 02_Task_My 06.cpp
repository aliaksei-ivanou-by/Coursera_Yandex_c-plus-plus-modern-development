// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Разворот последовательности
#include "Coursera_Yandex_White_Week02_Task_06_Reverse.h"

int main()
{
	vector<int> numbers = {1, 5, 3, 4, 2};
	Reverse(numbers);
	for (auto i : numbers)
	{
		cout << i << ' ';
	}
	return 0;
}
