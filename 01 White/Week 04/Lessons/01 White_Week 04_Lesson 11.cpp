// Основы разработки на C++: белый пояс. Четвертая неделя
// Исключения. Введение в исключения
#include "iostream"
#include "string"
#include "sstream"
#include "iomanip"
#include "exception"
using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

void EnsureNextSymbolAndSkip(stringstream& stream)
{
	if (stream.peek() != '/')
	{
		stringstream ss;
		ss << "excepted /, but has : " << char(stream.peek());
		throw runtime_error(ss.str());
	}
}

Date ParseDate(const string& s)
{
	stringstream stream(s);
	Date date;
	stream >> date.year;
	EnsureNextSymbolAndSkip(stream);
	stream.ignore(1);
	stream >> date.month;
	EnsureNextSymbolAndSkip(stream);
	stream.ignore(1);
	stream >> date.day;
	return date;
}

int main()
{
	string date_str = "2017a01/25";
	try
	{
		Date date = ParseDate(date_str);
		cout << setw(2) << setfill('0') << date.day << '.' <<
				setw(2) << setfill('0') << date.month << '.' <<
				date.year;
	}
	catch(exception& ex)
	{
		cout << "exception happens: " << ex.what();
	}
	return 0;
}
