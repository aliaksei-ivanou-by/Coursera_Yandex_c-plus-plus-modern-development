// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Отбор палиндромов
#include "Coursera_Yandex_White_Week02_Task_03_PalindromFilter.h"
#include "Coursera_Yandex_White_Week02_Task_03_IsPalindrom.h"

int main()
{
	vector<string> input = {"abacaba", "aba"};
	int minLength;
	cin >> minLength;
	vector<string> output = PalindromFilter(input, minLength);
	for (auto i : output)
		cout << i << ' ';
	return 0;
}
