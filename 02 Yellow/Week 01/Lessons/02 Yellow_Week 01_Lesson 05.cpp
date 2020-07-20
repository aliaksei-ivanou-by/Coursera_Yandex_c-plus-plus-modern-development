// Основы разработки на C++: желтый пояс. Первая неделя
// Кортежи и пары. Упрощаем оператор сравнения
#include "iostream"
#include "vector"
#include "tuple"
using namespace std;

struct Date
{
	int year;
	//int month;
	string month;
	int day;
};

bool operator<(const Date& lhs, const Date& rhs)
{
	/*
	if (lhs.year != rhs.year)
	{
		return lhs.year < rhs.year;
	}
	if (lhs.month != rhs.month)
	{
		return lhs.month < rhs.month;
	}
	if (lhs.day != rhs.day)
	{
		return lhs.day < rhs.day;
	}
	*/
	// return vector<int>{lhs.year, lhs.month, lhs.day} < vector<int>{rhs.year, rhs.month, rhs.day};
	tuple<const int&, const string&, const int&> lhs_key = tie(lhs.year, lhs.month, lhs.day);
	tuple<const int&, const string&, const int&> rhs_key = tie(rhs.year, rhs.month, rhs.day);
	return lhs_key < rhs_key;
}

/*
tuple<const int&, const string&, const int&> GetRank(const Date& date)
{
	return tie(date.year, date.month, date.day);
}

bool operator<(const Date& lhs, const Date& rhs)
{
	return GetRank(lhs) < GetRank(rhs);
}
*/

int main()
{
	cout << (
			Date{2017, "June", 8} <
			Date{2017, "January", 26}
			) << '\n';
	// cout << (Date{2017, 6, 8} < Date{2017, 1, 26}) << '\n';

	return 0;
}
