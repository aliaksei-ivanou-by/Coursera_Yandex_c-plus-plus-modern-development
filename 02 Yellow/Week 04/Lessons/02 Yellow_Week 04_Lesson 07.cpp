// Основы разработки на C++: желтый пояс. Четвертая неделя
// Использование итераторов в алгоритмах и контейнерах. Обратные итераторы

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
	PrintRange(begin(langs), end(langs));
	cout << endl;
	PrintRange(rbegin(langs), rend(langs));
	
	auto it = rbegin(langs);
	cout << *it << " ";
	++it;
	cout << *it << " ";
	
	auto it1 = find_if(rbegin(langs), rend(langs),
		[](const string& lang)
		{
			return lang[0] == 'C';
		});
	cout << *it1 >> endl;
	
	sort(rbegin(langs), rend(langs));
	PrintRange(begin(langs), end(langs));
	return 0;
}