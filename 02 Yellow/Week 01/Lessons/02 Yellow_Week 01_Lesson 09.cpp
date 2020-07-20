// Основы разработки на C++: желтый пояс. Первая неделя
// Шаблоны функций. Универсальные функции вывода контейнеров в поток
#include "iostream"
#include "vector"
#include "map"
#include "sstream"
#include "utility"
using namespace std;

template<typename First, typename Second>
ostream& operator<<(ostream& out, const pair<First, Second>& p)
{
	cout << p.first << ':' << p.second;
	return out;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& vi)
{
	for (const auto i : vi)
	{
		out << i << ' ';
	}
	return out;
}

template<typename Key, typename Value>
ostream& operator<<(ostream& out, const map<Key, Value>& vi)
{
	for (const auto i : vi)
	{
		out << i << ' ';
	}
	return out;
}

int main()
{
	vector<int> vi1 = {1, 2, 3};
	cout << vi1 << '\n';
	vector<double> vi2 = {1.5, 2.5, 3.5};
	cout << vi2 << '\n';
	map<int, int> vi3 = {{1, 2}, {3, 4}};
	cout << vi3 << '\n';
	return 0;
}
