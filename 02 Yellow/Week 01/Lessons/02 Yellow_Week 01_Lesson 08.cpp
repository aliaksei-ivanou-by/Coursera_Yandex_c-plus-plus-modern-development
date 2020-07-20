// Основы разработки на C++: желтый пояс. Первая неделя
// Шаблоны функций. Введение в шаблоны
#include "iostream"
#include "vector"
#include "map"
#include "sstream"
#include "utility"
using namespace std;

/*
int Sqr(int x)
{
	return x * x;
}

double Sqr(double x)
{
	return x * x;
}
*/

template<typename First, typename Second>
pair<First, Second> operator*(const pair<First, Second>& p1, const pair<First, Second>& p2)
{
	First f = p1.first * p2.first;
	Second s = p1.second * p2.second;
	return make_pair(f, s);
}

template<typename T>
T Sqr(T x)
{
	return x * x;
}

int main()
{
	cout << Sqr(2) << '\n';
	cout << Sqr(2.5) << '\n';
	auto p = make_pair(2, 3);
	auto res = Sqr(p);
	cout << res.first << '\n';
	cout << res.second << '\n';
	return 0;
}
