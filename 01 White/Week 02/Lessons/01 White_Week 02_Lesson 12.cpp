// Основы разработки на C++: белый пояс. Вторая неделя
// Контейнер set. Множества, часть 2
#include "iostream"
#include "map"
#include "set"
#include "string"
#include "vector"
using namespace std;

void PrintSet(const set<string>& s)
{
	cout << "Size = " << s.size() << '\n';
	for (auto i : s)
	{
		cout << i << '\n';
	}
}

int main()
{
	set<string> month_names = {"January", "March", "February", "March"};
	PrintSet(month_names);
	cout << '\n';
	set<string> other_month_names = {"March", "January", "February"};
	PrintSet(other_month_names);
	cout << '\n';
	cout << (month_names == other_month_names);
	cout << "\n\n";
	cout << month_names.count("January") << '\n';
	cout << '\n';

	vector<string> v = {"a", "b", "a"};
	set<string> s(begin(v), end(v));
	PrintSet(s);
	return 0;
}
