// Основы разработки на C++: белый пояс. Вторая неделя
// Контейнер vector. Векторы, часть 2
#include "iostream"
#include "vector"
using namespace std;

void PrintVector1(const vector<int>& v)
{
	for (auto i : v)
	{
		cout << i << '\n';
	}
}

void PrintVector2(const vector<bool>& v)
{
	for (auto i : v)
	{
		cout << i << '\n';
	}
}

void PrintVector3(const vector<bool>& v)
{
	int key = 0;
	for (auto i : v)
	{
		cout << key << ' ' << i << '\n';
		++key;
	}
}

int main()
{
	vector<int> days_in_month = {31, 28, 31, 30, 31};
	if (true) // if year is leap
	{
		days_in_month[1]++;
	}
	PrintVector1(days_in_month);

	cout << "\n\n";

	vector<bool> is_holiday2(28, false);
	is_holiday2[22] = true;
	PrintVector2(is_holiday2);

	cout << "\n\n";
	vector<bool> is_holiday3(28, false);
	is_holiday3[22] = true;
	PrintVector3(is_holiday3);
	is_holiday3.assign(31, false);
	is_holiday3[7] = true;
	PrintVector3(is_holiday3);
	is_holiday3.clear();
	return 0;
}
