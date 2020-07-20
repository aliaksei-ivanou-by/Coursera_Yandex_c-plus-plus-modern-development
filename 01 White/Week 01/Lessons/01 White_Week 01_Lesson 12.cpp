// Основы разработки на C++: белый пояс. Первая неделя
// Условный оператор и циклы. Цикл for, часть 1
#include "iostream"
#include "vector"
#include "map"
#include "string"
using namespace std;

int main()
{
	vector<int> a = {1, 4, 6, 8, 10};
	int sum1 = 0;
	for (auto i : a)
	{
		sum1 += i;
	}
	cout << sum1;

	cout << "\n\n";

	map<string, int> b ={{"a", 1}, {"b", 2}, {"c", 3}};
	int sum2 = 0;
	string concat;
	for (auto i : b)
	{
		concat += i.first;
		sum2 += i.second;
	}
	cout << concat << '\n';
	cout << sum2;

	cout << "\n\n";

	string x = "asdfasdfasdf";
	int i = 0;
	for (auto c : x)
	{
		if (c == 'a')
		{
			cout << i << '\n';
		}
		++i;
	}

	cout << "\n\n";

	string y = "asdfasdfasdf";
	for (int i = 0; i < int(y.size()); ++i)
	{
		if (y[i] == 'a')
		{
			cout << i << '\n';
		}
	}
	return 0;
}
