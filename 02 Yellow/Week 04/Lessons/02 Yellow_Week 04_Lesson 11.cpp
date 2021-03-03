// Основы разработки на C++: желтый пояс. Четвертая неделя
// Использование итераторов в алгоритмах и контейнерах. Категории итераторов, документация

#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <iterator>

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
	vector<string> c_langs;
	auto it = find_if(begin(langs), end(langs), back_inserter(c_langs),
		[](const string& lang)
		{
			return lang[0] == 'C';
		});
	cout << it - begin(langs) << endl;
	
	set<int> s = {1, 6, 8, 9};
	auto it2 = s.find(6);
	PrintRange(next(it2), end(s));
	return 0;
}