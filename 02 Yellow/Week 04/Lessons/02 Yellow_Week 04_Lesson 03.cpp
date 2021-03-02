// Основы разработки на C++: желтый пояс. Четвертая неделя
// Введение в итераторы. Итераторы множеств и словарей

#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

template<typename It>
void PrintRange(It range_begin, It range_end)
{
	for (auto it = range_begin; it != range_end; ++it)
	{
		cout << *it << " ";
	}
}

template<typename It>
void PrintMapRange(It range_begin, It range_end)
{
	for (auto it = range_begin; it != range_end; ++it)
	{
		cout << it->first << "/" << it->second << " ";
	}
}

struct Lang
{
	string name;
	int age;
};

int main()
{
	set<string> langs = {"Python", "C++", "C", "Java", "C#"};
	PrintRange(begin(langs), end(langs));
	auto it = langs.find("C++");
	PrintRange(begin(langs), it);
	PrintRange(it, end(langs));
	
	map<string, int> langs2 =
	{
		{"Python", 26},
		{"C++", 34},
		{"C", 45},
		{"Java", 22},
		{"C#", 17}
	};
	auto it = langs2.find("C++");
	PrintMapRange(begin(langs2), it);
	cout << endl;
	PrintMapRange(it, end(langs2));
	return 0;
}