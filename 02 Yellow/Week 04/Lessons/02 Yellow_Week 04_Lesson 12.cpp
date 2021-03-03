// Основы разработки на C++: желтый пояс. Четвертая неделя
// Очередь, дек и алгоритмы поиска. Стек, очередь и дек

#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <iterator>
#include <deque>
#include <queue>

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
	int n;
	cin >> n;
	vector<int> v(n);
	while (!v.empty())
	{
		v.erase(begin(v));
	}
	cout << "Empty!" << endl;
	
	deque<int> d(n);
	while (!d.empty())
	{
		d.erase(begin(d));
	}
	cout << "Empty!" << endl;
	return 0;
}