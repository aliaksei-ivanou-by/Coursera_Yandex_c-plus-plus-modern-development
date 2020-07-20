#include "Coursera_Yandex_White_Week02_Task_06_Reverse.h"

void Reverse(vector<int>& numbers)
{
	for (int i = 0; i < numbers.size() / 2; ++i)
	{
		int tmp = numbers[i];
		numbers[i] = numbers[numbers.size() - i - 1];
		numbers[numbers.size() - i - 1] = tmp;
	}
}
