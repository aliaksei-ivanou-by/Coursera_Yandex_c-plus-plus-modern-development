// Основы разработки на C++: белый пояс. Третья неделя
// Конструкторы. Параметризованные конструкторы
#include "iostream"
using namespace std;

int ComputeDistance(const string& source, const string& destination)
{
	return source.length() - destination.length();
}

class Route
{
public:
	Route(const string& new_source, const string& new_destination)
	{
		// SetSource(new_source);
		source = new_source;
		// SetDestination(new_destination);
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

/*Route BuildRoute(const string& source, const string& destination)
{
	Route route;
	route.SetSource(source);
	route.SetDestination(destination);
	return route;
}*/

int main()
{
	// Route route1;
	// route1.SetSource("Zvenigorod");
	// route1.SetDestination("Istra");

	// Route route2 = BuildRoute("Zvenigorod", "Istra");

	Route route3("Zvenigorod", "Istra");
	cout << "Route from " << route3.GetSource() << " to " <<
			route3.GetDestination() << " has length " << route3.GetLength() << '\n';
	return 0;
}
