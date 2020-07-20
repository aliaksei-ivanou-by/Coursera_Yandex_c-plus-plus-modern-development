// Основы разработки на C++: белый пояс. Третья неделя
// Алгоритмы. Функции min, max, sort
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "iomanip"
using namespace std;

int My_Min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int My_Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void Print(vector<int> v, const string& title)
{
	cout << title << ": ";
	for (auto i : v)
	{
		cout << i << ' ';
	}
}
int main()
{
	cout << My_Min(2, 3) << '\n';
	cout << My_Max(2, 3) << '\n';

	cout << min(2, 3) << '\n';
	cout << max(2, 3) << '\n';

	string s1 = "abc";
	string s2 = "bca";
	cout << min(s1, s2) << '\n';
	cout << max(s1, s2) << '\n';

	vector<int> v = {1, 3, 2, 5, 4};
	Print(v, "init");
	cout << '\n';
	sort(begin(v), end(v));
	Print(v, "sort");
	return 0;
}
