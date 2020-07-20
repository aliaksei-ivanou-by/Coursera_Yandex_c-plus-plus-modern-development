#include "Coursera_Yandex_White_Week02_Task_01_Factorial.h"

int Factorial(int n)
{
	if (n < 0)
	{
		return 1;
	}
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n*Factorial(n-1);
	}
}
