#include "Coursera_Yandex_White_Week02_Task_03_PalindromFilter.h"
#include "Coursera_Yandex_White_Week02_Task_03_IsPalindrom.h"

vector<string> PalindromFilter(vector<string> words, int minLength)
{
	vector<string> output;
	for (auto i : words)
	{
		if (i.size() >= minLength && IsPalindrom(i))
		{
			output.push_back(i);
		}
	}
	return output;
}
