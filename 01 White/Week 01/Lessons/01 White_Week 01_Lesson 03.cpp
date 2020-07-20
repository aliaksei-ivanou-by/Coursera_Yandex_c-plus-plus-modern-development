// Основы разработки на C++: белый пояс. Первая неделя
// Обзор возможностей C++. Операции с простыми типами
#include "iostream"
#include "string"
using namespace std;

int main()
{
	int x = 4;
	int y = 5;
	cout << (x + y) * (x - y) << '\n';
	if (x != y)
	{
		cout << "not equal\n";
	}
	else
	{
		cout << "equal\n";
	}

	string xx = "abc";
	string yy = "bac";
	if (xx != yy)
	{
		cout << "not equal\n";
	}
	else
	{
		cout << "equal\n";
	}
	if (xx < yy)
	{
		cout << "less\n";
	}
	else
	{
		cout << "not less\n";
	}
	return 0;
}
