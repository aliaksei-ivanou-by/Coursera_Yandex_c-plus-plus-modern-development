// Основы разработки на C++: белый пояс. Третья неделя
// Введение в структуры и классы. Методы
#include "iostream"
#include "string"
using namespace std;

class Route
{
public:
	string GetSource()
	{
		return source;
	}
	string GetDestination()
	{
		return destination;
	}
	int GetLength()
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
	int ComputeDistance(const string& source, const string& destination)
	{
		return 20000;
	}
};

int main()
{
	Route route;
	route.SetSource("Moscow");
	route.SetDestination("Dubna");
	cout << "Route from " << route.GetSource() << " to " <<
			route.GetDestination() << " is " << route.GetLength() <<
			" meters long";
	return 0;
}
