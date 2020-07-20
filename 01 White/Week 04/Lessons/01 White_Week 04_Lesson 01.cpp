// Основы разработки на C++: белый пояс. Четвертая неделя
// Структуры и классы: примеры. Структура Date
#include "iostream"
using namespace std;

struct Day
{
	int value;
	explicit Day(int new_value)
	{
		value = new_value;
	}
};

struct Month
{
	int value;
	explicit Month(int new_value)
	{
		value = new_value;
	}
};

struct Year
{
	int value;
	explicit Year(int new_value)
	{
		value = new_value;
	}
};

struct Date
{
	int day;
	int month;
	int year;

	Date(Day new_day, Month new_month, Year new_year)
	{
		day = new_day.value;
		month = new_month.value;
		year = new_year.value;
	}
};

void PrintDate(const Date& date)
{
	cout << date.day << '.' << date.month << '.' << date.year;
}

int main()
{
	{
		Date date1 = {Day{1}, Month{1}, Year{2017}};
		PrintDate(date1);
		//cout << '\n';
		// Date date2 = {{1}, {1}, {2017}};
		// PrintDate(date2);
		// cout << '\n';
		// Date date3 = {1, 1, 2017};
		// PrintDate(date3);
	}
	cout << "\n===========\n";
	return 0;
}
