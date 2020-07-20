// Основы разработки на C++: белый пояс. Третья неделя
// Видимость и инициализация переменных. Инициализация переменных
#include "iostream"
#include "vector"
#include "string"
using namespace std;

void PrintInt()
{
	int x;
	cout << x << '\n';
}

void PrintDouble()
{
	double pi=3.14;
	cout << pi << '\n';
}

void PrintParity1(int x)
{
	string parity;
	if (x % 2 == 0)
	{
		parity = "even";
	}
	else
	{
		parity = "odd";
	}
	cout << x << " is " << parity << '\n';
}

void PrintParity2(int x)
{
	string parity = (x % 2 == 0) ? "even" : "odd";
	cout << x << " is " << parity << '\n';
}

string GetPositivity(int x)
{
	if (x > 0)
	{
		return "positiv";
	}
	else
		if (x < 0)
		{
			return "negative";
		}
		else
		{
			return "zero";
		}
}

void PrintPositivity(int x)
{
	string positivity = GetPositivity(x);
	cout << x << " is " << positivity << '\n';
}

int main()
{
	PrintInt();
	PrintDouble();
	PrintInt();
	PrintParity1(5);
	PrintParity2(5);
	PrintPositivity(2);
	PrintPositivity(0);
	PrintPositivity(-5);
	return 0;
}
