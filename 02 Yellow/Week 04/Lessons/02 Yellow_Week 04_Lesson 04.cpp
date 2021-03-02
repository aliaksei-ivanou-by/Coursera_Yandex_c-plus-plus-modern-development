// Основы разработки на C++: желтый пояс. Четвертая неделя
// Введение в итераторы. Продвинутое итерирование по контейнерам

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
	map<string, int> langs =
	{
		{"Python", 26},
		{"C++", 34},
		{"C", 45},
		{"Java", 22},
		{"C#", 17}
	};
	auto it = langs.find("C++");
	PrintMapRange(begin(langs), it);
	cout << endl;
	PrintMapRange(it, end(langs));
	
	vector<string> langs2 = {"Python", "C++", "C", "Java", "C#"};
	auto it = end(langs2);
	while (it != begin(langs2))
	{
		--it;
		cout << *it << " ";
	}
	
	return 0;
}