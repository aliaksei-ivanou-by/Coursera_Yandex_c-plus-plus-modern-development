// Основы разработки на C++: белый пояс. Третья неделя
// Константность методов. Константность методов
#include "iostream"
using namespace std;

int ComputeDistance(const string& source, const string& destination)
{
	return source.length() - destination.length();
}

class Route
{
public:
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

int main()
{
	Route route;
	route.SetSource("Moscow");
	route.SetDestination("Dubna");
	cout << "Route from " << route.GetSource() << " to " <<
			route.GetDestination() << " is " << route.GetLength() <<
			" meters long";
	cout << '\n';
	PrintRoute(route);
	ReversedRoute(route);
	PrintRoute(route);
	return 0;
}
