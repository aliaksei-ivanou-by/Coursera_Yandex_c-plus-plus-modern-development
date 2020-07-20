#include "Coursera_Yandex_White_Week02_Task_05_MoveStrings.h"

void MoveStrings(vector<string>& source, vector<string>& destination)
{
	for (auto i : source)
	{
		destination.push_back(i);
	}
	source.clear();
}
