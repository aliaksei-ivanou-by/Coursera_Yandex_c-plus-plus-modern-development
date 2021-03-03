// Основы разработки на C++: желтый пояс. Четвертая неделя
// Использование итераторов в алгоритмах и контейнерах. Алгоритмы, возвращающие набор элементов

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
	vector<string> langs = {"Python", "C++", "C", "Java", "C#"};
	auto it = partition(begin(langs), end(langs),
		[](const string& lang)
		{
			return lang[0] == 'C';
		});
	PrintRange(begin(langs), it);
	
	vector<string> c_lang(langs.size());
	auto it2 = copy_if(begin(langs), end(langs), begin(c_lang),
		[](const string& lang)
		{
			return lang[0] == 'C';
		});
	PrintRange(begin(c_lang), it2);
	
	set<int> a = {1, 8, 3};
	set<int> b = {3, 6, 8);
	vector<int> v(a.size());
	auto it3 = set_intersection(begin(a), end(a),
					begin(b), end(b),
					begin(v));
	PrintRange(begin(v), it3);
	return 0;
}