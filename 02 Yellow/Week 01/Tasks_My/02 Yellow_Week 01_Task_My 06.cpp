// Основы разработки на C++: желтый пояс. Первая неделя
// Задание по программированию: Всё в квадрат
#include "iostream"
#include "vector"
#include "map"
#include "utility"
#include <sstream>
using namespace std;

template<typename T> T Sqr(const T& value);
template<typename First, typename Second> pair<First, Second> Sqr(const pair<First, Second> value);
template<typename T> vector<T> Sqr(const vector<T>& v);
template<typename Key, typename Value> map<Key, Value> Sqr(const map<Key, Value>& m);

template<typename T> T Sqr(const T& value)
{
	return value * value;
}

template<typename First, typename Second> pair<First, Second> Sqr(const pair<First, Second> p)
{
	return make_pair(Sqr(p.first), Sqr(p.second));
}

template<typename T> vector<T> Sqr(const vector<T>& v)
{
	vector<T> output;
	for (auto& i : v)
	{
		output.push_back(Sqr(i));
	}
	return output;
}

template<typename Key, typename Value> map<Key, Value> Sqr(const map<Key, Value>& m)
{
	map<Key, Value> output;
	for (const auto& i : m)
	{
		output[i.first] = Sqr(i.second);
	}
	return output;
}

int main()
{
	vector<int> v = {1, 2, 3};
	cout << "vector:";
	for (int x : Sqr(v))
	{
		cout << ' ' << x;
	}
	cout << '\n';

	map<int, pair<int, int>> map_of_pairs =
	{
			{4, {2, 2}},
			{7, {4, 3}}
	};
	cout << "map of pairs:" << '\n';
	for (const auto& x : Sqr(map_of_pairs))
	{
		cout << x.first << ' ' << x.second.first << ' ' << x.second.second << '\n';
	}
 	return 0;
}
