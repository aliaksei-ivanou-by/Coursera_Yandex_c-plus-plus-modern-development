// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Автобусные остановки — 3
#include "iostream"
#include "set"
#include "map"
using namespace std;

int main()
{
	int n;
	cin >> n;
	set<string> bus_stops;
	map<set<string>, int> route;
	int route_count;
	while (n)
	{
		int stops_count;
		cin >> stops_count;
		while (stops_count)
		{
			string stop;
			cin >> stop;
			bus_stops.insert(stop);
			--stops_count;
		}
		if (!route.count(bus_stops))
		{
			route[bus_stops] = ++route_count;
			cout << "New bus " << route_count << '\n';
		}
		else
		{
			cout << "Already exists for " << route[bus_stops] << '\n';
		}
		bus_stops.clear();
		--n;
	}
	return 0;
}
