// Основы разработки на C++: белый пояс. Третья неделя
// Деструкторы и время жизни объекта. Деструкторы
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
	~Route()
	{
		for (const string& entry : compute_distance_log)
		{
			cout << entry << '\n';
		}
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
		compute_distance_log.push_back(source + " - " + destination);
	}
	vector<string> compute_distance_log;
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
	Route route("Moscow", "Saint Petersburg");
	route.SetSource("Vyborg");
	route.SetDestination("Vologda");
	return 0;
}
