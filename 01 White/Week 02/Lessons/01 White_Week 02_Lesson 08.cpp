// Основы разработки на C++: белый пояс. Вторая неделя
// Контейнер map. Словари, часть 1
#include "iostream"
#include "map"
#include "string"
using namespace std;

void PrintMap(const map<int, string>& m)
{
	cout << "Size = " << m.size() << '\n';
	for (auto item : m)
	{
		cout << item.first << ": " << item.second << '\n';
	}
}

void PrintReversedMap(const map<string, int>& m)
{
	cout << "Size = " << m.size() << '\n';
	for (auto item : m)
	{
		cout << item.first << ": " << item.second << '\n';
	}
}

map<string, int> BuildReversedMap(const map<int, string>& events)
{
	map<string, int> result;
	for (auto item : events)
	{
		result[item.second] = item.first;
	}
	return result;
}


int main()
{
	map<int, string> events;
	events[1950] = "Bjarne Stroustrup's birth";
	events[1941] = "Dennis Ritchie's birth";
	events[1970] = "UNIX epoch start";
	PrintMap(events);

	cout << "\n\n";

	cout << events[1950] << '\n';

	cout << "\n\n";

	events.erase(1970);
	PrintMap(events);

	cout << "\n\n";

	map<string, int> event_for_year = BuildReversedMap(events);
	PrintReversedMap(event_for_year);
	cout << event_for_year["Bjarne Stroustrup's birth"];

	return 0;
}
