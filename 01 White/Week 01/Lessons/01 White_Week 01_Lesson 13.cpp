// Основы разработки на C++: белый пояс. Первая неделя
// Условный оператор и циклы. Цикл for, часть 2
#include "iostream"
#include "vector"
#include "map"
#include "string"
using namespace std;

int main()
{
	string y = "sdfasdfasdf";
	for (int i = 0; i < int(y.size()); ++i)
	{
		if (y[i] == 'a')
		{
			cout << i << '\n';
			break;
		}
	}
	cout << "Yes";
	return 0;
}
