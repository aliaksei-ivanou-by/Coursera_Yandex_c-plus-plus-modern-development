// Основы разработки на C++: белый пояс. Третья неделя
// Алгоритмы. Модифицирующий range-based for
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "iomanip"
using namespace std;

void Print(const vector<int>& v, const string& title)
{
	cout << title << ": ";
	for (const auto& i : v)
	{
		cout << i << ' ';
	}
}

int main()
{
	vector<int> v = {1, 3, 2, 5, 4};
	Print(v, "init");
	cout << '\n';
	for (int i = 0; i < v.size(); ++i)
	{
		++v[i];
	}
	Print(v, "inc1");
	cout << '\n';
	for (auto& i : v)
	{
		++i;
	}
	Print(v, "inc2");
	cout << '\n';
	return 0;
}
