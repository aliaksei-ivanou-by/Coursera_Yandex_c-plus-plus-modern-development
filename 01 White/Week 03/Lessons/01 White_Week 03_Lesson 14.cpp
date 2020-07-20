// Основы разработки на C++: белый пояс. Третья неделя
// Деструкторы и время жизни объекта. Время жизни объекта
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
		cout << "Default constructed\n";
	}
	Route(const string& new_source, const string& new_destination)
	{
		source = new_source;
		destination = new_destination;
		UpdateLength();
		cout << "Constructed\n";
	}
	~Route()
	{
		cout << "Destructed\n";
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

void Worthless(Route route)
{
	cout << 2 << '\n';
}

Route GetRoute()
{
	cout << 1 << '\n';
	return {};
}

int main()
{
	{
		cout << 1 << '\n';
		Route route;
		cout << 2 << '\n';
	}
	cout << "=========\n";
	{
		for (int i : {0, 1})
		{
			cout << "Step " << i << ": " << 1 << '\n';
			Route route;
			cout << "Step " << i << ": " << 2 << '\n';
		}
		cout << "End\n";
	}
	cout << "=========\n";
	{
		cout << 1 << '\n';
		Route first_route;
		if (false)
		{
			cout << 2 << '\n';
			return 0;
		}
		cout << 3 << '\n';
		Route second_route;
		cout << 4 << '\n';
	}
	cout << "=========\n";
	{
		cout << 1 << '\n';
		Worthless({});
		cout << 3 << '\n';
	}
	cout << "=========\n";
	{
		Route route = GetRoute();
		cout << 2 << '\n';
	}
	cout << "=========\n";
	{
		GetRoute();
		cout << 2 << '\n';
	}
	return 0;
}
