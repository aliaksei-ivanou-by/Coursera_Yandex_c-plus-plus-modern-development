// Основы разработки на C++: желтый пояс. Первая неделя
// Шаблоны функций. Рефакторим код и улучшаем читаемость вывода
#include "iostream"
#include "vector"
#include "map"
#include "sstream"
#include "utility"
using namespace std;

template<typename Collection>
string Join(const Collection& c, char d)
{
	stringstream ss;
	bool first = true;
	for (const auto& i : c)
	{
		if (!first)
		{
			ss << d;
		}
		first = false;
		ss << i ;
	}
	return ss.str();
}

template<typename First, typename Second>
ostream& operator<<(ostream& out, const pair<First, Second>& p)
{
	return out << '(' <<p.first << ',' << p.second << ')';
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& vi)
{
	return out << '[' << Join(vi, ',') << ']';
}

template<typename Key, typename Value>
ostream& operator<<(ostream& out, const map<Key, Value>& m)
{
	return out << '{' << Join(m, ',') << '}';
}

int main()
{
	vector<int> vi1 = {1, 2, 3};
	cout << vi1 << '\n';
	vector<double> vi2 = {1.5, 2.5, 3.5};
	cout << vi2 << '\n';
	map<int, double> vi3 = {{1, 2.5}, {3, 4}};
	cout << vi3 << '\n';
	vector<vector<int>> vi4 = {{1, 2}, {3, 4}};
	cout << vi4 << '\n';
	return 0;
}
