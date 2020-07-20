// Основы разработки на C++: белый пояс. Третья неделя
// Конструкторы. Конструкторы по умолчанию, использование конструкторов
#include "iostream"
#include "vector"
using namespace std;

int ComputeDistance(const string& source, const string& destination)
{
	return source.length() - destination.length();
}

class Route
{
public:
	Route()
	{
		source = "Moscow";
		destination = "Saint Petersburg";
		UpdateLength();
	}
	Route(const string& new_source, const string& new_destination)
	{
		source = new_source;
		destination = new_destination;
		UpdateLength();
	}
	string GetSource() const
	{
		return source;
	}
	string GetDestination() const
	{
		return destination;
	}
	int GetLength() const
	{
		return length;
	}
	void SetSource(const string& new_source)
	{
		source = new_source;
		UpdateLength();
	}
	void SetDestination(const string& new_destination)
	{
		destination = new_destination;
		UpdateLength();
	}
private:
	string source;
	string destination;
	int length;
	void UpdateLength()
	{
		length = ComputeDistance(source, destination);
	}
};

void PrintRoute(const Route& route)
{
	cout << route.GetSource() << " - " <<route.GetDestination() << '\n';
}

void ReversedRoute(Route& route)
{
	string old_source = route.GetSource();
	string old_destination = route.GetDestination();
	route.SetSource(old_destination);
	route.SetDestination(old_source);
}

Route GetRoute(bool is_empty)
{
	if (is_empty)
	{
		return {};
	}
	else
	{
		return {"Zvenigorod", "Istra"};
	}
}

vector<int> GetNumbers(bool is_empty)
{
	if (is_empty)
	{
		return {};
	}
	else
	{
		return {8, 6, 9, 6};
	}
}

int main()
{
	Route route1("Zvenigorod", "Istra");
	cout << "Route from " << route1.GetSource() << " to " <<
			route1.GetDestination() << " has length " << route1.GetLength() << '\n';
	Route route2;
	cout << "Route from " << route2.GetSource() << " to " <<
				route2.GetDestination() << " has length " << route2.GetLength() << '\n';
	PrintRoute(Route());
	PrintRoute({});
	PrintRoute(Route("Zvenigorod", "Istra"));
	PrintRoute({"Zvenigorod", "Istra"});
	vector<Route> routes;
	routes.push_back({"Zvenigorod", "Istra"});
	return 0;
}
