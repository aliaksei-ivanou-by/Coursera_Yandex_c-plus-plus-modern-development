// Основы разработки на C++: желтый пояс. Четвертая неделя
// Использование итераторов в алгоритмах и контейнерах. Использование итераторов в алгоритмах

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
	auto it = find(begin(langs), end(langs), "C++");
	langs.erase(it, end(langs));
	langs.insert(begin(langs), "C++");
	PrintRange(begin(langs), end(langs));
	
	auto it = remove_if(begin(langs), end(langs),
		[](const string& lang)
		{
			return lang[0] == 'C';
		});
	langs.erase(it, end(langs));
	PrintRange(begin(langs), end(langs));
	
	vector<string> langs2 = {"Python", "C++", "C++", "Java", "C++"};
	auto it2 = unique(begin(langs2), end(langs2));
	langs2.erase(it2, end(langs2));
	PrintRange(begin(langs2), end(langs2));
	
	vector<string> langs3 = {"Python", "C++", "C", "Java", "C#"};
	auto it3 = min_element(begin(langs3), end(langs3));
	cout << *it3 << endl;
	
	auto it4 = min_element(begin(langs3), end(langs3));
	cout << *it4 << endl;
	
	auto p = min_max_element(begin(langs3), end(langs3));
	cout << *p.first << ' ' << *p.second << endl;
	
	set<string> langs4 = {"Python", "C++", "C++", "Java", "C++"};
	cout << all_of(begin(langs4), end(langs4),
		[](const string& lang)
		{
			return lang[0] >= 'A' && lang[0] <= 'Z';
		});
	return 0;
}