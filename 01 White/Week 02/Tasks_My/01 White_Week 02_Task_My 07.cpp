// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Разворот последовательности — 2
#include "Coursera_Yandex_White_Week02_Task_07_Reversed.h"

int main()
{
	vector<int> numbers = {1, 5, 3, 4, 2};
	vector<int> numbers_new = Reversed(numbers);
	for (auto i : numbers_new)
	{
		cout << i << ' ';
	}
	return 0;
}
