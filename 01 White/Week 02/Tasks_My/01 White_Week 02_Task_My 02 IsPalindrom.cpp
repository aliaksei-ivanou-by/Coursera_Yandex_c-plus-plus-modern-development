#include "Coursera_Yandex_White_Week02_Task_02_IsPalindrom.h"

bool IsPalindrom(std::string n)
{
	for (int i = 0; i < n.size()/2; ++i)
	{
		if (n[i] != n[n.size()-1-i])
		{
			return false;
		}
	}
	return true;
}
