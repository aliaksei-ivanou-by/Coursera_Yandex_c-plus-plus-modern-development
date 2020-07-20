// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Перемещение строк
#include "Coursera_Yandex_White_Week02_Task_05_MoveStrings.h"

int main()
{
	vector<string> source = {"a", "b", "c"};
	vector<string> destination = {"z"};
	MoveStrings(source, destination);
	for (auto i : destination)
	{
		cout << i << ' ';
	}
	return 0;
}
