#include "Coursera_Yandex_White_Week02_Task_07_Reversed.h"

vector<int> Reversed(const vector<int>& numbers)
{
	vector<int> output;
	for (int i = numbers.size() - 1; i >= 0; --i)
	{
		output.push_back(numbers[i]);
	}
	return output;
}
