// Основы разработки на C++: желтый пояс. Четвертая неделя
// Очередь, дек и алгоритмы поиска. Анализ распространённых ошибок

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
	set<int> s = {1, 2, 7};
	// end(s) - begin(s);
	// partial_sort(begin(s), end(s), end(s));
	// remove(begin(s), end(s), 0);
	
	vector<int> s = {1, 2, 7};
	vector<int> t = {2, 7};
	// sort(begin(s), end(t));
	// sort(begin(s), rend(s));
	return 0;
}