// Основы разработки на C++: желтый пояс. Первая неделя
// Кортежи и пары. Кортежи и пары
#include "iostream"
#include "vector"
#include "tuple"
#include "utility"
#include "map"
using namespace std;

int main()
{
	tuple<int, string, bool> t1(7, "C++", true);
	// auto t2 = tie(7, "C++", true);
	auto t3 = make_tuple(7, "C++", true);
	cout << get<1>(t3) << '\n';
	tuple t4(7, "C++", true);
	cout << get<1>(t4) << '\n';

	pair<int, string> p1(7, "C++");
	cout << p1.first << ' ' << p1.second << '\n';
	pair p2(7, "C++");
	auto p3 = make_pair(7, "C++");

	map<int, string> digits = {{1, "one"}};
	for (const auto& item : digits)
	{
		cout << item.first << ' ' << item.second << '\n';
	}
	for (const pair<int, string>& item : digits)
	{
		cout << item.first << ' ' << item.second << '\n';
	}
	for (const auto& [key, value] : digits)
	{
		cout << key << ' ' << value << '\n';
	}
	return 0;
}
